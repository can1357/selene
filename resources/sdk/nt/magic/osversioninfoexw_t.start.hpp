#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXW.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x20, true, 0x8736a5e6c88d47a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXW.dwMajorVersion", dw_major_version, 0x20, 0x20, true, 0x92e85b7c769fa7ba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXW.dwMinorVersion", dw_minor_version, 0x40, 0x20, true, 0x7637fa257d08be07)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXW.dwBuildNumber", dw_build_number, 0x60, 0x20, true, 0x81819153c5da9a0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXW.dwPlatformId", dw_platform_id, 0x80, 0x20, true, 0x256832b925e8349a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_OSVERSIONINFOEXW.szCSDVersion", sz_csd_version, 0xa0, 0x0, true, 0x3409ac723edb658a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEXW.wServicePackMajor", w_service_pack_major, 0x8a0, 0x10, true, 0x7dae7093763224f5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEXW.wServicePackMinor", w_service_pack_minor, 0x8b0, 0x10, true, 0x41fa73188f210579)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEXW.wSuiteMask", w_suite_mask, 0x8c0, 0x10, true, 0x4e1b70253576404b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEXW.wProductType", w_product_type, 0x8d0, 0x8, true, 0xa5db7fd948a01f86)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEXW.wReserved", w_reserved, 0x8d8, 0x8, true, 0x6ee4a24d7abe3019)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif