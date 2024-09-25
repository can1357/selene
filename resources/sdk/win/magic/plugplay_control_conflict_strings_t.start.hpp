#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_STRINGS.NullDeviceInstance", null_device_instance, 0x0, 0x20, true, 0xac5bfe4f383b176)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PLUGPLAY_CONTROL_CONFLICT_STRINGS.DeviceInstanceStrings", device_instance_strings, 0x20, 0x10, true, 0x101ed17fcb4d2c26)
#else
#define _m00
#define _m01
#endif