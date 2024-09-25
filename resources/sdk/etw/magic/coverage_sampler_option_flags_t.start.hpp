#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.AllFlags", all_flags, 0x0, 0x20, true, 0xcb1164355fb6c903)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.RequireProfileTotalIssuesSource", require_profile_total_issues_source, 0x0, 0x1, true, 0xf6d00b730daca04f, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.ForceProfileTimeSource", force_profile_time_source, 0x1, 0x1, true, 0xd0e3368b56024c48, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoProfileSampling", no_profile_sampling, 0x2, 0x1, true, 0xfb20fb9e0bc8ded6, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoCSwitchSampling", no_c_switch_sampling, 0x3, 0x1, true, 0x9634e770eef64958, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoReadyThreadSampling", no_ready_thread_sampling, 0x4, 0x1, true, 0x5b6f5f325dde570a, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoFaultSampling", no_fault_sampling, 0x5, 0x1, true, 0xb6805cf579c0b007, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoStackCache", no_stack_cache, 0x6, 0x1, true, 0x1803978c4260d155, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoSampleBuffers", no_sample_buffers, 0x7, 0x1, true, 0x8c6435b91b6abeff, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoPauseWhenFull", no_pause_when_full, 0x8, 0x1, true, 0x6c14814bd7e8f4bf, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.NoLowPriority", no_low_priority, 0x9, 0x1, true, 0xb682da3786dea31f, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.WithAppId", with_app_id, 0xa, 0x1, true, 0x32b1e112bd60175b, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.FilterKernel", filter_kernel, 0xb, 0x1, true, 0xb0296ef6117dad97, 1, uint32_t)
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
#endif