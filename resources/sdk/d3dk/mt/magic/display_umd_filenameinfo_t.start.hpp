#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kmt_display_umd_version_t), "_D3DKMT_DISPLAY_UMD_FILENAMEINFO.Version", version, 0x0, 0x20, true, 0xd25568c7859d46f9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DKMT_DISPLAY_UMD_FILENAMEINFO.UmdFileName", umd_file_name, 0x20, 0x40, true, 0x8b64c3f2963e8cd)
#else
#define _m00
#define _m01
#endif