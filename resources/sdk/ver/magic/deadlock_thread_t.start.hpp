#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_VI_DEADLOCK_THREAD.Thread", thread, 0x0, 0x40, true, 0x86073984643568b2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::deadlock_node_t*), "_VI_DEADLOCK_THREAD.CurrentSpinNode", current_spin_node, 0x40, 0x40, true, 0x9183d40e0c405fc5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::deadlock_node_t*), "_VI_DEADLOCK_THREAD.CurrentOtherNode", current_other_node, 0x80, 0x40, true, 0x559c66209d0e1c2b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_THREAD.ListEntry", list_entry, 0xc0, 0x80, true, 0x833e5d8c5688bdfe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_THREAD.FreeListEntry", free_list_entry, 0xc0, 0x80, true, 0xbaa29447486397d0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_THREAD.NodeCount", node_count, 0x140, 0x20, true, 0xede7e8f3d51b189f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VI_DEADLOCK_THREAD.PagingCount", paging_count, 0x160, 0x20, true, 0xab2584eaa406f159)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VI_DEADLOCK_THREAD.ThreadUsesEresources", thread_uses_eresources, 0x180, 0x8, true, 0xebe644155d3ab745)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif