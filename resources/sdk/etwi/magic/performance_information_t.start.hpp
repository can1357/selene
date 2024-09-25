#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_PERFORMANCE_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x57c37e2c24b00eae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EVENT_TRACE_PERFORMANCE_INFORMATION.LogfileBytesWritten", logfile_bytes_written, 0x40, 0x40, true, 0x1fade02251eac8ae)
#else
#define _m00
#define _m01
#endif