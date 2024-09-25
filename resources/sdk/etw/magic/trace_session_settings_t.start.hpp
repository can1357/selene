#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.Version", version, 0x0, 0x20, true, 0x4c58fe422790fa3d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.BufferSize", buffer_size, 0x20, 0x20, true, 0xb11c7d0f7b467ea3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.MinimumBuffers", minimum_buffers, 0x40, 0x20, true, 0xd01409ba73baf772)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.MaximumBuffers", maximum_buffers, 0x60, 0x20, true, 0xb194702949f77aac)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.LoggerMode", logger_mode, 0x80, 0x20, true, 0xc5aa2322f2a64da7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.FlushTimer", flush_timer, 0xa0, 0x20, true, 0x53e33e9eed4124f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.FlushThreshold", flush_threshold, 0xc0, 0x20, true, 0x1c4ad7fea077615f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_SESSION_SETTINGS.ClockType", clock_type, 0xe0, 0x20, true, 0xeb3be65985014fc9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif