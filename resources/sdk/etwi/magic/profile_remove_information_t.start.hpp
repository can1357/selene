#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_PROFILE_REMOVE_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x70bf7810003e16d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kprofile_source_t), "_EVENT_TRACE_PROFILE_REMOVE_INFORMATION.ProfileSource", profile_source, 0x20, 0x20, true, 0x98b122d8dd4f44d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_EVENT_TRACE_PROFILE_REMOVE_INFORMATION.CpuInfoHierarchy", cpu_info_hierarchy, 0x40, 0x60, true, 0xafbb36a04f0f21e8)
#else
#define _m00
#define _m01
#define _m02
#endif