#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_TIMER_CANCELLED.Header", header, 0x0, 0x0, true, 0xbfb6ec6767887ff1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_CANCELLED.SubQueue", sub_queue, 0x100, 0x40, true, 0x1f92542cc6a31897)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_CANCELLED.Timer", timer, 0x140, 0x40, true, 0xc1c798cd783718d2)
#else
#define _m00
#define _m01
#define _m02
#endif