#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::brightness_interface_version_t), "_PANEL_SET_BRIGHTNESS.Version", version, 0x0, 0x20, true, 0x79c9642b52b358ec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PANEL_SET_BRIGHTNESS.Level", level, 0x20, 0x8, true, 0xeaa08a0c03c9b109)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PANEL_SET_BRIGHTNESS.Millinits", millinits, 0x20, 0x20, true, 0xbb14d7a1a98e09c2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PANEL_SET_BRIGHTNESS.TransitionTimeInMs", transition_time_in_ms, 0x40, 0x20, true, 0x42beb4569f161006)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::panel_brightness_sensor_data_t), "_PANEL_SET_BRIGHTNESS.SensorData", sensor_data, 0x60, 0xa0, true, 0xde3582a738984703)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif