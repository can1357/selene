#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::coverage_sampler_information_t), "_ETW_COVERAGE_SAMPLER_PERF_INFO.Common", common, 0x0, 0x80, true, 0x32d86dc4a1878f46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::coverage_sampler_perf_stats_t), "_ETW_COVERAGE_SAMPLER_PERF_INFO.PerfStats", perf_stats, 0x80, 0x0, true, 0xd7211720c49e76f7)
#else
#define _m00
#define _m01
#endif