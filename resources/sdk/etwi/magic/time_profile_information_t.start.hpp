#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_TIME_PROFILE_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x64bba384f824a691)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_TIME_PROFILE_INFORMATION.ProfileInterval", profile_interval, 0x20, 0x20, true, 0xd914b898f948b2e5)
#else
#define _m00
#define _m01
#endif