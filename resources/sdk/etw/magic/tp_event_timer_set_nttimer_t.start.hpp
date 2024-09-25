#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_TIMER_SET_NTTIMER.Header", header, 0x0, 0x0, true, 0x92ca39c0a1694d4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_TP_EVENT_TIMER_SET_NTTIMER.DueTime", due_time, 0x100, 0x40, true, 0xe9376ad047b68d18)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_SET_NTTIMER.SubQueue", sub_queue, 0x140, 0x40, true, 0x76ea4229b96e5953)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_TIMER_SET_NTTIMER.TolerableDelay", tolerable_delay, 0x180, 0x20, true, 0x351719c393f8a01f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif