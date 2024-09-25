#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_LBR_CONFIGURATION_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x7116872a67ef8b88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_LBR_CONFIGURATION_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0x36a49ec652aa5c19)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_LBR_CONFIGURATION_INFORMATION.ConfigurationOptions", configuration_options, 0x80, 0x20, true, 0x58b74dc4cbe45d20)
#else
#define _m00
#define _m01
#define _m02
#endif