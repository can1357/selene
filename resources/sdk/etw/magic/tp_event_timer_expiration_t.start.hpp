#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_TIMER_EXPIRATION.Header", header, 0x0, 0x0, true, 0x76eeb0a4ae334921)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_TP_EVENT_TIMER_EXPIRATION.DueTime", due_time, 0x100, 0x40, true, 0xf3a2547adfcfb28a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_EXPIRATION.SubQueue", sub_queue, 0x140, 0x40, true, 0xaf835a82f2199e7a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_EXPIRATION.Timer", timer, 0x180, 0x40, true, 0xc92ccba040b1a4ad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_TIMER_EXPIRATION.Period", period, 0x1c0, 0x20, true, 0x2e944f15b8e7ec90)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_TIMER_EXPIRATION.WindowLength", window_length, 0x1e0, 0x20, true, 0xb2e72b965739712)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif