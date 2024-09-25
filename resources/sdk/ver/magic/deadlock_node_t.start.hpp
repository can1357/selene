#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::deadlock_node_t*), "_VI_DEADLOCK_NODE.Parent", parent, 0x0, 0x40, true, 0x83975f47c5a18975)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_NODE.ChildrenList", children_list, 0x40, 0x80, true, 0x7679b44210d4990c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_NODE.SiblingsList", siblings_list, 0xc0, 0x80, true, 0xcb9ae53459bbe192)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_NODE.ResourceList", resource_list, 0x140, 0x80, true, 0x310ea6dccfd60531)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_NODE.FreeListEntry", free_list_entry, 0x140, 0x80, true, 0x6ad262246d85f398)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::deadlock_resource_t*), "_VI_DEADLOCK_NODE.Root", root, 0x1c0, 0x40, true, 0xdb4bbf78603f5654)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::deadlock_thread_t*), "_VI_DEADLOCK_NODE.ThreadEntry", thread_entry, 0x200, 0x40, true, 0x8376a91ec8c33d87)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VI_DEADLOCK_NODE.Active", active, 0x240, 0x1, true, 0xa604198808306491, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VI_DEADLOCK_NODE.OnlyTryAcquireUsed", only_try_acquire_used, 0x241, 0x1, true, 0x7f644130fb096c0d, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VI_DEADLOCK_NODE.ReleasedOutOfOrder", released_out_of_order, 0x242, 0x1, true, 0x74bf283b08e8f084, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_VI_DEADLOCK_NODE.SequenceNumber", sequence_number, 0x243, 0x1d, true, 0x2466802eda6a4a3b, 29, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_NODE.Whole", whole, 0x240, 0x20, true, 0x9e49557a538cbdab)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VI_DEADLOCK_NODE.ChildrenCount", children_count, 0x260, 0x20, true, 0xd40e73f101c3c4af)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_VI_DEADLOCK_NODE.StackTrace", stack_trace, 0x280, 0x0, true, 0xedf8259b71a3435c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_VI_DEADLOCK_NODE.ParentStackTrace", parent_stack_trace, 0x480, 0x0, true, 0x509eed2ea776d117)
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
#endif