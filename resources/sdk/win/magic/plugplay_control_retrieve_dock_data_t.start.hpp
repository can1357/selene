#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_RETRIEVE_DOCK_DATA.DeviceInstanceLength", device_instance_length, 0x0, 0x20, true, 0xfa04c1f9fe9ec1a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_RETRIEVE_DOCK_DATA.DeviceInstance", device_instance, 0x40, 0x40, true, 0xc1e83d719d7f79f9)
#else
#define _m00
#define _m01
#endif