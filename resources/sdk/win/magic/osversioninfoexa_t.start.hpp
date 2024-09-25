#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXA.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x20, true, 0x9d62811e95a9ecc4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXA.dwMajorVersion", dw_major_version, 0x20, 0x20, true, 0xae54c66e23cbea69)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXA.dwMinorVersion", dw_minor_version, 0x40, 0x20, true, 0x439cceb81562337c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXA.dwBuildNumber", dw_build_number, 0x60, 0x20, true, 0xbae958dd92da72e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEXA.dwPlatformId", dw_platform_id, 0x80, 0x20, true, 0x1a11d80f126cc8cf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_OSVERSIONINFOEXA.szCSDVersion", sz_csd_version, 0xa0, 0x0, true, 0x97c8d1afce72fa65)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEXA.wServicePackMajor", w_service_pack_major, 0x4a0, 0x10, true, 0x3061c80b5684af22)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEXA.wServicePackMinor", w_service_pack_minor, 0x4b0, 0x10, true, 0x2f23cd97e27eb2fe)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEXA.wSuiteMask", w_suite_mask, 0x4c0, 0x10, true, 0xfeac8fde62186c9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEXA.wProductType", w_product_type, 0x4d0, 0x8, true, 0xc781c66a882ed416)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEXA.wReserved", w_reserved, 0x4d8, 0x8, true, 0xa3c3032440c1ea61)
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