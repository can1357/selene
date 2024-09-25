#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.OpenedKeys", opened_keys, 0x0, 0x40, true, 0xd38ea0085314c200)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.DelayCloseKCBs", delay_close_kc_bs, 0x40, 0x40, true, 0xd0ac781f7835a912)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.PrivateAllocPages", private_alloc_pages, 0x80, 0x40, true, 0x8827c8ed34ae8b2e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.PrivateAllocFree", private_alloc_free, 0xc0, 0x40, true, 0xbb26673fa1e1555f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.PrivateAllocUsed", private_alloc_used, 0x100, 0x40, true, 0x6030996f802ebbf4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.LookupCacheHit", lookup_cache_hit, 0x140, 0x40, true, 0xd91a2ea4e6e664b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.LookupCacheMissFound", lookup_cache_miss_found, 0x180, 0x40, true, 0xfffb92d63dbef4ee)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.LookupCacheMissNotFound", lookup_cache_miss_not_found, 0x1c0, 0x40, true, 0xdbcf895d28a25b79)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.ViewMap", view_map, 0x200, 0x40, true, 0x8effa2e170a62f71)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.ViewUnMap", view_un_map, 0x240, 0x40, true, 0xec9bdf9c74e6e396)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PERF_COUNTERS.HiveShrink", hive_shrink, 0x280, 0x40, true, 0x7714b742bac92197)
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