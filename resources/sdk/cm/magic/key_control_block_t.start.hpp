#if !IN_PARSER
#define _m000 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_CM_KEY_CONTROL_BLOCK.RefCount", ref_count, 0x0, 0x40, true, 0x6faf6f492f83bce6, 0, uint32_t,uint64_t)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_CM_KEY_CONTROL_BLOCK.ExtFlags", ext_flags, 0x40, 0x10, true, 0x29da77330d66c44c, 16, uint32_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.Discarded", discarded, 0x51, 0x1, true, 0x943d00ae1139c4bd, 1, uint32_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.HiveUnloaded", hive_unloaded, 0x52, 0x1, true, 0x79edf264527c0cb8, 1, uint32_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.Decommissioned", decommissioned, 0x53, 0x1, true, 0xbc34f08adbfa998b, 1, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_CM_KEY_CONTROL_BLOCK.TotalLevels", total_levels, 0x55, 0xa, true, 0xbf9d34589d2edef4, 10, uint32_t)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_hash_t), "_CM_KEY_CONTROL_BLOCK.KeyHash", key_hash, 0x80, 0x0, true, 0xaa1b24dc6d17a5aa)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::path_hash_t), "_CM_KEY_CONTROL_BLOCK.ConvKey", conv_key, 0x80, 0x20, true, 0x8750ab53ccde3438)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_hash_t*), "_CM_KEY_CONTROL_BLOCK.NextHash", next_hash, 0xc0, 0x40, true, 0x1978e94dd13f7790)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hhive_t*), "_CM_KEY_CONTROL_BLOCK.KeyHive", key_hive, 0x100, 0x40, true, 0xf1aaa0de37138b54)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_CONTROL_BLOCK.KeyCell", key_cell, 0x140, 0x20, true, 0x9b6fde762badf65b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CM_KEY_CONTROL_BLOCK.KcbPushlock", kcb_pushlock, 0x180, 0x40, true, 0x65aad856bbf14dab)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_CM_KEY_CONTROL_BLOCK.Owner", owner, 0x1c0, 0x40, true, 0x599cdab1ac00627b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CM_KEY_CONTROL_BLOCK.SharedCount", shared_count, 0x1c0, 0x20, true, 0x27b524d49fca6ecc)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.DelayedDeref", delayed_deref, 0x200, 0x1, true, 0x5fce2da656dc4d48, 1, uint8_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.DelayedClose", delayed_close, 0x201, 0x1, true, 0xb7172d6cacaec395, 1, uint8_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.Parking", parking, 0x202, 0x1, true, 0xfcce6ef4ac8fc5d, 1, uint8_t)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_KEY_CONTROL_BLOCK.LayerSemantics", layer_semantics, 0x208, 0x8, true, 0x443c6dbb59e192db)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_CM_KEY_CONTROL_BLOCK.LayerHeight", layer_height, 0x210, 0x10, true, 0x75f524a71e5ad11e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KEY_CONTROL_BLOCK.ParentKcb", parent_kcb, 0x240, 0x40, true, 0xbbec54511b47c920)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::name_control_block_t*), "_CM_KEY_CONTROL_BLOCK.NameBlock", name_block, 0x280, 0x40, true, 0xdbe016a1caedbb3e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_security_cache_t*), "_CM_KEY_CONTROL_BLOCK.CachedSecurity", cached_security, 0x2c0, 0x40, true, 0xceff64a0494da42a)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::index_hint_block_t*), "_CM_KEY_CONTROL_BLOCK.IndexHint", index_hint, 0x380, 0x40, true, 0xbb9ad000c69eee48)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_CONTROL_BLOCK.HashKey", hash_key, 0x380, 0x20, true, 0xabaeb4b60b95c3d)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_CONTROL_BLOCK.SubKeyCount", sub_key_count, 0x380, 0x20, true, 0xee7b7af2a06cf6ce)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_CONTROL_BLOCK.KeyBodyListHead", key_body_list_head, 0x3c0, 0x80, true, 0xd4d72a34801d1619)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::key_body_t*, 4>), "_CM_KEY_CONTROL_BLOCK.KeyBodyArray", key_body_array, 0x440, 0x0, true, 0xbd86c9ffa9dc870d)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_KEY_CONTROL_BLOCK.KcbLastWriteTime", kcb_last_write_time, 0x540, 0x40, true, 0x5246860fc18833a2)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_CONTROL_BLOCK.KcbMaxNameLen", kcb_max_name_len, 0x580, 0x10, true, 0x48333acf0a95cede)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_CONTROL_BLOCK.KcbMaxValueNameLen", kcb_max_value_name_len, 0x590, 0x10, true, 0x4d7476cd49e377a7)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_CONTROL_BLOCK.KcbMaxValueDataLen", kcb_max_value_data_len, 0x5a0, 0x20, true, 0x6b275fef18d00682)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CM_KEY_CONTROL_BLOCK.KcbUserFlags", kcb_user_flags, 0x5c0, 0x4, true, 0xb175da8900c917a3, 4, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CM_KEY_CONTROL_BLOCK.KcbVirtControlFlags", kcb_virt_control_flags, 0x5c4, 0x4, true, 0x661b7c30d816d989, 4, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_CM_KEY_CONTROL_BLOCK.KcbDebug", kcb_debug, 0x5c8, 0x8, true, 0x361c2845ace14645, 8, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_CM_KEY_CONTROL_BLOCK.Flags", flags, 0x5d0, 0x10, true, 0x5a4818c528fb12e1, 16, uint32_t)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::kcb_layer_info_t*), "_CM_KEY_CONTROL_BLOCK.LayerInfo", layer_info, 0x600, 0x40, true, 0x7197af7a8afeaf03)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CM_KEY_CONTROL_BLOCK.RealKeyName", real_key_name, 0x640, 0x40, true, 0xaa934aea25fed0a8)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_CONTROL_BLOCK.KCBUoWListHead", kcb_uo_w_list_head, 0x680, 0x80, true, 0x41f8ff7d3d0cf323)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_CONTROL_BLOCK.DelayQueueEntry", delay_queue_entry, 0x700, 0x80, true, 0xfa61abdef2d25c18)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t*), "_CM_KEY_CONTROL_BLOCK.Stolen", stolen, 0x700, 0x40, true, 0xded395bcff4491ab)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::trans_t*), "_CM_KEY_CONTROL_BLOCK.TransKCBOwner", trans_kcb_owner, 0x780, 0x40, true, 0x946c56f1739e0e79)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::intent_lock_t), "_CM_KEY_CONTROL_BLOCK.KCBLock", kcb_lock, 0x7c0, 0x80, true, 0x460c05746d38e90d)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::intent_lock_t), "_CM_KEY_CONTROL_BLOCK.KeyLock", key_lock, 0x840, 0x80, true, 0x17824a02d7a4abf8)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::child_list_t), "_CM_KEY_CONTROL_BLOCK.TransValueCache", trans_value_cache, 0x8c0, 0x40, true, 0x9f78252520491374)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::trans_t*), "_CM_KEY_CONTROL_BLOCK.TransValueListOwner", trans_value_list_owner, 0x900, 0x40, true, 0xf038d80f58a8323a)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_CM_KEY_CONTROL_BLOCK.FullKCBName", full_kcb_name, 0x940, 0x40, true, 0xf82918197fef2643)
#define _m046 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.FullKCBNameStale", full_kcb_name_stale, 0x940, 0x1, true, 0x48fc17c399de140b, 1, uint64_t)
#define _m047 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.Freed", freed, 0x50, 0x1, true, 0xccccb11c317e5b79, 1, uint32_t)
#define _m048 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.SpareExtFlag", spare_ext_flag, 0x54, 0x1, true, 0xfa2ce58f1031fcf1, 1, uint32_t)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::child_list_t), "_CM_KEY_CONTROL_BLOCK.ValueList", value_list, 0x300, 0x40, true, 0xf898305e4e74e213)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KEY_CONTROL_BLOCK.LinkTarget", link_target, 0x340, 0x40, true, 0xea4ea889096f8ede)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_CONTROL_BLOCK.ClonedListEntry", cloned_list_entry, 0x3c0, 0x80, true, 0xe134649d9daccb1d)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_KEY_CONTROL_BLOCK.SequenceNumber", sequence_number, 0x980, 0x40, true, 0xb951dac966a6e1d)
#define _m053 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.PrivateAlloc", private_alloc, 0x0, 0x0, false, 0xa2b8a93bba3438e0, 1, uint32_t)
#define _m054 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_KEY_CONTROL_BLOCK.LockTablePresent", lock_table_present, 0x0, 0x0, false, 0x73ea286cc385cc39, 1, uint32_t)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_CONTROL_BLOCK.SlotHint", slot_hint, 0x0, 0x0, false, 0x89cc85c1b95a716e)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cached_child_list_t), "_CM_KEY_CONTROL_BLOCK.ValueCache", value_cache, 0x0, 0x0, false, 0x2c5ddc15fd1c69d0)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_CONTROL_BLOCK.FreeListEntry", free_list_entry, 0x0, 0x0, false, 0xc8b4da6e370c55c7)
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