#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_PROFILE_LIST_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0xe6d126be09b91f51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::profile_source_info_t, 1>), "_EVENT_TRACE_PROFILE_LIST_INFORMATION.Profile", profile, 0x40, 0x0, true, 0x33fe9aefbd787789)
#else
#define _m00
#define _m01
#endif