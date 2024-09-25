#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_TIMER_EXPIRATION_END.Header", header, 0x0, 0x0, true, 0x48d47c8889b0d6e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_EXPIRATION_END.SubQueue", sub_queue, 0x100, 0x40, true, 0x7420531741bb6a46)
#else
#define _m00
#define _m01
#endif