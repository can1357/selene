#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplesAdded", samples_added, 0x0, 0x20, true, 0xcd87a78d9e8ad233)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplesFound", samples_found, 0x20, 0x20, true, 0x6de1fff6a744bf5e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplesDropped", samples_dropped, 0x40, 0x20, true, 0x7afb7da7d587d2d5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplesRaisedUM", samples_raised_um, 0x60, 0x20, true, 0x70448895fa2b342d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplesMappedUM", samples_mapped_um, 0x80, 0x20, true, 0xa78ebe301a4445f3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplesRaisedKM", samples_raised_km, 0xa0, 0x20, true, 0x3115a06efdf78b27)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplesMappedKM", samples_mapped_km, 0xc0, 0x20, true, 0x5090ff7bc8486e0e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SamplingPaused", sampling_paused, 0xe0, 0x20, true, 0x2da51b6909dfb47c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.ApcNotAvailable", apc_not_available, 0x100, 0x20, true, 0xf1907895fd7775a8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.CaptureBufferNotAvailable", capture_buffer_not_available, 0x120, 0x20, true, 0x2047286192c5ac87)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.SampleBufferNotAvailable", sample_buffer_not_available, 0x140, 0x20, true, 0x6e661ffd243219b1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.ProfileSampleCount", profile_sample_count, 0x160, 0x20, true, 0x775cd49887f4ff1d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.CSwitchSampleCount", c_switch_sample_count, 0x180, 0x20, true, 0xc3174392ce26fd2c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.RThreadSampleCount", r_thread_sample_count, 0x1a0, 0x20, true, 0xdd321cbe35848333)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_STATS.PGFaultSampleCount", pg_fault_sample_count, 0x1c0, 0x20, true, 0x5cbbfd06c433f9a)
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
#endif