#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_DATA_RATE_MAPPING_ENTRY.ucDataRateIndex", uc_data_rate_index, 0x0, 0x8, true, 0xaefcb4a31b27127b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_DATA_RATE_MAPPING_ENTRY.ucDataRateFlag", uc_data_rate_flag, 0x8, 0x8, true, 0x48dce98a6f12fb2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DOT11_DATA_RATE_MAPPING_ENTRY.usDataRateValue", us_data_rate_value, 0x10, 0x10, true, 0x1d5036d8d4fed749)
#else
#define _m00
#define _m01
#define _m02
#endif