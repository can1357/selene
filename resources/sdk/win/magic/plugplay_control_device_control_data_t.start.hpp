#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_DEVICE_CONTROL_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0xf23c2b36e76989cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_DEVICE_CONTROL_DATA.Flags", flags, 0x80, 0x20, true, 0x3ee9efae72f4c711)
#else
#define _m00
#define _m01
#endif