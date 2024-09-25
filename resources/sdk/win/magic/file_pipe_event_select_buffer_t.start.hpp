#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_EVENT_SELECT_BUFFER.EventTypes", event_types, 0x0, 0x20, true, 0x59c4c58ec40f0524)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_PIPE_EVENT_SELECT_BUFFER.EventHandle", event_handle, 0x40, 0x40, true, 0x92bf3cfeb829e529)
#else
#define _m00
#define _m01
#endif