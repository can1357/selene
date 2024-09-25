#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_MI_FREE_LARGE_PAGES.LargePageFreeCount", large_page_free_count, 0x0, 0x80, true, 0x27f6933ae4bb5f6b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 2>), "_MI_FREE_LARGE_PAGES.LargePageFreeCountHiLow", large_page_free_count_hi_low, 0x80, 0x0, true, 0x62ff8c2e8c802704)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<sdk::array<uint64_t, 4>, 4>, 2>, 2>), "_MI_FREE_LARGE_PAGES.LargePagesCount", large_pages_count, 0x180, 0x0, true, 0xa17dd13adf0e9e0c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<sdk::array<struct mi::free_large_page_list_t*, 4>, 4>, 2>, 2>), "_MI_FREE_LARGE_PAGES.LargePageEntries", large_page_entries, 0x1180, 0x0, true, 0xa07410b61ab94e14)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif