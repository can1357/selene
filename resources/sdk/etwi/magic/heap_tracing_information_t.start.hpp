#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_HEAP_TRACING_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x63d49c9d5708e512)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_EVENT_TRACE_HEAP_TRACING_INFORMATION.ProcessId", process_id, 0x20, 0x20, true, 0x5398aad653a8f2cc)
#else
#define _m00
#define _m01
#endif