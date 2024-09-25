#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x0, false, 0x53a6a24c1462454b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.dwMajorVersion", dw_major_version, 0x0, 0x0, false, 0x7de425b4b8c28917)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.dwMinorVersion", dw_minor_version, 0x0, 0x0, false, 0x62e9a814b486734c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.dwBuildNumber", dw_build_number, 0x0, 0x0, false, 0xe19bed71dd795dfe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.dwPlatformId", dw_platform_id, 0x0, 0x0, false, 0x57007eec794769e5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.dwQfeNumber", dw_qfe_number, 0x0, 0x0, false, 0x8b722f1dc8833ee8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_OSVERSIONINFOEX3W.szCSDVersion", sz_csd_version, 0x0, 0x0, false, 0x9f52a18082597b20)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_OSVERSIONINFOEX3W.szLayerAttrib", sz_layer_attrib, 0x0, 0x0, false, 0x1108ba44ac2c10ab)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3W.wServicePackMajor", w_service_pack_major, 0x0, 0x0, false, 0x279c3924945565eb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3W.wServicePackMinor", w_service_pack_minor, 0x0, 0x0, false, 0xe7b31f652a27237b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3W.wSuiteMask", w_suite_mask, 0x0, 0x0, false, 0x671522ace37f96ac)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX3W.wProductType", w_product_type, 0x0, 0x0, false, 0x4962375cf9feae07)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX3W.wReserved", w_reserved, 0x0, 0x0, false, 0x66e0b2dc010fc421)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.wSuiteMaskEx", w_suite_mask_ex, 0x0, 0x0, false, 0x89a5ada1b81f3737)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.wReserved2", w_reserved2, 0x0, 0x0, false, 0x6e74bdd288c5a597)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3W.Input.wRawInput16", w_raw_input16, 0x0, 0x0, false, 0x22392da9926357b3)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_OSVERSIONINFOEX3W.Input.wLayerNumber", w_layer_number, 0x0, 0x0, false, 0xfd8e07c24a9621e2, 12, uint16_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_OSVERSIONINFOEX3W.Input.wAttribSelector", w_attrib_selector, 0x0, 0x0, false, 0x378ee4bed6d7bb54, 4, uint16_t)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_input_t), "_OSVERSIONINFOEX3W.Input", input, 0x0, 0x0, false, 0xfa8b28ec311b9e63)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3W.wLayerCount", w_layer_count, 0x0, 0x0, false, 0x7dd8387683b6198)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3W.dwLayerFlags", dw_layer_flags, 0x0, 0x0, false, 0x2c9d93fbdfcdf9b9)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif