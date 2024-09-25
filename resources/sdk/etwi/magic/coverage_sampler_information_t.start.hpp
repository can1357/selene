#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_COVERAGE_SAMPLER_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x8906155ab5a6d2de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_COVERAGE_SAMPLER_INFORMATION.CoverageSamplerInformationClass", coverage_sampler_information_class, 0x20, 0x8, true, 0xf47a6e1c9f00a4a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_COVERAGE_SAMPLER_INFORMATION.MajorVersion", major_version, 0x28, 0x8, true, 0x5914ffbdef0eb944)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_COVERAGE_SAMPLER_INFORMATION.MinorVersion", minor_version, 0x30, 0x8, true, 0xd2d1f2b3cad94e23)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_COVERAGE_SAMPLER_INFORMATION.SamplerHandle", sampler_handle, 0x40, 0x40, true, 0x61bf973ffb68be45)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif