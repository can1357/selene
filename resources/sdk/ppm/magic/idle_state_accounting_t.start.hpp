#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING.IdleTransitions", idle_transitions, 0x0, 0x20, true, 0xa4602377bae544e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING.FailedTransitions", failed_transitions, 0x20, 0x20, true, 0xb6c009291a506644)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_ACCOUNTING.InvalidBucketIndex", invalid_bucket_index, 0x40, 0x20, true, 0xd63c7c7be30ca92a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_IDLE_STATE_ACCOUNTING.TotalTime", total_time, 0x80, 0x40, true, 0xea449438cfd37745)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "PPM_IDLE_STATE_ACCOUNTING.IdleTimeBuckets", idle_time_buckets, 0xc0, 0xc0, true, 0xde4a01e1bea037f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif