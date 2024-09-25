#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_TIMER_SET.Header", header, 0x0, 0x0, true, 0x1883bbf4422fd189)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_TP_EVENT_TIMER_SET.DueTime", due_time, 0x100, 0x40, true, 0xdbb3c1aea34bda60)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_SET.SubQueue", sub_queue, 0x140, 0x40, true, 0x99580b7ae492de45)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_TIMER_SET.Timer", timer, 0x180, 0x40, true, 0xb1beb2191e2c81c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_TIMER_SET.Period", period, 0x1c0, 0x20, true, 0x40854dbe6b765a9c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_TIMER_SET.WindowLength", window_length, 0x1e0, 0x20, true, 0xbdc5de9ac12482ce)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_TIMER_SET.Absolute", absolute, 0x200, 0x20, true, 0x23393a12da2be9aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif