#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WAKE_TIMER_INFO.OffsetToNext", offset_to_next, 0x0, 0x40, true, 0xf9508b6cad5b5446)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WAKE_TIMER_INFO.DueTime", due_time, 0x40, 0x40, true, 0xd95acaf48f47b512)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WAKE_TIMER_INFO.Period", period, 0x80, 0x20, true, 0x151f9c54d10182da)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::diagnostic_buffer_t), "_WAKE_TIMER_INFO.ReasonContext", reason_context, 0xc0, 0x40, true, 0xb4f2312d181176f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif