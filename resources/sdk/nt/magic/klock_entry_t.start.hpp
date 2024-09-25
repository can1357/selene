#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_KLOCK_ENTRY.TreeNode", tree_node, 0x0, 0xc0, true, 0xe9985daeec2eb887)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY.EntryFlags", entry_flags, 0xc0, 0x20, true, 0x56da14c52000eaed)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.AcquiredByte", acquired_byte, 0xd0, 0x8, true, 0x10642796c6e222ef)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.CrossThreadFlags", cross_thread_flags, 0xd8, 0x8, true, 0x4ab4e4ae458c33e5)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY.HeadNodeBit", head_node_bit, 0xd8, 0x1, true, 0x2ead0af14d5b682d, 1, uint8_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY.IoPriorityBit", io_priority_bit, 0xd9, 0x1, true, 0x487e020ae858bd20, 1, uint8_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY.IoQoSWaiter", io_qo_s_waiter, 0xda, 0x1, true, 0x3a4615ff72ad55ed, 1, uint8_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.StaticState", static_state, 0xc0, 0x8, true, 0x22c31fdfca005776, 8, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_KLOCK_ENTRY.AllFlags", all_flags, 0xc8, 0x18, true, 0x3534deb0f4ec403, 24, uint32_t)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY.SpareFlags", spare_flags, 0xe0, 0x20, true, 0x339b1cf7f6be06f5)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::klock_entry_lock_state_t), "_KLOCK_ENTRY.LockState", lock_state, 0x100, 0x80, true, 0x8d20e98165977d36)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_KLOCK_ENTRY.LockUnsafe", lock_unsafe, 0x100, 0x40, true, 0x1ca65f2c89a51d3b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KLOCK_ENTRY.CrossThreadReleasableAndBusyByte", cross_thread_releasable_and_busy_byte, 0x100, 0x8, true, 0x75d1137c604694f3)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KLOCK_ENTRY.InTreeByte", in_tree_byte, 0x138, 0x8, true, 0xf38eb7b5c1668143)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KLOCK_ENTRY.SessionState", session_state, 0x140, 0x40, true, 0xf5ca69f0cd726026)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY.SessionId", session_id, 0x140, 0x20, true, 0x138dc90ddb1e9cba)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY.SessionPad", session_pad, 0x160, 0x20, true, 0xcc425e3e9b699f36)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_KLOCK_ENTRY.OwnerTree", owner_tree, 0x180, 0x80, true, 0x988b1d3d03035068)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_KLOCK_ENTRY.WaiterTree", waiter_tree, 0x200, 0x80, true, 0xbc2861a239bf3c1b)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KLOCK_ENTRY.CpuPriorityKey", cpu_priority_key, 0x180, 0x8, true, 0x230092836cc1b099)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KLOCK_ENTRY.EntryLock", entry_lock, 0x280, 0x40, true, 0x8acc851dd7054764)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KLOCK_ENTRY.FreeListEntry", free_list_entry, 0x0, 0x40, true, 0xd32de1fe09bd0593)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.EntryOffset", entry_offset, 0xc0, 0x8, true, 0x2f47465a1231b09b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.ThreadLocalFlags", thread_local_flags, 0xc8, 0x8, true, 0x16836e01d0b98306)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY.WaitingBit", waiting_bit, 0xc8, 0x1, true, 0x372f4a55e354a20d, 1, uint8_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY.AcquiredBit", acquired_bit, 0xd0, 0x1, true, 0xebba9878ef9e014e, 1, uint8_t)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KLOCK_ENTRY.SparePad", spare_pad, 0x2e0, 0x20, true, 0x64ac892cc09cb10f)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::klock_entry_boost_bitmap_t), "_KLOCK_ENTRY.BoostBitmap", boost_bitmap, 0x2c0, 0x20, true, 0xcdfc5473cdb22e5d)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint17_t), "_KLOCK_ENTRY.AllBoosts", all_boosts, 0x0, 0x0, false, 0xb7e81047a3c09564, 17, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_KLOCK_ENTRY.CpuBoostsBitmap", cpu_boosts_bitmap, 0x0, 0x0, false, 0xe986b84ccf206ef7, 15, uint16_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY.IoBoost", io_boost, 0x0, 0x0, false, 0xdd6fd7db8ec061ec, 1, uint16_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLOCK_ENTRY.IoQoSBoost", io_qo_s_boost, 0x0, 0x0, false, 0x15846d7db950184b, 1, uint16_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.IoNormalPriorityWaiterCount", io_normal_priority_waiter_count, 0x0, 0x0, false, 0x607f73b20f443be5, 8, uint16_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_KLOCK_ENTRY.IoQoSWaiterCount", io_qo_s_waiter_count, 0x0, 0x0, false, 0x8efd5a1cedbc940b, 7, uint16_t)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.EntryIndex", entry_index, 0x0, 0x0, false, 0x23de531287a52ac3)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLOCK_ENTRY.WaitingByte", waiting_byte, 0x0, 0x0, false, 0x4a66c37a836201b)
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
#endif