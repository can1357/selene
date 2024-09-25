#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::segment_t), "_HEAP.Segment", segment, 0x0, 0x80, true, 0xcc1248fe1d75b083)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t), "_HEAP.Entry", entry, 0x0, 0x80, true, 0x186de84810c5525f)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.SegmentSignature", segment_signature, 0x80, 0x20, true, 0x4ce709ab6e65a2c2)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.SegmentFlags", segment_flags, 0xa0, 0x20, true, 0x3d9be7d5a9a91868)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP.SegmentListEntry", segment_list_entry, 0xc0, 0x80, true, 0xd1b3c27b9da6bf38)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::heap_t*), "_HEAP.Heap", heap, 0x140, 0x40, true, 0x8ce4c30d8e987a63)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP.BaseAddress", base_address, 0x180, 0x40, true, 0x43b0d6576b00eb55)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.NumberOfPages", number_of_pages, 0x1c0, 0x20, true, 0xd29477cc130169ad)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t*), "_HEAP.FirstEntry", first_entry, 0x200, 0x40, true, 0xb242b5dc481f4364)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t*), "_HEAP.LastValidEntry", last_valid_entry, 0x240, 0x40, true, 0x6b571919ffbaca57)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.NumberOfUnCommittedPages", number_of_un_committed_pages, 0x280, 0x20, true, 0x7e024cdac087f10c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.NumberOfUnCommittedRanges", number_of_un_committed_ranges, 0x2a0, 0x20, true, 0x473ae431a6a1e1fe)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.SegmentAllocatorBackTraceIndex", segment_allocator_back_trace_index, 0x2c0, 0x10, true, 0x243edf08c5ee239)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP.UCRSegmentList", ucr_segment_list, 0x300, 0x80, true, 0xa7496d0aac052edb)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.Flags", flags, 0x380, 0x20, true, 0x32235b18b99c5236)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.ForceFlags", force_flags, 0x3a0, 0x20, true, 0xec035de07e4ff9d8)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.CompatibilityFlags", compatibility_flags, 0x3c0, 0x20, true, 0x7e9f24b25d775a7f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.EncodeFlagMask", encode_flag_mask, 0x3e0, 0x20, true, 0xd969aa93d5980106)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t), "_HEAP.Encoding", encoding, 0x400, 0x80, true, 0x1d551c43373a36d7)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.Interceptor", interceptor, 0x480, 0x20, true, 0xf7e002c90b2655f1)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.VirtualMemoryThreshold", virtual_memory_threshold, 0x4a0, 0x20, true, 0x5df1aaf82fd1bb95)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.Signature", signature, 0x4c0, 0x20, true, 0x6d93ecbe47a7b7a5)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.SegmentReserve", segment_reserve, 0x500, 0x40, true, 0xa037775fa2aa93b8)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.SegmentCommit", segment_commit, 0x540, 0x40, true, 0xb66b632543e88767)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.DeCommitFreeBlockThreshold", de_commit_free_block_threshold, 0x580, 0x40, true, 0xe4d10747cd517f7e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.DeCommitTotalFreeThreshold", de_commit_total_free_threshold, 0x5c0, 0x40, true, 0x3d51f3dd0a7d615d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.TotalFreeSize", total_free_size, 0x600, 0x40, true, 0x8ae29e2c7634d96a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.MaximumAllocationSize", maximum_allocation_size, 0x640, 0x40, true, 0x1c145e892b7ed63)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.ProcessHeapsListIndex", process_heaps_list_index, 0x680, 0x10, true, 0xc279ff6d8a37a61a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.HeaderValidateLength", header_validate_length, 0x690, 0x10, true, 0x96725354928ba6e5)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP.HeaderValidateCopy", header_validate_copy, 0x6c0, 0x40, true, 0xbf745fd9148392d3)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.NextAvailableTagIndex", next_available_tag_index, 0x700, 0x10, true, 0x47d1a2aecab07cfb)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.MaximumTagIndex", maximum_tag_index, 0x710, 0x10, true, 0x8617dc0174020feb)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::tag_entry_t*), "_HEAP.TagEntries", tag_entries, 0x740, 0x40, true, 0x1c2a9f061c9bf843)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP.UCRList", ucr_list, 0x780, 0x80, true, 0xabcb0d77a422838c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.AlignRound", align_round, 0x800, 0x40, true, 0x2a2588858871b9d8)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP.AlignMask", align_mask, 0x840, 0x40, true, 0x7ca981447399117d)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP.VirtualAllocdBlocks", virtual_allocd_blocks, 0x880, 0x80, true, 0xb2be0203568e755a)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP.SegmentList", segment_list, 0x900, 0x80, true, 0xf3408e1aca2b6846)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.AllocatorBackTraceIndex", allocator_back_trace_index, 0x980, 0x10, true, 0x88c772d427b63cae)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP.NonDedicatedListLength", non_dedicated_list_length, 0x9a0, 0x20, true, 0xb4a0c5fe6bb4676c)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP.BlocksIndex", blocks_index, 0x9c0, 0x40, true, 0x88b28b30d75479e5)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP.UCRIndex", ucr_index, 0xa00, 0x40, true, 0xf478eb6379420f4d)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::pseudo_tag_entry_t*), "_HEAP.PseudoTagEntries", pseudo_tag_entries, 0xa40, 0x40, true, 0xb13537cad2e3e4ff)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP.FreeLists", free_lists, 0xa80, 0x80, true, 0x9206ffd1fe885d9d)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lock_t*), "_HEAP.LockVariable", lock_variable, 0xb00, 0x40, true, 0x6a3d2477aae91853)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void**, uint64_t*)>*), "_HEAP.CommitRoutine", commit_routine, 0xb40, 0x40, true, 0x77b28c40b46b1998)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::run_once_t), "_HEAP.StackTraceInitVar", stack_trace_init_var, 0xb80, 0x40, true, 0xc52d486772849609)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP.FrontEndHeap", front_end_heap, 0xcc0, 0x40, true, 0xa73a0e90e027fade)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.FrontHeapLockCount", front_heap_lock_count, 0xd00, 0x10, true, 0x19a7b49e431316a2)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP.FrontEndHeapType", front_end_heap_type, 0xd10, 0x8, true, 0xf1cd170a0e98034)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP.RequestedFrontEndHeapType", requested_front_end_heap_type, 0xd18, 0x8, true, 0x24cf92680446d117)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_HEAP.FrontEndHeapUsageData", front_end_heap_usage_data, 0xd40, 0x40, true, 0xcb8033c4d5ef48ff)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP.FrontEndHeapMaximumIndex", front_end_heap_maximum_index, 0xd80, 0x10, true, 0xc567f9b713e37b08)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile uint8_t, 129>), "_HEAP.FrontEndHeapStatusBitmap", front_end_heap_status_bitmap, 0xd90, 0x8, true, 0x80beb3d03c1e81d)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::counters_t), "_HEAP.Counters", counters, 0x11c0, 0xc0, true, 0x288e1d390f3444af)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::tuning_parameters_t), "_HEAP.TuningParameters", tuning_parameters, 0x1580, 0x80, true, 0x8ad579b59c0a7d74)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::heap_memory_limit_data_t), "_HEAP.CommitLimitData", commit_limit_data, 0xbc0, 0x0, true, 0xb5dfaf2bc4cff272)
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
#endif