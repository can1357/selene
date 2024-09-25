#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cache_uninitialize_event_t*), "_CACHE_UNINITIALIZE_EVENT.Next", next, 0x0, 0x40, true, 0x71d564da5950cfe4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CACHE_UNINITIALIZE_EVENT.Event", event, 0x40, 0xc0, true, 0xe77db50ee70d31f4)
#else
#define _m00
#define _m01
#endif