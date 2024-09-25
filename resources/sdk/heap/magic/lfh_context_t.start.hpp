#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_LFH_CONTEXT.BackendCtx", backend_ctx, 0x0, 0x40, true, 0x563a642298c64496)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::suballocator_callbacks_t), "_HEAP_LFH_CONTEXT.Callbacks", callbacks, 0x40, 0x40, true, 0x71da367c85ab751e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_HEAP_LFH_CONTEXT.AffinityModArray", affinity_mod_array, 0x180, 0x40, true, 0x84f1b504c53dcf62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_CONTEXT.MaxAffinity", max_affinity, 0x1c0, 0x8, true, 0x140339cf021163bf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_HEAP_LFH_CONTEXT.SubsegmentCreationLock", subsegment_creation_lock, 0x240, 0x40, true, 0x350c04d37841e778)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::lfh_bucket_t*, 129>), "_HEAP_LFH_CONTEXT.Buckets", buckets, 0x400, 0x40, true, 0x5c7fc4fc32bcb3e5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_CONTEXT.LockType", lock_type, 0x1c8, 0x8, true, 0xf1089ca49e57b150)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_HEAP_LFH_CONTEXT.MemStatsOffset", mem_stats_offset, 0x1d0, 0x10, true, 0x95aabae3c87d119a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_lfh_config_t), "_HEAP_LFH_CONTEXT.Config", config, 0x1e0, 0x20, true, 0x31d2f1f499c00374)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union heap::lfh_subsegment_stats_t), "_HEAP_LFH_CONTEXT.BucketStats", bucket_stats, 0x200, 0x40, true, 0x44714534f79efe68)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_subsegment_cache_t), "_HEAP_LFH_CONTEXT.SubsegmentCache", subsegment_cache, 0x0, 0x0, false, 0xd35348a222312d4c)
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
#endif