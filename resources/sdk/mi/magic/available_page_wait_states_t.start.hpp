#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_AVAILABLE_PAGE_WAIT_STATES.Event", event, 0x0, 0xc0, true, 0x2784dc7ed9e0f700)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_AVAILABLE_PAGE_WAIT_STATES.EventSets", event_sets, 0xc0, 0x20, true, 0xf6dd4a330072a294)
#else
#define _m00
#define _m01
#endif