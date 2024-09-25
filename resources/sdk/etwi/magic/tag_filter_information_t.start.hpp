#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_TAG_FILTER_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x164180b065fb843)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_TAG_FILTER_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0x57dbfb1b422df622)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_EVENT_TRACE_TAG_FILTER_INFORMATION.Filter", filter, 0x80, 0x20, true, 0x397b94d580e14e54)
#else
#define _m00
#define _m01
#define _m02
#endif