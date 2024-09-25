#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::header_t), "_CI_LOG_SCHEDULER_EVENT.Header", header, 0x0, 0x80, true, 0x392378b403c6a626)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CI_LOG_SCHEDULER_EVENT.ProcessId", process_id, 0x180, 0x20, true, 0xa976ccb2b475ada)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CI_LOG_SCHEDULER_EVENT.ThreadId", thread_id, 0x1a0, 0x20, true, 0x88a0440e65a3cbb6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CI_LOG_SCHEDULER_EVENT.Priority", priority, 0x1c0, 0x20, true, 0xfedab434c896419d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CI_LOG_SCHEDULER_EVENT.TaskIndex", task_index, 0x1e0, 0x20, true, 0x1082d1aedd032963)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif