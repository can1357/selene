#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.HeaderData", header_data, 0x0, 0x20, true, 0xb4ef9cba655a755b)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint18_t), "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.FunctionLength", function_length, 0x0, 0x12, true, 0x2ef2052432a8f3c4, 18, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.Version", version, 0x12, 0x2, true, 0x16db57c728c1aac4, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.ExceptionDataPresent", exception_data_present, 0x14, 0x1, true, 0xc8f398fdd67adf08, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.EpilogInHeader", epilog_in_header, 0x15, 0x1, true, 0xed90ad50b4b39081, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.EpilogCount", epilog_count, 0x16, 0x5, true, 0x97c6d07e5e582c78, 5, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY_XDATA.CodeWords", code_words, 0x1b, 0x5, true, 0xaa8affb5b914cef9, 5, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif