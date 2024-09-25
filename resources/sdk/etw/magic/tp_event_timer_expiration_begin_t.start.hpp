#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_TIMER_EXPIRATION_BEGIN.Header", header, 0x0, 0x0, true, 0x6f79262d2b92938c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_EXPIRATION_BEGIN.SubQueue", sub_queue, 0x100, 0x40, true, 0x7b370aef4aa0d9bd)
#else
#define _m00
#define _m01
#endif