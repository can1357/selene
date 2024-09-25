#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_SYSTEM_EVENT_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x67a0f44ff6f1ab17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_SYSTEM_EVENT_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0xd29b4c6506fe2f1c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_EVENT_TRACE_SYSTEM_EVENT_INFORMATION.HookId", hook_id, 0x80, 0x20, true, 0x1f4bae92f0c150b3)
#else
#define _m00
#define _m01
#define _m02
#endif