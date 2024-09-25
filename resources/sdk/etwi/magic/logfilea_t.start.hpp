#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_EVENT_TRACE_LOGFILEA.LogFileName", log_file_name, 0x0, 0x40, true, 0x51434796e6b02087)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_EVENT_TRACE_LOGFILEA.LoggerName", logger_name, 0x40, 0x40, true, 0xa80d71abb7894e87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EVENT_TRACE_LOGFILEA.CurrentTime", current_time, 0x80, 0x40, true, 0xa437c0dd76b037a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEA.BuffersRead", buffers_read, 0xc0, 0x20, true, 0x519225926979a60c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEA.LogFileMode", log_file_mode, 0xe0, 0x20, true, 0x230c16a44cd6cc94)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEA.ProcessTraceMode", process_trace_mode, 0xe0, 0x20, true, 0xbf00f774a7c06e9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::event_trace_t), "_EVENT_TRACE_LOGFILEA.CurrentEvent", current_event, 0x100, 0xc0, true, 0x4a316a910047fcc3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct trace::logfile_header_t), "_EVENT_TRACE_LOGFILEA.LogfileHeader", logfile_header, 0x3c0, 0xc0, true, 0x13d295b2968c5ccc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pevent_trace_buffer_callbacka_t ), "_EVENT_TRACE_LOGFILEA.BufferCallback", buffer_callback, 0xc80, 0x40, true, 0x22aef0c5612541)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEA.BufferSize", buffer_size, 0xcc0, 0x20, true, 0xb07a68c7ea407925)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEA.Filled", filled, 0xce0, 0x20, true, 0xe76b0690f8b4527f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEA.EventsLost", events_lost, 0xd00, 0x20, true, 0x4dc42ae7de8f3bfe)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::event_trace_t*)>*), "_EVENT_TRACE_LOGFILEA.EventCallback", event_callback, 0xd40, 0x40, true, 0x35bd3104f88d245c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::event_record_t*)>*), "_EVENT_TRACE_LOGFILEA.EventRecordCallback", event_record_callback, 0xd40, 0x40, true, 0x633d86f9a81d2a17)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LOGFILEA.IsKernelTrace", is_kernel_trace, 0xd80, 0x20, true, 0xdab1e06fee22ee73)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EVENT_TRACE_LOGFILEA.Context", context, 0xdc0, 0x40, true, 0xf329dc1ae9a1136)
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