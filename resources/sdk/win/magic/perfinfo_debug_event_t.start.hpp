#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DEBUG_EVENT.ProcessId", process_id, 0x0, 0x20, true, 0xc0a670b5c162d847)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DEBUG_EVENT.ThreadId", thread_id, 0x20, 0x20, true, 0xd92e36ec18bfa03a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::perfinfo_debug_event_reason_t), "_PERFINFO_DEBUG_EVENT.Reason", reason, 0x40, 0x20, true, 0x6119ec70fba155ff)
#else
#define _m00
#define _m01
#define _m02
#endif