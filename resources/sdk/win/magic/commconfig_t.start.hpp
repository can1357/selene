#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMCONFIG.dwSize", dw_size, 0x0, 0x20, true, 0x24216467526cd8a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMMCONFIG.wVersion", w_version, 0x20, 0x10, true, 0xf060d670f2c48f90)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMMCONFIG.wReserved", w_reserved, 0x30, 0x10, true, 0x1f9e4f2032b3d3e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::dcb_t), "_COMMCONFIG.dcb", dcb, 0x40, 0xe0, true, 0xeb0e0f2fbf7ad3ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMCONFIG.dwProviderSubType", dw_provider_sub_type, 0x120, 0x20, true, 0x5e55844d9b1493c2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMCONFIG.dwProviderOffset", dw_provider_offset, 0x140, 0x20, true, 0x8ed8ea7e25bef9b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMCONFIG.dwProviderSize", dw_provider_size, 0x160, 0x20, true, 0x160837e8b0b9c119)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_COMMCONFIG.wcProviderData", wc_provider_data, 0x180, 0x10, true, 0x6f66ff82f64d9c0c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif