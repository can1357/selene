#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_TEMPERATURE_INFO.Index", index, 0x0, 0x10, true, 0xe72e6140474b0e4d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_STORAGE_TEMPERATURE_INFO.Temperature", temperature, 0x10, 0x10, true, 0xf54848f9bcd1573b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_STORAGE_TEMPERATURE_INFO.OverThreshold", over_threshold, 0x20, 0x10, true, 0x7b2914f2a4c1b686)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_STORAGE_TEMPERATURE_INFO.UnderThreshold", under_threshold, 0x30, 0x10, true, 0x69b7b58c1bba592a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_TEMPERATURE_INFO.OverThresholdChangable", over_threshold_changable, 0x40, 0x8, true, 0xe28ecda46d29e67f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_TEMPERATURE_INFO.UnderThresholdChangable", under_threshold_changable, 0x48, 0x8, true, 0x4d564cd91e52e796)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_TEMPERATURE_INFO.EventGenerated", event_generated, 0x50, 0x8, true, 0x7b81e88ccbd065f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif