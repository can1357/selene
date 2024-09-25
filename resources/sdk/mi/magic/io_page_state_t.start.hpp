#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::avl_tree_t, 3>), "_MI_IO_PAGE_STATE.IoPfnRoot", io_pfn_root, 0x40, 0xc0, true, 0x254d19b6001668f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::io_cache_stats_t), "_MI_IO_PAGE_STATE.IoCacheStats", io_cache_stats, 0x1c0, 0x40, true, 0x9ff6eef951b337dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_IO_PAGE_STATE.InvariantIoSpace", invariant_io_space, 0x300, 0x40, true, 0xa74875903b92dcf1)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int64_t), "_MI_IO_PAGE_STATE.IoPfnLock", io_pfn_lock, 0x0, 0x20, true, 0xe11b058b624cc6d, 0, uint64_t,uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_IO_PAGE_STATE.UnusedCachedMaps", unused_cached_maps, 0x100, 0x80, true, 0x7628561c8dde761d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_PAGE_STATE.OldestCacheFlushTimeStamp", oldest_cache_flush_time_stamp, 0x180, 0x20, true, 0xfb0bb9bd18e1db95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_MI_IO_PAGE_STATE.UnmappedNodeCount", unmapped_node_count, 0x0, 0x0, false, 0x7edc793f15d90ab0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_IO_PAGE_STATE.UnmappedHugeIoSpaceNodeCount", unmapped_huge_io_space_node_count, 0x0, 0x0, false, 0x7a0c1e189d533818)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_IO_PAGE_STATE.UnmappedNodeCountMaximum", unmapped_node_count_maximum, 0x0, 0x0, false, 0xdb56f2ebfb7ab22f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_MI_IO_PAGE_STATE.TotalNodeCount", total_node_count, 0x0, 0x0, false, 0x1fb5d4ab9e516d64)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_IO_PAGE_STATE.IoPfnPruneLock", io_pfn_prune_lock, 0x0, 0x0, false, 0x8037172471e1bb5d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_MI_IO_PAGE_STATE.ResumePageForDeleteScans", resume_page_for_delete_scans, 0x0, 0x0, false, 0xe414a35c65f7c277)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_IO_PAGE_STATE.UnmappedNodeWorkItem", unmapped_node_work_item, 0x0, 0x0, false, 0x7b633d7bf98e33a4)
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
#define _m11
#define _m12
#endif