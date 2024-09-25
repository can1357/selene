#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_TIMER_CANCEL_NTTIMER.Header", header, 0x0, 0x0, true, 0x7c11be8908666f2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_CANCEL_NTTIMER.SubQueue", sub_queue, 0x100, 0x40, true, 0x15c3ad21c94cc4c3)
#else
#define _m00
#define _m01
#endif