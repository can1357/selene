#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_STORAGE_RESERVE_OUTPUT.Version", version, 0x0, 0x20, true, 0xa92e987dac62d8ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_STORAGE_RESERVE_OUTPUT.AreaInfoCount", area_info_count, 0x20, 0x20, true, 0xb78c5ad39872d8ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::storage_reserve_area_info_t, 1>), "_QUERY_STORAGE_RESERVE_OUTPUT.AreaInfo", area_info, 0x40, 0xc0, true, 0x2c43dafe1973e3ca)
#else
#define _m00
#define _m01
#define _m02
#endif