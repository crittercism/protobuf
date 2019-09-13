# Exit if any command fails
set -e -x

# This script is a modified version of this: https://github.com/jverkoey/nimbus/blob/master/scripts/generate_namespace_header
# https://gist.githubusercontent.com/paulcpederson/29b9a50258b4d0046fe1/raw/1451d770bb6a05b5d44e79d186f822570c30324c/generate_namespace_header.sh
# http://pdx.esri.com/blog/namespacing-dependencies/

header=$SRCROOT/GPBProtocolBuffersNamespace.h
prefix="WSO"
dependentLib=""

if [ ${PLATFORM_NAME} = "iphoneos" ] || [ ${PLATFORM_NAME} = "iphonesimulator" ]; then
	dependentLib=$TARGET_BUILD_DIR/libProtocolBuffers.a
elif [ ${PLATFORM_NAME} = "appletvos" ] || [ ${PLATFORM_NAME} = "appletvsimulator" ]; then
	dependentLib=$TARGET_BUILD_DIR/libProtocolBuffers-tvOS.a
fi

# Remove old version of the header file
#touch header
#rm header

echo "Generating $header from $dependentLib..."

echo "// Namespaced Header

#define WSO_SYMBOL_PREFIX $prefix

#ifndef WSO_PROTOC_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define WSO_PROTOC_REWRITE(ns, symbol) ns ## _ ## symbol
#define WSO_PROTOC_BRIDGE(ns, symbol) WSO_PROTOC_REWRITE(ns, symbol)
#define WSO_PROTOC_SYMBOL(symbol) WSO_PROTOC_BRIDGE(WSO_SYMBOL_PREFIX, symbol)
#endif

#ifdef WSO_SYMBOL_PREFIX
" > $header

# Breakdown:
#
# nm $dependentLib -j
# Dump all of the symbols from the compiled library. This will include all UIKit
# and Foundation symbols as well.
#
# | grep "^_OBJC_CLASS_$_"
# Filter out the interfaces.
#
# | grep -v "\$_NS"
# Remove all Foundation classes.
#
# | grep -v "\$_UI"
# Remove all UIKit classes.
#
# | sed -e 's/_OBJC_CLASS_\$_\(.*\)/#ifndef \1\'$'\n''#define \1 WSO_PROTOC_SYMBOL(\1)\'$'\n''#endif/g'
# I use the syntax outlined here:
# http://stackoverflow.com/questions/6761796/bash-perl-or-sed-insert-on-new-line-after-found-phrase
# to create newlines so that we can write the following on separate lines:
#
#  #ifndef ...
#  #define ...
#  #endif
#

echo "// Classes" >> $header

nm $dependentLib -j | sort | uniq | grep "^_OBJC_CLASS_\$_" | grep -v "\$_AGSGT" | grep -v "\$_CL" | grep -v "\$_NS" | grep -v "\$_UI" | sed -e 's/_OBJC_CLASS_\$_\(.*\)/#ifndef \1\'$'\n''#define \1 WSO_PROTOC_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

echo "// Functions" >> $header

# The symbol is in the text (code) section.
nm $dependentLib | sort | uniq | grep " T " | cut -d' ' -f3 | grep -v "\$_NS" | grep -v "\$_UI" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 WSO_PROTOC_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

echo "// Externs" >> $header

# The symbol is in the initialized data section.
nm $dependentLib | sort | uniq | grep " D " | cut -d' ' -f3 | grep -v "\$_NS" | grep -v "\$_UI" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 WSO_PROTOC_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

# The symbol is in an uninitialized data section for small objects.
nm $dependentLib | sort | uniq | grep " S " | cut -d' ' -f3 | grep -v "\$_NS" | grep -v ".eh" | grep -v "\$_UI" | grep -v "OBJC_" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 WSO_PROTOC_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

# End of the file
echo "#endif" >> $header
