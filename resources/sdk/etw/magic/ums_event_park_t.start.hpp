#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_PARK.ProcessId", process_id, 0x0, 0x20, true, 0xb80644d45b6b6252)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_PARK.ScheduledThreadId", scheduled_thread_id, 0x20, 0x20, true, 0xa01c7d4b011be17)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_PARK.ParkFlags", park_flags, 0x40, 0x20, true, 0xfbfbdb7cd52162d0)
#else
#define _m00
#define _m01
#define _m02
#endif