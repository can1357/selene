#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::lfh_subsegment_stat_t, 4>), "_HEAP_LFH_SUBSEGMENT_STATS.Buckets", buckets, 0x0, 0x40, true, 0x50eca4ca48da9f56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_LFH_SUBSEGMENT_STATS.AllStats", all_stats, 0x0, 0x40, true, 0x2634e6a6c8ee3a96)
#else
#define _m00
#define _m01
#endif