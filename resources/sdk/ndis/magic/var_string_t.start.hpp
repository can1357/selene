#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VAR_STRING.ulTotalSize", ul_total_size, 0x0, 0x20, true, 0xc8961ad9e264c943)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VAR_STRING.ulNeededSize", ul_needed_size, 0x20, 0x20, true, 0x4675d1a126c5a0fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VAR_STRING.ulUsedSize", ul_used_size, 0x40, 0x20, true, 0xf9b5d8118cf1571a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VAR_STRING.ulStringFormat", ul_string_format, 0x60, 0x20, true, 0xe19e2cdea44e38a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VAR_STRING.ulStringSize", ul_string_size, 0x80, 0x20, true, 0x382c08f7a34f7fe8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VAR_STRING.ulStringOffset", ul_string_offset, 0xa0, 0x20, true, 0xa9c78840bbfdf81a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif