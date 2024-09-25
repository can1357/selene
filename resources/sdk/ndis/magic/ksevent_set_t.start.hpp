#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "KSEVENT_SET.Set", set, 0x0, 0x0, false, 0x896648c0c552482b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSEVENT_SET.EventsCount", events_count, 0x0, 0x0, false, 0x9a521a936a40f975)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksevent_item_t*), "KSEVENT_SET.EventItem", event_item, 0x0, 0x0, false, 0xd55be972491cc5a2)
#else
#define _m00
#define _m01
#define _m02
#endif