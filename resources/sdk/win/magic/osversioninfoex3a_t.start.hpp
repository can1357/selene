#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.dwOSVersionInfoSize", dw_os_version_info_size, 0x0, 0x0, false, 0xfdab34d5241270ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.dwMajorVersion", dw_major_version, 0x0, 0x0, false, 0xcee76ab5e27927e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.dwMinorVersion", dw_minor_version, 0x0, 0x0, false, 0x6e30ac7c2b2cfd3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.dwBuildNumber", dw_build_number, 0x0, 0x0, false, 0x1ff8296fdd32521b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.dwPlatformId", dw_platform_id, 0x0, 0x0, false, 0x457b0ed0540c3e45)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.dwQfeNumber", dw_qfe_number, 0x0, 0x0, false, 0x21ed97ace81220f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_OSVERSIONINFOEX3A.szCSDVersion", sz_csd_version, 0x0, 0x0, false, 0x9f114bd48c3d496a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_OSVERSIONINFOEX3A.szLayerAttrib", sz_layer_attrib, 0x0, 0x0, false, 0xb182515eef6adc49)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3A.wServicePackMajor", w_service_pack_major, 0x0, 0x0, false, 0x7e23cf266c06c9b9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3A.wServicePackMinor", w_service_pack_minor, 0x0, 0x0, false, 0xe4cdc270dbc890a6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3A.wSuiteMask", w_suite_mask, 0x0, 0x0, false, 0x88e1e97b4d7a815e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX3A.wProductType", w_product_type, 0x0, 0x0, false, 0x8a88423d691cc3a0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OSVERSIONINFOEX3A.wReserved", w_reserved, 0x0, 0x0, false, 0x143c19d2aa9b7e98)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.wSuiteMaskEx", w_suite_mask_ex, 0x0, 0x0, false, 0x5878b6fd07ad0563)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.wReserved2", w_reserved2, 0x0, 0x0, false, 0xeb354e1ec49f5b42)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3A.Input.wRawInput16", w_raw_input16, 0x0, 0x0, false, 0xb4165c8757c3e4e)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_OSVERSIONINFOEX3A.Input.wLayerNumber", w_layer_number, 0x0, 0x0, false, 0x20b7077c47e52d56, 12, uint16_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_OSVERSIONINFOEX3A.Input.wAttribSelector", w_attrib_selector, 0x0, 0x0, false, 0x53a22544a03f36d1, 4, uint16_t)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_input_t), "_OSVERSIONINFOEX3A.Input", input, 0x0, 0x0, false, 0xea05f9c5e59f7b36)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OSVERSIONINFOEX3A.wLayerCount", w_layer_count, 0x0, 0x0, false, 0xb8ebc3ba08af536f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OSVERSIONINFOEX3A.dwLayerFlags", dw_layer_flags, 0x0, 0x0, false, 0xaca54135860bcc3)
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