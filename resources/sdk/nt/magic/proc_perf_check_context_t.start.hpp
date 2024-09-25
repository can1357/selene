#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_domain_t*), "_PROC_PERF_CHECK_CONTEXT.Domain", domain, 0x0, 0x40, true, 0xf47b8c8369b6008c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_constraint_t*), "_PROC_PERF_CHECK_CONTEXT.Constraint", constraint, 0x40, 0x40, true, 0x73be2ceba8358a0d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_t*), "_PROC_PERF_CHECK_CONTEXT.PerfCheck", perf_check, 0x80, 0x40, true, 0x75ddaece6cf0adca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_load_t*), "_PROC_PERF_CHECK_CONTEXT.Load", load, 0xc0, 0x40, true, 0xba5d8a96155677f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_history_t*), "_PROC_PERF_CHECK_CONTEXT.PerfHistory", perf_history, 0x100, 0x40, true, 0xd62fe337070183b1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_CONTEXT.Utility", utility, 0x140, 0x20, true, 0xe086e5d3f642f91)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_CONTEXT.AffinitizedUtility", affinitized_utility, 0x160, 0x20, true, 0x2a8eb0587eb7ac81)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_CONTEXT.MediaUtility", media_utility, 0x180, 0x20, true, 0xa1bd8f890c158066)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROC_PERF_CHECK_CONTEXT.LatestAffinitizedPercent", latest_affinitized_percent, 0x1a0, 0x10, true, 0x44741ea2a9d2b6eb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROC_PERF_CHECK_CONTEXT.AveragePerformancePercent", average_performance_percent, 0x1b0, 0x10, true, 0xc461ca703dad4ab5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_CONTEXT.RelativePerformance", relative_performance, 0x1c0, 0x20, true, 0xbb8556c3bec982c3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CHECK_CONTEXT.NtProcessor", nt_processor, 0x1e0, 0x8, true, 0xba7cb2f18c4f5278)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_CONTEXT.ImportantUtility", important_utility, 0x0, 0x0, false, 0xda7d160881ca58a5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_CONTEXT.IdealUtility", ideal_utility, 0x0, 0x0, false, 0x891b7d054bd64b43)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif