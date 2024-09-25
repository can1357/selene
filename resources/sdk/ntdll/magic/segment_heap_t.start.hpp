#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEGMENT_HEAP.Signature", signature, 0x80, 0x20, true, 0xd3c4c4521a4595ca)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEGMENT_HEAP.GlobalFlags", global_flags, 0xa0, 0x20, true, 0xc2f8b194a78570c4)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEGMENT_HEAP.Interceptor", interceptor, 0xc0, 0x20, true, 0x4370299ec6dac2e3)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEGMENT_HEAP.ProcessHeapListIndex", process_heap_list_index, 0xe0, 0x10, true, 0xc6f9103afcb1597e)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_SEGMENT_HEAP.LargeMetadataLock", large_metadata_lock, 0x200, 0x40, true, 0x861dd6d4ad687685)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_SEGMENT_HEAP.LargeAllocMetadata", large_alloc_metadata, 0x240, 0x80, true, 0xe5ff28a0bdaee25c)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_SEGMENT_HEAP.LargeReservedPages", large_reserved_pages, 0x2c0, 0x40, true, 0x420afe5eec6a3fa2)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_SEGMENT_HEAP.LargeCommittedPages", large_committed_pages, 0x300, 0x40, true, 0xd34cfdc46d1b7116)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::run_once_t), "_SEGMENT_HEAP.StackTraceInitVar", stack_trace_init_var, 0x340, 0x40, true, 0x44145fc01cbf03e8)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEGMENT_HEAP.GlobalLockCount", global_lock_count, 0x6c0, 0x10, true, 0xd8b43a303e449caf)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEGMENT_HEAP.GlobalLockOwner", global_lock_owner, 0x6e0, 0x20, true, 0xc9f3750239822f1)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_SEGMENT_HEAP.ContextExtendLock", context_extend_lock, 0x700, 0x40, true, 0xe29a4f57e8058a65)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEGMENT_HEAP.AllocatedBase", allocated_base, 0x740, 0x40, true, 0x7409bf9be0f649f6)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEGMENT_HEAP.UncommittedBase", uncommitted_base, 0x780, 0x40, true, 0x671c6149df1be33d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEGMENT_HEAP.ReservedLimit", reserved_limit, 0x7c0, 0x40, true, 0x9f3c7985c427ee48)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::vs_context_t), "_SEGMENT_HEAP.VsContext", vs_context, 0x1400, 0x0, true, 0xee55fef0b61973cf)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_context_t), "_SEGMENT_HEAP.LfhContext", lfh_context, 0x1a00, 0x0, true, 0x447bfc84613d0798)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_env_handle_t), "_SEGMENT_HEAP.EnvHandle", env_handle, 0x0, 0x80, true, 0x1b841453dd5b3bd5)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_HEAP.AllocatedFromMetadata", allocated_from_metadata, 0xf0, 0x1, true, 0x9387e40ebafb248d, 1, uint16_t)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::heap_memory_limit_data_t), "_SEGMENT_HEAP.CommitLimitData", commit_limit_data, 0x100, 0x0, true, 0x7e6d45dd8b9312a6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP.ReservedMustBeZero1", reserved_must_be_zero1, 0x100, 0x40, true, 0xdea4fe42fd683646)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEGMENT_HEAP.UserContext", user_context, 0x140, 0x40, true, 0xe5991107acab4713)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP.ReservedMustBeZero2", reserved_must_be_zero2, 0x180, 0x40, true, 0x9506c725fa2935d8)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::runtime_memory_stats_t), "_SEGMENT_HEAP.MemStats", mem_stats, 0x400, 0xc0, true, 0x26ea3e28272f6dd9)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::seg_context_t, 2>), "_SEGMENT_HEAP.SegContexts", seg_contexts, 0x800, 0x0, true, 0x816c0e7396b07e9b)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_SEGMENT_HEAP.TotalReservedPages", total_reserved_pages, 0x0, 0x0, false, 0xe32bdc9454663957)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_SEGMENT_HEAP.TotalCommittedPages", total_committed_pages, 0x0, 0x0, false, 0xbc730bf0d3faea87)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP.FreeCommittedPages", free_committed_pages, 0x0, 0x0, false, 0x2a4c4297dca78aeb)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "_SEGMENT_HEAP.SegmentAllocatorLock", segment_allocator_lock, 0x0, 0x0, false, 0x638aa4cd02d2187)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SEGMENT_HEAP.SegmentListHead", segment_list_head, 0x0, 0x0, false, 0x757a92d3267eeaa5)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP.SegmentCount", segment_count, 0x0, 0x0, false, 0x15a60338fa9ce90d)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_SEGMENT_HEAP.FreePageRanges", free_page_ranges, 0x0, 0x0, false, 0x50f03ec7d7e310d7)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP.Tag", tag, 0x0, 0x0, false, 0x26c93b1ed9a2410)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEGMENT_HEAP.ReservedRegionEnd", reserved_region_end, 0x0, 0x0, false, 0x78e869961fec2d2f)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_heap_va_callbacks_encoded_t), "_SEGMENT_HEAP.CallbacksEncoded", callbacks_encoded, 0x0, 0x0, false, 0x6e6b6115ccc05b39)
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
#endif