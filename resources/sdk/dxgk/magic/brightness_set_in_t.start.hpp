#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_SET_IN.BrightnessMillinits", brightness_millinits, 0x0, 0x20, true, 0x75309509015443cf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_SET_IN.TransitionTimeMs", transition_time_ms, 0x20, 0x20, true, 0xf7fd06a4ac90c35d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::brightness_sensor_data_t), "_DXGK_BRIGHTNESS_SET_IN.SensorReadings", sensor_readings, 0x40, 0xc0, true, 0xe93ea3207966c88f)
#else
#define _m00
#define _m01
#define _m02
#endif