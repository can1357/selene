#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PNP_DEVICE_EVENT_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0x1675e1f9848f70ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_DEVICE_EVENT_ENTRY.Argument", argument, 0x80, 0x20, true, 0xcf5a250b204444f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PNP_DEVICE_EVENT_ENTRY.ArgumentStatus", argument_status, 0xa0, 0x20, true, 0xe15fbc8e4de7264f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_PNP_DEVICE_EVENT_ENTRY.CallerEvent", caller_event, 0xc0, 0x40, true, 0xcb5a09cb13a810ef)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PNP_DEVICE_EVENT_ENTRY.Callback", callback, 0x100, 0x40, true, 0x2b3bf9cc130d2d29)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PNP_DEVICE_EVENT_ENTRY.Context", context, 0x140, 0x40, true, 0x91b0fa46639f00f9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::veto_type_t*), "_PNP_DEVICE_EVENT_ENTRY.VetoType", veto_type, 0x180, 0x40, true, 0x530613c0aaea625a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_PNP_DEVICE_EVENT_ENTRY.VetoName", veto_name, 0x1c0, 0x40, true, 0x8367ea35568fd4fa)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_DEVICE_EVENT_ENTRY.RefCount", ref_count, 0x200, 0x20, true, 0xcb53f10b0067c031)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_DEVICE_EVENT_ENTRY.Lock", lock, 0x220, 0x20, true, 0x98e0e4617cb5ac6e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_DEVICE_EVENT_ENTRY.Cancel", cancel, 0x240, 0x8, true, 0xfd083eec352204cb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::device_event_entry_t*), "_PNP_DEVICE_EVENT_ENTRY.Parent", parent, 0x280, 0x40, true, 0x8f87976bcc199fd8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PNP_DEVICE_EVENT_ENTRY.ActivityId", activity_id, 0x2c0, 0x80, true, 0x5793714714d970b9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::plugplay_event_block_t), "_PNP_DEVICE_EVENT_ENTRY.Data", data, 0x380, 0x80, true, 0x6a61430be9ecbb12)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::watchdog_t*), "_PNP_DEVICE_EVENT_ENTRY.Watchdog", watchdog, 0x340, 0x40, true, 0xf9e59c2fad3b1da0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif