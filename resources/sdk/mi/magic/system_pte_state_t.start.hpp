#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_MI_SYSTEM_PTE_STATE.MdlTrackerLookaside", mdl_tracker_lookaside, 0x0, 0x0, true, 0x16b54c79f5511135)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_SYSTEM_PTE_STATE.DeadPteTrackerSListHead", dead_pte_tracker_s_list_head, 0x400, 0x80, true, 0x4f0198a8eae6b5a7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_PTE_STATE.PteTrackerLock", pte_tracker_lock, 0x480, 0x40, true, 0xf47b43037abbfee6)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SYSTEM_PTE_STATE.PteTrackingBitmap", pte_tracking_bitmap, 0x4c0, 0x80, true, 0x2c27a81eba615631)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct mi::cached_ptes_t*), "_MI_SYSTEM_PTE_STATE.CachedPteHeads", cached_pte_heads, 0x540, 0x40, true, 0xd6daf4b71943ff4d)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_pte_type_t), "_MI_SYSTEM_PTE_STATE.SystemViewPteInfo", system_view_pte_info, 0x5c0, 0x0, true, 0xf9ea336c02a98452)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_PTE_STATE.StackGrowthFailures", stack_growth_failures, 0xbc0, 0x20, true, 0xe4448508a6fd5f2d)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_PTE_STATE.KernelStackPages", kernel_stack_pages, 0xbe0, 0x8, true, 0x787cbc8eb8a81197)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_PTE_STATE.TrackPtesAborted", track_ptes_aborted, 0xbe8, 0x8, true, 0x3b9fe567f44c019b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_PTE_STATE.AdjustCounter", adjust_counter, 0xbf0, 0x8, true, 0x7d069ec25e1910d5)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_PTE_STATE.ReservedMappingLock", reserved_mapping_lock, 0xc00, 0x20, true, 0xb45196246b6bbd83)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SYSTEM_PTE_STATE.ReservedMappingTree", reserved_mapping_tree, 0xc40, 0x40, true, 0x4f45b1355d267e5e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_SYSTEM_PTE_STATE.ReservedMappingPageTablePfns", reserved_mapping_page_table_pfns, 0xc80, 0x40, true, 0xbd5be04a3e32c687)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct mi::system_pte_type_t, sdk::array<struct mi::system_pte_type_t, 2>>), "_MI_SYSTEM_PTE_STATE.KernelStackPteInfo", kernel_stack_pte_info, 0x8c0, 0x0, true, 0xe2e9fffd08ac1d6a)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SYSTEM_PTE_STATE.OutswappedKernelStackRoot", outswapped_kernel_stack_root, 0xcc0, 0x40, true, 0x317977c01665635b)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_PTE_STATE.OutswappedKernelStackLock", outswapped_kernel_stack_lock, 0xd00, 0x20, true, 0xc33bc7c93712a1c6)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_SYSTEM_PTE_STATE.BreakMakePte", break_make_pte, 0xd40, 0x40, true, 0xe28e235e62d0a5ae)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::ultra_va_context_t), "_MI_SYSTEM_PTE_STATE.UltraSpaceContext", ultra_space_context, 0xd80, 0x0, true, 0x3f98031e77cd9300)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_PTE_STATE.NumberOfUltraMdlMaps", number_of_ultra_mdl_maps, 0xf80, 0x20, true, 0xed246b28b4c82046)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::ultra_mdl_node_t*), "_MI_SYSTEM_PTE_STATE.UltraMdlNodeMappings", ultra_mdl_node_mappings, 0xfc0, 0x40, true, 0x87d0323ca170c286)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct mi::cached_ptes_t*), "_MI_SYSTEM_PTE_STATE.CachedKernelStackPteHeads", cached_kernel_stack_pte_heads, 0x580, 0x40, true, 0x75d636d4340b7cb6)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_SYSTEM_PTE_STATE.QueuedStacks", queued_stacks, 0x0, 0x0, false, 0x80f5dee4235b9f33)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::queued_deadstack_workitem_t), "_MI_SYSTEM_PTE_STATE.QueuedStacksWorkItem", queued_stacks_work_item, 0x0, 0x0, false, 0xfd0965ed4d209ac)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SYSTEM_PTE_STATE.SystemSpaceViewLock", system_space_view_lock, 0x0, 0x0, false, 0x4efe760822f0df22)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SYSTEM_PTE_STATE.ViewRoot", view_root, 0x0, 0x0, false, 0x3dc16bf1f6adeaad)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_PTE_STATE.ViewCount", view_count, 0x0, 0x0, false, 0x91365f342f451955)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_PTE_STATE.CodePageEdited", code_page_edited, 0x0, 0x0, false, 0xde6050aa87e779c6)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::huge_system_view_head_t, 256>), "_MI_SYSTEM_PTE_STATE.SystemViewBuckets", system_view_buckets, 0x0, 0x0, false, 0xe6a2e135521b9087)
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
#endif