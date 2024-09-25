#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint32_t*)>*), "_PROC_FEEDBACK_COUNTER.InstantaneousRead", instantaneous_read, 0x0, 0x40, true, 0x356986c7ef8fa86f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint8_t, uint64_t*, uint64_t*)>*), "_PROC_FEEDBACK_COUNTER.DifferentialRead", differential_read, 0x0, 0x40, true, 0x7cd8e988659869e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK_COUNTER.LastActualCount", last_actual_count, 0x40, 0x40, true, 0x8fe2aeb15a65c100)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK_COUNTER.LastReferenceCount", last_reference_count, 0x80, 0x40, true, 0xa554a3a217a01807)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_FEEDBACK_COUNTER.CachedValue", cached_value, 0xc0, 0x20, true, 0x95af227c75acfa01)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_FEEDBACK_COUNTER.Affinitized", affinitized, 0x100, 0x8, true, 0x8952790cfecf7f7a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_FEEDBACK_COUNTER.Differential", differential, 0x108, 0x8, true, 0xd49bfe87880b2ce7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_FEEDBACK_COUNTER.Scaling", scaling, 0x118, 0x8, true, 0x28921659225ab88e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK_COUNTER.Context", context, 0x140, 0x40, true, 0xc2248c52c159f41f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_FEEDBACK_COUNTER.DiscardIdleTime", discard_idle_time, 0x110, 0x8, true, 0x8c2cf1b034f6a61d)
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
#endif