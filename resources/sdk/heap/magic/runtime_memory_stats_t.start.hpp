#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_HEAP_RUNTIME_MEMORY_STATS.TotalReservedPages", total_reserved_pages, 0x0, 0x40, true, 0xd0ec7f1e0be3f72f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_HEAP_RUNTIME_MEMORY_STATS.TotalCommittedPages", total_committed_pages, 0x40, 0x40, true, 0x2b898b97cec0efd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_RUNTIME_MEMORY_STATS.FreeCommittedPages", free_committed_pages, 0x80, 0x40, true, 0xd1fbf96f10ca3077)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_RUNTIME_MEMORY_STATS.LfhFreeCommittedPages", lfh_free_committed_pages, 0xc0, 0x40, true, 0x8dafc92fab9f3afe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::opportunistic_large_page_stats_t, 2>), "_HEAP_RUNTIME_MEMORY_STATS.LargePageStats", large_page_stats, 0x100, 0x0, true, 0x18994d7cc2be97e2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_seg_alloc_policy_t), "_HEAP_RUNTIME_MEMORY_STATS.LargePageUtilizationPolicy", large_page_utilization_policy, 0x200, 0xc0, true, 0x74486bbf6dbe7818)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif