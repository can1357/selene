#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS.SmallPagesInUseWithinLarge", small_pages_in_use_within_large, 0x0, 0x40, true, 0xc55c6f5391161a7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS.OpportunisticLargePageCount", opportunistic_large_page_count, 0x40, 0x40, true, 0x5433da927578ea0b)
#else
#define _m00
#define _m01
#endif