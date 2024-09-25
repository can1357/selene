#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_EVENT_TRACE_LOGFILEW.LogFileName", log_file_name, 0x0, 0x40, true, 0x191a34fb78803f5f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_EVENT_TRACE_LOGFILEW.LoggerName", logger_name, 0x40, 0x40, true, 0x2ac7a443579a569b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EVENT_TRACE_LOGFILEW.CurrentTime", current_time, 0x80, 0x40, true, 0x2fc6cfab9436fb01)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEW.BuffersRead", buffers_read, 0xc0, 0x20, true, 0x17176bde29e3d90)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEW.LogFileMode", log_file_mode, 0xe0, 0x20, true, 0xeacf17d68db6719)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEW.ProcessTraceMode", process_trace_mode, 0xe0, 0x20, true, 0xa85647351d850d2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::event_trace_t), "_EVENT_TRACE_LOGFILEW.CurrentEvent", current_event, 0x100, 0xc0, true, 0xdcfa878ad50c7914)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct trace::logfile_header_t), "_EVENT_TRACE_LOGFILEW.LogfileHeader", logfile_header, 0x3c0, 0xc0, true, 0x9e0f4409e367a8e6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pevent_trace_buffer_callbackw_t ), "_EVENT_TRACE_LOGFILEW.BufferCallback", buffer_callback, 0xc80, 0x40, true, 0xb58675c751235a39)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEW.BufferSize", buffer_size, 0xcc0, 0x20, true, 0x5367c79ca4ad28e6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEW.Filled", filled, 0xce0, 0x20, true, 0x76041b475531e90a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEW.EventsLost", events_lost, 0xd00, 0x20, true, 0x4007e080f932c3ed)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::event_trace_t*)>*), "_EVENT_TRACE_LOGFILEW.EventCallback", event_callback, 0xd40, 0x40, true, 0x9b6b89da3d720266)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::event_record_t*)>*), "_EVENT_TRACE_LOGFILEW.EventRecordCallback", event_record_callback, 0xd40, 0x40, true, 0xe9d7f16f0e722900)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEW.IsKernelTrace", is_kernel_trace, 0xd80, 0x20, true, 0x3afe334fffd6b0a9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EVENT_TRACE_LOGFILEW.Context", context, 0xdc0, 0x40, true, 0x5004471d207b31d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif