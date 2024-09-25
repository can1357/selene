#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IPT_TRACE_EVENT_DATA.TimeStamp", time_stamp, 0x0, 0x40, true, 0xe40c8c23d59c4d12)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPT_TRACE_EVENT_DATA.ProcessId", process_id, 0x40, 0x20, true, 0xb8056aa140cec3cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPT_TRACE_EVENT_DATA.ThreadId", thread_id, 0x60, 0x20, true, 0xbef6121267cd017)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IPT_TRACE_EVENT_DATA.IptOption", ipt_option, 0x80, 0x40, true, 0xaadb5e84b509a1f9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPT_TRACE_EVENT_DATA.IptTraceSize", ipt_trace_size, 0xc0, 0x20, true, 0x29a94fbd501e6e56)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPT_TRACE_EVENT_DATA.IptTraceStopOffset", ipt_trace_stop_offset, 0xe0, 0x20, true, 0x6204e10cdf6c7844)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_IPT_TRACE_EVENT_DATA.IptTrace", ipt_trace, 0x100, 0x8, true, 0x206085cb18f7fa24)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif