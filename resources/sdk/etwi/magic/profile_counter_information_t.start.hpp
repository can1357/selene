#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_PROFILE_COUNTER_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0xbca299aec0b5d57)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_PROFILE_COUNTER_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0x679e267c267193e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_EVENT_TRACE_PROFILE_COUNTER_INFORMATION.ProfileSource", profile_source, 0x80, 0x20, true, 0xfa2367f9608ba0e2)
#else
#define _m00
#define _m01
#define _m02
#endif