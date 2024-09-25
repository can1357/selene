#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/hhive_t.hpp"
#include "../nt/cell_data_t.hpp"
#include "../hv/get_cell_context_t.hpp"

#include "magic/api.start.hpp"
namespace hvp
{
    // [HvpAddLoadedBinToHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x617b20, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) add_loaded_bin_to_hive;
    
    // [HvpAllocateNonPagedBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa1a414, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) allocate_non_paged_bin;
    
    // [HvpApplyLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x617c00, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) apply_log_entry;
    
    // [HvpBuildMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615c00, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) build_map;
    
    // [HvpBuildMapForLoaderHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x557f24, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) build_map_for_loader_hive;
    
    // [HvpCleanMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615e1c, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) clean_map;
    
    // [HvpCompareLogSequenceNumbers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x809cd8, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) compare_log_sequence_numbers;
    
    // [HvpDecrementCellReferenceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xf4e04, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) decrement_cell_reference_count;
    
    // [HvpDetermineLogFileApplicationOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x80a2d0, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) determine_log_file_application_order;
    
    // [HvpDetermineResultingLoggingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x80a360, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) determine_resulting_logging_state;
    
    // [HvpEnlistBinInMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4e3fe0, 0x32828 bytes
    //
    _n0(sdk::unknown_ptr) enlist_bin_in_map;
    
    // [HvpFaultCellWithClustering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xf4d20, 0x32828 bytes
    //
    _n1(sdk::unknown_ptr) fault_cell_with_clustering;
    
    // [HvpFindFreeBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x494924, 0x32828 bytes
    //
    _n2(sdk::unknown_ptr) find_free_bin;
    
    // [HvpFindNextDirtyBlockAndCreateTemporary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b931c, 0x32828 bytes
    //
    _n3(sdk::unknown_ptr) find_next_dirty_block_and_create_temporary;
    
    // [HvpFreeAllocatedBins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x609904, 0x32828 bytes
    //
    _n4(sdk::unknown_ptr) free_allocated_bins;
    
    // [HvpGetBinContextInTempBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba504, 0x32828 bytes
    //
    _n5(sdk::unknown_ptr) get_bin_context_in_temp_bin;
    
    // [HvpGetBinMemAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4a04dc, 0x32828 bytes
    //
    _n6(sdk::unknown_ptr) get_bin_mem_alloc;
    
    // [HvpGetHCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4e5544, 0x32828 bytes
    //
    _n7(sdk::unknown_ptr) get_h_cell;
    
    // [HvpGetLogHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x616120, 0x32828 bytes
    //
    _n8(sdk::unknown_ptr) get_log_header;
    
    // [HvpIncrementCellReferenceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xf509c, 0x32828 bytes
    //
    _n9(sdk::unknown_ptr) increment_cell_reference_count;
    
    // [HvpIncrementalLogFileEnumeratorAdvance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x809f08, 0x1fd000 bytes
    //
    _o0(sdk::unknown_ptr) incremental_log_file_enumerator_advance;
    
    // [HvpIsHiveEligibleForSystemCacheBacking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x44b688, 0x32828 bytes
    //
    _o1(sdk::unknown_ptr) is_hive_eligible_for_system_cache_backing;
    
    // [HvpLogEntryCheckDataChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x80a15c, 0x1fd000 bytes
    //
    _o2(sdk::unknown_ptr) log_entry_check_data_checksum;
    
    // [HvpMapEntryIsBinPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xffaac, 0x32828 bytes
    //
    _o3(sdk::unknown_ptr) map_entry_is_bin_present;
    
    // [HvpMapEntryIsDiscardable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xf50b0, 0x32828 bytes
    //
    _o4(sdk::unknown_ptr) map_entry_is_discardable;
    
    // [HvpMapEntryIsNewAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x103390, 0x32828 bytes
    //
    _o5(sdk::unknown_ptr) map_entry_is_new_alloc;
    
    // [HvpMapEntryIsTrimmed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x103384, 0x32828 bytes
    //
    _o6(sdk::unknown_ptr) map_entry_is_trimmed;
    
    // [HvpMapEntryMarkTrimmed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x16ee80, 0x32828 bytes
    //
    _o7(sdk::unknown_ptr) map_entry_mark_trimmed;
    
    // [HvpMapHiveImageFromSystemCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1bab04, 0x32828 bytes
    //
    _o8(sdk::unknown_ptr) map_hive_image_from_system_cache;
    
    // [HvpProtectBinPartial]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x684980, 0x1fd000 bytes
    //
    _o9(sdk::unknown_ptr) protect_bin_partial;
    
    // [HvpRecoverData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x616964, 0x32828 bytes
    //
    _p0(sdk::unknown_ptr) recover_data;
    
    // [HvpReleaseHCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xf4d10, 0x32828 bytes
    //
    _p1(sdk::unknown_ptr) release_h_cell;
    
    // [HvpReviveDiscardedBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615f48, 0x32828 bytes
    //
    _p2(sdk::unknown_ptr) revive_discarded_bin;
    
    // [HvpViewMapAcquireChargesAndLockViewPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6812ac, 0x1fd000 bytes
    //
    _p3(sdk::unknown_ptr) view_map_acquire_charges_and_lock_view_pages;
    
    // [HvpViewMapAcquireChargesForPinnedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61556c, 0x32828 bytes
    //
    _p4(sdk::unknown_ptr) view_map_acquire_charges_for_pinned_pages;
    
    // [HvpViewMapAcquireLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b9f90, 0x32828 bytes
    //
    _p5(sdk::unknown_ptr) view_map_acquire_lock_exclusive;
    
    // [HvpViewMapAcquireLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b9fec, 0x32828 bytes
    //
    _p6(sdk::unknown_ptr) view_map_acquire_lock_shared;
    
    // [HvpViewMapAddressForFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571c40, 0x32828 bytes
    //
    _p7(sdk::unknown_ptr) view_map_address_for_file_offset;
    
    // [HvpViewMapContiguousBytesAfterFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571c78, 0x32828 bytes
    //
    _p8(sdk::unknown_ptr) view_map_contiguous_bytes_after_file_offset;
    
    // [HvpViewMapCountPinMaskSetBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6155b4, 0x32828 bytes
    //
    _p9(sdk::unknown_ptr) view_map_count_pin_mask_set_bits;
    
    // [HvpViewMapGrowFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615610, 0x32828 bytes
    //
    _q0(sdk::unknown_ptr) view_map_grow_file;
    
    // [HvpViewMapIsRangePinned]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba050, 0x32828 bytes
    //
    _q1(sdk::unknown_ptr) view_map_is_range_pinned;
    
    // [HvpViewMapPinForFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba0f4, 0x32828 bytes
    //
    _q2(sdk::unknown_ptr) view_map_pin_for_file_offset;
    
    // [HvpViewMapPrefetchFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615720, 0x32828 bytes
    //
    _q3(sdk::unknown_ptr) view_map_prefetch_file;
    
    // [HvpViewMapReleaseChargesForPinnedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6157d4, 0x32828 bytes
    //
    _q4(sdk::unknown_ptr) view_map_release_charges_for_pinned_pages;
    
    // [HvpViewMapReleaseLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba2e8, 0x32828 bytes
    //
    _q5(sdk::unknown_ptr) view_map_release_lock_exclusive;
    
    // [HvpViewMapReleaseLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba324, 0x32828 bytes
    //
    _q6(sdk::unknown_ptr) view_map_release_lock_shared;
    
    // [HvpViewMapUnpinForFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba360, 0x32828 bytes
    //
    _q7(sdk::unknown_ptr) view_map_unpin_for_file_offset;
    
    // [HvpViewMapUnpinViewOfPrimaryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba4a8, 0x32828 bytes
    //
    _q8(sdk::unknown_ptr) view_map_unpin_view_of_primary_file;
    
    // [HvpViewMapViewOfPrimaryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615804, 0x32828 bytes
    //
    _q9(sdk::unknown_ptr) view_map_view_of_primary_file;
    
    // [HvpViewRemapViewOfPrimaryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615930, 0x32828 bytes
    //
    _r0(sdk::unknown_ptr) view_remap_view_of_primary_file;
    
    // [HvpViewUnmapViewOfPrimaryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x615b34, 0x32828 bytes
    //
    _r1(sdk::unknown_ptr) view_unmap_view_of_primary_file;
    
    // [HvpGetBinContextInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0xf5160, 0x32828 bytes
    // ntoskrnl.exe PAGECMRC:0xae1300, 0x1fd000 bytes
    //
    _r2(sdk::unknown_ptr) get_bin_context_initialize;
    
    // [HvpGetCellContextMove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x16ee3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf248, 0x1fd000 bytes
    //
    _r3(sdk::unknown_ptr) get_cell_context_move;
    
    // [HvpGetCellContextReinitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0xf4dc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d3d7c, 0x1fd000 bytes
    //
    _r4(sdk::unknown_ptr) get_cell_context_reinitialize;
    
    // [HvpIsReadErrorTransient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87e9cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87d184, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) is_read_error_transient;
    
    // [HvpMapEntryGetBinAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0xf5040, 0x32828 bytes
    // ntoskrnl.exe PAGECMRC:0xae1310, 0x1fd000 bytes
    //
    _r6(sdk::unknown_ptr) map_entry_get_bin_address;
    
    // [HvpMapEntryGetBlockAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0xf4d60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d3e3c, 0x1fd000 bytes
    //
    _r7(sdk::unknown_ptr) map_entry_get_block_address;
    
    // [HvpMapEntryReleaseBinAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0xf4de0, 0x32828 bytes
    // ntoskrnl.exe PAGECMRC:0xae138c, 0x1fd000 bytes
    //
    _r8(sdk::unknown_ptr) map_entry_release_bin_address;
    
    // [HvpMapEntryReleaseBlockAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x1ba510, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7eb080, 0x1fd000 bytes
    //
    _r9(sdk::unknown_ptr) map_entry_release_block_address;
    
    // [HvpAllExceptionsFatalFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8701d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0ec3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e6bc, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) all_exceptions_fatal_filter;
    
    // [HvpAllocateLogBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21ca04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a018, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e11f4, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) allocate_log_buffers;
    
    // [HvpApplyIncrementalLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87e360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809dbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87cb18, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) apply_incremental_log_file;
    
    // [HvpApplyLegacyLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87e594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a4a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87cd4c, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) apply_legacy_log_file;
    
    // [HvpApplyLogEntryDataToFileBackedHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x870944, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a404, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ee30, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) apply_log_entry_data_to_file_backed_hive;
    
    // [HvpBuildMapForMemoryBackedHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x79403c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83c0bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7997bc, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) build_map_for_memory_backed_hive;
    
    // [HvpCopyDataToOffsetArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c2ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a6f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34d8fc, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) copy_data_to_offset_array;
    
    // [HvpDetermineIncrementalLogFileMaximums]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87e7c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809d04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87cf78, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) determine_incremental_log_file_maximums;
    
    // [HvpDetermineLatestLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x617fac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87e878, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87d030, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) determine_latest_log_file;
    
    // [HvpFreeHiveFreeDisplay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x660f38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6811a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d43d8, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) free_hive_free_display;
    
    // [HvpGenerateLogEntryChecksums]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63392c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68335c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x689790, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) generate_log_entry_checksums;
    
    // [HvpGenerateLogEntryDirtyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34d9e4, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) generate_log_entry_dirty_data;
    
    // [HvpGenerateLogEntryHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21becc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209e24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1060, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) generate_log_entry_header;
    
    // [HvpGenerateLogEntryMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21be60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209fa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0ff4, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) generate_log_entry_metadata;
    
    // [HvpGrowDirtyVectors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x268da8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209a34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df7f0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) grow_dirty_vectors;
    
    // [HvpInpageErrorFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8701ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0ec5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e6d8, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) inpage_error_filter;
    
    // [HvpIsLogEntryHeaderCoherent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87e8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a084, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87d068, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) is_log_entry_header_coherent;
    
    // [HvpLogIneligibleLogHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ba888, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87eac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87d280, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) log_ineligible_log_header;
    
    // [HvpLogUnreadableLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1baa90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ed28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87d4e0, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) log_unreadable_log;
    
    // [HvpMapHiveImageFromViewMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6312c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f07c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698624, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) map_hive_image_from_view_map;
    
    // [HvpMappedViewConvertLockedPagesToCOWByPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66232c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67dce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d46cc, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) mapped_view_convert_locked_pages_to_cow_by_policy;
    
    // [HvpMappedViewConvertRegionFromLockedToCOWByPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6623d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67dd9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4778, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) mapped_view_convert_region_from_locked_to_cow_by_policy;
    
    // [HvpPerformLogFileRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x870cc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a878, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86f1b0, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) perform_log_file_recovery;
    
    // [HvpProtectBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672948, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x685170, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) protect_bin;
    
    // [HvpReadLogEntryHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87ede4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87d59c, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) read_log_entry_header;
    
    // [HvpSwapDual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x871430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0f97c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86f920, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) swap_dual;
    
    // [HvpViewMapAdjustFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78b98c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83d588, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79572c, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) view_map_adjust_flag;
    
    // [HvpViewMapCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d7a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d849c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0858, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) view_map_cleanup;
    
    // [HvpViewMapConvertLockedPagesToCOWByPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67dc44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4630, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) view_map_convert_locked_pages_to_cow_by_policy;
    
    // [HvpViewMapCOWAndUnsealRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63542c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683e68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695b48, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) view_map_cow_and_unseal_range;
    
    // [HvpViewMapCreateView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6815ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68653c, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) view_map_create_view;
    
    // [HvpViewMapCreateViewsForRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6349ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x681314, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6860cc, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) view_map_create_views_for_region;
    
    // [HvpViewMapDeleteViewTreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670f0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c678, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e465c, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) view_map_delete_view_tree_node;
    
    // [HvpViewMapExtendStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66cca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6818bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684b5c, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) view_map_extend_storage;
    
    // [HvpViewMapGetLastView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66cd48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x681964, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684c04, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) view_map_get_last_view;
    
    // [HvpViewMapMakeViewRangeCOWByCaller]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6354e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695c00, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) view_map_make_view_range_cow_by_caller;
    
    // [HvpViewMapMakeViewRangeInvalid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x717ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eacf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f510, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) view_map_make_view_range_invalid;
    
    // [HvpViewMapMakeViewRangeUnCOWByCaller]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6350c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683d34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692584, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) view_map_make_view_range_un_cow_by_caller;
    
    // [HvpViewMapMakeViewRangeUnCOWByPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78ba3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83d634, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7957dc, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) view_map_make_view_range_un_cow_by_policy;
    
    // [HvpViewMapMakeViewRangeValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634e3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6835e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686368, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) view_map_make_view_range_valid;
    
    // [HvpViewMapMigrateCOWData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7167ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea8c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e22c, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) view_map_migrate_cow_data;
    
    // [HvpViewMapPromoteRangeToMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630bc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684c64, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) view_map_promote_range_to_mapping;
    
    // [HvpViewMapSealRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6351f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695a3c, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) view_map_seal_range;
    
    // [HvpViewMapShrinkStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x870230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0eca4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e71c, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) view_map_shrink_storage;
    
    // [HvpViewMapStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62feb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67efc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686018, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) view_map_start;
    
    // [HvpViewMapTouchPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6355f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6849e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692628, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) view_map_touch_pages;
    
    // [HvpViewMapUnCOWAndSealRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68386c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x691688, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) view_map_un_cow_and_seal_range;
    
    // [HvpAddBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494244, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x630278, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x681ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68558c, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) add_bin;
    
    // [HvpAddDummyBinToHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x617990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x870850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0f5dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ed3c, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) add_dummy_bin_to_hive;
    
    // [HvpAddFreeCellHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e555c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a11e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cee40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698754, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) add_free_cell_hint;
    
    // [HvpAdjustBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b498, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x630f7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x685ccc, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) adjust_bitmap;
    
    // [HvpAdjustHiveFreeDisplay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b424, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x630f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6827e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x685c50, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) adjust_hive_free_display;
    
    // [HvpAllocateBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3e48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e414, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682b1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68512c, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) allocate_bin;
    
    // [HvpAllocateMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497478, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67db70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9050, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) allocate_map;
    
    // [HvpCopyModifiedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x617e9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8709f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a4b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86eee4, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) copy_modified_data;
    
    // [HvpCountSetRangesInVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44e8d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6343d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x704b10, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) count_set_ranges_in_vector;
    
    // [HvpDelistFreeCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e561c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a0a24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ce3e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698308, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) delist_free_cell;
    
    // [HvpDoAllocateCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4b2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a0cd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cf290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698a74, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) do_allocate_cell;
    
    // [HvpDropPagedBins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550b98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77c5b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836c44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7812c4, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) drop_paged_bins;
    
    // [HvpEnlistFreeCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e51b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6deb30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ced14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6993c8, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) enlist_free_cell;
    
    // [HvpEnlistFreeCells]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e40a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6309e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698090, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) enlist_free_cells;
    
    // [HvpExpandMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4949dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631074, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x685dc4, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) expand_map;
    
    // [HvpFillFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c584, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x632590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f28c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6881b0, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) fill_file_name;
    
    // [HvpFindFreeCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a0f4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cf640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699038, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) find_free_cell;
    
    // [HvpFindFreeCellInBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e5120, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a1130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cf580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699870, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) find_free_cell_in_bin;
    
    // [HvpFindNextDirtyBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44e5e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633e28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68403c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x704868, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) find_next_dirty_block;
    
    // [HvpFindNextDirtyRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94c50, 0x32828 bytes
    // ntoskrnl.exe .text:0x21c14c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a5a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34e364, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) find_next_dirty_run;
    
    // [HvpFinishPrimaryWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67df94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e03e0, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) finish_primary_write;
    
    // [HvpFreeBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e450c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67907c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec4a4, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) free_bin;
    
    // [HvpFreeMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d2b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6715a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68122c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4e08, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) free_map;
    
    // [HvpGenerateLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44e30c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633784, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68343c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6895e8, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) generate_log_entry;
    
    // [HvpGenerateLogMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44e250, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x634314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684f0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7042c0, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) generate_log_metadata;
    
    // [HvpGetCellContextInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4dc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8730d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d3d7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8715e8, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) get_cell_context_initialize;
    
    // [HvpGetCellFlat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498110, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711890, 0x1fe000 bytes
    //
    _z3(sdk::function<struct nt::cell_data_t*(struct nt::hhive_t*, uint32_t, struct hv::get_cell_context_t*)>*) get_cell_flat;
    
    // [HvpGetCellMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3bc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ddf80, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699810, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) get_cell_map;
    
    // [HvpGetCellPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4db990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x635890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d3da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69e330, 0x1fe000 bytes
    //
    _z5(sdk::function<struct nt::cell_data_t*(struct nt::hhive_t*, uint32_t, struct hv::get_cell_context_t*)>*) get_cell_paged;
    
    // [HvpGetHiveHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44aff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fbb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67ea60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686e00, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) get_hive_header;
    
    // [HvpHeaderCheckSum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b1ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fcec, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1008, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686f38, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) header_check_sum;
    
    // [HvpInitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4972f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fd1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e8c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68662c, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) init_map;
    
    // [HvpIsFreeNeighbor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e5890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69fe40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ce6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698560, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) is_free_neighbor;
    
    // [HvpIsMetadataArrayCoherent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bad14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87e92c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a1b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87d0e4, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) is_metadata_array_coherent;
    
    // [HvpLogEntryCheckHeaderChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608e28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86ed78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a0f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d6f8, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) log_entry_check_header_checksum;
    
    // [HvpLogInvalidLogHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ba928, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87eb90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a6d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87d348, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) log_invalid_log_header;
    
    // [HvpLogTypeToLogArrayIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44dd54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683008, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686cec, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) log_type_to_log_array_index;
    
    // [HvpMapEntryGetFreeBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffa90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a110c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68485c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6991f8, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) map_entry_get_free_bin;
    
    // [HvpMapHiveImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3c14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x870a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0f6a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ef88, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) map_hive_image;
    
    // [HvpMapHiveImageFromFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b5f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x870c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0f824, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86f0fc, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) map_hive_image_from_file;
    
    // [HvpMarkCellDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e36f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ddc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b0d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699500, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) mark_cell_dirty;
    
    // [HvpMarkDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e37e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dddb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b0e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699640, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) mark_dirty;
    
    // [HvpPointMapEntriesToBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3af8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x630b04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68271c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x685b90, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) point_map_entries_to_buffer;
    
    // [HvpReadHiveDataFromFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x871244, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0f8d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86f730, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) read_hive_data_from_file;
    
    // [HvpRecoverDataReadRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x616bc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8712f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86f7e0, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) recover_data_read_routine;
    
    // [HvpReleaseCellFlat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49cc64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7118b0, 0x1fe000 bytes
    //
    _b2(sdk::function<void(struct nt::hhive_t*, struct hv::get_cell_context_t*)>*) release_cell_flat;
    
    // [HvpReleaseCellPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dba20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d3d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69ed90, 0x1fe000 bytes
    //
    _b3(sdk::function<void(struct nt::hhive_t*, struct hv::get_cell_context_t*)>*) release_cell_paged;
    
    // [HvpRemapAndEnlistHiveBins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63087c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6820a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697f38, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) remap_and_enlist_hive_bins;
    
    // [HvpRemoveFreeCellHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4f50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a0ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cf0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699210, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) remove_free_cell_hint;
    
    // [HvpResetPageProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x635168, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683dd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6959ac, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) reset_page_protection;
    
    // [HvpSetRangeProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e39a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x635304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6846fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697bbc, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) set_range_protection;
    
    // [HvpShrinkMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x615ec8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f1c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15db4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87d978, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) shrink_map;
    
    // [HvpTruncateBins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44e9a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6340d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6837b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68918c, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) truncate_bins;
    
    // [HvpUpdateRecoveryVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x617fd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ee40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80a258, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87d5f8, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) update_recovery_vector;
    
    // [HvpValidateLoadedBin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x630ac4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x698174, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) validate_loaded_bin;
};
#include "magic/api.end.hpp"
