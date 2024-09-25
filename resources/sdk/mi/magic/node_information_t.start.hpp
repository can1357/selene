#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::rebuild_large_page_timer_t), "_MI_NODE_INFORMATION.LargePageRebuildTimer", large_page_rebuild_timer, 0x6480, 0x40, true, 0x2cab73c4e2c4161c)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<sdk::array<struct nt::mmpfnlist_short_t, 8>, 4>, sdk::array<sdk::array<struct nt::mmpfnlist_t, 8>, 4>>), "_MI_NODE_INFORMATION.StandbyPageList", standby_page_list, 0x65c0, 0x0, true, 0xf666af81f2c1a437)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile uint64_t, 2>), "_MI_NODE_INFORMATION.FreeCount", free_count, 0x8100, 0x80, true, 0xc2185bc0d4bcbfdb)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MI_NODE_INFORMATION.TotalPages", total_pages, 0x8180, 0x0, true, 0xf8e244296985882b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.TotalPagesEntireNode", total_pages_entire_node, 0x8280, 0x40, true, 0xf18501c4e892f798)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_NODE_INFORMATION.MmShiftedColor", mm_shifted_color, 0x8380, 0x20, true, 0xddd9e62770c151e)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_NODE_INFORMATION.Color", color, 0x83a0, 0x20, true, 0xf12a44d8b5ca624c)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<volatile uint64_t, 2>, 4>), "_MI_NODE_INFORMATION.ChannelFreeCount", channel_free_count, 0x83c0, 0x0, true, 0x3a1bf162f782ada1)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_MI_NODE_INFORMATION.Flags", flags, 0x85c0, 0x20, true, 0xea38212ea70221d8)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, volatile int32_t>), "_MI_NODE_INFORMATION.NodeLock", node_lock, 0x8640, 0x40, true, 0x28617ce0ebeb1736)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.ZeroThreadHugeMapLock", zero_thread_huge_map_lock, 0x8680, 0x40, true, 0xc1c41f1e999d63cb)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_NODE_INFORMATION.ChannelStatus", channel_status, 0x86c0, 0x8, true, 0x43bd557a91e59b7b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MI_NODE_INFORMATION.ChannelOrdering", channel_ordering, 0x86c8, 0x20, true, 0x5a90985cc50cd5b1)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MI_NODE_INFORMATION.LockedChannelOrdering", locked_channel_ordering, 0x86e8, 0x20, true, 0x70e85764e4c3e757)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MI_NODE_INFORMATION.PowerAttribute", power_attribute, 0x8708, 0x20, true, 0x78e1a35159e62fb7)
#define _m016 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int64_t), "_MI_NODE_INFORMATION.LargePageLock", large_page_lock, 0x8740, 0x40, true, 0x173e6738622f4755, 0, uint64_t,uint32_t)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::free_large_pages_t, 3>), "_MI_NODE_INFORMATION.FreeLargePages", free_large_pages, 0x0, 0x80, true, 0x5ced8e3884a1257e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<struct rtl::bitmap_t, 2>, sdk::array<sdk::array<struct rtl::bitmap_ex_t, 2>, 3>>), "_MI_NODE_INFORMATION.FreePageListHeadsBitmap", free_page_list_heads_bitmap, 0x7e00, 0x0, true, 0x4915944d6d8b04af)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint32_t, 16>, sdk::array<uint64_t, 24>>), "_MI_NODE_INFORMATION.FreePageListHeadsBitmapBuffer", free_page_list_heads_bitmap_buffer, 0x7f00, 0x0, true, 0xd13df78f94e6488d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_NODE_INFORMATION.CurrentHugeRangeColor", current_huge_range_color, 0x82c0, 0x20, true, 0x181bada3094dc352)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint64_t, 2>, sdk::array<sdk::array<uint64_t, 4>, 2>>), "_MI_NODE_INFORMATION.HugeIoRangeFreeCount", huge_io_range_free_count, 0x8300, 0x80, true, 0x8ce1c57c777d675d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_NODE_INFORMATION.LargeListMoveInProgress", large_list_move_in_progress, 0x85e0, 0x20, true, 0x4c906b91a34f65c1)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::large_page_lists_changing_t*), "_MI_NODE_INFORMATION.LargeListWaiters", large_list_waiters, 0x8600, 0x40, true, 0xe4d32c2df731b821)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::page_colors_t), "_MI_NODE_INFORMATION.PageColorTable", page_color_table, 0x8780, 0x80, true, 0x683775651925d915)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.NumberOfPagesGoingBad", number_of_pages_going_bad, 0x8800, 0x40, true, 0x36e223340f0d3d36)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_NODE_INFORMATION.BootZeroContext", boot_zero_context, 0x8940, 0x40, true, 0xc3a32bd2ca342a1f)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_NODE_INFORMATION.ZeroingContext", zeroing_context, 0x8a80, 0x40, true, 0x14c5a0f0091bc68b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_NODE_INFORMATION.BackgroundZeroingActive", background_zeroing_active, 0x8c50, 0x8, true, 0x2655a066c84b9ce9)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::physical_memory_descriptor_t*), "_MI_NODE_INFORMATION.ZeroingPhysicalMemoryBlock", zeroing_physical_memory_block, 0x8c80, 0x40, true, 0x56b8925cab7c6c05)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::write_calibration_t), "_MI_NODE_INFORMATION.WriteCalibration", write_calibration, 0x8840, 0x0, true, 0xf60eeb2c306d2e0f)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_NODE_INFORMATION.BootZeroPageTimesPerProcessor", boot_zero_page_times_per_processor, 0x8980, 0x40, true, 0x9f5f5aa55d9d598a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_NODE_INFORMATION.ZeroingVaBase", zeroing_va_base, 0x89c0, 0x40, true, 0x59ee13c2fd9f0533)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.TotalBytesToZero", total_bytes_to_zero, 0x8a00, 0x40, true, 0xe0af52749a037923)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.PerProcessorNumberOfBytesToZero", per_processor_number_of_bytes_to_zero, 0x8a40, 0x40, true, 0xe5e5ca65e4fc8641)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MI_NODE_INFORMATION.ZeroingProcessorCount", zeroing_processor_count, 0x8ac0, 0x20, true, 0xe3907ee1ef740fa0)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_NODE_INFORMATION.ZeroHand", zero_hand, 0x8ae0, 0x20, true, 0x9c23cff3eb019ad7)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_NODE_INFORMATION.FinishedProcessors", finished_processors, 0x8b00, 0x20, true, 0xc92c32b7143d1a06)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.CyclesToZeroOneLargePage", cycles_to_zero_one_large_page, 0x8b40, 0x40, true, 0xc30438c4a3a8933f)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_MI_NODE_INFORMATION.ScaledCyclesToZeroOneLargePage", scaled_cycles_to_zero_one_large_page, 0x8b80, 0x40, true, 0x9ca0c28fd51861c4)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_MI_NODE_INFORMATION.GroupAffinity", group_affinity, 0x8bc0, 0x80, true, 0xc019aab61fce0e4c)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MI_NODE_INFORMATION.ProcessorCount", processor_count, 0x8c40, 0x10, true, 0x3720d3e9fab65281)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 3>), "_MI_NODE_INFORMATION.LargePageFreeCount", large_page_free_count, 0x0, 0x0, false, 0x307881683ec6a2a1)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<sdk::array<nt::list_entry_t, 4>, 2>, 2>, 3>), "_MI_NODE_INFORMATION.LargePages", large_pages, 0x0, 0x0, false, 0x7ebb5e97cf6a9437)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<sdk::array<uint64_t, 4>, 2>, 2>, 3>), "_MI_NODE_INFORMATION.LargePagesCount", large_pages_count, 0x0, 0x0, false, 0x986de1eafbe81fb9)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<struct mi::standby_lookaside_t, 8>, 4>), "_MI_NODE_INFORMATION.StandbyPageCachePerChannel", standby_page_cache_per_channel, 0x0, 0x0, false, 0xfdcd30b9bff4b5db)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile uint64_t, 4>), "_MI_NODE_INFORMATION.FreeZeroCountByAttribute", free_zero_count_by_attribute, 0x0, 0x0, false, 0x987b1229f5ad84c6)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MI_NODE_INFORMATION.Partition", partition, 0x0, 0x0, false, 0xe3a5d40c4ceb1cfa)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.TotalHugeIoPages", total_huge_io_pages, 0x0, 0x0, false, 0xdfc3a4ff790491d8)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.ScrubResumePage", scrub_resume_page, 0x0, 0x0, false, 0x74d63e77a384a1de)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_NODE_INFORMATION.ZeroContextLock", zero_context_lock, 0x0, 0x0, false, 0x89884753bfdb65c5)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_NODE_INFORMATION.ZeroThreadConductor", zero_thread_conductor, 0x0, 0x0, false, 0x67ccf1f73d5223d8)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cached_kstack_list_t, 3>), "_MI_NODE_INFORMATION.CachedKernelStacks", cached_kernel_stacks, 0x0, 0x0, false, 0x7f8ac649b0ec7d0c)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cached_kstack_list_t, 3>), "_MI_NODE_INFORMATION.CachedKernelShadowStackLists", cached_kernel_shadow_stack_lists, 0x0, 0x0, false, 0x5add58c9044e3163)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::slab_allocator_context_t, 7>), "_MI_NODE_INFORMATION.SlabContexts", slab_contexts, 0x0, 0x0, false, 0x6a5778a65ce6cdc1)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::slab_allocator_context_t volatile*), "_MI_NODE_INFORMATION.FreePageSlabContextHint", free_page_slab_context_hint, 0x0, 0x0, false, 0x3679fd2f572f1ea)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_NODE_INFORMATION.MdlSlabFragmentionLastDemoteTime", mdl_slab_fragmention_last_demote_time, 0x0, 0x0, false, 0x262af4530e2a9c16)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_NODE_INFORMATION.EnclavePageListHead", enclave_page_list_head, 0x0, 0x0, false, 0xc4343b2b300cc893)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_NODE_INFORMATION.Flags.ChannelsHotCold", channels_hot_cold, 0x0, 0x1, true, 0x813838690301e1a9, 1, uint32_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
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
#define _m08
#endif