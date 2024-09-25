#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kmtumdversion_t), "_D3DKMT_UMDFILENAMEINFO.Version", version, 0x0, 0x20, true, 0xa31f6f8384a6f971)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DKMT_UMDFILENAMEINFO.UmdFileName", umd_file_name, 0x20, 0x40, true, 0x1cbd4fd190323373)
#else
#define _m00
#define _m01
#endif