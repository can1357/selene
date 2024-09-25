#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_IDLE_STATE_ACCOUNTING_EX.TotalTime", total_time, 0x0, 0x40, true, 0x76539f4b7b8c5688)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING_EX.IdleTransitions", idle_transitions, 0x40, 0x20, true, 0x5f27180d1f24902d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING_EX.FailedTransitions", failed_transitions, 0x60, 0x20, true, 0xa0613638a6620b3a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING_EX.InvalidBucketIndex", invalid_bucket_index, 0x80, 0x20, true, 0x5ff658371ec997fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING_EX.MinTimeUs", min_time_us, 0xa0, 0x20, true, 0x51cd710d7cddb9b2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING_EX.MaxTimeUs", max_time_us, 0xc0, 0x20, true, 0x2214277f04cb91c7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING_EX.CancelledTransitions", cancelled_transitions, 0xe0, 0x20, true, 0x5c3a04e9f640716a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::idle_state_bucket_ex_t, 16>), "PPM_IDLE_STATE_ACCOUNTING_EX.IdleTimeBuckets", idle_time_buckets, 0x100, 0x0, true, 0x7ff58c5f0e749ec0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif