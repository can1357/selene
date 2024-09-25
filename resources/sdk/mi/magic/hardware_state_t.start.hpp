#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.NodeMask", node_mask, 0x0, 0x20, true, 0xf41dd20236671245)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.NodeShift", node_shift, 0x60, 0x8, true, 0x1410ef1595e72698)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.ChannelShift", channel_shift, 0x68, 0x8, true, 0xbdd8a797e1d32ef9)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint16_t*, struct mi::node_number_zero_based_t*>), "_MI_HARDWARE_STATE.NodeGraph", node_graph, 0xc0, 0x40, true, 0x904d8a9dce57404f)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hal::node_range_t*), "_MI_HARDWARE_STATE.NumaMemoryRanges", numa_memory_ranges, 0x240, 0x40, true, 0x9b579dfa8a927b6f)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hal::channel_memory_ranges_t*), "_MI_HARDWARE_STATE.ChannelMemoryRanges", channel_memory_ranges, 0x280, 0x40, true, 0xae38f76184bf20bb)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.SecondLevelCacheSize", second_level_cache_size, 0x2c0, 0x20, true, 0xc2def547c26c4764)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.FirstLevelCacheSize", first_level_cache_size, 0x2e0, 0x20, true, 0x88572c81ce240443)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.PhysicalAddressBits", physical_address_bits, 0x300, 0x20, true, 0x8277490782bdc9b6)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_HARDWARE_STATE.TotalPagesAllowed", total_pages_allowed, 0x380, 0x40, true, 0xf67080da4d6e6e8e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.SecondaryColorMask", secondary_color_mask, 0x3c0, 0x20, true, 0x646e0ce3e685f12e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.SecondaryColors", secondary_colors, 0x3e0, 0x20, true, 0x3f9d18bc521ef5c2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.FlushTbForAttributeChange", flush_tb_for_attribute_change, 0x400, 0x20, true, 0xf76ddf3b79547fc8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.FlushCacheForAttributeChange", flush_cache_for_attribute_change, 0x420, 0x20, true, 0xdac3a6ac4b378a16)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.FlushCacheForPageAttributeChange", flush_cache_for_page_attribute_change, 0x440, 0x20, true, 0x5ccc3afb08a6e2c3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.CacheFlushPromoteThreshold", cache_flush_promote_threshold, 0x460, 0x20, true, 0x9c182369e25870b5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_HARDWARE_STATE.FlushTbThreshold", flush_tb_threshold, 0x880, 0x40, true, 0xdbb56a7f6d3cc5db)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.AttributeChangeRequiresReZero", attribute_change_requires_re_zero, 0xac0, 0x8, true, 0x794e07f0c063e570)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_HARDWARE_STATE.VsmKernelPageCount", vsm_kernel_page_count, 0xc00, 0x40, true, 0xeb8458bb1902360d)
#define _m019 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_MI_HARDWARE_STATE.NumaHintIndex", numa_hint_index, 0x20, 0x20, true, 0xbbe28dcfeafcd9f3, 32, uint32_t)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.NumaLastRangeIndexInclusive", numa_last_range_index_inclusive, 0x40, 0x20, true, 0x1a2da4d21850849d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.ChannelHintIndex", channel_hint_index, 0x80, 0x20, true, 0xe94d1bc216c683f0)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.ChannelLastRangeIndexInclusive", channel_last_range_index_inclusive, 0xa0, 0x20, true, 0x9b5bcba428ee6816)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct hal::node_range_t, 2>), "_MI_HARDWARE_STATE.TemporaryNumaRanges", temporary_numa_ranges, 0x140, 0x0, true, 0x98815c712eebf568)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.ProcessorCachesFlushedOnPowerLoss", processor_caches_flushed_on_power_loss, 0x340, 0x8, true, 0xf18b7a092825298c)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_HARDWARE_STATE.InvalidPteMask", invalid_pte_mask, 0x600, 0x40, true, 0x20ae8a1b3cc063ee)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_MI_HARDWARE_STATE.LargePageColors", large_page_colors, 0x800, 0x60, true, 0x6cbfc12f660b53ee)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_node_information_t*), "_MI_HARDWARE_STATE.SystemNodeInformation", system_node_information, 0x100, 0x40, true, 0x1c50a3710df0cd80)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<enum mi::pfn_cache_attribute_t, 4>, 4>), "_MI_HARDWARE_STATE.OptimalZeroingAttribute", optimal_zeroing_attribute, 0x8c0, 0x0, true, 0x32d0ea15d6a6dae3)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::zero_cost_counts_t, 2>), "_MI_HARDWARE_STATE.ZeroCostCounts", zero_cost_counts, 0xb00, 0x0, true, 0x3229d77e916250ca)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_HARDWARE_STATE.HighestPossiblePhysicalPage", highest_possible_physical_page, 0x0, 0x0, false, 0x67eb79eb075d30eb)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.LogicalProcessorsPerCore", logical_processors_per_core, 0x320, 0x20, true, 0xb35a5c8fed452b86)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MI_HARDWARE_STATE.PerformanceCounterFrequency", performance_counter_frequency, 0x480, 0x40, true, 0xa1ca2e165b69d2ca)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.MemoryNodeWithNoProcessorsFound", memory_node_with_no_processors_found, 0x0, 0x0, false, 0xcb144d376d9c9d86)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.AccessBitReplacementHonored", access_bit_replacement_honored, 0x0, 0x0, false, 0xaf22328ae4b31a63)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_node_nonpaged_pool_t*), "_MI_HARDWARE_STATE.SystemNodeNonPagedPool", system_node_non_paged_pool, 0x0, 0x0, false, 0x5f5237a4fc0f0313)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.PfnDatabasePageBits", pfn_database_page_bits, 0x0, 0x0, false, 0x9a6f56cc80cae17c)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.PageTableReuseRequiresFlush", page_table_reuse_requires_flush, 0x0, 0x0, false, 0x138b48ee54b04162)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 512>), "_MI_HARDWARE_STATE.HugePageRemoveTracker", huge_page_remove_tracker, 0x0, 0x0, false, 0xd394c5d6b036b51d)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_HARDWARE_STATE.HotAddSequenceNumber", hot_add_sequence_number, 0x0, 0x0, false, 0x96812d520e6579b9)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_HARDWARE_STATE.SpecialPurposeMemoryTypeId", special_purpose_memory_type_id, 0x0, 0x0, false, 0xa8ee3f3aee0e1e9e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.SpecialPurposeMemoryQueryTypeExtraSpace", special_purpose_memory_query_type_extra_space, 0x0, 0x0, false, 0x729e1cbf4d84e53)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HARDWARE_STATE.NumaLastRangeIndex", numa_last_range_index, 0x0, 0x0, false, 0x3c7ad720b75d39df)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.NumaTableCaptured", numa_table_captured, 0x0, 0x0, false, 0xed6c05fa485b3bc9)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_HARDWARE_STATE.AllMainMemoryMustBeCached", all_main_memory_must_be_cached, 0x0, 0x0, false, 0x8a577e96ba4fdd0a)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_HARDWARE_STATE.PrimaryPfns", primary_pfns, 0x0, 0x0, false, 0x9182b96b9d7f2795)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_HARDWARE_STATE.EnclaveRegions", enclave_regions, 0x0, 0x0, false, 0xa1898e8b92012d7f)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MI_HARDWARE_STATE.GlobalBitPolarity", global_bit_polarity, 0x0, 0x0, false, 0xc17a7065ffed2758)
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
#endif