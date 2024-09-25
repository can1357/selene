#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROFILE_SOURCE_INFO.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x60ac7a1ddf8f638)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROFILE_SOURCE_INFO.Source", source, 0x20, 0x20, true, 0xd30a12a3b27c6847)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROFILE_SOURCE_INFO.MinInterval", min_interval, 0x40, 0x20, true, 0xe788fa23a4d04133)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROFILE_SOURCE_INFO.MaxInterval", max_interval, 0x60, 0x20, true, 0x5566181bae5ae08a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PROFILE_SOURCE_INFO.Description", description, 0xc0, 0x10, true, 0xb38829b2c1956a4c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif