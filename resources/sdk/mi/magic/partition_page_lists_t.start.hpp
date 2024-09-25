#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmpfnlist_t*, 2>), "_MI_PARTITION_PAGE_LISTS.FreePagesByColor", free_pages_by_color, 0x0, 0x80, true, 0xb4b39466c586e196)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_PARTITION_PAGE_LISTS.ZeroedPageListHead", zeroed_page_list_head, 0x200, 0x40, true, 0x62ee7d37733d9a35)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_PARTITION_PAGE_LISTS.FreePageListHead", free_page_list_head, 0x400, 0x40, true, 0x3c3d30bf4cef7e46)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_PARTITION_PAGE_LISTS.StandbyPageListHead", standby_page_list_head, 0x600, 0x40, true, 0xae7dc92a6ef80a81)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmpfnlist_t, 8>), "_MI_PARTITION_PAGE_LISTS.StandbyPageListByPriority", standby_page_list_by_priority, 0x800, 0x0, true, 0x6d12c04910e658b1)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_PARTITION_PAGE_LISTS.ModifiedPageListNoReservation", modified_page_list_no_reservation, 0x1200, 0x40, true, 0x56d672fc40e2d631)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmpfnlist_t, 16>), "_MI_PARTITION_PAGE_LISTS.ModifiedPageListByReservation", modified_page_list_by_reservation, 0x1400, 0x0, true, 0xce3ed950e5f9deac)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmpfnlist_t, 16>), "_MI_PARTITION_PAGE_LISTS.MappedPageListHead", mapped_page_list_head, 0x2800, 0x0, true, 0xa3bd6bb21259804e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_PARTITION_PAGE_LISTS.BadPageListHead", bad_page_list_head, 0x3c00, 0x40, true, 0xa15ffc9c4bbaca1d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::slist_header_t*, 2>), "_MI_PARTITION_PAGE_LISTS.FreePageSlist", free_page_slist, 0x3f40, 0x80, true, 0x5c3fdf11af8c957f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmpfnlist_t*, 8>), "_MI_PARTITION_PAGE_LISTS.PageLocationList", page_location_list, 0x3fc0, 0x0, true, 0xb8927497164aae25)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile uint32_t, 8>), "_MI_PARTITION_PAGE_LISTS.StandbyRepurposedByPriority", standby_repurposed_by_priority, 0x41c0, 0x0, true, 0xf37a7443ecbb32d2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kevent_t, 16>), "_MI_PARTITION_PAGE_LISTS.MappedPageListHeadEvent", mapped_page_list_head_event, 0x45c0, 0x0, true, 0x9968c50a6ad8e4ce)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::decay_timer_link_t, 4>), "_MI_PARTITION_PAGE_LISTS.DecayClusterTimerHeads", decay_cluster_timer_heads, 0x51c0, 0x0, true, 0xcdb3695ae5b90750)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_PAGE_LISTS.DecayHand", decay_hand, 0x52c0, 0x20, true, 0xcd20111c768f1874)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_MI_PARTITION_PAGE_LISTS.StandbyListDiscard", standby_list_discard, 0x52e0, 0x8, true, 0xb85825a089e92c0, 0, uint32_t,uint8_t)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_PAGE_LISTS.FreeListDiscard", free_list_discard, 0x52e8, 0x8, true, 0x46b96c8e823fd9f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.LastDecayHandUpdateTime", last_decay_hand_update_time, 0x5300, 0x40, true, 0x729fdd41e79a9b1e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::ldw_work_context_t), "_MI_PARTITION_PAGE_LISTS.LastChanceLdwContext", last_chance_ldw_context, 0x5340, 0xc0, true, 0x6e7372e1f7120730)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.AvailableEventsLock", available_events_lock, 0x5600, 0x40, true, 0x6d11d89b5d04d2cf)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::available_page_wait_states_t, 3>), "_MI_PARTITION_PAGE_LISTS.AvailablePageWaitStates", available_page_wait_states, 0x5640, 0x0, true, 0xbd650e37db2beb9c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_PARTITION_PAGE_LISTS.TransitionPrivatePages", transition_private_pages, 0x5a00, 0x40, true, 0x8cade3bcfe24d434)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::bitmap_ex_t, 2>), "_MI_PARTITION_PAGE_LISTS.LargePfnBitMap", large_pfn_bit_map, 0x5a40, 0x0, true, 0x50e8050f506535e5)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.LowMemoryThreshold", low_memory_threshold, 0x5d80, 0x40, true, 0x74aaf08a6b01d499)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.HighMemoryThreshold", high_memory_threshold, 0x5dc0, 0x40, true, 0x13dadced6c5ece00)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_PARTITION_PAGE_LISTS.TransitionSharedPages", transition_shared_pages, 0x4400, 0x40, true, 0xf1134defe60ad69)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 6>), "_MI_PARTITION_PAGE_LISTS.TransitionSharedPagesPeak", transition_shared_pages_peak, 0x4440, 0x80, true, 0x26f1890ef11524f1)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_PAGE_LISTS.PfnBitMapsReady", pfn_bit_maps_ready, 0x52f0, 0x8, true, 0xdb627923b0c0c856)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::free_large_page_list_t*), "_MI_PARTITION_PAGE_LISTS.LargePageListHeads", large_page_list_heads, 0x5b40, 0x40, true, 0x40477ac0c0bfa108)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint8_t*, volatile char*>), "_MI_PARTITION_PAGE_LISTS.MediumPagesOnFreeZeroList", medium_pages_on_free_zero_list, 0x5b80, 0x40, true, 0x4472b48d9fcd049b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_PARTITION_PAGE_LISTS.LargePageRebuildCandidates", large_page_rebuild_candidates, 0x5bc0, 0x80, true, 0x50134892fd752518)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<wchar_t*, volatile int16_t*>), "_MI_PARTITION_PAGE_LISTS.LargePagesOnFreeZeroList", large_pages_on_free_zero_list, 0x5c40, 0x40, true, 0xbfbf07db56e13706)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_PAGE_LISTS.HugePageRebuildCandidatesExist", huge_page_rebuild_candidates_exist, 0x5c80, 0x20, true, 0x7e523c59c13c0b8e)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_PAGE_LISTS.LargePageCandidatesExistEvent", large_page_candidates_exist_event, 0x5cc0, 0xc0, true, 0xe325c5c3f06e9ee9)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::bitmap_ex_t, sdk::array<struct rtl::bitmap_ex_t, 2>>), "_MI_PARTITION_PAGE_LISTS.SlabPfnBitMap", slab_pfn_bit_map, 0x7c00, 0x80, true, 0xdec80ba96f505c71)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION_PAGE_LISTS.HugePfnLists", huge_pfn_lists, 0x7c80, 0x40, true, 0xb807518bf64d8b8c)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.AvailableHugeIoRanges", available_huge_io_ranges, 0x7cc0, 0x40, true, 0x83c7598c393e812d)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_PARTITION_PAGE_LISTS.EnclavePageListHead", enclave_page_list_head, 0x3e00, 0x40, true, 0xd056174851fe8b48)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION_PAGE_LISTS.MirrorListLocks", mirror_list_locks, 0x5940, 0x40, true, 0x51a3fd26bc901670)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_PARTITION_PAGE_LISTS.HugePfnBadPages", huge_pfn_bad_pages, 0x5500, 0x40, true, 0x8516793604f5c1a1)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<struct mi::slab_allocator_context_t, 4>, 2>), "_MI_PARTITION_PAGE_LISTS.SlabContexts", slab_contexts, 0x5e00, 0x0, true, 0xfee2185605831d21)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_PAGE_LISTS.LargePfnBitMapsReady", large_pfn_bit_maps_ready, 0x0, 0x0, false, 0x4bb0cf649ed765c2)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.LargePfnBitMapLock", large_pfn_bit_map_lock, 0x0, 0x0, false, 0x7428180622849c88)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_PARTITION_PAGE_LISTS.ModifiedPageListNoReservationCompress", modified_page_list_no_reservation_compress, 0x0, 0x0, false, 0x69b5ed5d98f36c7f)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::standby_lookaside_t, 8>), "_MI_PARTITION_PAGE_LISTS.OldestStandbyPageCache", oldest_standby_page_cache, 0x0, 0x0, false, 0x52e2c18f536dcf40)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::standby_lookaside_t, 8>), "_MI_PARTITION_PAGE_LISTS.NewestStandbyPageCache", newest_standby_page_cache, 0x0, 0x0, false, 0xb9f9bc850f932a93)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 8>, 2>), "_MI_PARTITION_PAGE_LISTS.NewestStandbyPageCacheInserts", newest_standby_page_cache_inserts, 0x0, 0x0, false, 0x75d4038a53cce29e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_PAGE_LISTS.ProcessLargePageCacheLock", process_large_page_cache_lock, 0x0, 0x0, false, 0x85a2fd9f65fbd1e3)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PARTITION_PAGE_LISTS.ProcessLargePageCacheLinks", process_large_page_cache_links, 0x0, 0x0, false, 0x34b5acbea098fd00)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_PAGE_LISTS.ProcessLargePageCachePeriodicCount", process_large_page_cache_periodic_count, 0x0, 0x0, false, 0xe789065f4f8bde0e)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.LowMemoryConfiguredThreshold", low_memory_configured_threshold, 0x0, 0x0, false, 0x9ae904ff6571154f)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.HighMemoryConfiguredThreshold", high_memory_configured_threshold, 0x0, 0x0, false, 0x6d1856ad386e6e61)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 7>), "_MI_PARTITION_PAGE_LISTS.SlabPagesNotAvailable", slab_pages_not_available, 0x0, 0x0, false, 0xc41ddabaff85a3cf)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.SlabEntriesDemoted", slab_entries_demoted, 0x0, 0x0, false, 0x39681bb46a000c3f)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_PAGE_LISTS.SlabDemoteInProgress", slab_demote_in_progress, 0x0, 0x0, false, 0xd48d38463e212b36)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_PAGE_LISTS.SlabTypeAcquiresCharges", slab_type_acquires_charges, 0x0, 0x0, false, 0xb06e101b731badb7)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.DriverPageCount", driver_page_count, 0x0, 0x0, false, 0x751f5d3b0823a9a1)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.DriverLastPage", driver_last_page, 0x0, 0x0, false, 0x1764f04e823c728d)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.DriverNonSlabAttempted", driver_non_slab_attempted, 0x0, 0x0, false, 0xdf33f1db94fd2374)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.DriverSlabLastFailTime", driver_slab_last_fail_time, 0x0, 0x0, false, 0x65666aa727af01cd)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.MdlPagesByListsTotal", mdl_pages_by_lists_total, 0x0, 0x0, false, 0xcc5edd0a8adb3f01)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.MdlPagesByListsFromSlab", mdl_pages_by_lists_from_slab, 0x0, 0x0, false, 0x3f56b5bc6fb6751f)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.MdlPagesByListsSlabNotEligible", mdl_pages_by_lists_slab_not_eligible, 0x0, 0x0, false, 0x38f9a827f001a80b)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.MdlPagesPreferContiguousSlabEligible", mdl_pages_prefer_contiguous_slab_eligible, 0x0, 0x0, false, 0x25e93c7052b89ae0)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.MdlPagesPreferContiguousFromSlab", mdl_pages_prefer_contiguous_from_slab, 0x0, 0x0, false, 0x7809eaf99d01129f)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.MdlSlabPagesFreeZeroedTotal", mdl_slab_pages_free_zeroed_total, 0x0, 0x0, false, 0x3f00558ab163022f)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_MI_PARTITION_PAGE_LISTS.MdlSlabPagesFreeZeroedBuckets", mdl_slab_pages_free_zeroed_buckets, 0x0, 0x0, false, 0xad94185d4aa8d869)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_PAGE_LISTS.SystemPageTablePagesNoSlab", system_page_table_pages_no_slab, 0x0, 0x0, false, 0x5802f93802eab9b0)
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
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#endif