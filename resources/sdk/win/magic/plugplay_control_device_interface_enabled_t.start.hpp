#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED.DeviceInterface", device_interface, 0x0, 0x80, true, 0x1728a5f68ba31be8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED.Flags", flags, 0x80, 0x20, true, 0x15c8478868c1e22f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED.Enabled", enabled, 0xa0, 0x8, true, 0x752b1fe65c51bbb8)
#else
#define _m00
#define _m01
#define _m02
#endif