#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2W.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x20, true, 0x3b1c2915c8f0d6fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2W.dwMajorVersion", dw_major_version, 0x20, 0x20, true, 0xb59c7286685e233f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2W.dwMinorVersion", dw_minor_version, 0x40, 0x20, true, 0x77a6e31bf1a0c282)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2W.dwBuildNumber", dw_build_number, 0x60, 0x20, true, 0x62e30f7009c86c9b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2W.dwPlatformId", dw_platform_id, 0x80, 0x20, true, 0x133d9783b5b9dbe2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_OSVERSIONINFOEX2W.szCSDVersion", sz_csd_version, 0xa0, 0x0, true, 0x9c6749402510a056)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX2W.wServicePackMajor", w_service_pack_major, 0x8a0, 0x10, true, 0xb00916fd78c65390)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX2W.wServicePackMinor", w_service_pack_minor, 0x8b0, 0x10, true, 0xd1ed67ea453965b2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX2W.wSuiteMask", w_suite_mask, 0x8c0, 0x10, true, 0x5ba3f06d0f9d337f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX2W.wProductType", w_product_type, 0x8d0, 0x8, true, 0x8c32d44c910268db)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX2W.wReserved", w_reserved, 0x8d8, 0x8, true, 0xe63a13468b3bdfa1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2W.wSuiteMaskEx", w_suite_mask_ex, 0x8e0, 0x20, true, 0x89ef1d4de0c71177)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX2W.wReserved2", w_reserved2, 0x900, 0x20, true, 0x609526c5b16762ae)
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