#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MI_PAGE_COMBINING_SUPPORT.Partition", partition, 0x0, 0x40, true, 0x5e9121bf450ebd70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PAGE_COMBINING_SUPPORT.ArbitraryPfnMapList", arbitrary_pfn_map_list, 0x40, 0x80, true, 0x1fd58231df4a12d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::combine_workitem_t), "_MI_PAGE_COMBINING_SUPPORT.FreeCombinePoolItem", free_combine_pool_item, 0xc0, 0x40, true, 0x394015f04f78470f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGE_COMBINING_SUPPORT.CombiningThreadCount", combining_thread_count, 0x200, 0x20, true, 0x2ef8323a33188033)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PAGE_COMBINING_SUPPORT.CombinePageFreeList", combine_page_free_list, 0x240, 0x80, true, 0x228a712d380ae1b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGE_COMBINING_SUPPORT.CombineFreeListLock", combine_free_list_lock, 0x2c0, 0x40, true, 0x6fe2b02c81abed3e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::combine_page_listhead_t, 16>), "_MI_PAGE_COMBINING_SUPPORT.CombinePageListHeads", combine_page_list_heads, 0x300, 0x0, true, 0x8bdb6a1504acc6d9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::page_combine_statistics_t), "_MI_PAGE_COMBINING_SUPPORT.PageCombineStats", page_combine_stats, 0xb40, 0x40, true, 0xa403881ba76226b6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGE_COMBINING_SUPPORT.CommonPageCombineDomain", common_page_combine_domain, 0xb00, 0x40, true, 0xf181151c8c227c2c)
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