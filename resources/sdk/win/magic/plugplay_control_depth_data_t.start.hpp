#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_DEPTH_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0x3e33ec767ab26e07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_DEPTH_DATA.DeviceDepth", device_depth, 0x80, 0x20, true, 0xebb1efb3af1ef870)
#else
#define _m00
#define _m01
#endif