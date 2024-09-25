#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_IPT_CONFIGURATION_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x80a9c0614cf2ed31)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_IPT_CONFIGURATION_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0x4051a07c9eadfccf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_IPT_CONFIGURATION_INFORMATION.ConfigurationOptions", configuration_options, 0x80, 0x40, true, 0x930de1901e4ad522)
#else
#define _m00
#define _m01
#define _m02
#endif