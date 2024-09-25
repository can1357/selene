#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PAGELIST_STATE.ActiveSpinLock", active_spin_lock, 0x0, 0x20, true, 0x9e808fe80363aef5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_PAGELIST_STATE.ActiveThreadTree", active_thread_tree, 0x40, 0x40, true, 0xd2b025b39d9d560b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PAGELIST_STATE.ActiveZeroSpinLock", active_zero_spin_lock, 0x80, 0x20, true, 0xc2d8687408414284)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_PAGELIST_STATE.ActiveZeroThreadTree", active_zero_thread_tree, 0xc0, 0x40, true, 0x1752d5fab9639b30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t), "_MI_PAGELIST_STATE.LargePfnTemplate", large_pfn_template, 0x100, 0x80, true, 0x5bfd0897f13e1f6d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t), "_MI_PAGELIST_STATE.LargePfnBasePageTemplate", large_pfn_base_page_template, 0x280, 0x80, true, 0xa914af292bb6846c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGELIST_STATE.NumberOfLargePageListHeads", number_of_large_page_list_heads, 0x400, 0x20, true, 0x38e8b002bef9f703)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PAGELIST_STATE.Phase1BootComplete", phase1_boot_complete, 0x0, 0x0, false, 0xb52ea10768f22d04)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_PAGELIST_STATE.PendingBadPageTree", pending_bad_page_tree, 0x0, 0x0, false, 0x3ab0f2680f7d0bc4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGELIST_STATE.PendingBadPageCount", pending_bad_page_count, 0x0, 0x0, false, 0xd30c5d6f3ae060b6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PAGELIST_STATE.PendingBadPageTreeLock", pending_bad_page_tree_lock, 0x0, 0x0, false, 0x262f5f519728b3e2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGELIST_STATE.PendingBadPagesWithoutNodesCount", pending_bad_pages_without_nodes_count, 0x0, 0x0, false, 0x33fa8ea3654f3e6a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PAGELIST_STATE.PendingBadPageNodesAwaitingDeleteList", pending_bad_page_nodes_awaiting_delete_list, 0x0, 0x0, false, 0x86f2fd23682a8a37)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGELIST_STATE.PendingBadPageNodesAwaitingDeleteCount", pending_bad_page_nodes_awaiting_delete_count, 0x0, 0x0, false, 0x29a4c687ab686562)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PAGELIST_STATE.PendingBadPageNodeDeleteActive", pending_bad_page_node_delete_active, 0x0, 0x0, false, 0x8da2d72cdd6ac9a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_PAGELIST_STATE.PendingBadPageNodeDeleteWorkItem", pending_bad_page_node_delete_work_item, 0x0, 0x0, false, 0x5a858c170d5de118)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_PAGELIST_STATE.BadHugePageTree", bad_huge_page_tree, 0x0, 0x0, false, 0x976e0b6eae25221e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGELIST_STATE.BadHugePageCount", bad_huge_page_count, 0x0, 0x0, false, 0x34189cc8446e3ec0)
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
#endif