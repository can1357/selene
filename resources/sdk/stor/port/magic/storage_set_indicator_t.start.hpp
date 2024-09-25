#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_SET_INDICATOR.Version", version, 0x0, 0x20, true, 0x5821a1e9c5202f77)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_SET_INDICATOR.Size", size, 0x20, 0x20, true, 0x33ea3dc091adcbc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::storage_indicator_state_t), "_STORAGE_SET_INDICATOR.IndicatorControl", indicator_control, 0x40, 0x20, true, 0x702cce45377d489)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_SET_INDICATOR.Set", set, 0x60, 0x8, true, 0xb742625206ad7cd6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif