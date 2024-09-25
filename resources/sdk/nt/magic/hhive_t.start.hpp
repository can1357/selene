#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.Signature", signature, 0x0, 0x20, true, 0xbc10f459d650dc2e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::cell_data_t*(struct nt::hhive_t*, uint32_t, struct hv::get_cell_context_t*)>*), "_HHIVE.GetCellRoutine", get_cell_routine, 0x40, 0x40, true, 0xa93ebc259c5524e3)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::hhive_t*, struct hv::get_cell_context_t*)>*), "_HHIVE.ReleaseCellRoutine", release_cell_routine, 0x80, 0x40, true, 0x8ce3e367aa319d53)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint32_t, uint8_t, uint32_t)>*), "_HHIVE.Allocate", allocate, 0xc0, 0x40, true, 0xee3ad014a8c11fc3)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_HHIVE.Free", free, 0x100, 0x40, true, 0x81210192324b2e3e)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint8_t(struct nt::hhive_t*, uint32_t, struct cmp::offset_array_t*, uint32_t, uint32_t*, uint32_t)>*, sdk::function<int32_t(struct nt::hhive_t*, uint32_t, struct cmp::offset_array_t*, uint32_t, uint32_t)>*>), "_HHIVE.FileWrite", file_write, 0x140, 0x40, true, 0x6b5c74df1f7057c2)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint8_t(struct nt::hhive_t*, uint32_t, uint32_t*, void*, uint32_t)>*, sdk::function<int32_t(struct nt::hhive_t*, uint32_t, uint32_t, void*, uint32_t)>*>), "_HHIVE.FileRead", file_read, 0x180, 0x40, true, 0x32554eecd2d6dfb1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HHIVE.HiveLoadFailure", hive_load_failure, 0x1c0, 0x40, true, 0x2f8801c4895d48a4)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hbase_block_t*), "_HHIVE.BaseBlock", base_block, 0x200, 0x40, true, 0xcda07c37d97dcdd6)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_HHIVE.DirtyVector", dirty_vector, 0x2c0, 0x80, true, 0x59687ba50e094782)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.DirtyCount", dirty_count, 0x340, 0x20, true, 0xf4ec68a53b7c9e97)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.DirtyAlloc", dirty_alloc, 0x360, 0x20, true, 0xff87bb6b7afe966f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_HHIVE.UnreconciledVector", unreconciled_vector, 0x380, 0x80, true, 0x58ec0b3d80d0c3cc)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.UnreconciledCount", unreconciled_count, 0x400, 0x20, true, 0x941c6a9c8c7dc605)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.BaseBlockAlloc", base_block_alloc, 0x420, 0x20, true, 0xc7d8e0c6cea8f635)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.Cluster", cluster, 0x440, 0x20, true, 0xf014916be884c3b9)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HHIVE.Flat", flat, 0x460, 0x1, true, 0x57f8dd00644da6b9, 1, uint8_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HHIVE.ReadOnly", read_only, 0x461, 0x1, true, 0xae6fc87229bd9e76, 1, uint8_t)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HHIVE.DirtyFlag", dirty_flag, 0x468, 0x8, true, 0xcd5cd9b7a4cd6d05)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.HvBinHeadersUse", hv_bin_headers_use, 0x480, 0x20, true, 0x204343f8231fe2e6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.HvFreeCellsUse", hv_free_cells_use, 0x4a0, 0x20, true, 0x93752be1ef25bbbf)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.HvUsedCellsUse", hv_used_cells_use, 0x4c0, 0x20, true, 0x6a5990e5b03cea55)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.CmUsedCellsUse", cm_used_cells_use, 0x4e0, 0x20, true, 0xabab9e9e158429d4)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.HiveFlags", hive_flags, 0x500, 0x20, true, 0x28683c42107c12de)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.CurrentLog", current_log, 0x520, 0x20, true, 0x7f6a803f60f7b0f)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.CurrentLogSequence", current_log_sequence, 0x540, 0x20, true, 0x677b4afd80a016e5)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.CurrentLogMinimumSequence", current_log_minimum_sequence, 0x560, 0x20, true, 0x48c230ec0c38e0a9)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.CurrentLogOffset", current_log_offset, 0x580, 0x20, true, 0x25e365954ca7e6c4)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.MinimumLogSequence", minimum_log_sequence, 0x5a0, 0x20, true, 0x64fa25846666e26b)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.LogFileSizeCap", log_file_size_cap, 0x5c0, 0x20, true, 0x92e85f3d5c7a6972)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_HHIVE.LogDataPresent", log_data_present, 0x5e0, 0x10, true, 0x6b477900658b3cea)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HHIVE.PrimaryFileValid", primary_file_valid, 0x5f0, 0x8, true, 0x92ef654d5a0c7716)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HHIVE.BaseBlockDirty", base_block_dirty, 0x5f8, 0x8, true, 0x1c732a7a55a4775f)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HHIVE.LastLogSwapTime", last_log_swap_time, 0x600, 0x40, true, 0xe1faf9a4409e39da)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_HHIVE.FirstLogFile", first_log_file, 0x640, 0x3, true, 0xa8b81c810e1231c5, 3, uint16_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_HHIVE.SecondLogFile", second_log_file, 0x643, 0x3, true, 0x96557c4d4a71d5f6, 3, uint16_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HHIVE.HeaderRecovered", header_recovered, 0x646, 0x1, true, 0xfb5465259680d942, 1, uint16_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HHIVE.LegacyRecoveryIndicated", legacy_recovery_indicated, 0x647, 0x1, true, 0xf3d166264ddf8cad, 1, uint16_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_HHIVE.RecoveryInformationReserved", recovery_information_reserved, 0x648, 0x8, true, 0xcfe93220ffa0920d, 8, uint16_t)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HHIVE.RecoveryInformation", recovery_information, 0x640, 0x10, true, 0xb60185ec72a51c3)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_HHIVE.LogEntriesRecovered", log_entries_recovered, 0x650, 0x10, true, 0xe06d8bbb77210f1f)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.RefreshCount", refresh_count, 0x660, 0x20, true, 0x96c4c132c0d199ea)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.StorageTypeCount", storage_type_count, 0x680, 0x20, true, 0xb5939cc3cb1c3dd3)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.Version", version, 0x6a0, 0x20, true, 0xd59d51846b34db3f)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::hview_map_t, struct hvp::view_map_t>), "_HHIVE.ViewMap", view_map, 0x6c0, 0xc0, true, 0xf037a165a1ab7aa1)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::dual_t, 2>), "_HHIVE.Storage", storage, 0x880, 0x80, true, 0x5c6b4e7185e4b263)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmsi_rw_lock_t), "_HHIVE.FlusherLock", flusher_lock, 0x240, 0x40, true, 0xda743bad8de8acd6)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmsi_rw_lock_t), "_HHIVE.WriterLock", writer_lock, 0x280, 0x40, true, 0x8df73ac11701814c)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HHIVE.FlusherFlags", flusher_flags, 0x0, 0x0, false, 0x847d70cd7028fc57)
#define _m049 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HHIVE.SystemCacheBacked", system_cache_backed, 0x0, 0x0, false, 0xb0fda34b7788c843, 1, uint8_t)
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
#endif