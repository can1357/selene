#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_VISIBLE_STATE.SessionWsList", session_ws_list, 0x0, 0x80, true, 0x992ff73313e83a9d)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t*), "_MI_VISIBLE_STATE.SessionIdBitmap", session_id_bitmap, 0x80, 0x40, true, 0x3d641c1312bf984)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::paged_pool_info_t), "_MI_VISIBLE_STATE.PagedPoolInfo", paged_pool_info, 0xc0, 0xc0, true, 0xaefc585c27355a5c)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_STATE.MaximumNonPagedPoolInPages", maximum_non_paged_pool_in_pages, 0x180, 0x40, true, 0x59e102a58ad62a3b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_STATE.SizeOfPagedPoolInPages", size_of_paged_pool_in_pages, 0x1c0, 0x40, true, 0x483d19add1acc40b)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_pte_type_t), "_MI_VISIBLE_STATE.SystemPteInfo", system_pte_info, 0x200, 0x0, true, 0xf3c10982ab9409da)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.NonPagedPoolCommit", non_paged_pool_commit, 0x500, 0x40, true, 0xc8208e39e6d0103)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.BootCommit", boot_commit, 0x580, 0x40, true, 0xc72e905f7c67b4dc)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.MdlPagesAllocated", mdl_pages_allocated, 0x5c0, 0x40, true, 0x1716e6f091b1e8cf)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.SystemPageTableCommit", system_page_table_commit, 0x600, 0x40, true, 0xc8ff3f2cd2cb8e62)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.ProcessCommit", process_commit, 0x640, 0x40, true, 0xf7c4fc81a74f8dc9)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_VISIBLE_STATE.DriverCommit", driver_commit, 0x680, 0x20, true, 0x677ddc307152caa5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmsupport_full_t, 3>), "_MI_VISIBLE_STATE.SystemWs", system_ws, 0x800, 0x0, true, 0xd5103acc4d27f6d)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_shared_t), "_MI_VISIBLE_STATE.SystemCacheShared", system_cache_shared, 0x4400, 0x0, true, 0x6e189ea1936a769e)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmsupport_aggregation_t, 1>), "_MI_VISIBLE_STATE.AggregateSystemWs", aggregate_system_ws, 0x4800, 0x0, true, 0x965b3b1b80c5686b)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_VISIBLE_STATE.MapCacheFailures", map_cache_failures, 0x4900, 0x20, true, 0xd1d56a0727fb69fb)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_STATE.PagefileHashPages", pagefile_hash_pages, 0x4940, 0x40, true, 0x9d02a1425040cd9b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sysptes_header_t), "_MI_VISIBLE_STATE.PteHeader", pte_header, 0x4980, 0xc0, true, 0xa8c54d1a105ee4f8)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 14>), "_MI_VISIBLE_STATE.SystemVaTypeCount", system_va_type_count, 0x5240, 0x0, true, 0x4a5622e22e237174)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::system_va_assignment_t, 14>), "_MI_VISIBLE_STATE.SystemVaRegions", system_va_regions, 0x5e40, 0x80, true, 0xd5dcc6411d7da0a4)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.SmallNonPagedPtesCommit", small_non_paged_ptes_commit, 0x540, 0x40, true, 0x8b7de180f760b3c4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_VISIBLE_STATE.PagingLevels", paging_levels, 0x6a0, 0x8, true, 0xba8cbec29254e368)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.PfnDatabaseCommit", pfn_database_commit, 0x6c0, 0x40, true, 0x19add11277067f48)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_MI_VISIBLE_STATE.SystemVaType", system_va_type, 0x5640, 0x0, true, 0x235c13f0059c781e)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::special_pool_t), "_MI_VISIBLE_STATE.SpecialPool", special_pool, 0x0, 0x0, false, 0x7e56c4ed2dfeb98c)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.SpecialPagesInUse", special_pages_in_use, 0x0, 0x0, false, 0x1edfe7c7927764d9)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.WsOverheadPages", ws_overhead_pages, 0x0, 0x0, false, 0xfdbcbfa5cb3bb9e6)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.VadBitmapPages", vad_bitmap_pages, 0x0, 0x0, false, 0x2fa9b674012dcf52)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.SharedCommit", shared_commit, 0x0, 0x0, false, 0x45879b154e7fe2c9)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsl_shared_t), "_MI_VISIBLE_STATE.SystemCacheSharedWorkingSetList", system_cache_shared_working_set_list, 0x0, 0x0, false, 0xf8228d7cfa9c056b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::special_pool_t*), "_MI_VISIBLE_STATE.SessionSpecialPool", session_special_pool, 0x0, 0x0, false, 0x9d1c8b375fcf225)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_STATE.ContiguousPagesAllocated", contiguous_pages_allocated, 0x0, 0x0, false, 0x6b74ca577fe53511)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#endif