#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NETWORK_PHYSICAL_NAME_INFORMATION.FileNameLength", file_name_length, 0x0, 0x20, true, 0x67b5caa0749347a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_NETWORK_PHYSICAL_NAME_INFORMATION.FileName", file_name, 0x20, 0x10, true, 0xc4e1e695afbfe40c)
#else
#define _m00
#define _m01
#endif