#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x5ccba5953a64a365)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION.ReleaseSamplingRate", release_sampling_rate, 0x20, 0x20, true, 0x6103c3c4b9292341)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION.ContentionSamplingRate", contention_sampling_rate, 0x40, 0x20, true, 0x1aaf077d7de32c6e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION.NumberOfExcessiveTimeouts", number_of_excessive_timeouts, 0x60, 0x20, true, 0x43d717d63b009067)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif