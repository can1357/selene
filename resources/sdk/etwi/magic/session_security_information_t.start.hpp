#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_SESSION_SECURITY_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0xdd4fd6f95b205c32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SESSION_SECURITY_INFORMATION.SecurityInformation", security_information, 0x20, 0x20, true, 0x4a57dee8ce1bfbba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_SESSION_SECURITY_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0x17ad2f74ad8b4d6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_EVENT_TRACE_SESSION_SECURITY_INFORMATION.SecurityDescriptor", security_descriptor, 0x80, 0x8, true, 0x50a39eb1dc62de3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif