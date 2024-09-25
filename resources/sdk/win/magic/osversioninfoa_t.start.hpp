#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOA.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x20, true, 0x625df6e56d2d1b31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOA.dwMajorVersion", dw_major_version, 0x20, 0x20, true, 0xce26dcf2db999853)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOA.dwMinorVersion", dw_minor_version, 0x40, 0x20, true, 0xa0570624f45c16d2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOA.dwBuildNumber", dw_build_number, 0x60, 0x20, true, 0xaa3879b8c0581f3f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOA.dwPlatformId", dw_platform_id, 0x80, 0x20, true, 0x696aea59928d461f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_OSVERSIONINFOA.szCSDVersion", sz_csd_version, 0xa0, 0x0, true, 0x83dc8fb00b93f857)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif