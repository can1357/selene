#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATHNAME_BUFFER.PathNameLength", path_name_length, 0x0, 0x20, true, 0x98528de38bf75a74)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PATHNAME_BUFFER.Name", name, 0x20, 0x10, true, 0x1251c4de4453cc35)
#else
#define _m00
#define _m01
#endif