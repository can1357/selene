#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_MI_SLAB_ALLOCATOR_CONTEXT.AllocationsTree", allocations_tree, 0x0, 0x80, true, 0x8bfd2f8acb8ba6b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Lock", lock, 0x80, 0x20, true, 0x88c999f0dce88be9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SLAB_ALLOCATOR_CONTEXT.FreePageCount", free_page_count, 0x100, 0x40, true, 0xe50f7d3d25127ce7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntryCount", slab_entry_count, 0x140, 0x40, true, 0x84e87d17fd49dccf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum mi::slab_allocator_type_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Type", type, 0x180, 0x20, true, 0x21fba5180dee3850)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Flags.EntryBecameEmpty", entry_became_empty, 0x0, 0x1, true, 0x9518ad54a4a57442, 1, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Flags.AllFlags", all_flags, 0x0, 0x20, true, 0x61fb07c44bddf1d0)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Flags.DemoteInProgress", demote_in_progress, 0x0, 0x0, false, 0x786e4eb97207c3c5, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Flags.ZeroedPages", zeroed_pages, 0x0, 0x0, false, 0x22e6682a768ddad2, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Flags", flags, 0x1c0, 0x20, true, 0xdc740ace06061662)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_SLAB_ALLOCATOR_CONTEXT.StandbyList", standby_list, 0x200, 0x40, true, 0xd53b8953b6a8c673)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SLAB_ALLOCATOR_CONTEXT.LastReplenishTime", last_replenish_time, 0x340, 0x40, true, 0x32515a787c76c764)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SLAB_ALLOCATOR_CONTEXT.LastFailureTime", last_failure_time, 0x380, 0x40, true, 0x4a5d267a6ddc15db)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::slab_allocator_entry_t*), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntryHint", slab_entry_hint, 0xc0, 0x40, true, 0x595740654a401f59)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum mi::slab_allocator_protection_t), "_MI_SLAB_ALLOCATOR_CONTEXT.Protection", protection, 0x1a0, 0x20, true, 0x798e04c332f3383b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MI_SLAB_ALLOCATOR_CONTEXT.Partition", partition, 0x0, 0x0, false, 0x2635d0a2b4800578)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::slab_allocator_entry_t*), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntryAllocationHint", slab_entry_allocation_hint, 0x0, 0x0, false, 0x5bb014ed8c391d02)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::slab_allocator_entry_t*), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntryFreeHint", slab_entry_free_hint, 0x0, 0x0, false, 0xacaff73015255d2e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SLAB_ALLOCATOR_CONTEXT.AvailablePagesGoal", available_pages_goal, 0x0, 0x0, false, 0x7ced8128b060599d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SLAB_ALLOCATOR_CONTEXT.ChargedPageCount", charged_page_count, 0x0, 0x0, false, 0xc10506c51e6f8c30)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::node_number_zero_based_t), "_MI_SLAB_ALLOCATOR_CONTEXT.NumaNodeIndex", numa_node_index, 0x0, 0x0, false, 0x553ccf20fa0027b1)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntriesAllocated", slab_entries_allocated, 0x0, 0x0, false, 0x8a34b92d27c0272f)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntriesDemoted", slab_entries_demoted, 0x0, 0x0, false, 0xdaf58b6f5622a405)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntriesFailedFast", slab_entries_failed_fast, 0x0, 0x0, false, 0xbc80859828e57b39)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabEntriesFailedSlow", slab_entries_failed_slow, 0x0, 0x0, false, 0x9574191227811514)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SLAB_ALLOCATOR_CONTEXT.SlabPagesFreedNonZeroed", slab_pages_freed_non_zeroed, 0x0, 0x0, false, 0x1e422ac1832fca16)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_SLAB_ALLOCATOR_CONTEXT.ReplenishWorkItem", replenish_work_item, 0x0, 0x0, false, 0x4209a7127260096)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SLAB_ALLOCATOR_CONTEXT.ReplenishWaitList", replenish_wait_list, 0x0, 0x0, false, 0xc8392608c766d172)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#endif