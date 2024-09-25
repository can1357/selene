#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0xa317f9938586943e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION.Version", version, 0x20, 0x8, true, 0x8481912ec67c1b3e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::profile_add_information_v2_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION.V2", v2, 0x40, 0x40, true, 0x6edd98a4c5244094)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_EVENT_TRACE_PROFILE_ADD_INFORMATION.CpuInfoHierarchy", cpu_info_hierarchy, 0x80, 0x60, true, 0xc4f15c19de7a9ec1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION.InitialInterval", initial_interval, 0xe0, 0x20, true, 0xe380cd445d4bd294)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION.Persist", persist, 0x100, 0x8, true, 0x592d4c4d48b09b09)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_EVENT_TRACE_PROFILE_ADD_INFORMATION.ProfileSourceDescription", profile_source_description, 0x110, 0x10, true, 0xbc201c4a96c8364d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif