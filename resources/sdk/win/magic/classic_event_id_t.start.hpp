#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CLASSIC_EVENT_ID.EventGuid", event_guid, 0x0, 0x80, true, 0x100cdf33f7043e3d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASSIC_EVENT_ID.Type", type, 0x80, 0x8, true, 0xb783fdfddd72469d)
#else
#define _m00
#define _m01
#endif