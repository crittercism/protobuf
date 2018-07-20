// Namespaced Header

#define WSO_SYMBOL_PREFIX WSO

#ifndef WSO_PROTOC_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define WSO_PROTOC_REWRITE(ns, symbol) ns ## _ ## symbol
#define WSO_PROTOC_BRIDGE(ns, symbol) WSO_PROTOC_REWRITE(ns, symbol)
#define WSO_PROTOC_SYMBOL(symbol) WSO_PROTOC_BRIDGE(WSO_SYMBOL_PREFIX, symbol)
#endif

#ifdef WSO_SYMBOL_PREFIX

// Classes
#ifndef GPBAny
#define GPBAny WSO_PROTOC_SYMBOL(GPBAny)
#endif

#ifndef GPBAnyRoot
#define GPBAnyRoot WSO_PROTOC_SYMBOL(GPBAnyRoot)
#endif

#ifndef GPBApi
#define GPBApi WSO_PROTOC_SYMBOL(GPBApi)
#endif

#ifndef GPBApiRoot
#define GPBApiRoot WSO_PROTOC_SYMBOL(GPBApiRoot)
#endif

#ifndef GPBAutocreatedArray
#define GPBAutocreatedArray WSO_PROTOC_SYMBOL(GPBAutocreatedArray)
#endif

#ifndef GPBAutocreatedDictionary
#define GPBAutocreatedDictionary WSO_PROTOC_SYMBOL(GPBAutocreatedDictionary)
#endif

#ifndef GPBBoolArray
#define GPBBoolArray WSO_PROTOC_SYMBOL(GPBBoolArray)
#endif

#ifndef GPBBoolBoolDictionary
#define GPBBoolBoolDictionary WSO_PROTOC_SYMBOL(GPBBoolBoolDictionary)
#endif

#ifndef GPBBoolDoubleDictionary
#define GPBBoolDoubleDictionary WSO_PROTOC_SYMBOL(GPBBoolDoubleDictionary)
#endif

#ifndef GPBBoolEnumDictionary
#define GPBBoolEnumDictionary WSO_PROTOC_SYMBOL(GPBBoolEnumDictionary)
#endif

#ifndef GPBBoolFloatDictionary
#define GPBBoolFloatDictionary WSO_PROTOC_SYMBOL(GPBBoolFloatDictionary)
#endif

#ifndef GPBBoolInt32Dictionary
#define GPBBoolInt32Dictionary WSO_PROTOC_SYMBOL(GPBBoolInt32Dictionary)
#endif

#ifndef GPBBoolInt64Dictionary
#define GPBBoolInt64Dictionary WSO_PROTOC_SYMBOL(GPBBoolInt64Dictionary)
#endif

#ifndef GPBBoolObjectDictionary
#define GPBBoolObjectDictionary WSO_PROTOC_SYMBOL(GPBBoolObjectDictionary)
#endif

#ifndef GPBBoolUInt32Dictionary
#define GPBBoolUInt32Dictionary WSO_PROTOC_SYMBOL(GPBBoolUInt32Dictionary)
#endif

#ifndef GPBBoolUInt64Dictionary
#define GPBBoolUInt64Dictionary WSO_PROTOC_SYMBOL(GPBBoolUInt64Dictionary)
#endif

#ifndef GPBBoolValue
#define GPBBoolValue WSO_PROTOC_SYMBOL(GPBBoolValue)
#endif

#ifndef GPBBytesValue
#define GPBBytesValue WSO_PROTOC_SYMBOL(GPBBytesValue)
#endif

#ifndef GPBCodedInputStream
#define GPBCodedInputStream WSO_PROTOC_SYMBOL(GPBCodedInputStream)
#endif

#ifndef GPBCodedOutputStream
#define GPBCodedOutputStream WSO_PROTOC_SYMBOL(GPBCodedOutputStream)
#endif

#ifndef GPBDescriptor
#define GPBDescriptor WSO_PROTOC_SYMBOL(GPBDescriptor)
#endif

#ifndef GPBDoubleArray
#define GPBDoubleArray WSO_PROTOC_SYMBOL(GPBDoubleArray)
#endif

#ifndef GPBDoubleValue
#define GPBDoubleValue WSO_PROTOC_SYMBOL(GPBDoubleValue)
#endif

#ifndef GPBDuration
#define GPBDuration WSO_PROTOC_SYMBOL(GPBDuration)
#endif

#ifndef GPBDurationRoot
#define GPBDurationRoot WSO_PROTOC_SYMBOL(GPBDurationRoot)
#endif

#ifndef GPBEmpty
#define GPBEmpty WSO_PROTOC_SYMBOL(GPBEmpty)
#endif

#ifndef GPBEmptyRoot
#define GPBEmptyRoot WSO_PROTOC_SYMBOL(GPBEmptyRoot)
#endif

#ifndef GPBEnum
#define GPBEnum WSO_PROTOC_SYMBOL(GPBEnum)
#endif

#ifndef GPBEnumArray
#define GPBEnumArray WSO_PROTOC_SYMBOL(GPBEnumArray)
#endif

#ifndef GPBEnumDescriptor
#define GPBEnumDescriptor WSO_PROTOC_SYMBOL(GPBEnumDescriptor)
#endif

#ifndef GPBEnumValue
#define GPBEnumValue WSO_PROTOC_SYMBOL(GPBEnumValue)
#endif

#ifndef GPBExtensionDescriptor
#define GPBExtensionDescriptor WSO_PROTOC_SYMBOL(GPBExtensionDescriptor)
#endif

#ifndef GPBExtensionRegistry
#define GPBExtensionRegistry WSO_PROTOC_SYMBOL(GPBExtensionRegistry)
#endif

#ifndef GPBField
#define GPBField WSO_PROTOC_SYMBOL(GPBField)
#endif

#ifndef GPBFieldDescriptor
#define GPBFieldDescriptor WSO_PROTOC_SYMBOL(GPBFieldDescriptor)
#endif

#ifndef GPBFieldMask
#define GPBFieldMask WSO_PROTOC_SYMBOL(GPBFieldMask)
#endif

#ifndef GPBFieldMaskRoot
#define GPBFieldMaskRoot WSO_PROTOC_SYMBOL(GPBFieldMaskRoot)
#endif

#ifndef GPBFileDescriptor
#define GPBFileDescriptor WSO_PROTOC_SYMBOL(GPBFileDescriptor)
#endif

#ifndef GPBFloatArray
#define GPBFloatArray WSO_PROTOC_SYMBOL(GPBFloatArray)
#endif

#ifndef GPBFloatValue
#define GPBFloatValue WSO_PROTOC_SYMBOL(GPBFloatValue)
#endif

#ifndef GPBInt32Array
#define GPBInt32Array WSO_PROTOC_SYMBOL(GPBInt32Array)
#endif

#ifndef GPBInt32BoolDictionary
#define GPBInt32BoolDictionary WSO_PROTOC_SYMBOL(GPBInt32BoolDictionary)
#endif

#ifndef GPBInt32DoubleDictionary
#define GPBInt32DoubleDictionary WSO_PROTOC_SYMBOL(GPBInt32DoubleDictionary)
#endif

#ifndef GPBInt32EnumDictionary
#define GPBInt32EnumDictionary WSO_PROTOC_SYMBOL(GPBInt32EnumDictionary)
#endif

#ifndef GPBInt32FloatDictionary
#define GPBInt32FloatDictionary WSO_PROTOC_SYMBOL(GPBInt32FloatDictionary)
#endif

#ifndef GPBInt32Int32Dictionary
#define GPBInt32Int32Dictionary WSO_PROTOC_SYMBOL(GPBInt32Int32Dictionary)
#endif

#ifndef GPBInt32Int64Dictionary
#define GPBInt32Int64Dictionary WSO_PROTOC_SYMBOL(GPBInt32Int64Dictionary)
#endif

#ifndef GPBInt32ObjectDictionary
#define GPBInt32ObjectDictionary WSO_PROTOC_SYMBOL(GPBInt32ObjectDictionary)
#endif

#ifndef GPBInt32UInt32Dictionary
#define GPBInt32UInt32Dictionary WSO_PROTOC_SYMBOL(GPBInt32UInt32Dictionary)
#endif

#ifndef GPBInt32UInt64Dictionary
#define GPBInt32UInt64Dictionary WSO_PROTOC_SYMBOL(GPBInt32UInt64Dictionary)
#endif

#ifndef GPBInt32Value
#define GPBInt32Value WSO_PROTOC_SYMBOL(GPBInt32Value)
#endif

#ifndef GPBInt64Array
#define GPBInt64Array WSO_PROTOC_SYMBOL(GPBInt64Array)
#endif

#ifndef GPBInt64BoolDictionary
#define GPBInt64BoolDictionary WSO_PROTOC_SYMBOL(GPBInt64BoolDictionary)
#endif

#ifndef GPBInt64DoubleDictionary
#define GPBInt64DoubleDictionary WSO_PROTOC_SYMBOL(GPBInt64DoubleDictionary)
#endif

#ifndef GPBInt64EnumDictionary
#define GPBInt64EnumDictionary WSO_PROTOC_SYMBOL(GPBInt64EnumDictionary)
#endif

#ifndef GPBInt64FloatDictionary
#define GPBInt64FloatDictionary WSO_PROTOC_SYMBOL(GPBInt64FloatDictionary)
#endif

#ifndef GPBInt64Int32Dictionary
#define GPBInt64Int32Dictionary WSO_PROTOC_SYMBOL(GPBInt64Int32Dictionary)
#endif

#ifndef GPBInt64Int64Dictionary
#define GPBInt64Int64Dictionary WSO_PROTOC_SYMBOL(GPBInt64Int64Dictionary)
#endif

#ifndef GPBInt64ObjectDictionary
#define GPBInt64ObjectDictionary WSO_PROTOC_SYMBOL(GPBInt64ObjectDictionary)
#endif

#ifndef GPBInt64UInt32Dictionary
#define GPBInt64UInt32Dictionary WSO_PROTOC_SYMBOL(GPBInt64UInt32Dictionary)
#endif

#ifndef GPBInt64UInt64Dictionary
#define GPBInt64UInt64Dictionary WSO_PROTOC_SYMBOL(GPBInt64UInt64Dictionary)
#endif

#ifndef GPBInt64Value
#define GPBInt64Value WSO_PROTOC_SYMBOL(GPBInt64Value)
#endif

#ifndef GPBListValue
#define GPBListValue WSO_PROTOC_SYMBOL(GPBListValue)
#endif

#ifndef GPBMessage
#define GPBMessage WSO_PROTOC_SYMBOL(GPBMessage)
#endif

#ifndef GPBMethod
#define GPBMethod WSO_PROTOC_SYMBOL(GPBMethod)
#endif

#ifndef GPBMixin
#define GPBMixin WSO_PROTOC_SYMBOL(GPBMixin)
#endif

#ifndef GPBOneofDescriptor
#define GPBOneofDescriptor WSO_PROTOC_SYMBOL(GPBOneofDescriptor)
#endif

#ifndef GPBOption
#define GPBOption WSO_PROTOC_SYMBOL(GPBOption)
#endif

#ifndef GPBRootObject
#define GPBRootObject WSO_PROTOC_SYMBOL(GPBRootObject)
#endif

#ifndef GPBSourceContext
#define GPBSourceContext WSO_PROTOC_SYMBOL(GPBSourceContext)
#endif

#ifndef GPBSourceContextRoot
#define GPBSourceContextRoot WSO_PROTOC_SYMBOL(GPBSourceContextRoot)
#endif

#ifndef GPBStringBoolDictionary
#define GPBStringBoolDictionary WSO_PROTOC_SYMBOL(GPBStringBoolDictionary)
#endif

#ifndef GPBStringDoubleDictionary
#define GPBStringDoubleDictionary WSO_PROTOC_SYMBOL(GPBStringDoubleDictionary)
#endif

#ifndef GPBStringEnumDictionary
#define GPBStringEnumDictionary WSO_PROTOC_SYMBOL(GPBStringEnumDictionary)
#endif

#ifndef GPBStringFloatDictionary
#define GPBStringFloatDictionary WSO_PROTOC_SYMBOL(GPBStringFloatDictionary)
#endif

#ifndef GPBStringInt32Dictionary
#define GPBStringInt32Dictionary WSO_PROTOC_SYMBOL(GPBStringInt32Dictionary)
#endif

#ifndef GPBStringInt64Dictionary
#define GPBStringInt64Dictionary WSO_PROTOC_SYMBOL(GPBStringInt64Dictionary)
#endif

#ifndef GPBStringUInt32Dictionary
#define GPBStringUInt32Dictionary WSO_PROTOC_SYMBOL(GPBStringUInt32Dictionary)
#endif

#ifndef GPBStringUInt64Dictionary
#define GPBStringUInt64Dictionary WSO_PROTOC_SYMBOL(GPBStringUInt64Dictionary)
#endif

#ifndef GPBStringValue
#define GPBStringValue WSO_PROTOC_SYMBOL(GPBStringValue)
#endif

#ifndef GPBStruct
#define GPBStruct WSO_PROTOC_SYMBOL(GPBStruct)
#endif

#ifndef GPBStructRoot
#define GPBStructRoot WSO_PROTOC_SYMBOL(GPBStructRoot)
#endif

#ifndef GPBTimestamp
#define GPBTimestamp WSO_PROTOC_SYMBOL(GPBTimestamp)
#endif

#ifndef GPBTimestampRoot
#define GPBTimestampRoot WSO_PROTOC_SYMBOL(GPBTimestampRoot)
#endif

#ifndef GPBType
#define GPBType WSO_PROTOC_SYMBOL(GPBType)
#endif

#ifndef GPBTypeRoot
#define GPBTypeRoot WSO_PROTOC_SYMBOL(GPBTypeRoot)
#endif

#ifndef GPBUInt32Array
#define GPBUInt32Array WSO_PROTOC_SYMBOL(GPBUInt32Array)
#endif

#ifndef GPBUInt32BoolDictionary
#define GPBUInt32BoolDictionary WSO_PROTOC_SYMBOL(GPBUInt32BoolDictionary)
#endif

#ifndef GPBUInt32DoubleDictionary
#define GPBUInt32DoubleDictionary WSO_PROTOC_SYMBOL(GPBUInt32DoubleDictionary)
#endif

#ifndef GPBUInt32EnumDictionary
#define GPBUInt32EnumDictionary WSO_PROTOC_SYMBOL(GPBUInt32EnumDictionary)
#endif

#ifndef GPBUInt32FloatDictionary
#define GPBUInt32FloatDictionary WSO_PROTOC_SYMBOL(GPBUInt32FloatDictionary)
#endif

#ifndef GPBUInt32Int32Dictionary
#define GPBUInt32Int32Dictionary WSO_PROTOC_SYMBOL(GPBUInt32Int32Dictionary)
#endif

#ifndef GPBUInt32Int64Dictionary
#define GPBUInt32Int64Dictionary WSO_PROTOC_SYMBOL(GPBUInt32Int64Dictionary)
#endif

#ifndef GPBUInt32ObjectDictionary
#define GPBUInt32ObjectDictionary WSO_PROTOC_SYMBOL(GPBUInt32ObjectDictionary)
#endif

#ifndef GPBUInt32UInt32Dictionary
#define GPBUInt32UInt32Dictionary WSO_PROTOC_SYMBOL(GPBUInt32UInt32Dictionary)
#endif

#ifndef GPBUInt32UInt64Dictionary
#define GPBUInt32UInt64Dictionary WSO_PROTOC_SYMBOL(GPBUInt32UInt64Dictionary)
#endif

#ifndef GPBUInt32Value
#define GPBUInt32Value WSO_PROTOC_SYMBOL(GPBUInt32Value)
#endif

#ifndef GPBUInt64Array
#define GPBUInt64Array WSO_PROTOC_SYMBOL(GPBUInt64Array)
#endif

#ifndef GPBUInt64BoolDictionary
#define GPBUInt64BoolDictionary WSO_PROTOC_SYMBOL(GPBUInt64BoolDictionary)
#endif

#ifndef GPBUInt64DoubleDictionary
#define GPBUInt64DoubleDictionary WSO_PROTOC_SYMBOL(GPBUInt64DoubleDictionary)
#endif

#ifndef GPBUInt64EnumDictionary
#define GPBUInt64EnumDictionary WSO_PROTOC_SYMBOL(GPBUInt64EnumDictionary)
#endif

#ifndef GPBUInt64FloatDictionary
#define GPBUInt64FloatDictionary WSO_PROTOC_SYMBOL(GPBUInt64FloatDictionary)
#endif

#ifndef GPBUInt64Int32Dictionary
#define GPBUInt64Int32Dictionary WSO_PROTOC_SYMBOL(GPBUInt64Int32Dictionary)
#endif

#ifndef GPBUInt64Int64Dictionary
#define GPBUInt64Int64Dictionary WSO_PROTOC_SYMBOL(GPBUInt64Int64Dictionary)
#endif

#ifndef GPBUInt64ObjectDictionary
#define GPBUInt64ObjectDictionary WSO_PROTOC_SYMBOL(GPBUInt64ObjectDictionary)
#endif

#ifndef GPBUInt64UInt32Dictionary
#define GPBUInt64UInt32Dictionary WSO_PROTOC_SYMBOL(GPBUInt64UInt32Dictionary)
#endif

#ifndef GPBUInt64UInt64Dictionary
#define GPBUInt64UInt64Dictionary WSO_PROTOC_SYMBOL(GPBUInt64UInt64Dictionary)
#endif

#ifndef GPBUInt64Value
#define GPBUInt64Value WSO_PROTOC_SYMBOL(GPBUInt64Value)
#endif

#ifndef GPBUnknownField
#define GPBUnknownField WSO_PROTOC_SYMBOL(GPBUnknownField)
#endif

#ifndef GPBUnknownFieldSet
#define GPBUnknownFieldSet WSO_PROTOC_SYMBOL(GPBUnknownFieldSet)
#endif

#ifndef GPBValue
#define GPBValue WSO_PROTOC_SYMBOL(GPBValue)
#endif

#ifndef GPBWrappersRoot
#define GPBWrappersRoot WSO_PROTOC_SYMBOL(GPBWrappersRoot)
#endif

// Functions
#ifndef GPBApi_Syntax_RawValue
#define GPBApi_Syntax_RawValue WSO_PROTOC_SYMBOL(GPBApi_Syntax_RawValue)
#endif

#ifndef GPBAutocreatedArrayModified
#define GPBAutocreatedArrayModified WSO_PROTOC_SYMBOL(GPBAutocreatedArrayModified)
#endif

#ifndef GPBAutocreatedDictionaryModified
#define GPBAutocreatedDictionaryModified WSO_PROTOC_SYMBOL(GPBAutocreatedDictionaryModified)
#endif

#ifndef GPBBecomeVisibleToAutocreator
#define GPBBecomeVisibleToAutocreator WSO_PROTOC_SYMBOL(GPBBecomeVisibleToAutocreator)
#endif

#ifndef GPBCheckRuntimeVersionInternal
#define GPBCheckRuntimeVersionInternal WSO_PROTOC_SYMBOL(GPBCheckRuntimeVersionInternal)
#endif

#ifndef GPBCheckRuntimeVersionSupport
#define GPBCheckRuntimeVersionSupport WSO_PROTOC_SYMBOL(GPBCheckRuntimeVersionSupport)
#endif

#ifndef GPBClassHasSel
#define GPBClassHasSel WSO_PROTOC_SYMBOL(GPBClassHasSel)
#endif

#ifndef GPBClearAutocreatedMessageIvarWithField
#define GPBClearAutocreatedMessageIvarWithField WSO_PROTOC_SYMBOL(GPBClearAutocreatedMessageIvarWithField)
#endif

#ifndef GPBClearMessageAutocreator
#define GPBClearMessageAutocreator WSO_PROTOC_SYMBOL(GPBClearMessageAutocreator)
#endif

#ifndef GPBClearMessageField
#define GPBClearMessageField WSO_PROTOC_SYMBOL(GPBClearMessageField)
#endif

#ifndef GPBCodedInputStreamBytesUntilLimit
#define GPBCodedInputStreamBytesUntilLimit WSO_PROTOC_SYMBOL(GPBCodedInputStreamBytesUntilLimit)
#endif

#ifndef GPBCodedInputStreamCheckLastTagWas
#define GPBCodedInputStreamCheckLastTagWas WSO_PROTOC_SYMBOL(GPBCodedInputStreamCheckLastTagWas)
#endif

#ifndef GPBCodedInputStreamIsAtEnd
#define GPBCodedInputStreamIsAtEnd WSO_PROTOC_SYMBOL(GPBCodedInputStreamIsAtEnd)
#endif

#ifndef GPBCodedInputStreamPopLimit
#define GPBCodedInputStreamPopLimit WSO_PROTOC_SYMBOL(GPBCodedInputStreamPopLimit)
#endif

#ifndef GPBCodedInputStreamPushLimit
#define GPBCodedInputStreamPushLimit WSO_PROTOC_SYMBOL(GPBCodedInputStreamPushLimit)
#endif

#ifndef GPBCodedInputStreamReadBool
#define GPBCodedInputStreamReadBool WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadBool)
#endif

#ifndef GPBCodedInputStreamReadDouble
#define GPBCodedInputStreamReadDouble WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadDouble)
#endif

#ifndef GPBCodedInputStreamReadEnum
#define GPBCodedInputStreamReadEnum WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadEnum)
#endif

#ifndef GPBCodedInputStreamReadFixed32
#define GPBCodedInputStreamReadFixed32 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadFixed32)
#endif

#ifndef GPBCodedInputStreamReadFixed64
#define GPBCodedInputStreamReadFixed64 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadFixed64)
#endif

#ifndef GPBCodedInputStreamReadFloat
#define GPBCodedInputStreamReadFloat WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadFloat)
#endif

#ifndef GPBCodedInputStreamReadInt32
#define GPBCodedInputStreamReadInt32 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadInt32)
#endif

#ifndef GPBCodedInputStreamReadInt64
#define GPBCodedInputStreamReadInt64 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadInt64)
#endif

#ifndef GPBCodedInputStreamReadRetainedBytes
#define GPBCodedInputStreamReadRetainedBytes WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadRetainedBytes)
#endif

#ifndef GPBCodedInputStreamReadRetainedBytesNoCopy
#define GPBCodedInputStreamReadRetainedBytesNoCopy WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadRetainedBytesNoCopy)
#endif

#ifndef GPBCodedInputStreamReadRetainedString
#define GPBCodedInputStreamReadRetainedString WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadRetainedString)
#endif

#ifndef GPBCodedInputStreamReadSFixed32
#define GPBCodedInputStreamReadSFixed32 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadSFixed32)
#endif

#ifndef GPBCodedInputStreamReadSFixed64
#define GPBCodedInputStreamReadSFixed64 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadSFixed64)
#endif

#ifndef GPBCodedInputStreamReadSInt32
#define GPBCodedInputStreamReadSInt32 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadSInt32)
#endif

#ifndef GPBCodedInputStreamReadSInt64
#define GPBCodedInputStreamReadSInt64 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadSInt64)
#endif

#ifndef GPBCodedInputStreamReadTag
#define GPBCodedInputStreamReadTag WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadTag)
#endif

#ifndef GPBCodedInputStreamReadUInt32
#define GPBCodedInputStreamReadUInt32 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadUInt32)
#endif

#ifndef GPBCodedInputStreamReadUInt64
#define GPBCodedInputStreamReadUInt64 WSO_PROTOC_SYMBOL(GPBCodedInputStreamReadUInt64)
#endif

#ifndef GPBComputeBoolSize
#define GPBComputeBoolSize WSO_PROTOC_SYMBOL(GPBComputeBoolSize)
#endif

#ifndef GPBComputeBoolSizeNoTag
#define GPBComputeBoolSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeBoolSizeNoTag)
#endif

#ifndef GPBComputeBytesSize
#define GPBComputeBytesSize WSO_PROTOC_SYMBOL(GPBComputeBytesSize)
#endif

#ifndef GPBComputeBytesSizeNoTag
#define GPBComputeBytesSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeBytesSizeNoTag)
#endif

#ifndef GPBComputeDoubleSize
#define GPBComputeDoubleSize WSO_PROTOC_SYMBOL(GPBComputeDoubleSize)
#endif

#ifndef GPBComputeDoubleSizeNoTag
#define GPBComputeDoubleSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeDoubleSizeNoTag)
#endif

#ifndef GPBComputeEnumSize
#define GPBComputeEnumSize WSO_PROTOC_SYMBOL(GPBComputeEnumSize)
#endif

#ifndef GPBComputeEnumSizeNoTag
#define GPBComputeEnumSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeEnumSizeNoTag)
#endif

#ifndef GPBComputeExtensionSerializedSizeIncludingTag
#define GPBComputeExtensionSerializedSizeIncludingTag WSO_PROTOC_SYMBOL(GPBComputeExtensionSerializedSizeIncludingTag)
#endif

#ifndef GPBComputeFixed32Size
#define GPBComputeFixed32Size WSO_PROTOC_SYMBOL(GPBComputeFixed32Size)
#endif

#ifndef GPBComputeFixed32SizeNoTag
#define GPBComputeFixed32SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeFixed32SizeNoTag)
#endif

#ifndef GPBComputeFixed64Size
#define GPBComputeFixed64Size WSO_PROTOC_SYMBOL(GPBComputeFixed64Size)
#endif

#ifndef GPBComputeFixed64SizeNoTag
#define GPBComputeFixed64SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeFixed64SizeNoTag)
#endif

#ifndef GPBComputeFloatSize
#define GPBComputeFloatSize WSO_PROTOC_SYMBOL(GPBComputeFloatSize)
#endif

#ifndef GPBComputeFloatSizeNoTag
#define GPBComputeFloatSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeFloatSizeNoTag)
#endif

#ifndef GPBComputeGroupSize
#define GPBComputeGroupSize WSO_PROTOC_SYMBOL(GPBComputeGroupSize)
#endif

#ifndef GPBComputeGroupSizeNoTag
#define GPBComputeGroupSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeGroupSizeNoTag)
#endif

#ifndef GPBComputeInt32Size
#define GPBComputeInt32Size WSO_PROTOC_SYMBOL(GPBComputeInt32Size)
#endif

#ifndef GPBComputeInt32SizeNoTag
#define GPBComputeInt32SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeInt32SizeNoTag)
#endif

#ifndef GPBComputeInt64Size
#define GPBComputeInt64Size WSO_PROTOC_SYMBOL(GPBComputeInt64Size)
#endif

#ifndef GPBComputeInt64SizeNoTag
#define GPBComputeInt64SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeInt64SizeNoTag)
#endif

#ifndef GPBComputeMessageSetExtensionSize
#define GPBComputeMessageSetExtensionSize WSO_PROTOC_SYMBOL(GPBComputeMessageSetExtensionSize)
#endif

#ifndef GPBComputeMessageSize
#define GPBComputeMessageSize WSO_PROTOC_SYMBOL(GPBComputeMessageSize)
#endif

#ifndef GPBComputeMessageSizeNoTag
#define GPBComputeMessageSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeMessageSizeNoTag)
#endif

#ifndef GPBComputeRawMessageSetExtensionSize
#define GPBComputeRawMessageSetExtensionSize WSO_PROTOC_SYMBOL(GPBComputeRawMessageSetExtensionSize)
#endif

#ifndef GPBComputeRawVarint32Size
#define GPBComputeRawVarint32Size WSO_PROTOC_SYMBOL(GPBComputeRawVarint32Size)
#endif

#ifndef GPBComputeRawVarint32SizeForInteger
#define GPBComputeRawVarint32SizeForInteger WSO_PROTOC_SYMBOL(GPBComputeRawVarint32SizeForInteger)
#endif

#ifndef GPBComputeRawVarint64Size
#define GPBComputeRawVarint64Size WSO_PROTOC_SYMBOL(GPBComputeRawVarint64Size)
#endif

#ifndef GPBComputeSFixed32Size
#define GPBComputeSFixed32Size WSO_PROTOC_SYMBOL(GPBComputeSFixed32Size)
#endif

#ifndef GPBComputeSFixed32SizeNoTag
#define GPBComputeSFixed32SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeSFixed32SizeNoTag)
#endif

#ifndef GPBComputeSFixed64Size
#define GPBComputeSFixed64Size WSO_PROTOC_SYMBOL(GPBComputeSFixed64Size)
#endif

#ifndef GPBComputeSFixed64SizeNoTag
#define GPBComputeSFixed64SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeSFixed64SizeNoTag)
#endif

#ifndef GPBComputeSInt32Size
#define GPBComputeSInt32Size WSO_PROTOC_SYMBOL(GPBComputeSInt32Size)
#endif

#ifndef GPBComputeSInt32SizeNoTag
#define GPBComputeSInt32SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeSInt32SizeNoTag)
#endif

#ifndef GPBComputeSInt64Size
#define GPBComputeSInt64Size WSO_PROTOC_SYMBOL(GPBComputeSInt64Size)
#endif

#ifndef GPBComputeSInt64SizeNoTag
#define GPBComputeSInt64SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeSInt64SizeNoTag)
#endif

#ifndef GPBComputeSizeTSizeAsInt32NoTag
#define GPBComputeSizeTSizeAsInt32NoTag WSO_PROTOC_SYMBOL(GPBComputeSizeTSizeAsInt32NoTag)
#endif

#ifndef GPBComputeStringSize
#define GPBComputeStringSize WSO_PROTOC_SYMBOL(GPBComputeStringSize)
#endif

#ifndef GPBComputeStringSizeNoTag
#define GPBComputeStringSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeStringSizeNoTag)
#endif

#ifndef GPBComputeTagSize
#define GPBComputeTagSize WSO_PROTOC_SYMBOL(GPBComputeTagSize)
#endif

#ifndef GPBComputeUInt32Size
#define GPBComputeUInt32Size WSO_PROTOC_SYMBOL(GPBComputeUInt32Size)
#endif

#ifndef GPBComputeUInt32SizeNoTag
#define GPBComputeUInt32SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeUInt32SizeNoTag)
#endif

#ifndef GPBComputeUInt64Size
#define GPBComputeUInt64Size WSO_PROTOC_SYMBOL(GPBComputeUInt64Size)
#endif

#ifndef GPBComputeUInt64SizeNoTag
#define GPBComputeUInt64SizeNoTag WSO_PROTOC_SYMBOL(GPBComputeUInt64SizeNoTag)
#endif

#ifndef GPBComputeUnknownGroupSize
#define GPBComputeUnknownGroupSize WSO_PROTOC_SYMBOL(GPBComputeUnknownGroupSize)
#endif

#ifndef GPBComputeUnknownGroupSizeNoTag
#define GPBComputeUnknownGroupSizeNoTag WSO_PROTOC_SYMBOL(GPBComputeUnknownGroupSizeNoTag)
#endif

#ifndef GPBComputeWireFormatTagSize
#define GPBComputeWireFormatTagSize WSO_PROTOC_SYMBOL(GPBComputeWireFormatTagSize)
#endif

#ifndef GPBCreateMessageWithAutocreator
#define GPBCreateMessageWithAutocreator WSO_PROTOC_SYMBOL(GPBCreateMessageWithAutocreator)
#endif

#ifndef GPBDecodeTextFormatName
#define GPBDecodeTextFormatName WSO_PROTOC_SYMBOL(GPBDecodeTextFormatName)
#endif

#ifndef GPBDictionaryComputeSizeInternalHelper
#define GPBDictionaryComputeSizeInternalHelper WSO_PROTOC_SYMBOL(GPBDictionaryComputeSizeInternalHelper)
#endif

#ifndef GPBDictionaryIsInitializedInternalHelper
#define GPBDictionaryIsInitializedInternalHelper WSO_PROTOC_SYMBOL(GPBDictionaryIsInitializedInternalHelper)
#endif

#ifndef GPBDictionaryReadEntry
#define GPBDictionaryReadEntry WSO_PROTOC_SYMBOL(GPBDictionaryReadEntry)
#endif

#ifndef GPBDictionaryWriteToStreamInternalHelper
#define GPBDictionaryWriteToStreamInternalHelper WSO_PROTOC_SYMBOL(GPBDictionaryWriteToStreamInternalHelper)
#endif

#ifndef GPBEmptyNSData
#define GPBEmptyNSData WSO_PROTOC_SYMBOL(GPBEmptyNSData)
#endif

#ifndef GPBEnum_Syntax_RawValue
#define GPBEnum_Syntax_RawValue WSO_PROTOC_SYMBOL(GPBEnum_Syntax_RawValue)
#endif

#ifndef GPBExtensionMergeFromInputStream
#define GPBExtensionMergeFromInputStream WSO_PROTOC_SYMBOL(GPBExtensionMergeFromInputStream)
#endif

#ifndef GPBFieldAlternateTag
#define GPBFieldAlternateTag WSO_PROTOC_SYMBOL(GPBFieldAlternateTag)
#endif

#ifndef GPBFieldTag
#define GPBFieldTag WSO_PROTOC_SYMBOL(GPBFieldTag)
#endif

#ifndef GPBField_Cardinality_EnumDescriptor
#define GPBField_Cardinality_EnumDescriptor WSO_PROTOC_SYMBOL(GPBField_Cardinality_EnumDescriptor)
#endif

#ifndef GPBField_Cardinality_IsValidValue
#define GPBField_Cardinality_IsValidValue WSO_PROTOC_SYMBOL(GPBField_Cardinality_IsValidValue)
#endif

#ifndef GPBField_Cardinality_RawValue
#define GPBField_Cardinality_RawValue WSO_PROTOC_SYMBOL(GPBField_Cardinality_RawValue)
#endif

#ifndef GPBField_Kind_EnumDescriptor
#define GPBField_Kind_EnumDescriptor WSO_PROTOC_SYMBOL(GPBField_Kind_EnumDescriptor)
#endif

#ifndef GPBField_Kind_IsValidValue
#define GPBField_Kind_IsValidValue WSO_PROTOC_SYMBOL(GPBField_Kind_IsValidValue)
#endif

#ifndef GPBField_Kind_RawValue
#define GPBField_Kind_RawValue WSO_PROTOC_SYMBOL(GPBField_Kind_RawValue)
#endif

#ifndef GPBGetEnumIvarWithFieldInternal
#define GPBGetEnumIvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBGetEnumIvarWithFieldInternal)
#endif

#ifndef GPBGetHasIvar
#define GPBGetHasIvar WSO_PROTOC_SYMBOL(GPBGetHasIvar)
#endif

#ifndef GPBGetHasOneof
#define GPBGetHasOneof WSO_PROTOC_SYMBOL(GPBGetHasOneof)
#endif

#ifndef GPBGetMessageBoolField
#define GPBGetMessageBoolField WSO_PROTOC_SYMBOL(GPBGetMessageBoolField)
#endif

#ifndef GPBGetMessageBytesField
#define GPBGetMessageBytesField WSO_PROTOC_SYMBOL(GPBGetMessageBytesField)
#endif

#ifndef GPBGetMessageDoubleField
#define GPBGetMessageDoubleField WSO_PROTOC_SYMBOL(GPBGetMessageDoubleField)
#endif

#ifndef GPBGetMessageEnumField
#define GPBGetMessageEnumField WSO_PROTOC_SYMBOL(GPBGetMessageEnumField)
#endif

#ifndef GPBGetMessageFloatField
#define GPBGetMessageFloatField WSO_PROTOC_SYMBOL(GPBGetMessageFloatField)
#endif

#ifndef GPBGetMessageGroupField
#define GPBGetMessageGroupField WSO_PROTOC_SYMBOL(GPBGetMessageGroupField)
#endif

#ifndef GPBGetMessageInt32Field
#define GPBGetMessageInt32Field WSO_PROTOC_SYMBOL(GPBGetMessageInt32Field)
#endif

#ifndef GPBGetMessageInt64Field
#define GPBGetMessageInt64Field WSO_PROTOC_SYMBOL(GPBGetMessageInt64Field)
#endif

#ifndef GPBGetMessageMapField
#define GPBGetMessageMapField WSO_PROTOC_SYMBOL(GPBGetMessageMapField)
#endif

#ifndef GPBGetMessageMessageField
#define GPBGetMessageMessageField WSO_PROTOC_SYMBOL(GPBGetMessageMessageField)
#endif

#ifndef GPBGetMessageRawEnumField
#define GPBGetMessageRawEnumField WSO_PROTOC_SYMBOL(GPBGetMessageRawEnumField)
#endif

#ifndef GPBGetMessageRepeatedField
#define GPBGetMessageRepeatedField WSO_PROTOC_SYMBOL(GPBGetMessageRepeatedField)
#endif

#ifndef GPBGetMessageStringField
#define GPBGetMessageStringField WSO_PROTOC_SYMBOL(GPBGetMessageStringField)
#endif

#ifndef GPBGetMessageUInt32Field
#define GPBGetMessageUInt32Field WSO_PROTOC_SYMBOL(GPBGetMessageUInt32Field)
#endif

#ifndef GPBGetMessageUInt64Field
#define GPBGetMessageUInt64Field WSO_PROTOC_SYMBOL(GPBGetMessageUInt64Field)
#endif

#ifndef GPBGetObjectIvarWithField
#define GPBGetObjectIvarWithField WSO_PROTOC_SYMBOL(GPBGetObjectIvarWithField)
#endif

#ifndef GPBGetObjectIvarWithFieldNoAutocreate
#define GPBGetObjectIvarWithFieldNoAutocreate WSO_PROTOC_SYMBOL(GPBGetObjectIvarWithFieldNoAutocreate)
#endif

#ifndef GPBMaybeClearOneof
#define GPBMaybeClearOneof WSO_PROTOC_SYMBOL(GPBMaybeClearOneof)
#endif

#ifndef GPBMessageDropUnknownFieldsRecursively
#define GPBMessageDropUnknownFieldsRecursively WSO_PROTOC_SYMBOL(GPBMessageDropUnknownFieldsRecursively)
#endif

#ifndef GPBMessageEncodingForSelector
#define GPBMessageEncodingForSelector WSO_PROTOC_SYMBOL(GPBMessageEncodingForSelector)
#endif

#ifndef GPBMessageHasFieldNumberSet
#define GPBMessageHasFieldNumberSet WSO_PROTOC_SYMBOL(GPBMessageHasFieldNumberSet)
#endif

#ifndef GPBMessageHasFieldSet
#define GPBMessageHasFieldSet WSO_PROTOC_SYMBOL(GPBMessageHasFieldSet)
#endif

#ifndef GPBMethod_Syntax_RawValue
#define GPBMethod_Syntax_RawValue WSO_PROTOC_SYMBOL(GPBMethod_Syntax_RawValue)
#endif

#ifndef GPBNullValue_EnumDescriptor
#define GPBNullValue_EnumDescriptor WSO_PROTOC_SYMBOL(GPBNullValue_EnumDescriptor)
#endif

#ifndef GPBNullValue_IsValidValue
#define GPBNullValue_IsValidValue WSO_PROTOC_SYMBOL(GPBNullValue_IsValidValue)
#endif

#ifndef GPBPrepareReadOnlySemaphore
#define GPBPrepareReadOnlySemaphore WSO_PROTOC_SYMBOL(GPBPrepareReadOnlySemaphore)
#endif

#ifndef GPBResolveExtensionClassMethod
#define GPBResolveExtensionClassMethod WSO_PROTOC_SYMBOL(GPBResolveExtensionClassMethod)
#endif

#ifndef GPBSetAutocreatedRetainedObjectIvarWithField
#define GPBSetAutocreatedRetainedObjectIvarWithField WSO_PROTOC_SYMBOL(GPBSetAutocreatedRetainedObjectIvarWithField)
#endif

#ifndef GPBSetBoolIvarWithFieldInternal
#define GPBSetBoolIvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetBoolIvarWithFieldInternal)
#endif

#ifndef GPBSetDoubleIvarWithFieldInternal
#define GPBSetDoubleIvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetDoubleIvarWithFieldInternal)
#endif

#ifndef GPBSetEnumIvarWithFieldInternal
#define GPBSetEnumIvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetEnumIvarWithFieldInternal)
#endif

#ifndef GPBSetFloatIvarWithFieldInternal
#define GPBSetFloatIvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetFloatIvarWithFieldInternal)
#endif

#ifndef GPBSetHasIvar
#define GPBSetHasIvar WSO_PROTOC_SYMBOL(GPBSetHasIvar)
#endif

#ifndef GPBSetInt32IvarWithFieldInternal
#define GPBSetInt32IvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetInt32IvarWithFieldInternal)
#endif

#ifndef GPBSetInt64IvarWithFieldInternal
#define GPBSetInt64IvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetInt64IvarWithFieldInternal)
#endif

#ifndef GPBSetMessageBoolField
#define GPBSetMessageBoolField WSO_PROTOC_SYMBOL(GPBSetMessageBoolField)
#endif

#ifndef GPBSetMessageBytesField
#define GPBSetMessageBytesField WSO_PROTOC_SYMBOL(GPBSetMessageBytesField)
#endif

#ifndef GPBSetMessageDoubleField
#define GPBSetMessageDoubleField WSO_PROTOC_SYMBOL(GPBSetMessageDoubleField)
#endif

#ifndef GPBSetMessageEnumField
#define GPBSetMessageEnumField WSO_PROTOC_SYMBOL(GPBSetMessageEnumField)
#endif

#ifndef GPBSetMessageFloatField
#define GPBSetMessageFloatField WSO_PROTOC_SYMBOL(GPBSetMessageFloatField)
#endif

#ifndef GPBSetMessageGroupField
#define GPBSetMessageGroupField WSO_PROTOC_SYMBOL(GPBSetMessageGroupField)
#endif

#ifndef GPBSetMessageInt32Field
#define GPBSetMessageInt32Field WSO_PROTOC_SYMBOL(GPBSetMessageInt32Field)
#endif

#ifndef GPBSetMessageInt64Field
#define GPBSetMessageInt64Field WSO_PROTOC_SYMBOL(GPBSetMessageInt64Field)
#endif

#ifndef GPBSetMessageMapField
#define GPBSetMessageMapField WSO_PROTOC_SYMBOL(GPBSetMessageMapField)
#endif

#ifndef GPBSetMessageMessageField
#define GPBSetMessageMessageField WSO_PROTOC_SYMBOL(GPBSetMessageMessageField)
#endif

#ifndef GPBSetMessageRawEnumField
#define GPBSetMessageRawEnumField WSO_PROTOC_SYMBOL(GPBSetMessageRawEnumField)
#endif

#ifndef GPBSetMessageRepeatedField
#define GPBSetMessageRepeatedField WSO_PROTOC_SYMBOL(GPBSetMessageRepeatedField)
#endif

#ifndef GPBSetMessageStringField
#define GPBSetMessageStringField WSO_PROTOC_SYMBOL(GPBSetMessageStringField)
#endif

#ifndef GPBSetMessageUInt32Field
#define GPBSetMessageUInt32Field WSO_PROTOC_SYMBOL(GPBSetMessageUInt32Field)
#endif

#ifndef GPBSetMessageUInt64Field
#define GPBSetMessageUInt64Field WSO_PROTOC_SYMBOL(GPBSetMessageUInt64Field)
#endif

#ifndef GPBSetObjectIvarWithFieldInternal
#define GPBSetObjectIvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetObjectIvarWithFieldInternal)
#endif

#ifndef GPBSetRetainedObjectIvarWithFieldInternal
#define GPBSetRetainedObjectIvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetRetainedObjectIvarWithFieldInternal)
#endif

#ifndef GPBSetUInt32IvarWithFieldInternal
#define GPBSetUInt32IvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetUInt32IvarWithFieldInternal)
#endif

#ifndef GPBSetUInt64IvarWithFieldInternal
#define GPBSetUInt64IvarWithFieldInternal WSO_PROTOC_SYMBOL(GPBSetUInt64IvarWithFieldInternal)
#endif

#ifndef GPBSyntax_EnumDescriptor
#define GPBSyntax_EnumDescriptor WSO_PROTOC_SYMBOL(GPBSyntax_EnumDescriptor)
#endif

#ifndef GPBSyntax_IsValidValue
#define GPBSyntax_IsValidValue WSO_PROTOC_SYMBOL(GPBSyntax_IsValidValue)
#endif

#ifndef GPBTextFormatForMessage
#define GPBTextFormatForMessage WSO_PROTOC_SYMBOL(GPBTextFormatForMessage)
#endif

#ifndef GPBTextFormatForUnknownFieldSet
#define GPBTextFormatForUnknownFieldSet WSO_PROTOC_SYMBOL(GPBTextFormatForUnknownFieldSet)
#endif

#ifndef GPBType_Syntax_RawValue
#define GPBType_Syntax_RawValue WSO_PROTOC_SYMBOL(GPBType_Syntax_RawValue)
#endif

#ifndef GPBValue_ClearKindOneOfCase
#define GPBValue_ClearKindOneOfCase WSO_PROTOC_SYMBOL(GPBValue_ClearKindOneOfCase)
#endif

#ifndef GPBValue_NullValue_RawValue
#define GPBValue_NullValue_RawValue WSO_PROTOC_SYMBOL(GPBValue_NullValue_RawValue)
#endif

#ifndef GPBWasMessageAutocreatedBy
#define GPBWasMessageAutocreatedBy WSO_PROTOC_SYMBOL(GPBWasMessageAutocreatedBy)
#endif

#ifndef GPBWireFormatForType
#define GPBWireFormatForType WSO_PROTOC_SYMBOL(GPBWireFormatForType)
#endif

#ifndef GPBWireFormatGetTagFieldNumber
#define GPBWireFormatGetTagFieldNumber WSO_PROTOC_SYMBOL(GPBWireFormatGetTagFieldNumber)
#endif

#ifndef GPBWireFormatGetTagWireType
#define GPBWireFormatGetTagWireType WSO_PROTOC_SYMBOL(GPBWireFormatGetTagWireType)
#endif

#ifndef GPBWireFormatIsValidTag
#define GPBWireFormatIsValidTag WSO_PROTOC_SYMBOL(GPBWireFormatIsValidTag)
#endif

#ifndef GPBWireFormatMakeTag
#define GPBWireFormatMakeTag WSO_PROTOC_SYMBOL(GPBWireFormatMakeTag)
#endif

#ifndef GPBWriteExtensionValueToOutputStream
#define GPBWriteExtensionValueToOutputStream WSO_PROTOC_SYMBOL(GPBWriteExtensionValueToOutputStream)
#endif

#ifndef SetGPBApi_Syntax_RawValue
#define SetGPBApi_Syntax_RawValue WSO_PROTOC_SYMBOL(SetGPBApi_Syntax_RawValue)
#endif

#ifndef SetGPBEnum_Syntax_RawValue
#define SetGPBEnum_Syntax_RawValue WSO_PROTOC_SYMBOL(SetGPBEnum_Syntax_RawValue)
#endif

#ifndef SetGPBField_Cardinality_RawValue
#define SetGPBField_Cardinality_RawValue WSO_PROTOC_SYMBOL(SetGPBField_Cardinality_RawValue)
#endif

#ifndef SetGPBField_Kind_RawValue
#define SetGPBField_Kind_RawValue WSO_PROTOC_SYMBOL(SetGPBField_Kind_RawValue)
#endif

#ifndef SetGPBMethod_Syntax_RawValue
#define SetGPBMethod_Syntax_RawValue WSO_PROTOC_SYMBOL(SetGPBMethod_Syntax_RawValue)
#endif

#ifndef SetGPBType_Syntax_RawValue
#define SetGPBType_Syntax_RawValue WSO_PROTOC_SYMBOL(SetGPBType_Syntax_RawValue)
#endif

#ifndef SetGPBValue_NullValue_RawValue
#define SetGPBValue_NullValue_RawValue WSO_PROTOC_SYMBOL(SetGPBValue_NullValue_RawValue)
#endif

// Externs
#ifndef OBJC_CLASS_$_GPBAny
#define OBJC_CLASS_$_GPBAny WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBAny)
#endif

#ifndef OBJC_CLASS_$_GPBAnyRoot
#define OBJC_CLASS_$_GPBAnyRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBAnyRoot)
#endif

#ifndef OBJC_CLASS_$_GPBApi
#define OBJC_CLASS_$_GPBApi WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBApi)
#endif

#ifndef OBJC_CLASS_$_GPBApiRoot
#define OBJC_CLASS_$_GPBApiRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBApiRoot)
#endif

#ifndef OBJC_CLASS_$_GPBAutocreatedArray
#define OBJC_CLASS_$_GPBAutocreatedArray WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBAutocreatedArray)
#endif

#ifndef OBJC_CLASS_$_GPBAutocreatedDictionary
#define OBJC_CLASS_$_GPBAutocreatedDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBAutocreatedDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolArray
#define OBJC_CLASS_$_GPBBoolArray WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolArray)
#endif

#ifndef OBJC_CLASS_$_GPBBoolBoolDictionary
#define OBJC_CLASS_$_GPBBoolBoolDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolBoolDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolDoubleDictionary
#define OBJC_CLASS_$_GPBBoolDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolDoubleDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolEnumDictionary
#define OBJC_CLASS_$_GPBBoolEnumDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolEnumDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolFloatDictionary
#define OBJC_CLASS_$_GPBBoolFloatDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolFloatDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolInt32Dictionary
#define OBJC_CLASS_$_GPBBoolInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolInt64Dictionary
#define OBJC_CLASS_$_GPBBoolInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolObjectDictionary
#define OBJC_CLASS_$_GPBBoolObjectDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolObjectDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolUInt32Dictionary
#define OBJC_CLASS_$_GPBBoolUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolUInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolUInt64Dictionary
#define OBJC_CLASS_$_GPBBoolUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolUInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBBoolValue
#define OBJC_CLASS_$_GPBBoolValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBoolValue)
#endif

#ifndef OBJC_CLASS_$_GPBBytesValue
#define OBJC_CLASS_$_GPBBytesValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBBytesValue)
#endif

#ifndef OBJC_CLASS_$_GPBCodedInputStream
#define OBJC_CLASS_$_GPBCodedInputStream WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBCodedInputStream)
#endif

#ifndef OBJC_CLASS_$_GPBCodedOutputStream
#define OBJC_CLASS_$_GPBCodedOutputStream WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBCodedOutputStream)
#endif

#ifndef OBJC_CLASS_$_GPBDescriptor
#define OBJC_CLASS_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBDescriptor)
#endif

#ifndef OBJC_CLASS_$_GPBDoubleArray
#define OBJC_CLASS_$_GPBDoubleArray WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBDoubleArray)
#endif

#ifndef OBJC_CLASS_$_GPBDoubleValue
#define OBJC_CLASS_$_GPBDoubleValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBDoubleValue)
#endif

#ifndef OBJC_CLASS_$_GPBDuration
#define OBJC_CLASS_$_GPBDuration WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBDuration)
#endif

#ifndef OBJC_CLASS_$_GPBDurationRoot
#define OBJC_CLASS_$_GPBDurationRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBDurationRoot)
#endif

#ifndef OBJC_CLASS_$_GPBEmpty
#define OBJC_CLASS_$_GPBEmpty WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBEmpty)
#endif

#ifndef OBJC_CLASS_$_GPBEmptyRoot
#define OBJC_CLASS_$_GPBEmptyRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBEmptyRoot)
#endif

#ifndef OBJC_CLASS_$_GPBEnum
#define OBJC_CLASS_$_GPBEnum WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBEnum)
#endif

#ifndef OBJC_CLASS_$_GPBEnumArray
#define OBJC_CLASS_$_GPBEnumArray WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBEnumArray)
#endif

#ifndef OBJC_CLASS_$_GPBEnumDescriptor
#define OBJC_CLASS_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_CLASS_$_GPBEnumValue
#define OBJC_CLASS_$_GPBEnumValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBEnumValue)
#endif

#ifndef OBJC_CLASS_$_GPBExtensionDescriptor
#define OBJC_CLASS_$_GPBExtensionDescriptor WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBExtensionDescriptor)
#endif

#ifndef OBJC_CLASS_$_GPBExtensionRegistry
#define OBJC_CLASS_$_GPBExtensionRegistry WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBExtensionRegistry)
#endif

#ifndef OBJC_CLASS_$_GPBField
#define OBJC_CLASS_$_GPBField WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBField)
#endif

#ifndef OBJC_CLASS_$_GPBFieldDescriptor
#define OBJC_CLASS_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_CLASS_$_GPBFieldMask
#define OBJC_CLASS_$_GPBFieldMask WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBFieldMask)
#endif

#ifndef OBJC_CLASS_$_GPBFieldMaskRoot
#define OBJC_CLASS_$_GPBFieldMaskRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBFieldMaskRoot)
#endif

#ifndef OBJC_CLASS_$_GPBFileDescriptor
#define OBJC_CLASS_$_GPBFileDescriptor WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBFileDescriptor)
#endif

#ifndef OBJC_CLASS_$_GPBFloatArray
#define OBJC_CLASS_$_GPBFloatArray WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBFloatArray)
#endif

#ifndef OBJC_CLASS_$_GPBFloatValue
#define OBJC_CLASS_$_GPBFloatValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBFloatValue)
#endif

#ifndef OBJC_CLASS_$_GPBInt32Array
#define OBJC_CLASS_$_GPBInt32Array WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32Array)
#endif

#ifndef OBJC_CLASS_$_GPBInt32BoolDictionary
#define OBJC_CLASS_$_GPBInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32BoolDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32DoubleDictionary
#define OBJC_CLASS_$_GPBInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32DoubleDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32EnumDictionary
#define OBJC_CLASS_$_GPBInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32EnumDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32FloatDictionary
#define OBJC_CLASS_$_GPBInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32FloatDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32Int32Dictionary
#define OBJC_CLASS_$_GPBInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32Int32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32Int64Dictionary
#define OBJC_CLASS_$_GPBInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32Int64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32ObjectDictionary
#define OBJC_CLASS_$_GPBInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32ObjectDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32UInt32Dictionary
#define OBJC_CLASS_$_GPBInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32UInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32UInt64Dictionary
#define OBJC_CLASS_$_GPBInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32UInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt32Value
#define OBJC_CLASS_$_GPBInt32Value WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt32Value)
#endif

#ifndef OBJC_CLASS_$_GPBInt64Array
#define OBJC_CLASS_$_GPBInt64Array WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64Array)
#endif

#ifndef OBJC_CLASS_$_GPBInt64BoolDictionary
#define OBJC_CLASS_$_GPBInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64BoolDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64DoubleDictionary
#define OBJC_CLASS_$_GPBInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64DoubleDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64EnumDictionary
#define OBJC_CLASS_$_GPBInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64EnumDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64FloatDictionary
#define OBJC_CLASS_$_GPBInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64FloatDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64Int32Dictionary
#define OBJC_CLASS_$_GPBInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64Int32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64Int64Dictionary
#define OBJC_CLASS_$_GPBInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64Int64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64ObjectDictionary
#define OBJC_CLASS_$_GPBInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64ObjectDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64UInt32Dictionary
#define OBJC_CLASS_$_GPBInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64UInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64UInt64Dictionary
#define OBJC_CLASS_$_GPBInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64UInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBInt64Value
#define OBJC_CLASS_$_GPBInt64Value WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBInt64Value)
#endif

#ifndef OBJC_CLASS_$_GPBListValue
#define OBJC_CLASS_$_GPBListValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBListValue)
#endif

#ifndef OBJC_CLASS_$_GPBMessage
#define OBJC_CLASS_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBMessage)
#endif

#ifndef OBJC_CLASS_$_GPBMethod
#define OBJC_CLASS_$_GPBMethod WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBMethod)
#endif

#ifndef OBJC_CLASS_$_GPBMixin
#define OBJC_CLASS_$_GPBMixin WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBMixin)
#endif

#ifndef OBJC_CLASS_$_GPBOneofDescriptor
#define OBJC_CLASS_$_GPBOneofDescriptor WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBOneofDescriptor)
#endif

#ifndef OBJC_CLASS_$_GPBOption
#define OBJC_CLASS_$_GPBOption WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBOption)
#endif

#ifndef OBJC_CLASS_$_GPBRootObject
#define OBJC_CLASS_$_GPBRootObject WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBRootObject)
#endif

#ifndef OBJC_CLASS_$_GPBSourceContext
#define OBJC_CLASS_$_GPBSourceContext WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBSourceContext)
#endif

#ifndef OBJC_CLASS_$_GPBSourceContextRoot
#define OBJC_CLASS_$_GPBSourceContextRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBSourceContextRoot)
#endif

#ifndef OBJC_CLASS_$_GPBStringBoolDictionary
#define OBJC_CLASS_$_GPBStringBoolDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringBoolDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringDoubleDictionary
#define OBJC_CLASS_$_GPBStringDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringDoubleDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringEnumDictionary
#define OBJC_CLASS_$_GPBStringEnumDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringEnumDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringFloatDictionary
#define OBJC_CLASS_$_GPBStringFloatDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringFloatDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringInt32Dictionary
#define OBJC_CLASS_$_GPBStringInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringInt64Dictionary
#define OBJC_CLASS_$_GPBStringInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringUInt32Dictionary
#define OBJC_CLASS_$_GPBStringUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringUInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringUInt64Dictionary
#define OBJC_CLASS_$_GPBStringUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringUInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBStringValue
#define OBJC_CLASS_$_GPBStringValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStringValue)
#endif

#ifndef OBJC_CLASS_$_GPBStruct
#define OBJC_CLASS_$_GPBStruct WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStruct)
#endif

#ifndef OBJC_CLASS_$_GPBStructRoot
#define OBJC_CLASS_$_GPBStructRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBStructRoot)
#endif

#ifndef OBJC_CLASS_$_GPBTimestamp
#define OBJC_CLASS_$_GPBTimestamp WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBTimestamp)
#endif

#ifndef OBJC_CLASS_$_GPBTimestampRoot
#define OBJC_CLASS_$_GPBTimestampRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBTimestampRoot)
#endif

#ifndef OBJC_CLASS_$_GPBType
#define OBJC_CLASS_$_GPBType WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBType)
#endif

#ifndef OBJC_CLASS_$_GPBTypeRoot
#define OBJC_CLASS_$_GPBTypeRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBTypeRoot)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32Array
#define OBJC_CLASS_$_GPBUInt32Array WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32Array)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32BoolDictionary
#define OBJC_CLASS_$_GPBUInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32BoolDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32DoubleDictionary
#define OBJC_CLASS_$_GPBUInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32DoubleDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32EnumDictionary
#define OBJC_CLASS_$_GPBUInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32EnumDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32FloatDictionary
#define OBJC_CLASS_$_GPBUInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32FloatDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32Int32Dictionary
#define OBJC_CLASS_$_GPBUInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32Int32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32Int64Dictionary
#define OBJC_CLASS_$_GPBUInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32Int64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32ObjectDictionary
#define OBJC_CLASS_$_GPBUInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32ObjectDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32UInt32Dictionary
#define OBJC_CLASS_$_GPBUInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32UInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32UInt64Dictionary
#define OBJC_CLASS_$_GPBUInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32UInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt32Value
#define OBJC_CLASS_$_GPBUInt32Value WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt32Value)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64Array
#define OBJC_CLASS_$_GPBUInt64Array WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64Array)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64BoolDictionary
#define OBJC_CLASS_$_GPBUInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64BoolDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64DoubleDictionary
#define OBJC_CLASS_$_GPBUInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64DoubleDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64EnumDictionary
#define OBJC_CLASS_$_GPBUInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64EnumDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64FloatDictionary
#define OBJC_CLASS_$_GPBUInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64FloatDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64Int32Dictionary
#define OBJC_CLASS_$_GPBUInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64Int32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64Int64Dictionary
#define OBJC_CLASS_$_GPBUInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64Int64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64ObjectDictionary
#define OBJC_CLASS_$_GPBUInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64ObjectDictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64UInt32Dictionary
#define OBJC_CLASS_$_GPBUInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64UInt32Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64UInt64Dictionary
#define OBJC_CLASS_$_GPBUInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64UInt64Dictionary)
#endif

#ifndef OBJC_CLASS_$_GPBUInt64Value
#define OBJC_CLASS_$_GPBUInt64Value WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUInt64Value)
#endif

#ifndef OBJC_CLASS_$_GPBUnknownField
#define OBJC_CLASS_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUnknownField)
#endif

#ifndef OBJC_CLASS_$_GPBUnknownFieldSet
#define OBJC_CLASS_$_GPBUnknownFieldSet WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBUnknownFieldSet)
#endif

#ifndef OBJC_CLASS_$_GPBValue
#define OBJC_CLASS_$_GPBValue WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBValue)
#endif

#ifndef OBJC_CLASS_$_GPBWrappersRoot
#define OBJC_CLASS_$_GPBWrappersRoot WSO_PROTOC_SYMBOL(OBJC_CLASS_$_GPBWrappersRoot)
#endif

#ifndef OBJC_IVAR_$_GPBAutocreatedArray
#define OBJC_IVAR_$_GPBAutocreatedArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBAutocreatedArray)
#endif

#ifndef OBJC_IVAR_$_GPBAutocreatedArray
#define OBJC_IVAR_$_GPBAutocreatedArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBAutocreatedArray)
#endif

#ifndef OBJC_IVAR_$_GPBAutocreatedDictionary
#define OBJC_IVAR_$_GPBAutocreatedDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBAutocreatedDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBAutocreatedDictionary
#define OBJC_IVAR_$_GPBAutocreatedDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBAutocreatedDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolArray
#define OBJC_IVAR_$_GPBBoolArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolArray)
#endif

#ifndef OBJC_IVAR_$_GPBBoolArray
#define OBJC_IVAR_$_GPBBoolArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolArray)
#endif

#ifndef OBJC_IVAR_$_GPBBoolArray
#define OBJC_IVAR_$_GPBBoolArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolArray)
#endif

#ifndef OBJC_IVAR_$_GPBBoolArray
#define OBJC_IVAR_$_GPBBoolArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolArray)
#endif

#ifndef OBJC_IVAR_$_GPBBoolBoolDictionary
#define OBJC_IVAR_$_GPBBoolBoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolBoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolBoolDictionary
#define OBJC_IVAR_$_GPBBoolBoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolBoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolBoolDictionary
#define OBJC_IVAR_$_GPBBoolBoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolBoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolDoubleDictionary
#define OBJC_IVAR_$_GPBBoolDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolDoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolDoubleDictionary
#define OBJC_IVAR_$_GPBBoolDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolDoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolDoubleDictionary
#define OBJC_IVAR_$_GPBBoolDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolDoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolEnumDictionary
#define OBJC_IVAR_$_GPBBoolEnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolEnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolEnumDictionary
#define OBJC_IVAR_$_GPBBoolEnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolEnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolEnumDictionary
#define OBJC_IVAR_$_GPBBoolEnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolEnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolEnumDictionary
#define OBJC_IVAR_$_GPBBoolEnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolEnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolFloatDictionary
#define OBJC_IVAR_$_GPBBoolFloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolFloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolFloatDictionary
#define OBJC_IVAR_$_GPBBoolFloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolFloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolFloatDictionary
#define OBJC_IVAR_$_GPBBoolFloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolFloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolInt32Dictionary
#define OBJC_IVAR_$_GPBBoolInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolInt32Dictionary
#define OBJC_IVAR_$_GPBBoolInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolInt32Dictionary
#define OBJC_IVAR_$_GPBBoolInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolInt64Dictionary
#define OBJC_IVAR_$_GPBBoolInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolInt64Dictionary
#define OBJC_IVAR_$_GPBBoolInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolInt64Dictionary
#define OBJC_IVAR_$_GPBBoolInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolObjectDictionary
#define OBJC_IVAR_$_GPBBoolObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolObjectDictionary
#define OBJC_IVAR_$_GPBBoolObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolUInt32Dictionary
#define OBJC_IVAR_$_GPBBoolUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolUInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolUInt32Dictionary
#define OBJC_IVAR_$_GPBBoolUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolUInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolUInt32Dictionary
#define OBJC_IVAR_$_GPBBoolUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolUInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolUInt64Dictionary
#define OBJC_IVAR_$_GPBBoolUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolUInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolUInt64Dictionary
#define OBJC_IVAR_$_GPBBoolUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolUInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBBoolUInt64Dictionary
#define OBJC_IVAR_$_GPBBoolUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBBoolUInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBCodedInputStream
#define OBJC_IVAR_$_GPBCodedInputStream WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBCodedInputStream)
#endif

#ifndef OBJC_IVAR_$_GPBCodedInputStream
#define OBJC_IVAR_$_GPBCodedInputStream WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBCodedInputStream)
#endif

#ifndef OBJC_IVAR_$_GPBCodedOutputStream
#define OBJC_IVAR_$_GPBCodedOutputStream WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBCodedOutputStream)
#endif

#ifndef OBJC_IVAR_$_GPBCodedOutputStream
#define OBJC_IVAR_$_GPBCodedOutputStream WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBCodedOutputStream)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDescriptor
#define OBJC_IVAR_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBDoubleArray
#define OBJC_IVAR_$_GPBDoubleArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDoubleArray)
#endif

#ifndef OBJC_IVAR_$_GPBDoubleArray
#define OBJC_IVAR_$_GPBDoubleArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDoubleArray)
#endif

#ifndef OBJC_IVAR_$_GPBDoubleArray
#define OBJC_IVAR_$_GPBDoubleArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDoubleArray)
#endif

#ifndef OBJC_IVAR_$_GPBDoubleArray
#define OBJC_IVAR_$_GPBDoubleArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBDoubleArray)
#endif

#ifndef OBJC_IVAR_$_GPBEnumArray
#define OBJC_IVAR_$_GPBEnumArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumArray)
#endif

#ifndef OBJC_IVAR_$_GPBEnumArray
#define OBJC_IVAR_$_GPBEnumArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumArray)
#endif

#ifndef OBJC_IVAR_$_GPBEnumArray
#define OBJC_IVAR_$_GPBEnumArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumArray)
#endif

#ifndef OBJC_IVAR_$_GPBEnumArray
#define OBJC_IVAR_$_GPBEnumArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumArray)
#endif

#ifndef OBJC_IVAR_$_GPBEnumArray
#define OBJC_IVAR_$_GPBEnumArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumArray)
#endif

#ifndef OBJC_IVAR_$_GPBEnumDescriptor
#define OBJC_IVAR_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBEnumDescriptor
#define OBJC_IVAR_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBEnumDescriptor
#define OBJC_IVAR_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBEnumDescriptor
#define OBJC_IVAR_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBEnumDescriptor
#define OBJC_IVAR_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBEnumDescriptor
#define OBJC_IVAR_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBEnumDescriptor
#define OBJC_IVAR_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBExtensionDescriptor
#define OBJC_IVAR_$_GPBExtensionDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBExtensionDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBExtensionDescriptor
#define OBJC_IVAR_$_GPBExtensionDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBExtensionDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBExtensionDescriptor
#define OBJC_IVAR_$_GPBExtensionDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBExtensionDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBExtensionRegistry
#define OBJC_IVAR_$_GPBExtensionRegistry WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBExtensionRegistry)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFieldDescriptor
#define OBJC_IVAR_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFileDescriptor
#define OBJC_IVAR_$_GPBFileDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFileDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFileDescriptor
#define OBJC_IVAR_$_GPBFileDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFileDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFileDescriptor
#define OBJC_IVAR_$_GPBFileDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFileDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBFloatArray
#define OBJC_IVAR_$_GPBFloatArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFloatArray)
#endif

#ifndef OBJC_IVAR_$_GPBFloatArray
#define OBJC_IVAR_$_GPBFloatArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFloatArray)
#endif

#ifndef OBJC_IVAR_$_GPBFloatArray
#define OBJC_IVAR_$_GPBFloatArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFloatArray)
#endif

#ifndef OBJC_IVAR_$_GPBFloatArray
#define OBJC_IVAR_$_GPBFloatArray WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBFloatArray)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Array
#define OBJC_IVAR_$_GPBInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Array
#define OBJC_IVAR_$_GPBInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Array
#define OBJC_IVAR_$_GPBInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Array
#define OBJC_IVAR_$_GPBInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt32BoolDictionary
#define OBJC_IVAR_$_GPBInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32BoolDictionary
#define OBJC_IVAR_$_GPBInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32DoubleDictionary
#define OBJC_IVAR_$_GPBInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32DoubleDictionary
#define OBJC_IVAR_$_GPBInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32EnumDictionary
#define OBJC_IVAR_$_GPBInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32EnumDictionary
#define OBJC_IVAR_$_GPBInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32EnumDictionary
#define OBJC_IVAR_$_GPBInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32FloatDictionary
#define OBJC_IVAR_$_GPBInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32FloatDictionary
#define OBJC_IVAR_$_GPBInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Int32Dictionary
#define OBJC_IVAR_$_GPBInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Int32Dictionary
#define OBJC_IVAR_$_GPBInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Int64Dictionary
#define OBJC_IVAR_$_GPBInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32Int64Dictionary
#define OBJC_IVAR_$_GPBInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32ObjectDictionary
#define OBJC_IVAR_$_GPBInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32ObjectDictionary
#define OBJC_IVAR_$_GPBInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32UInt32Dictionary
#define OBJC_IVAR_$_GPBInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32UInt32Dictionary
#define OBJC_IVAR_$_GPBInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32UInt64Dictionary
#define OBJC_IVAR_$_GPBInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt32UInt64Dictionary
#define OBJC_IVAR_$_GPBInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt32UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Array
#define OBJC_IVAR_$_GPBInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Array
#define OBJC_IVAR_$_GPBInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Array
#define OBJC_IVAR_$_GPBInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Array
#define OBJC_IVAR_$_GPBInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBInt64BoolDictionary
#define OBJC_IVAR_$_GPBInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64BoolDictionary
#define OBJC_IVAR_$_GPBInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64DoubleDictionary
#define OBJC_IVAR_$_GPBInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64DoubleDictionary
#define OBJC_IVAR_$_GPBInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64EnumDictionary
#define OBJC_IVAR_$_GPBInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64EnumDictionary
#define OBJC_IVAR_$_GPBInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64EnumDictionary
#define OBJC_IVAR_$_GPBInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64FloatDictionary
#define OBJC_IVAR_$_GPBInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64FloatDictionary
#define OBJC_IVAR_$_GPBInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Int32Dictionary
#define OBJC_IVAR_$_GPBInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Int32Dictionary
#define OBJC_IVAR_$_GPBInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Int64Dictionary
#define OBJC_IVAR_$_GPBInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64Int64Dictionary
#define OBJC_IVAR_$_GPBInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64ObjectDictionary
#define OBJC_IVAR_$_GPBInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64ObjectDictionary
#define OBJC_IVAR_$_GPBInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64UInt32Dictionary
#define OBJC_IVAR_$_GPBInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64UInt32Dictionary
#define OBJC_IVAR_$_GPBInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64UInt64Dictionary
#define OBJC_IVAR_$_GPBInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBInt64UInt64Dictionary
#define OBJC_IVAR_$_GPBInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBInt64UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBMessage
#define OBJC_IVAR_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBMessage)
#endif

#ifndef OBJC_IVAR_$_GPBOneofDescriptor
#define OBJC_IVAR_$_GPBOneofDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBOneofDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBOneofDescriptor
#define OBJC_IVAR_$_GPBOneofDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBOneofDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBOneofDescriptor
#define OBJC_IVAR_$_GPBOneofDescriptor WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBOneofDescriptor)
#endif

#ifndef OBJC_IVAR_$_GPBStringBoolDictionary
#define OBJC_IVAR_$_GPBStringBoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringBoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringBoolDictionary
#define OBJC_IVAR_$_GPBStringBoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringBoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringDoubleDictionary
#define OBJC_IVAR_$_GPBStringDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringDoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringDoubleDictionary
#define OBJC_IVAR_$_GPBStringDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringDoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringEnumDictionary
#define OBJC_IVAR_$_GPBStringEnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringEnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringEnumDictionary
#define OBJC_IVAR_$_GPBStringEnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringEnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringEnumDictionary
#define OBJC_IVAR_$_GPBStringEnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringEnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringFloatDictionary
#define OBJC_IVAR_$_GPBStringFloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringFloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringFloatDictionary
#define OBJC_IVAR_$_GPBStringFloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringFloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringInt32Dictionary
#define OBJC_IVAR_$_GPBStringInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringInt32Dictionary
#define OBJC_IVAR_$_GPBStringInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringInt64Dictionary
#define OBJC_IVAR_$_GPBStringInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringInt64Dictionary
#define OBJC_IVAR_$_GPBStringInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringUInt32Dictionary
#define OBJC_IVAR_$_GPBStringUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringUInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringUInt32Dictionary
#define OBJC_IVAR_$_GPBStringUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringUInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringUInt64Dictionary
#define OBJC_IVAR_$_GPBStringUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringUInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBStringUInt64Dictionary
#define OBJC_IVAR_$_GPBStringUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBStringUInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Array
#define OBJC_IVAR_$_GPBUInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Array
#define OBJC_IVAR_$_GPBUInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Array
#define OBJC_IVAR_$_GPBUInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Array
#define OBJC_IVAR_$_GPBUInt32Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32BoolDictionary
#define OBJC_IVAR_$_GPBUInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32BoolDictionary
#define OBJC_IVAR_$_GPBUInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32DoubleDictionary
#define OBJC_IVAR_$_GPBUInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32DoubleDictionary
#define OBJC_IVAR_$_GPBUInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32EnumDictionary
#define OBJC_IVAR_$_GPBUInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32EnumDictionary
#define OBJC_IVAR_$_GPBUInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32EnumDictionary
#define OBJC_IVAR_$_GPBUInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32FloatDictionary
#define OBJC_IVAR_$_GPBUInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32FloatDictionary
#define OBJC_IVAR_$_GPBUInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Int32Dictionary
#define OBJC_IVAR_$_GPBUInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Int32Dictionary
#define OBJC_IVAR_$_GPBUInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Int64Dictionary
#define OBJC_IVAR_$_GPBUInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32Int64Dictionary
#define OBJC_IVAR_$_GPBUInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32ObjectDictionary
#define OBJC_IVAR_$_GPBUInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32ObjectDictionary
#define OBJC_IVAR_$_GPBUInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32UInt32Dictionary
#define OBJC_IVAR_$_GPBUInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32UInt32Dictionary
#define OBJC_IVAR_$_GPBUInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32UInt64Dictionary
#define OBJC_IVAR_$_GPBUInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt32UInt64Dictionary
#define OBJC_IVAR_$_GPBUInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt32UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Array
#define OBJC_IVAR_$_GPBUInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Array
#define OBJC_IVAR_$_GPBUInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Array
#define OBJC_IVAR_$_GPBUInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Array
#define OBJC_IVAR_$_GPBUInt64Array WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Array)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64BoolDictionary
#define OBJC_IVAR_$_GPBUInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64BoolDictionary
#define OBJC_IVAR_$_GPBUInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64BoolDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64DoubleDictionary
#define OBJC_IVAR_$_GPBUInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64DoubleDictionary
#define OBJC_IVAR_$_GPBUInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64DoubleDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64EnumDictionary
#define OBJC_IVAR_$_GPBUInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64EnumDictionary
#define OBJC_IVAR_$_GPBUInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64EnumDictionary
#define OBJC_IVAR_$_GPBUInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64EnumDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64FloatDictionary
#define OBJC_IVAR_$_GPBUInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64FloatDictionary
#define OBJC_IVAR_$_GPBUInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64FloatDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Int32Dictionary
#define OBJC_IVAR_$_GPBUInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Int32Dictionary
#define OBJC_IVAR_$_GPBUInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Int32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Int64Dictionary
#define OBJC_IVAR_$_GPBUInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64Int64Dictionary
#define OBJC_IVAR_$_GPBUInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64Int64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64ObjectDictionary
#define OBJC_IVAR_$_GPBUInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64ObjectDictionary
#define OBJC_IVAR_$_GPBUInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64ObjectDictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64UInt32Dictionary
#define OBJC_IVAR_$_GPBUInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64UInt32Dictionary
#define OBJC_IVAR_$_GPBUInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64UInt32Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64UInt64Dictionary
#define OBJC_IVAR_$_GPBUInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUInt64UInt64Dictionary
#define OBJC_IVAR_$_GPBUInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUInt64UInt64Dictionary)
#endif

#ifndef OBJC_IVAR_$_GPBUnknownField
#define OBJC_IVAR_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUnknownField)
#endif

#ifndef OBJC_IVAR_$_GPBUnknownField
#define OBJC_IVAR_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUnknownField)
#endif

#ifndef OBJC_IVAR_$_GPBUnknownField
#define OBJC_IVAR_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUnknownField)
#endif

#ifndef OBJC_IVAR_$_GPBUnknownField
#define OBJC_IVAR_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUnknownField)
#endif

#ifndef OBJC_IVAR_$_GPBUnknownField
#define OBJC_IVAR_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUnknownField)
#endif

#ifndef OBJC_IVAR_$_GPBUnknownField
#define OBJC_IVAR_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUnknownField)
#endif

#ifndef OBJC_IVAR_$_GPBUnknownFieldSet
#define OBJC_IVAR_$_GPBUnknownFieldSet WSO_PROTOC_SYMBOL(OBJC_IVAR_$_GPBUnknownFieldSet)
#endif

#ifndef OBJC_METACLASS_$_GPBAny
#define OBJC_METACLASS_$_GPBAny WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBAny)
#endif

#ifndef OBJC_METACLASS_$_GPBAnyRoot
#define OBJC_METACLASS_$_GPBAnyRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBAnyRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBApi
#define OBJC_METACLASS_$_GPBApi WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBApi)
#endif

#ifndef OBJC_METACLASS_$_GPBApiRoot
#define OBJC_METACLASS_$_GPBApiRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBApiRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBAutocreatedArray
#define OBJC_METACLASS_$_GPBAutocreatedArray WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBAutocreatedArray)
#endif

#ifndef OBJC_METACLASS_$_GPBAutocreatedDictionary
#define OBJC_METACLASS_$_GPBAutocreatedDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBAutocreatedDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolArray
#define OBJC_METACLASS_$_GPBBoolArray WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolArray)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolBoolDictionary
#define OBJC_METACLASS_$_GPBBoolBoolDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolBoolDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolDoubleDictionary
#define OBJC_METACLASS_$_GPBBoolDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolDoubleDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolEnumDictionary
#define OBJC_METACLASS_$_GPBBoolEnumDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolEnumDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolFloatDictionary
#define OBJC_METACLASS_$_GPBBoolFloatDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolFloatDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolInt32Dictionary
#define OBJC_METACLASS_$_GPBBoolInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolInt64Dictionary
#define OBJC_METACLASS_$_GPBBoolInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolObjectDictionary
#define OBJC_METACLASS_$_GPBBoolObjectDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolObjectDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolUInt32Dictionary
#define OBJC_METACLASS_$_GPBBoolUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolUInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolUInt64Dictionary
#define OBJC_METACLASS_$_GPBBoolUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolUInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBBoolValue
#define OBJC_METACLASS_$_GPBBoolValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBoolValue)
#endif

#ifndef OBJC_METACLASS_$_GPBBytesValue
#define OBJC_METACLASS_$_GPBBytesValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBBytesValue)
#endif

#ifndef OBJC_METACLASS_$_GPBCodedInputStream
#define OBJC_METACLASS_$_GPBCodedInputStream WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBCodedInputStream)
#endif

#ifndef OBJC_METACLASS_$_GPBCodedOutputStream
#define OBJC_METACLASS_$_GPBCodedOutputStream WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBCodedOutputStream)
#endif

#ifndef OBJC_METACLASS_$_GPBDescriptor
#define OBJC_METACLASS_$_GPBDescriptor WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBDescriptor)
#endif

#ifndef OBJC_METACLASS_$_GPBDoubleArray
#define OBJC_METACLASS_$_GPBDoubleArray WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBDoubleArray)
#endif

#ifndef OBJC_METACLASS_$_GPBDoubleValue
#define OBJC_METACLASS_$_GPBDoubleValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBDoubleValue)
#endif

#ifndef OBJC_METACLASS_$_GPBDuration
#define OBJC_METACLASS_$_GPBDuration WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBDuration)
#endif

#ifndef OBJC_METACLASS_$_GPBDurationRoot
#define OBJC_METACLASS_$_GPBDurationRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBDurationRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBEmpty
#define OBJC_METACLASS_$_GPBEmpty WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBEmpty)
#endif

#ifndef OBJC_METACLASS_$_GPBEmptyRoot
#define OBJC_METACLASS_$_GPBEmptyRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBEmptyRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBEnum
#define OBJC_METACLASS_$_GPBEnum WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBEnum)
#endif

#ifndef OBJC_METACLASS_$_GPBEnumArray
#define OBJC_METACLASS_$_GPBEnumArray WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBEnumArray)
#endif

#ifndef OBJC_METACLASS_$_GPBEnumDescriptor
#define OBJC_METACLASS_$_GPBEnumDescriptor WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBEnumDescriptor)
#endif

#ifndef OBJC_METACLASS_$_GPBEnumValue
#define OBJC_METACLASS_$_GPBEnumValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBEnumValue)
#endif

#ifndef OBJC_METACLASS_$_GPBExtensionDescriptor
#define OBJC_METACLASS_$_GPBExtensionDescriptor WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBExtensionDescriptor)
#endif

#ifndef OBJC_METACLASS_$_GPBExtensionRegistry
#define OBJC_METACLASS_$_GPBExtensionRegistry WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBExtensionRegistry)
#endif

#ifndef OBJC_METACLASS_$_GPBField
#define OBJC_METACLASS_$_GPBField WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBField)
#endif

#ifndef OBJC_METACLASS_$_GPBFieldDescriptor
#define OBJC_METACLASS_$_GPBFieldDescriptor WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBFieldDescriptor)
#endif

#ifndef OBJC_METACLASS_$_GPBFieldMask
#define OBJC_METACLASS_$_GPBFieldMask WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBFieldMask)
#endif

#ifndef OBJC_METACLASS_$_GPBFieldMaskRoot
#define OBJC_METACLASS_$_GPBFieldMaskRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBFieldMaskRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBFileDescriptor
#define OBJC_METACLASS_$_GPBFileDescriptor WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBFileDescriptor)
#endif

#ifndef OBJC_METACLASS_$_GPBFloatArray
#define OBJC_METACLASS_$_GPBFloatArray WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBFloatArray)
#endif

#ifndef OBJC_METACLASS_$_GPBFloatValue
#define OBJC_METACLASS_$_GPBFloatValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBFloatValue)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32Array
#define OBJC_METACLASS_$_GPBInt32Array WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32Array)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32BoolDictionary
#define OBJC_METACLASS_$_GPBInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32BoolDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32DoubleDictionary
#define OBJC_METACLASS_$_GPBInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32DoubleDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32EnumDictionary
#define OBJC_METACLASS_$_GPBInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32EnumDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32FloatDictionary
#define OBJC_METACLASS_$_GPBInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32FloatDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32Int32Dictionary
#define OBJC_METACLASS_$_GPBInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32Int32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32Int64Dictionary
#define OBJC_METACLASS_$_GPBInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32Int64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32ObjectDictionary
#define OBJC_METACLASS_$_GPBInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32ObjectDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32UInt32Dictionary
#define OBJC_METACLASS_$_GPBInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32UInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32UInt64Dictionary
#define OBJC_METACLASS_$_GPBInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32UInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt32Value
#define OBJC_METACLASS_$_GPBInt32Value WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt32Value)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64Array
#define OBJC_METACLASS_$_GPBInt64Array WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64Array)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64BoolDictionary
#define OBJC_METACLASS_$_GPBInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64BoolDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64DoubleDictionary
#define OBJC_METACLASS_$_GPBInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64DoubleDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64EnumDictionary
#define OBJC_METACLASS_$_GPBInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64EnumDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64FloatDictionary
#define OBJC_METACLASS_$_GPBInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64FloatDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64Int32Dictionary
#define OBJC_METACLASS_$_GPBInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64Int32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64Int64Dictionary
#define OBJC_METACLASS_$_GPBInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64Int64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64ObjectDictionary
#define OBJC_METACLASS_$_GPBInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64ObjectDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64UInt32Dictionary
#define OBJC_METACLASS_$_GPBInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64UInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64UInt64Dictionary
#define OBJC_METACLASS_$_GPBInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64UInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBInt64Value
#define OBJC_METACLASS_$_GPBInt64Value WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBInt64Value)
#endif

#ifndef OBJC_METACLASS_$_GPBListValue
#define OBJC_METACLASS_$_GPBListValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBListValue)
#endif

#ifndef OBJC_METACLASS_$_GPBMessage
#define OBJC_METACLASS_$_GPBMessage WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBMessage)
#endif

#ifndef OBJC_METACLASS_$_GPBMethod
#define OBJC_METACLASS_$_GPBMethod WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBMethod)
#endif

#ifndef OBJC_METACLASS_$_GPBMixin
#define OBJC_METACLASS_$_GPBMixin WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBMixin)
#endif

#ifndef OBJC_METACLASS_$_GPBOneofDescriptor
#define OBJC_METACLASS_$_GPBOneofDescriptor WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBOneofDescriptor)
#endif

#ifndef OBJC_METACLASS_$_GPBOption
#define OBJC_METACLASS_$_GPBOption WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBOption)
#endif

#ifndef OBJC_METACLASS_$_GPBRootObject
#define OBJC_METACLASS_$_GPBRootObject WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBRootObject)
#endif

#ifndef OBJC_METACLASS_$_GPBSourceContext
#define OBJC_METACLASS_$_GPBSourceContext WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBSourceContext)
#endif

#ifndef OBJC_METACLASS_$_GPBSourceContextRoot
#define OBJC_METACLASS_$_GPBSourceContextRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBSourceContextRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBStringBoolDictionary
#define OBJC_METACLASS_$_GPBStringBoolDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringBoolDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringDoubleDictionary
#define OBJC_METACLASS_$_GPBStringDoubleDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringDoubleDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringEnumDictionary
#define OBJC_METACLASS_$_GPBStringEnumDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringEnumDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringFloatDictionary
#define OBJC_METACLASS_$_GPBStringFloatDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringFloatDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringInt32Dictionary
#define OBJC_METACLASS_$_GPBStringInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringInt64Dictionary
#define OBJC_METACLASS_$_GPBStringInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringUInt32Dictionary
#define OBJC_METACLASS_$_GPBStringUInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringUInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringUInt64Dictionary
#define OBJC_METACLASS_$_GPBStringUInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringUInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBStringValue
#define OBJC_METACLASS_$_GPBStringValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStringValue)
#endif

#ifndef OBJC_METACLASS_$_GPBStruct
#define OBJC_METACLASS_$_GPBStruct WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStruct)
#endif

#ifndef OBJC_METACLASS_$_GPBStructRoot
#define OBJC_METACLASS_$_GPBStructRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBStructRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBTimestamp
#define OBJC_METACLASS_$_GPBTimestamp WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBTimestamp)
#endif

#ifndef OBJC_METACLASS_$_GPBTimestampRoot
#define OBJC_METACLASS_$_GPBTimestampRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBTimestampRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBType
#define OBJC_METACLASS_$_GPBType WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBType)
#endif

#ifndef OBJC_METACLASS_$_GPBTypeRoot
#define OBJC_METACLASS_$_GPBTypeRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBTypeRoot)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32Array
#define OBJC_METACLASS_$_GPBUInt32Array WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32Array)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32BoolDictionary
#define OBJC_METACLASS_$_GPBUInt32BoolDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32BoolDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32DoubleDictionary
#define OBJC_METACLASS_$_GPBUInt32DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32DoubleDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32EnumDictionary
#define OBJC_METACLASS_$_GPBUInt32EnumDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32EnumDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32FloatDictionary
#define OBJC_METACLASS_$_GPBUInt32FloatDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32FloatDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32Int32Dictionary
#define OBJC_METACLASS_$_GPBUInt32Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32Int32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32Int64Dictionary
#define OBJC_METACLASS_$_GPBUInt32Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32Int64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32ObjectDictionary
#define OBJC_METACLASS_$_GPBUInt32ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32ObjectDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32UInt32Dictionary
#define OBJC_METACLASS_$_GPBUInt32UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32UInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32UInt64Dictionary
#define OBJC_METACLASS_$_GPBUInt32UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32UInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt32Value
#define OBJC_METACLASS_$_GPBUInt32Value WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt32Value)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64Array
#define OBJC_METACLASS_$_GPBUInt64Array WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64Array)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64BoolDictionary
#define OBJC_METACLASS_$_GPBUInt64BoolDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64BoolDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64DoubleDictionary
#define OBJC_METACLASS_$_GPBUInt64DoubleDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64DoubleDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64EnumDictionary
#define OBJC_METACLASS_$_GPBUInt64EnumDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64EnumDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64FloatDictionary
#define OBJC_METACLASS_$_GPBUInt64FloatDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64FloatDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64Int32Dictionary
#define OBJC_METACLASS_$_GPBUInt64Int32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64Int32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64Int64Dictionary
#define OBJC_METACLASS_$_GPBUInt64Int64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64Int64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64ObjectDictionary
#define OBJC_METACLASS_$_GPBUInt64ObjectDictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64ObjectDictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64UInt32Dictionary
#define OBJC_METACLASS_$_GPBUInt64UInt32Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64UInt32Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64UInt64Dictionary
#define OBJC_METACLASS_$_GPBUInt64UInt64Dictionary WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64UInt64Dictionary)
#endif

#ifndef OBJC_METACLASS_$_GPBUInt64Value
#define OBJC_METACLASS_$_GPBUInt64Value WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUInt64Value)
#endif

#ifndef OBJC_METACLASS_$_GPBUnknownField
#define OBJC_METACLASS_$_GPBUnknownField WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUnknownField)
#endif

#ifndef OBJC_METACLASS_$_GPBUnknownFieldSet
#define OBJC_METACLASS_$_GPBUnknownFieldSet WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBUnknownFieldSet)
#endif

#ifndef OBJC_METACLASS_$_GPBValue
#define OBJC_METACLASS_$_GPBValue WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBValue)
#endif

#ifndef OBJC_METACLASS_$_GPBWrappersRoot
#define OBJC_METACLASS_$_GPBWrappersRoot WSO_PROTOC_SYMBOL(OBJC_METACLASS_$_GPBWrappersRoot)
#endif

#ifndef GPBCodedInputStreamErrorDomain
#define GPBCodedInputStreamErrorDomain WSO_PROTOC_SYMBOL(GPBCodedInputStreamErrorDomain)
#endif

#ifndef GPBCodedInputStreamException
#define GPBCodedInputStreamException WSO_PROTOC_SYMBOL(GPBCodedInputStreamException)
#endif

#ifndef GPBCodedInputStreamUnderlyingErrorKey
#define GPBCodedInputStreamUnderlyingErrorKey WSO_PROTOC_SYMBOL(GPBCodedInputStreamUnderlyingErrorKey)
#endif

#ifndef GPBCodedOutputStreamException_OutOfSpace
#define GPBCodedOutputStreamException_OutOfSpace WSO_PROTOC_SYMBOL(GPBCodedOutputStreamException_OutOfSpace)
#endif

#ifndef GPBCodedOutputStreamException_WriteFailed
#define GPBCodedOutputStreamException_WriteFailed WSO_PROTOC_SYMBOL(GPBCodedOutputStreamException_WriteFailed)
#endif

#ifndef GPBErrorReasonKey
#define GPBErrorReasonKey WSO_PROTOC_SYMBOL(GPBErrorReasonKey)
#endif

#ifndef GPBMessageErrorDomain
#define GPBMessageErrorDomain WSO_PROTOC_SYMBOL(GPBMessageErrorDomain)
#endif

#ifndef GPBWellKnownTypesErrorDomain
#define GPBWellKnownTypesErrorDomain WSO_PROTOC_SYMBOL(GPBWellKnownTypesErrorDomain)
#endif

#endif
