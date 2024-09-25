#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PLUGPLAY_NOTIFY_HDR.Version", version, 0x0, 0x10, true, 0xbcef7eabae040760)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PLUGPLAY_NOTIFY_HDR.Size", size, 0x10, 0x10, true, 0xc5ce4d7711f9e1ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PLUGPLAY_NOTIFY_HDR.Event", event, 0x20, 0x80, true, 0xd2232c8882da2675)
#else
#define _m00
#define _m01
#define _m02
#endif