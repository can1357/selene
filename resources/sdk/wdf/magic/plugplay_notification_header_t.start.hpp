#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PLUGPLAY_NOTIFICATION_HEADER.Version", version, 0x0, 0x10, true, 0xde954bf14f83c5da)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PLUGPLAY_NOTIFICATION_HEADER.Size", size, 0x10, 0x10, true, 0x8f9080e057fd47f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PLUGPLAY_NOTIFICATION_HEADER.Event", event, 0x20, 0x80, true, 0xfef30589e088292c)
#else
#define _m00
#define _m01
#define _m02
#endif