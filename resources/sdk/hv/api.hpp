#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/api.start.hpp"
namespace hv
{
    // [HvAllocateOffsetArraysForHiveSnapshot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa15c88, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) allocate_offset_arrays_for_hive_snapshot;
    
    // [HvApplyLegacyLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61753c, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) apply_legacy_log_file;
    
    // [HvApplyLogFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8098a0, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) apply_log_files;
    
    // [HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3e968, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) eventlog_guest_state_scrubbing_incomplete;
    
    // [HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE_NO_CORE_SCHEDULER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3e998, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) eventlog_guest_state_scrubbing_incomplete_no_core_scheduler;
    
    // [HV_EVENTLOG_IOMMU_INIT_ERROR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3e9b8, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) eventlog_iommu_init_error;
    
    // [HvFreeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4e42c4, 0x32828 bytes
    //
    _m6(sdk::unknown_ptr) free_hive;
    
    // [HvInitializeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x44bef8, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) initialize_hive;
    
    // [HvMarkDirtyForFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x380c8c, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) mark_dirty_for_flush;
    
    // [HvRecoverFlushProtocolStateFromFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa0f004, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) recover_flush_protocol_state_from_files;
    
    // [HvRefreshHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60b9e0, 0x32828 bytes
    //
    _n0(sdk::unknown_ptr) refresh_hive;
    
    // [HvResetUnreconciledData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4a2118, 0x32828 bytes
    //
    _n1(sdk::unknown_ptr) reset_unreconciled_data;
    
    // [HvSyncHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60bdd8, 0x32828 bytes
    //
    _n2(sdk::unknown_ptr) sync_hive;
    
    // [HvSynchronizeAndDropTemporaryBins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd478c, 0x32828 bytes
    //
    _n3(sdk::unknown_ptr) synchronize_and_drop_temporary_bins;
    
    // [HvUpdateUnreconciledVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4798f8, 0x32828 bytes
    //
    _n4(sdk::unknown_ptr) update_unreconciled_vector;
    
    // [HvViewMapAddressForFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615114, 0x32828 bytes
    //
    _n5(sdk::unknown_ptr) view_map_address_for_file_offset;
    
    // [HvViewMapChangeFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61517c, 0x32828 bytes
    //
    _n6(sdk::unknown_ptr) view_map_change_file_size;
    
    // [HvViewMapCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4a17b8, 0x32828 bytes
    //
    _n7(sdk::unknown_ptr) view_map_cleanup;
    
    // [HvViewMapCopyToFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b9eb0, 0x32828 bytes
    //
    _n8(sdk::unknown_ptr) view_map_copy_to_file_offset;
    
    // [HvViewMapFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6151d0, 0x32828 bytes
    //
    _n9(sdk::unknown_ptr) view_map_flush;
    
    // [HvViewMapPinFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b9f30, 0x32828 bytes
    //
    _o0(sdk::unknown_ptr) view_map_pin_file;
    
    // [HvViewMapPinForFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615318, 0x32828 bytes
    //
    _o1(sdk::unknown_ptr) view_map_pin_for_file_offset;
    
    // [HvViewMapStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615360, 0x32828 bytes
    //
    _o2(sdk::unknown_ptr) view_map_start;
    
    // [HvViewMapUnpinFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b9f68, 0x32828 bytes
    //
    _o3(sdk::unknown_ptr) view_map_unpin_file;
    
    // [HvViewMapUnpinForFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61552c, 0x32828 bytes
    //
    _o4(sdk::unknown_ptr) view_map_unpin_for_file_offset;
    
    // [HV_EVENTLOG_GUEST_STATE_SCRUBBING_DISABLED_CORE_SCHEDULER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x32f80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x332c0, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) eventlog_guest_state_scrubbing_disabled_core_scheduler;
    
    // [HvLockHiveWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632c98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6888b8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) lock_hive_writer;
    
    // [HvMarkDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x877538, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) mark_dirty;
    
    // [HvUnlockHiveWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632c68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x688888, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) unlock_hive_writer;
    
    // [HvAnalyzeLogFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87dc74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809974, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87c42c, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) analyze_log_files;
    
    // [HvApplyLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61771c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87e26c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87ca24, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) apply_log_file;
    
    // [HV_EVENTLOG_CORE_SCHEDULER_PROCESSOR_CONFIGURATION_WARNING]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x101e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14d50, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x10158, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) eventlog_core_scheduler_processor_configuration_warning;
    
    // [HV_EVENTLOG_GUEST_STATE_SCRUBBING]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x32f40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e958, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33280, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) eventlog_guest_state_scrubbing;
    
    // [HV_EVENTLOG_IOMMU_FAILED_INVALID_IOAPIC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280678, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x33260, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) eventlog_iommu_failed_invalid_ioapic;
    
    // [HV_EVENTLOG_IOMMU_FAILED_NO_DEVICE_ASSIGNMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280668, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33010, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x33350, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) eventlog_iommu_failed_no_device_assignment;
    
    // [HV_EVENTLOG_IOMMU_FAILED_NO_RESOURCES]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280688, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33030, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x33370, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) eventlog_iommu_failed_no_resources;
    
    // [HV_EVENTLOG_IOMMU_FAILED_RESERVED_DEVICE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280658, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x332d0, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) eventlog_iommu_failed_reserved_device;
    
    // [HV_EVENTLOG_IOMMU_FAILED_RID_CONFLICT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280698, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x332a0, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) eventlog_iommu_failed_rid_conflict;
    
    // [HV_EVENTLOG_IOMMU_WARNING_SCOPE_CONFLICT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2806a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32ff0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x33330, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) eventlog_iommu_warning_scope_conflict;
    
    // [HV_EVENTLOG_MDS_MITIGATION_STATUS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x32fe0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e9e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33320, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) eventlog_mds_mitigation_status;
    
    // [HvHiveCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a067c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68430c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697ce4, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) hive_cleanup;
    
    // [HvHiveConvertLockedPagesToCowByPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6621d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e674, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e1a8, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) hive_convert_locked_pages_to_cow_by_policy;
    
    // [HvHiveInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6806b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688b74, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) hive_initialize;
    
    // [HvHiveStartEmptyClone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8703a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0ee30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e88c, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) hive_start_empty_clone;
    
    // [HvHiveStartFileBacked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6322d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f2fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687ef4, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) hive_start_file_backed;
    
    // [HvHiveStartMemoryBacked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x752d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83bbd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75a600, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) hive_start_memory_backed;
    
    // [HvIsRangeDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878f3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87748c, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) is_range_dirty;
    
    // [HvLockHiveFlusherExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632264, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae163c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687e84, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) lock_hive_flusher_exclusive;
    
    // [HvLockHiveFlusherShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c17d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ac20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617f30, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) lock_hive_flusher_shared;
    
    // [HvSnapshotHiveToOffsetArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87eeb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1c88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87d66c, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) snapshot_hive_to_offset_array;
    
    // [HvSwapHiveStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x870574, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0f304, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ea60, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) swap_hive_storage;
    
    // [HvTrimHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x673360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81602c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6a30, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) trim_hive;
    
    // [HvUnCOWReconciledPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21f73c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a0cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2188, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) un_cow_reconciled_pages;
    
    // [HvUnlockHiveFilePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679574, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67dc04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec8e4, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) unlock_hive_file_pages;
    
    // [HvUnlockHiveFlusherExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63222c, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687e4c, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) unlock_hive_flusher_exclusive;
    
    // [HvUnlockHiveFlusherShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c17f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79abe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617f4c, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) unlock_hive_flusher_shared;
    
    // [HvViewMapContainsLockedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e784, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e258, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) view_map_contains_locked_pages;
    
    // [HvAddToLayoutStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a14f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b0d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698a64, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) add_to_layout_stats;
    
    // [HvAllocateCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e593c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a0c88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ceca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698708, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) allocate_cell;
    
    // [HvBufferCheckSum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41bda8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744308, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74d89c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74bf48, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) buffer_check_sum;
    
    // [HvCheckAndUpdateHiveBackupTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6330c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f164, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688ce8, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) check_and_update_hive_backup_time_stamp;
    
    // [HvCheckBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x405600, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a1290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b0aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698800, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) check_bin;
    
    // [HvCheckHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a08d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684584, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6981b4, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) check_hive;
    
    // [HvDuplicateCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497860, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6730b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c824c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6780, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) duplicate_cell;
    
    // [HV_EVENTLOG_BAL_HYPERVISOR_INIT_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280708, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32fc0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e9d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33300, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) eventlog_bal_hypervisor_init_failed;
    
    // [HV_EVENTLOG_BAL_TOO_MANY_RS_MEMORY_RANGES]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2806f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e978, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33290, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) eventlog_bal_too_many_rs_memory_ranges;
    
    // [HV_EVENTLOG_IOMMU_INIT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2806c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32fb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e9c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x332f0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) eventlog_iommu_init;
    
    // [HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2806b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32fd0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e9f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33310, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) eventlog_iommu_init_policy_enable;
    
    // [HV_EVENTLOG_PROCESSOR_CPUID_VALIDATION_ERROR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2806d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32fa0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e9a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x332e0, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) eventlog_processor_cpuid_validation_error;
    
    // [HV_EVENTLOG_PROCESSOR_STARTUP_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2806e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e988, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x332b0, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) eventlog_processor_startup_failed;
    
    // [HV_EVENTLOG_SCHEDULER_TYPE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280718, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33020, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ea18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33360, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) eventlog_scheduler_type;
    
    // [HV_EVENTLOG_START_SUCCEEDED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261900, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x101d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14d40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x10148, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) eventlog_start_succeeded;
    
    // [HV_EVENTLOG_TSC_SYNC_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280648, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e948, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33270, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) eventlog_tsc_sync_failed;
    
    // [HvExtendHivePrimaryFileValidDataLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873c34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x872144, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) extend_hive_primary_file_valid_data_length;
    
    // [HvFoldBackDirtyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b8bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873cb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa12070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8721c4, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) fold_back_dirty_data;
    
    // [HvFoldBackUnreconciledData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b978, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873d74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1215c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x872284, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) fold_back_unreconciled_data;
    
    // [HvFreeCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e56b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69fc94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ce4a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6983ac, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) free_cell;
    
    // [HvFreeDirtyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41b1e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c2e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ca04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b130, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) free_dirty_data;
    
    // [HvFreeHivePartial]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ea50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x634188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684a38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x689244, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) free_hive_partial;
    
    // [HvFreeUnreconciledData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497240, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3074, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6df868, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) free_unreconciled_data;
    
    // [HvGetEffectiveLogSizeCapForHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44dce8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633604, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686c80, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) get_effective_log_size_cap_for_hive;
    
    // [HvGetHiveLogFileStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44dd68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63368c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68308c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686d08, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) get_hive_log_file_status;
    
    // [HvInitializeHashLibrary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ab4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7825f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x829fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c390, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) initialize_hash_library;
    
    // [HvIsCellAllocated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d5880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a2d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d0790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f92b0, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) is_cell_allocated;
    
    // [HvIsCurrentLogSwappable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0818, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674de4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7fa4, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) is_current_log_swappable;
    
    // [HvIsInPlaceBaseBlockValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6098a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873dc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa12404, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8722d4, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) is_in_place_base_block_valid;
    
    // [HvLoadHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b214, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62ff68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67eb98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68527c, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) load_hive;
    
    // [HvMarkBaseBlockDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6731ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67d7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e68bc, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) mark_base_block_dirty;
    
    // [HvMarkCellDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x878fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89822a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x877520, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) mark_cell_dirty;
    
    // [HvMoveLayoutStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4060ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a14d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b0ce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698a48, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) move_layout_stats;
    
    // [HvReallocateCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50bd00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628804, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ce138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x696fb0, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) reallocate_cell;
    
    // [HvResetDirtyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ebf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x634970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x685034, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6895ac, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) reset_dirty_data;
    
    // [HvResetLogFileStatusAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3460, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eadc8, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) reset_log_file_status_all;
    
    // [HvShutdownComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab53, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b5, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53454, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b5, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) shutdown_complete;
    
    // [HvStoreModifiedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44de4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633a04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688d68, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) store_modified_data;
    
    // [HvSwapLogFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e3f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66fc08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd5fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3368, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) swap_log_files;
    
    // [HvSymcryptSeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a890, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb4e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bb20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb4e0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) symcrypt_seed;
    
    // [HvTruncateAllLogFilesIfRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a34b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eab84, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) truncate_all_log_files_if_required;
    
    // [HvTruncateCurrentLogFileIfRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d9d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6333fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682f88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686a78, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) truncate_current_log_file_if_required;
    
    // [HvValidateOrInvalidatePrimaryFileHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e7b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671bdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67de98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e543c, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) validate_or_invalidate_primary_file_header;
    
    // [HvWriteExternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60bf70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70d330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa121b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x714cc0, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) write_external;
    
    // [HvWriteHivePrimaryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ac9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d18c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e023c, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) write_hive_primary_file;
    
    // [HvWriteLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6313ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686fc4, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) write_log_file;
    
    // [HV_GUID_LOOPBACK]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .rdata:0x1dfd88, 0x7a898 bytes
    // tcpip.sys .rdata:0x1ee9f0, 0x91370 bytes
    // tcpip.sys .rdata:0x1dede8, 0x7a860 bytes
    //
    _w3(struct nt::guid_t*) guid_loopback;
    
    // [HV_GUID_PARENT]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .rdata:0x1dfdc8, 0x7a898 bytes
    // tcpip.sys .rdata:0x1eea30, 0x91370 bytes
    // tcpip.sys .rdata:0x1dee18, 0x7a860 bytes
    //
    _w4(struct nt::guid_t*) guid_parent;
};
#include "magic/api.end.hpp"
