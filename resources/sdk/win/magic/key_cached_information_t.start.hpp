#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KEY_CACHED_INFORMATION.LastWriteTime", last_write_time, 0x0, 0x40, true, 0x778106dde9f19274)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_CACHED_INFORMATION.TitleIndex", title_index, 0x40, 0x20, true, 0x1ea868d06f09b0d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_CACHED_INFORMATION.SubKeys", sub_keys, 0x60, 0x20, true, 0x6520ab73486e8e17)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_CACHED_INFORMATION.MaxNameLen", max_name_len, 0x80, 0x20, true, 0x441751ed37b340ad)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_CACHED_INFORMATION.Values", values, 0xa0, 0x20, true, 0x8abbe6d55df2d389)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_CACHED_INFORMATION.MaxValueNameLen", max_value_name_len, 0xc0, 0x20, true, 0x7bc06acba1a2999e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_CACHED_INFORMATION.MaxValueDataLen", max_value_data_len, 0xe0, 0x20, true, 0x5c61a7d81cccb4ec)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_CACHED_INFORMATION.NameLength", name_length, 0x100, 0x20, true, 0xf6e0e4833ce7aedb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif