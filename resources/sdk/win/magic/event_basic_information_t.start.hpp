#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::event_type_t), "_EVENT_BASIC_INFORMATION.EventType", event_type, 0x0, 0x20, true, 0x51d74d1bd3f4cfc6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EVENT_BASIC_INFORMATION.EventState", event_state, 0x20, 0x20, true, 0x9659980ecdd98615)
#else
#define _m00
#define _m01
#endif