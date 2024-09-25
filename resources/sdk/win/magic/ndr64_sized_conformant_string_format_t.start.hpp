#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_string_header_format_t), "NDR64_SIZED_CONFORMANT_STRING_FORMAT.Header", header, 0x0, 0x20, true, 0x4ec9177e88a00e87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "NDR64_SIZED_CONFORMANT_STRING_FORMAT.SizeDescription", size_description, 0x40, 0x40, true, 0xae3745e19dce209f)
#else
#define _m00
#define _m01
#endif