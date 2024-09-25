#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_LEGACY_DEVGEN_DATA.ServiceName", service_name, 0x0, 0x80, true, 0x705156b53bad9892)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_LEGACY_DEVGEN_DATA.DeviceInstance", device_instance, 0x80, 0x40, true, 0xbe338a79f24c3573)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_LEGACY_DEVGEN_DATA.DeviceInstanceLength", device_instance_length, 0xc0, 0x20, true, 0x664478c76c21752e)
#else
#define _m00
#define _m01
#define _m02
#endif