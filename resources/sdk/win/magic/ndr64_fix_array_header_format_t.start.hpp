#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_FIX_ARRAY_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xe69c83de21c4baf1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_FIX_ARRAY_HEADER_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0xbc3925d22fbfc109)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_array_flags_t), "_NDR64_FIX_ARRAY_HEADER_FORMAT.Flags", flags, 0x10, 0x8, true, 0x9b9244d201faf6e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_FIX_ARRAY_HEADER_FORMAT.TotalSize", total_size, 0x20, 0x20, true, 0x659966b0e48022d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif