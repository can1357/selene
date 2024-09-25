#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_string_header_format_t), "_NDR64_NON_CONFORMANT_STRING_FORMAT.Header", header, 0x0, 0x20, true, 0x97a6d33c186c58e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_NON_CONFORMANT_STRING_FORMAT.TotalSize", total_size, 0x20, 0x20, true, 0x2e86ca3f9b8c095d)
#else
#define _m00
#define _m01
#endif