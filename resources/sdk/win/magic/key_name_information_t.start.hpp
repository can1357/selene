#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_NAME_INFORMATION.NameLength", name_length, 0x0, 0x20, true, 0xeb5ed022b59f85e2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_KEY_NAME_INFORMATION.Name", name, 0x20, 0x10, true, 0x53ebde88096a589f)
#else
#define _m00
#define _m01
#endif