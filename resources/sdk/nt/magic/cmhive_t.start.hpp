#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hhive_t), "_CMHIVE.Hive", hive, 0x0, 0x0, true, 0xa07f95f8bdca66fe)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 6>), "_CMHIVE.FileHandles", file_handles, 0x3000, 0x80, true, 0xc70fadf58306e8ce)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMHIVE.NotifyList", notify_list, 0x3180, 0x80, true, 0x16d00e09fbd051ac)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMHIVE.HiveList", hive_list, 0x3200, 0x80, true, 0xa0995360b8bf26c8)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMHIVE.PreloadedHiveList", preloaded_hive_list, 0x3280, 0x80, true, 0xc54fc8500278ff45)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_CMHIVE.HiveRundown", hive_rundown, 0x3300, 0x40, true, 0xa9f175f4c3fdc40a)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_hash_table_entry_t*), "_CMHIVE.KcbCacheTable", kcb_cache_table, 0x3340, 0x40, true, 0x8a1817e9436e9b26)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.KcbCacheTableSize", kcb_cache_table_size, 0x3380, 0x20, true, 0x64a895308496becb)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_hash_table_entry_t*), "_CMHIVE.DeletedKcbTable", deleted_kcb_table, 0x33c0, 0x40, true, 0xe31edc0d0c9e4f01)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.DeletedKcbTableSize", deleted_kcb_table_size, 0x3400, 0x20, true, 0x3730d631b61aa26f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.Identity", identity, 0x3420, 0x20, true, 0x5e8fb2b65317168d)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::fast_mutex_t*, struct nt::cmsi_rw_lock_t>), "_CMHIVE.HiveLock", hive_lock, 0x3440, 0x40, true, 0x81702e1fb116f654)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_CMHIVE.FlushDirtyVector", flush_dirty_vector, 0x3480, 0x80, true, 0x4cbba0c5de103a3)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.FlushDirtyVectorSize", flush_dirty_vector_size, 0x3500, 0x20, true, 0xe05e3fefe4c73870)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.FlushLogEntrySize", flush_log_entry_size, 0x35a0, 0x20, true, 0xd2896b7c6ce73ce0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.FlushHiveTruncated", flush_hive_truncated, 0x35c0, 0x20, true, 0x313d4d78c77743de)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CMHIVE.FlushBaseBlockDirty", flush_base_block_dirty, 0x35e0, 0x8, true, 0x4ef8f01dd2b6f8c8)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_CMHIVE.CapturedUnreconciledVector", captured_unreconciled_vector, 0x3600, 0x80, true, 0xe13d63f357337ad5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.CapturedUnreconciledVectorSize", captured_unreconciled_vector_size, 0x3680, 0x20, true, 0x8c42db4ec5e4fff1)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cmp::offset_array_t*), "_CMHIVE.UnreconciledOffsetArray", unreconciled_offset_array, 0x36c0, 0x40, true, 0x17ff7afd45e03722)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.UnreconciledOffsetArrayCount", unreconciled_offset_array_count, 0x3700, 0x20, true, 0xdee032db714da084)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hbase_block_t*), "_CMHIVE.UnreconciledBaseBlock", unreconciled_base_block, 0x3740, 0x40, true, 0x6e877ecedf45d100)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CMHIVE.SecurityLock", security_lock, 0x3780, 0x40, true, 0xac2cd07867e56148)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.LastShrinkHiveSize", last_shrink_hive_size, 0x37c0, 0x20, true, 0xc1aa04f6a8eb4ea1)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CMHIVE.ActualFileSize", actual_file_size, 0x3800, 0x40, true, 0xd7f5c8f2b0d462d4)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 2>), "_CMHIVE.LogFileSizes", log_file_sizes, 0x3840, 0x80, true, 0xfca88b2bfc3806df)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_CMHIVE.FileFullPath", file_full_path, 0x38c0, 0x80, true, 0xdc8e86d413c9365d)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_CMHIVE.FileUserName", file_user_name, 0x3940, 0x80, true, 0xc768a18c81e46459)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_CMHIVE.HiveRootPath", hive_root_path, 0x39c0, 0x80, true, 0x53f360f0b715cc46)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.SecurityCount", security_count, 0x3a40, 0x20, true, 0x423ff9322d9f211)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.SecurityCacheSize", security_cache_size, 0x3a60, 0x20, true, 0x31ac7017e8f00948)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CMHIVE.SecurityHitHint", security_hit_hint, 0x3a80, 0x20, true, 0x9187e08dc8b41201)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_security_cache_entry_t*), "_CMHIVE.SecurityCache", security_cache, 0x3ac0, 0x40, true, 0x2dcebe9f367ac74d)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 64>), "_CMHIVE.SecurityHash", security_hash, 0x3b00, 0x0, true, 0x251470a8f1574550)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.UnloadEventCount", unload_event_count, 0x5b00, 0x20, true, 0xb0c1fcad48f04600)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t**), "_CMHIVE.UnloadEventArray", unload_event_array, 0x5b40, 0x40, true, 0x3d8391b493ac27ce)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CMHIVE.RootKcb", root_kcb, 0x5b80, 0x40, true, 0x4b18f97ef970f3a6)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CMHIVE.Frozen", frozen, 0x5bc0, 0x8, true, 0xf21edd57ad92be5a)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::dirty_vector_log_t), "_CMHIVE.DirtyVectorLog", dirty_vector_log, 0x5d80, 0x40, true, 0x9570cc3c905e0ef6)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.Flags", flags, 0x81c0, 0x20, true, 0x75bb81a128643d95)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMHIVE.TrustClassEntry", trust_class_entry, 0x8200, 0x80, true, 0xb48dcc478e18eb37)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMHIVE.DirtyTime", dirty_time, 0x8280, 0x40, true, 0xe9b173b6a5b279cd)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMHIVE.UnreconciledTime", unreconciled_time, 0x82c0, 0x40, true, 0xb60942951710ef80)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::rm_t*), "_CMHIVE.CmRm", cm_rm, 0x8300, 0x40, true, 0xcc562e6c5ccdc58b)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.CmRmInitFailPoint", cm_rm_init_fail_point, 0x8340, 0x20, true, 0x18d7c8c97fdfe81c)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CMHIVE.CmRmInitFailStatus", cm_rm_init_fail_status, 0x8360, 0x20, true, 0x7bd2ed724a32e8b8)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_CMHIVE.CreatorOwner", creator_owner, 0x8380, 0x40, true, 0xb0df1cb6a22a5a37)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_CMHIVE.RundownThread", rundown_thread, 0x83c0, 0x40, true, 0xb0ece855c5dba6c8)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CMHIVE.LastWriteTime", last_write_time, 0x8400, 0x40, true, 0xdb6c2308c8c5db14)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hive_write_wait_queue_t), "_CMHIVE.FlushQueue", flush_queue, 0x8440, 0x80, true, 0x47db54d90aeec3f8)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hive_write_wait_queue_t), "_CMHIVE.ReconcileQueue", reconcile_queue, 0x84c0, 0x80, true, 0x132b96b74d34fff4)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.FlushFlags", flush_flags, 0x8540, 0x20, true, 0x286d3279bf2438ab)
#define _m052 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CMHIVE.PrimaryFilePurged", primary_file_purged, 0x8540, 0x1, true, 0x145be3010d33de8b, 1, uint32_t)
#define _m053 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CMHIVE.DiskFileBad", disk_file_bad, 0x8541, 0x1, true, 0x25afd960fbfa3ba4, 1, uint32_t)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.PrimaryFileSizeBeforeLastFlush", primary_file_size_before_last_flush, 0x8560, 0x20, true, 0xdb987de1b63326c5)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_CMHIVE.ReferenceCount", reference_count, 0x8580, 0x20, true, 0xe32b3604d26a78c)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CMHIVE.UnloadHistoryIndex", unload_history_index, 0x85a0, 0x20, true, 0x53c350b479a22435)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 128>), "_CMHIVE.UnloadHistory", unload_history, 0x85c0, 0x0, true, 0x9ee37fbfa7baaaff)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.BootStart", boot_start, 0x95c0, 0x20, true, 0x4a41e19d0c1338d4)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.UnaccessedStart", unaccessed_start, 0x95e0, 0x20, true, 0x1098d2347eddd220)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.UnaccessedEnd", unaccessed_end, 0x9600, 0x20, true, 0x93488c54da36b12a)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.LoadedKeyCount", loaded_key_count, 0x9620, 0x20, true, 0x8a78c66b24dfb15)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_CMHIVE.HandleClosePending", handle_close_pending, 0x9640, 0x20, true, 0x5565ce1aa11ad51d)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CMHIVE.HandleClosePendingEvent", handle_close_pending_event, 0x9680, 0x40, true, 0xbc566727002ae36)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CMHIVE.FinalFlushSucceeded", final_flush_succeeded, 0x96c0, 0x8, true, 0xee1c0ab488bf1b32)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cmp::offset_array_t*), "_CMHIVE.FlushLogEntryOffsetArray", flush_log_entry_offset_array, 0x3540, 0x40, true, 0x41a4b6202be1cc9)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.FlushLogEntryOffsetArrayCount", flush_log_entry_offset_array_count, 0x3580, 0x20, true, 0x344d1999f895230a)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cmp::volume_context_t*), "_CMHIVE.VolumeContext", volume_context, 0x9700, 0x40, true, 0xc305bfd539955a4f)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::workitem_t*), "_CMHIVE.UnloadWorkItem", unload_work_item, 0x5c00, 0x40, true, 0x7872a343e8e33af6)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::workitem_t), "_CMHIVE.UnloadWorkItemHolder", unload_work_item_holder, 0x5c40, 0x40, true, 0xa1f242b7d1ffef8c)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMHIVE.FailedUnloadList", failed_unload_list, 0x0, 0x0, false, 0xa4977d9623e3eaee)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMHIVE.ParseCacheEntries", parse_cache_entries, 0x0, 0x0, false, 0x7c07fc9b376b8761)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t*), "_CMHIVE.WriterLock", writer_lock, 0x0, 0x0, false, 0xefbf28a48e48821a)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_CMHIVE.FlusherLock", flusher_lock, 0x0, 0x0, false, 0xb219c0aa4b2c0656)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CMHIVE.FlushLogEntry", flush_log_entry, 0x0, 0x0, false, 0xbd8956d87c09b3aa)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.UseCount", use_count, 0x0, 0x0, false, 0xc57b4a632f8efae1)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CMHIVE.GrowOnlyMode", grow_only_mode, 0x0, 0x0, false, 0xf0894f17e3cce4cc)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.GrowOffset", grow_offset, 0x0, 0x0, false, 0x11da71c2ab384d5b)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMHIVE.KcbConvertListHead", kcb_convert_list_head, 0x0, 0x0, false, 0xe0f73b27e3c0fba1)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::cell_remap_block_t*), "_CMHIVE.CellRemapArray", cell_remap_array, 0x0, 0x0, false, 0x9ca03ab74f0d67c8)
#define _m080 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CMHIVE.FlushActive", flush_active, 0x0, 0x0, false, 0x2c585fa3740ef047, 1, uint32_t)
#define _m081 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CMHIVE.ReconcileActive", reconcile_active, 0x0, 0x0, false, 0x1335f3fa77e1879d, 1, uint32_t)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CMHIVE.FailedUnload", failed_unload, 0x0, 0x0, false, 0xdf3fd7289e68f05d)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMHIVE.LateUnloadWorkItemState", late_unload_work_item_state, 0x0, 0x0, false, 0xccb99d30273ac287)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CMHIVE.LateUnloadFinishedEvent", late_unload_finished_event, 0x0, 0x0, false, 0xd48548456e1cd7ef)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t*), "_CMHIVE.LateUnloadWorkItem", late_unload_work_item, 0x0, 0x0, false, 0x8dbca0d40d4b88b5)
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
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#endif