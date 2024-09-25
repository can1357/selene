#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "PERIODIC_CAPTURE_STATE_CONTEXT.RelativeTimerDueTime", relative_timer_due_time, 0x0, 0x0, false, 0xa32d8a585e9e2500)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::timer_t*), "PERIODIC_CAPTURE_STATE_CONTEXT.Timer", timer, 0x0, 0x0, false, 0x131ee64a69321b63)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::periodic_capture_state_guids_t), "PERIODIC_CAPTURE_STATE_CONTEXT.Guids", guids, 0x0, 0x0, false, 0x37368dc90fbe2a1e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "PERIODIC_CAPTURE_STATE_CONTEXT.WorkItem", work_item, 0x0, 0x0, false, 0xc6cfb6fcfaf70e71)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::periodic_timer_state_t), "PERIODIC_CAPTURE_STATE_CONTEXT.TimerState", timer_state, 0x0, 0x0, false, 0xb91264653599e5ff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif