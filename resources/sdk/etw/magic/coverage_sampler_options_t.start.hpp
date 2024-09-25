#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union etw::coverage_sampler_option_flags_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.Flags", flags, 0x0, 0x20, true, 0x5047d55a50f598ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.HashSeed", hash_seed, 0x20, 0x20, true, 0xa4ab0bf524416549)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.ImageLruSize", image_lru_size, 0x40, 0x20, true, 0x9cc2c6554beee311)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.SampleTableMinEntries", sample_table_min_entries, 0x60, 0x20, true, 0xd950f6b525135775)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.SampleTableMaxEntries", sample_table_max_entries, 0x80, 0x20, true, 0x83b55da32640c333)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.SampleTableMaxQueued", sample_table_max_queued, 0xa0, 0x20, true, 0xea8046d0fc8b158f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.SampleBufferSize", sample_buffer_size, 0xc0, 0x20, true, 0xfee69e72e2bf5b95)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.SampleBufferMaxCountPerProc", sample_buffer_max_count_per_proc, 0xe0, 0x20, true, 0xa639a2965be5bdba)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.CaptureBufferMaxCountPerProc", capture_buffer_max_count_per_proc, 0x100, 0x20, true, 0x8d8d87c841b35e69)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.ApcMaxCountPerProc", apc_max_count_per_proc, 0x120, 0x20, true, 0x4af0abe036913726)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.ProfileSamplePeriodUS", profile_sample_period_us, 0x140, 0x20, true, 0xf58cdd1ea56b7e3e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.ProfileSampleCountPerPeriod", profile_sample_count_per_period, 0x160, 0x20, true, 0xac026b080193d093)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.CSwitchSamplePeriodUS", c_switch_sample_period_us, 0x180, 0x20, true, 0x175355fc4f007469)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.CSwitchSampleCountPerPeriod", c_switch_sample_count_per_period, 0x1a0, 0x20, true, 0x30deda7f2563cc76)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.RThreadSamplePeriodUS", r_thread_sample_period_us, 0x1c0, 0x20, true, 0x4d393602830777a1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.RThreadSampleCountPerPeriod", r_thread_sample_count_per_period, 0x1e0, 0x20, true, 0x9466f4a2138049e9)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.PGFaultSamplePeriodUS", pg_fault_sample_period_us, 0x200, 0x20, true, 0x31317b1c50a0730f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.PGFaultSampleCountPerPeriod", pg_fault_sample_count_per_period, 0x220, 0x20, true, 0x527c9774dd37c928)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.StackDepth", stack_depth, 0x240, 0x20, true, 0xc745c1416a39d8d3)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTIONS.StackCacheEntries", stack_cache_entries, 0x260, 0x20, true, 0xc7dc7dfd01e9b1fe)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_ETW_COVERAGE_SAMPLER_OPTIONS.PathInclusionList", path_inclusion_list, 0x280, 0x0, true, 0x37f70cff4e886f6)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_ETW_COVERAGE_SAMPLER_OPTIONS.PathExclusionList", path_exclusion_list, 0xa80, 0x0, true, 0x8a5822c420be24f1)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif