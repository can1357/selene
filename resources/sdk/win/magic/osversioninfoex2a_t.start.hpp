#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2A.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x20, true, 0x3e3eb923e8797964)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2A.dwMajorVersion", dw_major_version, 0x20, 0x20, true, 0x88ec0a610dfbe779)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2A.dwMinorVersion", dw_minor_version, 0x40, 0x20, true, 0xee4acc3db7b820e3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2A.dwBuildNumber", dw_build_number, 0x60, 0x20, true, 0xe088c226ef38081b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2A.dwPlatformId", dw_platform_id, 0x80, 0x20, true, 0xb73503e334841f1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_OSVERSIONINFOEX2A.szCSDVersion", sz_csd_version, 0xa0, 0x0, true, 0x9c4b45eadd9019d4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX2A.wServicePackMajor", w_service_pack_major, 0x4a0, 0x10, true, 0xf33dc9f819d4b787)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX2A.wServicePackMinor", w_service_pack_minor, 0x4b0, 0x10, true, 0xb6d268e1755fdc01)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX2A.wSuiteMask", w_suite_mask, 0x4c0, 0x10, true, 0xa2c02af224621d05)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX2A.wProductType", w_product_type, 0x4d0, 0x8, true, 0x1b4c167fce8c71ec)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX2A.wReserved", w_reserved, 0x4d8, 0x8, true, 0x20a71800ebf345d8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2A.wSuiteMaskEx", w_suite_mask_ex, 0x4e0, 0x20, true, 0xb3b13243b9dd7833)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2A.wReserved2", w_reserved2, 0x500, 0x20, true, 0xcd8faac4a4029ee6)
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
#define _m11
#define _m12
#endif