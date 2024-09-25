#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.CancelCount", cancel_count, 0x0, 0x20, true, 0x3294f33635d02402)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.FailureCount", failure_count, 0x20, 0x20, true, 0x90d8a16dc45155f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.SuccessCount", success_count, 0x40, 0x20, true, 0x3d3a9f168123c518)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.MaxTime", max_time, 0x80, 0x40, true, 0x8e5e78d70ae34823)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.MinTime", min_time, 0xc0, 0x40, true, 0x811e1cafc1f81943)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.TotalTime", total_time, 0x100, 0x40, true, 0xfa2d7d3da72c48f5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.InvalidBucketIndex", invalid_bucket_index, 0x140, 0x20, true, 0xb0eeccaa17ee5978)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_statistics_t), "_PLATFORM_IDLE_STATE_ACCOUNTING.SelectionStatistics", selection_statistics, 0x180, 0x0, true, 0xf5a2f6c6afeaa97a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::proc_idle_state_bucket_t, 26>), "_PLATFORM_IDLE_STATE_ACCOUNTING.IdleTimeBuckets", idle_time_buckets, 0x580, 0x0, true, 0xc7e074396ecffe31)
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
#endif