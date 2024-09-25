#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOW.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x20, true, 0x37dfe8697d1117f8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOW.dwMajorVersion", dw_major_version, 0x20, 0x20, true, 0x5a102f81c10286fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOW.dwMinorVersion", dw_minor_version, 0x40, 0x20, true, 0xdb1aae3504ba198a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOW.dwBuildNumber", dw_build_number, 0x60, 0x20, true, 0x7e66825402e5e120)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOW.dwPlatformId", dw_platform_id, 0x80, 0x20, true, 0x8556284d39da37e5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_OSVERSIONINFOW.szCSDVersion", sz_csd_version, 0xa0, 0x0, true, 0x60a29a2b20aada59)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif