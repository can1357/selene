#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_VERSION_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x34814136ceaf10f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_VERSION_INFORMATION.EventTraceKernelVersion", event_trace_kernel_version, 0x20, 0x20, true, 0x609dabbb4ec5beb8)
#else
#define _m00
#define _m01
#endif