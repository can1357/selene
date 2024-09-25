#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KEY_BASIC_INFORMATION.LastWriteTime", last_write_time, 0x0, 0x40, true, 0x83934b3a6fd94b46)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_BASIC_INFORMATION.TitleIndex", title_index, 0x40, 0x20, true, 0x26d7d534b975b59a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_BASIC_INFORMATION.NameLength", name_length, 0x60, 0x20, true, 0x9ead61f9f5dff16d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_KEY_BASIC_INFORMATION.Name", name, 0x80, 0x10, true, 0xb1852e7208659f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif