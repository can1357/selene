#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_STATE_ACCOUNTING.TotalTime", total_time, 0x0, 0x40, true, 0x6dce150a2b45fa9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_STATE_ACCOUNTING.CancelCount", cancel_count, 0x40, 0x20, true, 0x16a2db24052650ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_STATE_ACCOUNTING.FailureCount", failure_count, 0x60, 0x20, true, 0x1f5fdc8ce3719975)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_STATE_ACCOUNTING.SuccessCount", success_count, 0x80, 0x20, true, 0xb67d2043d83daf25)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_STATE_ACCOUNTING.InvalidBucketIndex", invalid_bucket_index, 0xa0, 0x20, true, 0xd894eb065ebb7f0b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_STATE_ACCOUNTING.MinTime", min_time, 0xc0, 0x40, true, 0xefc49c6f569b15dc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_STATE_ACCOUNTING.MaxTime", max_time, 0x100, 0x40, true, 0x8c75de22ba7364ed)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_statistics_t), "_PROC_IDLE_STATE_ACCOUNTING.SelectionStatistics", selection_statistics, 0x140, 0x0, true, 0x275b127ca227018)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::proc_idle_state_bucket_t, 26>), "_PROC_IDLE_STATE_ACCOUNTING.IdleTimeBuckets", idle_time_buckets, 0x540, 0x0, true, 0xe4b875ca7bc641d)
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