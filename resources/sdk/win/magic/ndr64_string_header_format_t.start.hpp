#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NDR64_STRING_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x9b697324e57f4bde)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_string_flags_t), "NDR64_STRING_HEADER_FORMAT.Flags", flags, 0x8, 0x8, true, 0x4c2ce8d8c2fb5043)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDR64_STRING_HEADER_FORMAT.ElementSize", element_size, 0x10, 0x10, true, 0xa6e7924d8d54ab7e)
#else
#define _m00
#define _m01
#define _m02
#endif