#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/irp_t.hpp"
#include "../nt/mcb_t.hpp"
#include "../nt/mdl_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/tunnel_t.hpp"
#include "../nt/base_mcb_t.hpp"
#include "../nt/ecp_list_t.hpp"
#include "../nt/eresource_t.hpp"
#include "../nt/file_lock_t.hpp"
#include "../nt/large_mcb_t.hpp"
#include "../nt/pool_type_t.hpp"
#include "../nt/wait_type_t.hpp"
#include "filter_callbacks_t.hpp"
#include "../nt/file_object_t.hpp"
#include "../nt/kwait_block_t.hpp"
#include "../io/status_block_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../nt/driver_object_t.hpp"
#include "../io/stack_location_t.hpp"
#include "../nt/file_lock_info_t.hpp"
#include "../nt/object_attributes_t.hpp"
#include "../nt/reparse_data_buffer_t.hpp"
#include "../nt/fsrtl_per_file_context_t.hpp"
#include "../nt/section_object_pointers_t.hpp"
#include "../nt/fsrtl_per_stream_context_t.hpp"
#include "../nt/fsrtl_advanced_fcb_header_t.hpp"
#include "../nt/fsrtl_change_backing_type_t.hpp"
#include "../nt/fsrtl_per_fileobject_context_t.hpp"
#include "../nt/target_device_custom_notification_t.hpp"

namespace nt  { struct ecp_header_t;       }
namespace nt  { struct kprocess_t;         }
namespace nt  { struct real_notify_sync_t; }
namespace sec { struct subject_context_t;  }

#include "magic/api.start.hpp"
namespace fs
{
    // [FsRtlAcquirePushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x5454, 0x32828 bytes
    //
    _m00(sdk::unknown_ptr) rtl_acquire_push_lock_exclusive;
    
    // [FsRtlAcquirePushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1bd3d0, 0x32828 bytes
    //
    _m01(sdk::unknown_ptr) rtl_acquire_push_lock_shared;
    
    // [FsRtlAllocateAePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52a6c0, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) rtl_allocate_ae_push_lock;
    
    // [FsRtlDedupChangeData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5f180, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) rtl_dedup_change_data;
    
    // [FsRtlDedupChangeInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x939df0, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) rtl_dedup_change_init;
    
    // [FsRtlDedupChangeLogOverwriteOrFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x939ee0, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) rtl_dedup_change_log_overwrite_or_free;
    
    // [FsRtlDedupChangeLogWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x939f20, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) rtl_dedup_change_log_write;
    
    // [FsRtlDedupChangeUninit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x939f70, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) rtl_dedup_change_uninit;
    
    // [FsRtlFirstMappingLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x32a940, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) rtl_first_mapping_lookaside_list;
    
    // [FsRtlFreeAePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52a700, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) rtl_free_ae_push_lock;
    
    // [FsRtlInitializeDedupChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x85bd78, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) rtl_initialize_dedup_change;
    
    // [FsRtlInsertPerFileContextInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd0214, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) rtl_insert_per_file_context_internal;
    
    // [FsRtlInsertReservedPerFileContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd020c, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) rtl_insert_reserved_per_file_context;
    
    // [FsRtlInsertReservedPerStreamContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xc3cb8, 0x32828 bytes
    //
    _m13(sdk::unknown_ptr) rtl_insert_reserved_per_stream_context;
    
    // [FsRtlLookupReservedPerFileContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd26bc, 0x32828 bytes
    //
    _m14(sdk::unknown_ptr) rtl_lookup_reserved_per_file_context;
    
    // [FsRtlLookupReservedPerStreamContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xb1490, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) rtl_lookup_reserved_per_stream_context;
    
    // [FsRtlOplockBreakH2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7d9950, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) rtl_oplock_break_h2;
    
    // [FsRtlRemoveReservedPerFileContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1bd974, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) rtl_remove_reserved_per_file_context;
    
    // [FsRtlRemoveReservedPerStreamContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1bd998, 0x32828 bytes
    //
    _m18(sdk::unknown_ptr) rtl_remove_reserved_per_stream_context;
    
    // [FsRtlpCheckSharingAgainstOplockOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7ec02c, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) rtlp_check_sharing_against_oplock_owner;
    
    // [FsRtlpDedupChangeEventsControlCallbackV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52c4d0, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) rtlp_dedup_change_events_control_callback_v2;
    
    // [FsRtlpDedupChangeQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x939fc4, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) rtlp_dedup_change_query_value_key;
    
    // [FsRtlpDedupChangeRegisterVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93a100, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) rtlp_dedup_change_register_volume;
    
    // [FsRtlpDedupChangeUnregisterVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93a2ac, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) rtlp_dedup_change_unregister_volume;
    
    // [FsRtlpRemoveAndCompleteRHIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2e0cc0, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) rtlp_remove_and_complete_rh_irp;
    
    // [FsRtlpRestoreCallerEcpsToCallerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1bb94c, 0x32828 bytes
    //
    _m25(sdk::unknown_ptr) rtlp_restore_caller_ecps_to_caller_list;
    
    // [FsRtlpTieringHeatEventsControlCallbackV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52c790, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) rtlp_tiering_heat_events_control_callback_v2;
    
    // [FsRtlAddToTunnelCacheEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x640b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b96f0, 0x1fe000 bytes
    //
    _m27(sdk::function<void(struct nt::tunnel_t*, uint64_t, nt::unicode_view*, nt::unicode_view*, uint32_t, uint32_t, void*)>*) rtl_add_to_tunnel_cache_ex;
    
    // [FsRtlCheckOplockEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2d3920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x254990, 0x1fe000 bytes
    //
    _m28(sdk::unknown_ptr) rtl_check_oplock_ex2;
    
    // [FsRtlFindInTunnelCacheEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x640990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9580, 0x1fe000 bytes
    //
    _m29(sdk::function<uint8_t(struct nt::tunnel_t*, uint64_t, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, uint32_t, uint32_t*, void*)>*) rtl_find_in_tunnel_cache_ex;
    
    // [FsRtlFirstNonPagedMappingLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf8040, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb680, 0x1fe000 bytes
    //
    _m30(sdk::unknown_ptr) rtl_first_non_paged_mapping_lookaside_list;
    
    // [FsRtlFirstPagedMappingLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb680, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf80c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb600, 0x1fe000 bytes
    //
    _m31(sdk::unknown_ptr) rtl_first_paged_mapping_lookaside_list;
    
    // [FsRtlGetCurrentProcessLoaderList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8890b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887860, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) rtl_get_current_process_loader_list;
    
    // [FsRtlInitializeLargeMcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa68a70, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54edc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68148, 0x1fe000 bytes
    //
    _m33(sdk::unknown_ptr) rtl_initialize_large_mcbs;
    
    // [FsRtlIs32BitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8890e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887890, 0x1fe000 bytes
    //
    _m34(sdk::unknown_ptr) rtl_is32_bit_process;
    
    // [FsRtlNotifyFilterReportChangeLiteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64d290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73e0e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bfd30, 0x1fe000 bytes
    //
    _m35(sdk::unknown_ptr) rtl_notify_filter_report_change_lite_ex;
    
    // [FsRtlOplockGetAnyBreakOwnerProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ea350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea230, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) rtl_oplock_get_any_break_owner_process;
    
    // [FsRtlQueryOpen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5cdda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a3e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce640, 0x1fe000 bytes
    //
    _m37(sdk::unknown_ptr) rtl_query_open;
    
    // [FsRtlpPrepareExtraCreateParametersForCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61de10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x763620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66d7d0, 0x1fe000 bytes
    //
    _m38(sdk::unknown_ptr) rtlp_prepare_extra_create_parameters_for_create;
    
    // [FsRtlpRemoveAndBreakRHIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x103430, 0x32828 bytes
    // ntoskrnl.exe .text:0x24bc48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f56f8, 0x1fe000 bytes
    //
    _m39(sdk::unknown_ptr) rtlp_remove_and_break_rh_irp;
    
    // [FsFilterAllocateCompletionStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd0b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eafbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d6ca, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eae9c, 0x1fe000 bytes
    //
    _m40(sdk::unknown_ptr) filter_allocate_completion_stack;
    
    // [FsFilterCtrlFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf7d2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f8e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6564, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281fa8, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) filter_ctrl_free;
    
    // [FsFilterCtrlInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8050, 0x32828 bytes
    // ntoskrnl.exe .text:0x30fcc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d65d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x282380, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) filter_ctrl_init;
    
    // [FsFilterFreeCompletionStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd190, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d7c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eaf78, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) filter_free_completion_stack;
    
    // [FsFilterGetCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf7ef0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30fb20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2821e0, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) filter_get_callbacks;
    
    // [FsFilterInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c3ea8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd10c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4c1c, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) filter_init;
    
    // [FsFilterPerformCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf7db0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x282060, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) filter_perform_callbacks;
    
    // [FsFilterPerformCompletionCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf7d40, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d64e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281fd0, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) filter_perform_completion_callbacks;
    
    // [FsRtlAcknowledgeEcp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4b24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6534d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7790, 0x1fe000 bytes
    //
    _m48(sdk::function<void(void*)>*) rtl_acknowledge_ecp;
    
    // [FsRtlAcquireEofLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87200, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e6a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ead60, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) rtl_acquire_eof_lock;
    
    // [FsRtlAcquireFileExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4026bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dfda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cc4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x630860, 0x1fe000 bytes
    //
    _m50(sdk::function<void(struct nt::file_object_t*)>*) rtl_acquire_file_exclusive;
    
    // [FsRtlAcquireFileExclusiveCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e2680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dffa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cc700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x630a60, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) rtl_acquire_file_exclusive_common;
    
    // [FsRtlAcquireFileForCcFlushEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f9508, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e743c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x738ee8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee30c, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) rtl_acquire_file_for_cc_flush_ex;
    
    // [FsRtlAcquireFileForModWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x69d0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b9f2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2843bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x353744, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) rtl_acquire_file_for_mod_write_ex;
    
    // [FsRtlAcquireHeaderMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bcb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dde70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25f100, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) rtl_acquire_header_mutex;
    
    // [FsRtlAcquireToCreateMappedSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4026cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dfcd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cc3ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x630790, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) rtl_acquire_to_create_mapped_section;
    
    // [FsRtlAddBaseMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3f84, 0x32828 bytes
    // ntoskrnl.exe .text:0x247410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3521f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f0a20, 0x1fe000 bytes
    //
    _m56(sdk::function<uint8_t(struct nt::base_mcb_t*, int64_t, int64_t, int64_t)>*) rtl_add_base_mcb_entry;
    
    // [FsRtlAddBaseMcbEntryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x247430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f0a40, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) rtl_add_base_mcb_entry_ex;
    
    // [FsRtlAddDiskIOCounterInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623c24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88955c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a33c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887d0c, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) rtl_add_disk_io_counter_instance;
    
    // [FsRtlAddEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4508, 0x32828 bytes
    // ntoskrnl.exe .text:0x247984, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35278c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f0f94, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) rtl_add_entry;
    
    // [FsRtlAddLargeMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3978, 0x32828 bytes
    // ntoskrnl.exe .text:0x246ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f04b0, 0x1fe000 bytes
    //
    _m60(sdk::function<uint8_t(struct nt::large_mcb_t*, int64_t, int64_t, int64_t)>*) rtl_add_large_mcb_entry;
    
    // [FsRtlAddMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbb80, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e90c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8fa0, 0x1fe000 bytes
    //
    _m61(sdk::function<uint8_t(struct nt::mcb_t*, uint32_t, uint32_t, uint32_t)>*) rtl_add_mcb_entry;
    
    // [FsRtlAddToTunnelCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444b30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8872f0, 0x1fe000 bytes
    //
    _m62(sdk::function<void(struct nt::tunnel_t*, uint64_t, nt::unicode_view*, nt::unicode_view*, uint8_t, uint32_t, void*)>*) rtl_add_to_tunnel_cache;
    
    // [FsRtlAllocateExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44241c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dcf20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7633f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2ac0, 0x1fe000 bytes
    //
    _m63(sdk::function<int32_t(const struct nt::guid_t*, uint32_t, uint32_t, sdk::function<void(void*, const struct nt::guid_t*)>*, uint32_t, void**)>*) rtl_allocate_extra_create_parameter;
    
    // [FsRtlAllocateExtraCreateParameterFromLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cf260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x687a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a2f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b72f0, 0x1fe000 bytes
    //
    _m64(sdk::function<int32_t(const struct nt::guid_t*, uint32_t, uint32_t, sdk::function<void(void*, const struct nt::guid_t*)>*, void*, void**)>*) rtl_allocate_extra_create_parameter_from_lookaside_list;
    
    // [FsRtlAllocateExtraCreateParameterList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61c090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a2f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e330, 0x1fe000 bytes
    //
    _m65(sdk::function<int32_t(uint32_t, struct nt::ecp_list_t**)>*) rtl_allocate_extra_create_parameter_list;
    
    // [FsRtlAllocateFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd35a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37fb70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320cd0, 0x1fe000 bytes
    //
    _m66(sdk::function<struct nt::file_lock_t*(sdk::function<int32_t(void*, struct nt::irp_t*)>*, sdk::function<void(void*, struct nt::file_lock_info_t*)>*)>*) rtl_allocate_file_lock;
    
    // [FsRtlAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc778, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9f00, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) rtl_allocate_pool;
    
    // [FsRtlAllocatePoolWithQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc7a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9f30, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) rtl_allocate_pool_with_quota;
    
    // [FsRtlAllocatePoolWithQuotaTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc7c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b1b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9f60, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) rtl_allocate_pool_with_quota_tag;
    
    // [FsRtlAllocatePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc7e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b1e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9f90, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) rtl_allocate_pool_with_tag;
    
    // [FsRtlAllocateResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62269c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8861b0, 0x1fe000 bytes
    //
    _m71(sdk::function<struct nt::eresource_t*()>*) rtl_allocate_resource;
    
    // [FsRtlAreThereCurrentOrInProgressFileLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc170, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e97e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e96c0, 0x1fe000 bytes
    //
    _m72(sdk::function<uint8_t(struct nt::file_lock_t*)>*) rtl_are_there_current_or_in_progress_file_locks;
    
    // [FsRtlAreThereWaitingFileLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc194, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e96f0, 0x1fe000 bytes
    //
    _m73(sdk::function<uint8_t(struct nt::file_lock_t*)>*) rtl_are_there_waiting_file_locks;
    
    // [FsRtlAreVolumeStartupApplicationsComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a37c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ff50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e33d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x651d80, 0x1fe000 bytes
    //
    _m74(sdk::function<uint8_t()>*) rtl_are_volume_startup_applications_complete;
    
    // [FsRtlBalanceReads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51eea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec7b0, 0x1fe000 bytes
    //
    _m75(sdk::function<int32_t(struct nt::device_object_t*)>*) rtl_balance_reads;
    
    // [FsRtlCancelNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3174, 0x32828 bytes
    // ntoskrnl.exe .text:0x24eed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc660, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) rtl_cancel_notify;
    
    // [FsRtlCancellableWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x517a2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x741410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f71f0, 0x1fe000 bytes
    //
    _m77(sdk::function<int32_t(uint32_t, void**, enum nt::wait_type_t, int64_t*, struct nt::kwait_block_t*, struct nt::irp_t*)>*) rtl_cancellable_wait_for_multiple_objects;
    
    // [FsRtlCancellableWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x517a00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x687ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x741170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de510, 0x1fe000 bytes
    //
    _m78(sdk::function<int32_t(void*, int64_t*, struct nt::irp_t*)>*) rtl_cancellable_wait_for_single_object;
    
    // [FsRtlChangeBackingFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131514, 0x32828 bytes
    // ntoskrnl.exe .text:0x390840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391890, 0x1fe000 bytes
    //
    _m79(sdk::function<int32_t(struct nt::file_object_t*, struct nt::file_object_t*, enum nt::fsrtl_change_backing_type_t, uint32_t)>*) rtl_change_backing_file_object;
    
    // [FsRtlCheckLockForOplockRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4a6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x368af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a9e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369ea0, 0x1fe000 bytes
    //
    _m80(sdk::function<uint8_t(struct nt::file_lock_t*, int64_t*)>*) rtl_check_lock_for_oplock_request;
    
    // [FsRtlCheckLockForReadAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7e44, 0x32828 bytes
    // ntoskrnl.exe .text:0x244700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2f20, 0x1fe000 bytes
    //
    _m81(sdk::function<uint8_t(struct nt::file_lock_t*, struct nt::irp_t*)>*) rtl_check_lock_for_read_access;
    
    // [FsRtlCheckLockForWriteAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd008, 0x32828 bytes
    // ntoskrnl.exe .text:0x244500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30bd40, 0x1fe000 bytes
    //
    _m82(sdk::function<uint8_t(struct nt::file_lock_t*, struct nt::irp_t*)>*) rtl_check_lock_for_write_access;
    
    // [FsRtlCheckNoExclusiveConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc1ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x367c08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d57c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x368fb8, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) rtl_check_no_exclusive_conflict;
    
    // [FsRtlCheckNoSharedConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc260, 0x32828 bytes
    // ntoskrnl.exe .text:0x368470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d63c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369820, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) rtl_check_no_shared_conflict;
    
    // [FsRtlCheckNotifyForDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624f08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889030, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) rtl_check_notify_for_delete;
    
    // [FsRtlCheckNotifyForDeleteLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624f64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a8e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b6e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889094, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) rtl_check_notify_for_delete_lite;
    
    // [FsRtlCheckOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfff40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d4900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e1ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x255970, 0x1fe000 bytes
    //
    _m87(sdk::function<int32_t(void**, struct nt::irp_t*, void*, sdk::function<void(void*, struct nt::irp_t*)>*, sdk::function<void(void*, struct nt::irp_t*)>*)>*) rtl_check_oplock;
    
    // [FsRtlCheckOplockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d5a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x256af0, 0x1fe000 bytes
    //
    _m88(sdk::function<int32_t(void**, struct nt::irp_t*, uint32_t, void*, sdk::function<void(void*, struct nt::irp_t*)>*, sdk::function<void(void*, struct nt::irp_t*)>*)>*) rtl_check_oplock_ex;
    
    // [FsRtlCheckUpperOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b240, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8874b0, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) rtl_check_upper_oplock;
    
    // [FsRtlCompareNodeAndKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91de4, 0x32828 bytes
    // ntoskrnl.exe .text:0x240f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3968, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) rtl_compare_node_and_key;
    
    // [FsRtlCompleteLockIrpReal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1313f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204b44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9710, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) rtl_complete_lock_irp_real;
    
    // [FsRtlCopyRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6226e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9385e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886210, 0x1fe000 bytes
    //
    _m92(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, void*, struct io::status_block_t*, struct nt::device_object_t*)>*) rtl_copy_read;
    
    // [FsRtlCopyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62294c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886490, 0x1fe000 bytes
    //
    _m93(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, void*, struct io::status_block_t*, struct nt::device_object_t*)>*) rtl_copy_write;
    
    // [FsRtlCreateLockInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323300, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47620, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) rtl_create_lock_info;
    
    // [FsRtlCreateSectionForDataScan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6db34, 0x32828 bytes
    // ntoskrnl.exe .text:0x208080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bfeb0, 0x1fe000 bytes
    //
    _m95(sdk::function<int32_t(void**, void**, int64_t*, struct nt::file_object_t*, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, uint32_t)>*) rtl_create_section_for_data_scan;
    
    // [FsRtlCurrentBatchOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c5bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aed10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3b70, 0x1fe000 bytes
    //
    _m96(sdk::function<uint8_t(void**)>*) rtl_current_batch_oplock;
    
    // [FsRtlCurrentOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc808, 0x32828 bytes
    // ntoskrnl.exe .text:0x390710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391760, 0x1fe000 bytes
    //
    _m97(sdk::function<uint8_t(void**)>*) rtl_current_oplock;
    
    // [FsRtlCurrentOplockH]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6237f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed570, 0x1fe000 bytes
    //
    _m98(sdk::function<uint8_t(void**)>*) rtl_current_oplock_h;
    
    // [FsRtlDeleteExtraCreateParameterLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6226bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9385b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8861e0, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) rtl_delete_extra_create_parameter_lookaside_list;
    
    // [FsRtlDeleteKeyFromTunnelCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4490d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6408c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a59d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b94b0, 0x1fe000 bytes
    //
    _n00(sdk::function<void(struct nt::tunnel_t*, uint64_t)>*) rtl_delete_key_from_tunnel_cache;
    
    // [FsRtlDeleteTunnelCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x752170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759db0, 0x1fe000 bytes
    //
    _n01(sdk::function<void(struct nt::tunnel_t*)>*) rtl_delete_tunnel_cache;
    
    // [FsRtlDeregisterUncProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887370, 0x1fe000 bytes
    //
    _n02(sdk::function<void(void*)>*) rtl_deregister_unc_provider;
    
    // [FsRtlDiskIOCounterSetCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623ce8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x889630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887de0, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) rtl_disk_io_counter_set_callback;
    
    // [FsRtlDismountComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b398, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e9c0, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) rtl_dismount_complete;
    
    // [FsRtlDissectDbcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623f4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x889900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8880b0, 0x1fe000 bytes
    //
    _n05(sdk::function<void(nt::ascii_view, nt::ascii_view*, nt::ascii_view*)>*) rtl_dissect_dbcs;
    
    // [FsRtlDoesDbcsContainWildCards]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624020, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8899f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x890f60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8881a0, 0x1fe000 bytes
    //
    _n06(sdk::function<uint8_t(nt::ascii_view*)>*) rtl_does_dbcs_contain_wild_cards;
    
    // [FsRtlEcpListLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a3c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7800, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb0c0, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) rtl_ecp_list_lookaside;
    
    // [FsRtlEmptyFreePoolList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x924d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x240f7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352f2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f39d4, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) rtl_empty_free_pool_list;
    
    // [FsRtlExclusiveLockLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32abc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf8240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb880, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) rtl_exclusive_lock_lookaside_list;
    
    // [FsRtlFastCheckLockForRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7ecc, 0x32828 bytes
    // ntoskrnl.exe .text:0x244790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2fb0, 0x1fe000 bytes
    //
    _n10(sdk::function<uint8_t(struct nt::file_lock_t*, int64_t*, int64_t*, uint32_t, struct nt::file_object_t*, void*)>*) rtl_fast_check_lock_for_read;
    
    // [FsRtlFastCheckLockForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd09c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2445a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30bde0, 0x1fe000 bytes
    //
    _n11(sdk::function<uint8_t(struct nt::file_lock_t*, int64_t*, int64_t*, uint32_t, void*, void*)>*) rtl_fast_check_lock_for_write;
    
    // [FsRtlFastMutexLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a8c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7fc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb580, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) rtl_fast_mutex_lookaside_list;
    
    // [FsRtlFastUnlockAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93fd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x240b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3500, 0x1fe000 bytes
    //
    _n13(sdk::function<int32_t(struct nt::file_lock_t*, struct nt::file_object_t*, struct nt::kprocess_t*, void*)>*) rtl_fast_unlock_all;
    
    // [FsRtlFastUnlockAllByKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc2e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ab50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9770, 0x1fe000 bytes
    //
    _n14(sdk::function<int32_t(struct nt::file_lock_t*, struct nt::file_object_t*, struct nt::kprocess_t*, uint32_t, void*)>*) rtl_fast_unlock_all_by_key;
    
    // [FsRtlFastUnlockSingle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92f78, 0x32828 bytes
    // ntoskrnl.exe .text:0x2418a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28c470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e3170, 0x1fe000 bytes
    //
    _n15(sdk::function<int32_t(struct nt::file_lock_t*, struct nt::file_object_t*, __unaligned int64_t*, int64_t*, struct nt::kprocess_t*, uint32_t, void*, uint8_t)>*) rtl_fast_unlock_single;
    
    // [FsRtlFastUnlockSingleExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93054, 0x32828 bytes
    // ntoskrnl.exe .text:0x241984, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28c554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e3254, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) rtl_fast_unlock_single_exclusive;
    
    // [FsRtlFastUnlockSingleShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x931ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x241b0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28c160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2cec, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) rtl_fast_unlock_single_shared;
    
    // [FsRtlFileLockCancelCollideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323340, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47678, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f260, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47658, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) rtl_file_lock_cancel_collide_list;
    
    // [FsRtlFileLockCancelCollideLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323338, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47680, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f2b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47600, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) rtl_file_lock_cancel_collide_lock;
    
    // [FsRtlFileLockLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a9c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb780, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf8140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb700, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) rtl_file_lock_lookaside_list;
    
    // [FsRtlFindExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aa7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x600cb0, 0x1fe000 bytes
    //
    _n21(sdk::function<int32_t(struct nt::ecp_list_t*, const struct nt::guid_t*, void**, uint32_t*)>*) rtl_find_extra_create_parameter;
    
    // [FsRtlFindFirstOverlapInNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc304, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e98b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ab74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9794, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) rtl_find_first_overlap_in_node;
    
    // [FsRtlFindFirstOverlappingExclusiveNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93de8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24222c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360bd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e29b8, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) rtl_find_first_overlapping_exclusive_node;
    
    // [FsRtlFindFirstOverlappingSharedNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x933dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x241d34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ddd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4998, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) rtl_find_first_overlapping_shared_node;
    
    // [FsRtlFindInTunnelCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4434dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9392d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887330, 0x1fe000 bytes
    //
    _n25(sdk::function<uint8_t(struct nt::tunnel_t*, uint64_t, nt::unicode_view*, nt::unicode_view*, nt::unicode_view*, uint32_t*, void*)>*) rtl_find_in_tunnel_cache;
    
    // [FsRtlFindLargeIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb460c, 0x32828 bytes
    // ntoskrnl.exe .text:0x247abc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3526f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f10cc, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) rtl_find_large_index;
    
    // [FsRtlFreeExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6cc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61e460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66de20, 0x1fe000 bytes
    //
    _n27(sdk::function<void(void*)>*) rtl_free_extra_create_parameter;
    
    // [FsRtlFreeExtraCreateParameterList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6b88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61e3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66dd60, 0x1fe000 bytes
    //
    _n28(sdk::function<void(struct nt::ecp_list_t*)>*) rtl_free_extra_create_parameter_list;
    
    // [FsRtlFreeFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3c54, 0x32828 bytes
    // ntoskrnl.exe .text:0x246e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f0480, 0x1fe000 bytes
    //
    _n29(sdk::function<void(struct nt::file_lock_t*)>*) rtl_free_file_lock;
    
    // [FsRtlFreeTunnelNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92534, 0x32828 bytes
    // ntoskrnl.exe .text:0x240fd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352f84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3a2c, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) rtl_free_tunnel_node;
    
    // [FsRtlGetCompatibilityModeValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a23ec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68948, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54db4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68020, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) rtl_get_compatibility_mode_value;
    
    // [FsRtlGetDirectImageOriginalBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622da4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88814c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938868, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8868fc, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) rtl_get_direct_image_original_base;
    
    // [FsRtlGetEcpListFromIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471d30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x641290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ff9e0, 0x1fe000 bytes
    //
    _n33(sdk::function<int32_t(struct nt::irp_t*, struct nt::ecp_list_t**)>*) rtl_get_ecp_list_from_irp;
    
    // [FsRtlGetFileExtents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb9dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a028, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8de0, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) rtl_get_file_extents;
    
    // [FsRtlGetFileNameInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492394, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9d90, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) rtl_get_file_name_information;
    
    // [FsRtlGetFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4100ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ee1e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x775020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6437a0, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) rtl_get_file_size;
    
    // [FsRtlGetIoAtEof]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86930, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eacd0, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) rtl_get_io_at_eof;
    
    // [FsRtlGetMarkHandleInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc82c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea0d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b23c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9fb8, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) rtl_get_mark_handle_info;
    
    // [FsRtlGetNextBaseMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb5280, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ace0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3553a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4900, 0x1fe000 bytes
    //
    _n39(sdk::function<uint8_t(struct nt::base_mcb_t*, uint32_t, int64_t*, int64_t*, int64_t*)>*) rtl_get_next_base_mcb_entry;
    
    // [FsRtlGetNextExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80e230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6630, 0x1fe000 bytes
    //
    _n40(sdk::function<int32_t(struct nt::ecp_list_t*, void*, struct nt::guid_t*, void**, uint32_t*)>*) rtl_get_next_extra_create_parameter;
    
    // [FsRtlGetNextFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc34c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52abc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e97e0, 0x1fe000 bytes
    //
    _n41(sdk::function<struct nt::file_lock_info_t*(struct nt::file_lock_t*, uint8_t)>*) rtl_get_next_file_lock;
    
    // [FsRtlGetNextLargeMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbb90, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e90e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da5a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8fc0, 0x1fe000 bytes
    //
    _n42(sdk::function<uint8_t(struct nt::large_mcb_t*, uint32_t, int64_t*, int64_t*, int64_t*)>*) rtl_get_next_large_mcb_entry;
    
    // [FsRtlGetNextMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbbf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9030, 0x1fe000 bytes
    //
    _n43(sdk::function<uint8_t(struct nt::mcb_t*, uint32_t, uint32_t*, uint32_t*, uint32_t*)>*) rtl_get_next_mcb_entry;
    
    // [FsRtlGetSectorSizeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51d6fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66aca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dda00, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) rtl_get_sector_size_information;
    
    // [FsRtlGetSupportedFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4584, 0x32828 bytes
    // ntoskrnl.exe .text:0x248240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f34d0, 0x1fe000 bytes
    //
    _n45(sdk::function<int32_t(struct nt::device_object_t*, uint32_t*)>*) rtl_get_supported_features;
    
    // [FsRtlGetTunnelParameterValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567804, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85bdac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b00c0, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) rtl_get_tunnel_parameter_value;
    
    // [FsRtlGetVirtualDiskNestingLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x26ac10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a4e90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c2a0, 0x1fe000 bytes
    //
    _n47(sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, uint32_t*)>*) rtl_get_virtual_disk_nesting_level;
    
    // [FsRtlHalfSecond]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280510, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32df8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e7d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33138, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) rtl_half_second;
    
    // [FsRtlHeatInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62495c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888a30, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) rtl_heat_init;
    
    // [FsRtlHeatLogIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624a80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a3c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888b70, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) rtl_heat_log_io;
    
    // [FsRtlHeatLogTierMove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624b54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a4a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888c50, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) rtl_heat_log_tier_move;
    
    // [FsRtlHeatUninit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624ba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b2f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888cb0, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) rtl_heat_uninit;
    
    // [FsRtlIncrementCcFastMdlReadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132878, 0x32828 bytes
    // ntoskrnl.exe .text:0x38f440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ac60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x390490, 0x1fe000 bytes
    //
    _n53(sdk::function<void()>*) rtl_increment_cc_fast_mdl_read_wait;
    
    // [FsRtlIncrementCcFastReadNoWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbaf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8ef0, 0x1fe000 bytes
    //
    _n54(sdk::function<void()>*) rtl_increment_cc_fast_read_no_wait;
    
    // [FsRtlIncrementCcFastReadNotPossible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49bdcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6726f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eae10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5e30, 0x1fe000 bytes
    //
    _n55(sdk::function<void()>*) rtl_increment_cc_fast_read_not_possible;
    
    // [FsRtlIncrementCcFastReadResourceMiss]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbafc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8f00, 0x1fe000 bytes
    //
    _n56(sdk::function<void()>*) rtl_increment_cc_fast_read_resource_miss;
    
    // [FsRtlIncrementCcFastReadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48111c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c9570, 0x1fe000 bytes
    //
    _n57(sdk::function<void()>*) rtl_increment_cc_fast_read_wait;
    
    // [FsRtlInitExtraCreateParameterLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ef8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ad360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8638e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4f80, 0x1fe000 bytes
    //
    _n58(sdk::function<void(void*, uint32_t, uint64_t, uint32_t)>*) rtl_init_extra_create_parameter_lookaside_list;
    
    // [FsRtlInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a20c0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68638, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54aa0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67d10, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) rtl_init_system;
    
    // [FsRtlInitializeBaseMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9df9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35aa40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a2a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1200, 0x1fe000 bytes
    //
    _n60(sdk::function<void(struct nt::base_mcb_t*, enum nt::pool_type_t)>*) rtl_initialize_base_mcb;
    
    // [FsRtlInitializeBaseMcbEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9dfa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35aa60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1220, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) rtl_initialize_base_mcb_ex;
    
    // [FsRtlInitializeEofLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfe74, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbf70, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) rtl_initialize_eof_lock;
    
    // [FsRtlInitializeExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9010, 0x1fe000 bytes
    //
    _n63(sdk::function<void(struct nt::ecp_header_t*, uint32_t, sdk::function<void(void*, const struct nt::guid_t*)>*, uint32_t, const struct nt::guid_t*, void*)>*) rtl_initialize_extra_create_parameter;
    
    // [FsRtlInitializeExtraCreateParameterList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e91b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea240, 0x1fe000 bytes
    //
    _n64(sdk::function<int32_t(struct nt::ecp_list_t*)>*) rtl_initialize_extra_create_parameter_list;
    
    // [FsRtlInitializeFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd35e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2017e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2017e0, 0x1fe000 bytes
    //
    _n65(sdk::function<void(struct nt::file_lock_t*, sdk::function<int32_t(void*, struct nt::irp_t*)>*, sdk::function<void(void*, struct nt::file_lock_info_t*)>*)>*) rtl_initialize_file_lock;
    
    // [FsRtlInitializeFileLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a24f8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68b0c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5506c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa681e4, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) rtl_initialize_file_locks;
    
    // [FsRtlInitializeLargeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1ed4, 0x32828 bytes
    // ntoskrnl.exe .text:0x268120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef170, 0x1fe000 bytes
    //
    _n67(sdk::function<void(struct nt::large_mcb_t*, enum nt::pool_type_t)>*) rtl_initialize_large_mcb;
    
    // [FsRtlInitializeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6236f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8872b0, 0x1fe000 bytes
    //
    _n68(sdk::function<void(struct nt::mcb_t*, enum nt::pool_type_t)>*) rtl_initialize_mcb;
    
    // [FsRtlInitializeOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _n69(sdk::function<void(void**)>*) rtl_initialize_oplock;
    
    // [FsRtlInitializeSmssEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a2244, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6876c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54cbc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67e44, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) rtl_initialize_smss_event;
    
    // [FsRtlInitializeTieringHeat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5677e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a870c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85bd44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b008c, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) rtl_initialize_tiering_heat;
    
    // [FsRtlInitializeTunnelCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ee40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7ff0, 0x1fe000 bytes
    //
    _n72(sdk::function<void(struct nt::tunnel_t*)>*) rtl_initialize_tunnel_cache;
    
    // [FsRtlInitializeTunnels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a266c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68ca4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54f7c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6837c, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) rtl_initialize_tunnels;
    
    // [FsRtlInitializeWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a231c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68864, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54bd8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67f3c, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) rtl_initialize_worker_thread;
    
    // [FsRtlInsertExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f37f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61c020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x763390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e2c0, 0x1fe000 bytes
    //
    _n75(sdk::function<int32_t(struct nt::ecp_list_t*, void*)>*) rtl_insert_extra_create_parameter;
    
    // [FsRtlInsertPerFileContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd430, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fdfc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f870, 0x1fe000 bytes
    //
    _n76(sdk::function<int32_t(void**, struct nt::fsrtl_per_file_context_t*)>*) rtl_insert_per_file_context;
    
    // [FsRtlInsertPerFileObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x100fd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c6b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ffc90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f62b0, 0x1fe000 bytes
    //
    _n77(sdk::function<int32_t(struct nt::file_object_t*, struct nt::fsrtl_per_fileobject_context_t*)>*) rtl_insert_per_file_object_context;
    
    // [FsRtlInsertPerStreamContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd438, 0x32828 bytes
    // ntoskrnl.exe .text:0x24d360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29b530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6e30, 0x1fe000 bytes
    //
    _n78(sdk::function<int32_t(struct nt::fsrtl_advanced_fcb_header_t*, struct nt::fsrtl_per_stream_context_t*)>*) rtl_insert_per_stream_context;
    
    // [FsRtlIsDaxVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbb08, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8f10, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) rtl_is_dax_volume;
    
    // [FsRtlIsDbcsInExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x889a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888210, 0x1fe000 bytes
    //
    _n80(sdk::function<uint8_t(nt::ascii_view*, nt::ascii_view*)>*) rtl_is_dbcs_in_expression;
    
    // [FsRtlIsEcpAcknowledged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6226cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4ca0, 0x1fe000 bytes
    //
    _n81(sdk::function<uint8_t(void*)>*) rtl_is_ecp_acknowledged;
    
    // [FsRtlIsEcpFromUserMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x481360, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x656980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b66b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ca600, 0x1fe000 bytes
    //
    _n82(sdk::function<uint8_t(void*)>*) rtl_is_ecp_from_user_mode;
    
    // [FsRtlIsExtentDangling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623d54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8896b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887e60, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) rtl_is_extent_dangling;
    
    // [FsRtlIsFatDbcsLegal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4860e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65f3e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f73b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d2ae0, 0x1fe000 bytes
    //
    _n84(sdk::function<uint8_t(nt::ascii_view, uint8_t, uint8_t, uint8_t)>*) rtl_is_fat_dbcs_legal;
    
    // [FsRtlIsHpfsDbcsLegal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624754, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93ae90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888830, 0x1fe000 bytes
    //
    _n85(sdk::function<uint8_t(nt::ascii_view, uint8_t, uint8_t, uint8_t)>*) rtl_is_hpfs_dbcs_legal;
    
    // [FsRtlIsMobileOS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ef60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82abe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed360, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) rtl_is_mobile_os;
    
    // [FsRtlIsNonEmptyDirectoryReparsePointAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4bfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2688a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319740, 0x1fe000 bytes
    //
    _n87(sdk::function<uint8_t(uint32_t)>*) rtl_is_non_empty_directory_reparse_point_allowed;
    
    // [FsRtlIsNotifyOnList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eb750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ddd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73ecb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c0874, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) rtl_is_notify_on_list;
    
    // [FsRtlIsNtstatusExpected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcae54, 0x32828 bytes
    // ntoskrnl.exe .text:0x261f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312500, 0x1fe000 bytes
    //
    _n89(sdk::function<uint8_t(int32_t)>*) rtl_is_ntstatus_expected;
    
    // [FsRtlIsPagingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ddd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb6a0, 0x1fe000 bytes
    //
    _n90(sdk::function<uint32_t(struct nt::file_object_t*)>*) rtl_is_paging_file;
    
    // [FsRtlIsSystemPagingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c948, 0x32828 bytes
    // ntoskrnl.exe .text:0x368570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369920, 0x1fe000 bytes
    //
    _n91(sdk::function<uint32_t(struct nt::file_object_t*)>*) rtl_is_system_paging_file;
    
    // [FsRtlIsTotalDeviceFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6a520, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b9f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x284390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x354170, 0x1fe000 bytes
    //
    _n92(sdk::function<uint8_t(int32_t)>*) rtl_is_total_device_failure;
    
    // [FsRtlIssueDeviceIoControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51da68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b0a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dde00, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) rtl_issue_device_io_control;
    
    // [FsRtlIssueFileNotificationFsctl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x770ba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x846248, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778614, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) rtl_issue_file_notification_fsctl;
    
    // [FsRtlKernelFsControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484e5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eacd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x740a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6baa80, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) rtl_kernel_fs_control_file;
    
    // [FsRtlLegalAnsiCharacterArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25d030, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9638, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xab20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9620, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) rtl_legal_ansi_character_array;
    
    // [FsRtlLockInfoLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32aa40, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf82c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb800, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) rtl_lock_info_lookaside_list;
    
    // [FsRtlLockTreeNodeLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32aac0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb880, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf8340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb780, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) rtl_lock_tree_node_lookaside_list;
    
    // [FsRtlLogCcFlushError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622e8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8869f0, 0x1fe000 bytes
    //
    _n99(sdk::function<int32_t(nt::unicode_view*, struct nt::device_object_t*, struct nt::section_object_pointers_t*, int32_t, uint32_t)>*) rtl_log_cc_flush_error;
    
    // [FsRtlLookupBaseMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb2ab0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23f070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec600, 0x1fe000 bytes
    //
    _o00(sdk::function<uint8_t(struct nt::base_mcb_t*, int64_t, int64_t*, int64_t*, int64_t*, int64_t*, uint32_t*)>*) rtl_lookup_base_mcb_entry;
    
    // [FsRtlLookupLargeMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbc58, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e91d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d73b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e90b0, 0x1fe000 bytes
    //
    _o01(sdk::function<uint8_t(struct nt::large_mcb_t*, int64_t, int64_t*, int64_t*, int64_t*, int64_t*, uint32_t*)>*) rtl_lookup_large_mcb_entry;
    
    // [FsRtlLookupLastBaseMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbbf70, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cbe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6800, 0x1fe000 bytes
    //
    _o02(sdk::function<uint8_t(struct nt::base_mcb_t*, int64_t*, int64_t*)>*) rtl_lookup_last_base_mcb_entry;
    
    // [FsRtlLookupLastBaseMcbEntryAndIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb79c, 0x32828 bytes
    // ntoskrnl.exe .text:0x262b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x313130, 0x1fe000 bytes
    //
    _o03(sdk::function<uint8_t(struct nt::base_mcb_t*, int64_t*, int64_t*, uint32_t*)>*) rtl_lookup_last_base_mcb_entry_and_index;
    
    // [FsRtlLookupLastLargeMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbcf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9160, 0x1fe000 bytes
    //
    _o04(sdk::function<uint8_t(struct nt::large_mcb_t*, int64_t*, int64_t*)>*) rtl_lookup_last_large_mcb_entry;
    
    // [FsRtlLookupLastLargeMcbEntryAndIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbd68, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e91e0, 0x1fe000 bytes
    //
    _o05(sdk::function<uint8_t(struct nt::large_mcb_t*, int64_t*, int64_t*, uint32_t*)>*) rtl_lookup_last_large_mcb_entry_and_index;
    
    // [FsRtlLookupLastMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbde8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9270, 0x1fe000 bytes
    //
    _o06(sdk::function<uint8_t(struct nt::mcb_t*, uint32_t*, uint32_t*)>*) rtl_lookup_last_mcb_entry;
    
    // [FsRtlLookupMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbe2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e93f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e92d0, 0x1fe000 bytes
    //
    _o07(sdk::function<uint8_t(struct nt::mcb_t*, uint32_t, uint32_t*, uint32_t*, uint32_t*)>*) rtl_lookup_mcb_entry;
    
    // [FsRtlLookupPerFileContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd514, 0x32828 bytes
    // ntoskrnl.exe .text:0x2648b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x383660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x314d00, 0x1fe000 bytes
    //
    _o08(sdk::function<struct nt::fsrtl_per_file_context_t*(void**, void*, void*)>*) rtl_lookup_per_file_context;
    
    // [FsRtlLookupPerFileObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0a70, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ef40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x349380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec4d0, 0x1fe000 bytes
    //
    _o09(sdk::function<struct nt::fsrtl_per_fileobject_context_t*(struct nt::file_object_t*, void*, void*)>*) rtl_lookup_per_file_object_context;
    
    // [FsRtlLookupPerStreamContextInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd600, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ded60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e6c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25fff0, 0x1fe000 bytes
    //
    _o10(sdk::function<struct nt::fsrtl_per_stream_context_t*(struct nt::fsrtl_advanced_fcb_header_t*, void*, void*)>*) rtl_lookup_per_stream_context_internal;
    
    // [FsRtlMdlRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0b84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80fd60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9b80, 0x1fe000 bytes
    //
    _o11(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, struct nt::mdl_t**, struct io::status_block_t*)>*) rtl_mdl_read;
    
    // [FsRtlMdlReadComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbb2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8f40, 0x1fe000 bytes
    //
    _o12(sdk::function<uint8_t(struct nt::file_object_t*, struct nt::mdl_t*)>*) rtl_mdl_read_complete;
    
    // [FsRtlMdlReadCompleteDev]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95958, 0x32828 bytes
    // ntoskrnl.exe .text:0x209300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0a60, 0x1fe000 bytes
    //
    _o13(sdk::function<uint8_t(struct nt::file_object_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*) rtl_mdl_read_complete_dev;
    
    // [FsRtlMdlReadCompleteDevEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0x242000, 0x32828 bytes
    // ntoskrnl.exe INITKDBG:0x9f6010, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xae6010, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0x9f5010, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) rtl_mdl_read_complete_dev_ex;
    
    // [FsRtlMdlReadDev]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6230ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8884a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886c50, 0x1fe000 bytes
    //
    _o15(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, struct nt::mdl_t**, struct io::status_block_t*, struct nt::device_object_t*)>*) rtl_mdl_read_dev;
    
    // [FsRtlMdlReadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0b18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80fce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9b00, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) rtl_mdl_read_ex;
    
    // [FsRtlMdlWriteComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6232c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886e40, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) rtl_mdl_write_complete;
    
    // [FsRtlMdlWriteCompleteDev]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fb6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7f70, 0x1fe000 bytes
    //
    _o18(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*) rtl_mdl_write_complete_dev;
    
    // [FsRtlMupGetProviderIdFromName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623754, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8873d0, 0x1fe000 bytes
    //
    _o19(sdk::function<int32_t(const nt::unicode_view*, uint32_t*)>*) rtl_mup_get_provider_id_from_name;
    
    // [FsRtlMupGetProviderInfoFromFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62376c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9393a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887400, 0x1fe000 bytes
    //
    _o20(sdk::function<int32_t(struct nt::file_object_t*, uint32_t, void*, uint32_t*)>*) rtl_mup_get_provider_info_from_file_object;
    
    // [FsRtlNormalizeNtstatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e1bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x368d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a130, 0x1fe000 bytes
    //
    _o21(sdk::function<int32_t(int32_t, int32_t)>*) rtl_normalize_ntstatus;
    
    // [FsRtlNotifyChangeDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8890e0, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) rtl_notify_change_directory;
    
    // [FsRtlNotifyCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e9c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64da20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73e050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c04c0, 0x1fe000 bytes
    //
    _o23(sdk::function<void(struct nt::real_notify_sync_t*, nt::list_entry_t*, void*)>*) rtl_notify_cleanup;
    
    // [FsRtlNotifyCleanupAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624ffc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889140, 0x1fe000 bytes
    //
    _o24(sdk::function<void(struct nt::real_notify_sync_t*, nt::list_entry_t*)>*) rtl_notify_cleanup_all;
    
    // [FsRtlNotifyCleanupOneEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48ea54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ddfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73ee30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c089c, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) rtl_notify_cleanup_one_entry;
    
    // [FsRtlNotifyCompleteIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ebfdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64d8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73e808, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c0350, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) rtl_notify_complete_irp;
    
    // [FsRtlNotifyCompleteIrpList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ec148, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64d814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73e76c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c02b4, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) rtl_notify_complete_irp_list;
    
    // [FsRtlNotifyFilterChangeDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x491c10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64cf30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8a30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bf9d0, 0x1fe000 bytes
    //
    _o28(sdk::function<void(struct nt::real_notify_sync_t*, nt::list_entry_t*, void*, nt::ascii_view*, uint8_t, uint8_t, uint32_t, struct nt::irp_t*, sdk::function<uint8_t(void*, void*, struct sec::subject_context_t*)>*, struct sec::subject_context_t*, sdk::function<uint8_t(void*, void*)>*)>*) rtl_notify_filter_change_directory;
    
    // [FsRtlNotifyFilterChangeDirectoryLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eb42c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64dab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73e9a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c0550, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) rtl_notify_filter_change_directory_lite;
    
    // [FsRtlNotifyFilterReportChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47a3b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64c5d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bf070, 0x1fe000 bytes
    //
    _o30(sdk::function<void(struct nt::real_notify_sync_t*, nt::list_entry_t*, nt::ascii_view*, uint16_t, nt::ascii_view*, nt::ascii_view*, uint32_t, uint32_t, void*, void*)>*) rtl_notify_filter_report_change;
    
    // [FsRtlNotifyFilterReportChangeLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479f1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88aa60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889210, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) rtl_notify_filter_report_change_lite;
    
    // [FsRtlNotifyFullChangeDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6250b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88aac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d3c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889270, 0x1fe000 bytes
    //
    _o32(sdk::function<void(struct nt::real_notify_sync_t*, nt::list_entry_t*, void*, nt::ascii_view*, uint8_t, uint8_t, uint32_t, struct nt::irp_t*, sdk::function<uint8_t(void*, void*, struct sec::subject_context_t*)>*, struct sec::subject_context_t*)>*) rtl_notify_full_change_directory;
    
    // [FsRtlNotifyFullReportChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88ab30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x864590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8892e0, 0x1fe000 bytes
    //
    _o33(sdk::function<void(struct nt::real_notify_sync_t*, nt::list_entry_t*, nt::ascii_view*, uint16_t, nt::ascii_view*, nt::ascii_view*, uint32_t, uint32_t, void*)>*) rtl_notify_full_report_change;
    
    // [FsRtlNotifyInitializeSync]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64dec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73eef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c0960, 0x1fe000 bytes
    //
    _o34(sdk::function<void(struct nt::real_notify_sync_t**)>*) rtl_notify_initialize_sync;
    
    // [FsRtlNotifyReportChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625164, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88ab90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b8c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889340, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) rtl_notify_report_change;
    
    // [FsRtlNotifySetCancelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104fec, 0x32828 bytes
    // ntoskrnl.exe .text:0x24edb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3006b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc544, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) rtl_notify_set_cancel_routine;
    
    // [FsRtlNotifyUninitializeSync]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ebc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6764f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x814e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e97b0, 0x1fe000 bytes
    //
    _o37(sdk::function<void(struct nt::real_notify_sync_t**)>*) rtl_notify_uninitialize_sync;
    
    // [FsRtlNotifyUpdateBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47acc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64df24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c09c4, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) rtl_notify_update_buffer;
    
    // [FsRtlNotifyVolumeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ab5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759090, 0x1fe000 bytes
    //
    _o39(sdk::function<int32_t(struct nt::file_object_t*, uint32_t)>*) rtl_notify_volume_event;
    
    // [FsRtlNotifyVolumeEventEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e41c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f86d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x723970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684a80, 0x1fe000 bytes
    //
    _o40(sdk::function<int32_t(struct nt::file_object_t*, uint32_t, struct nt::target_device_custom_notification_t*)>*) rtl_notify_volume_event_ex;
    
    // [FsRtlNumberOfRunsInBaseMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb97b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x210e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4820, 0x1fe000 bytes
    //
    _o41(sdk::function<uint32_t(struct nt::base_mcb_t*)>*) rtl_number_of_runs_in_base_mcb;
    
    // [FsRtlNumberOfRunsInLargeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e44f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9360, 0x1fe000 bytes
    //
    _o42(sdk::function<uint32_t(struct nt::large_mcb_t*)>*) rtl_number_of_runs_in_large_mcb;
    
    // [FsRtlNumberOfRunsInMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbed4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e94c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e93a0, 0x1fe000 bytes
    //
    _o43(sdk::function<uint32_t(struct nt::mcb_t*)>*) rtl_number_of_runs_in_mcb;
    
    // [FsRtlOplockBreakH]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64fa50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3ea0, 0x1fe000 bytes
    //
    _o44(sdk::function<int32_t(void**, struct nt::irp_t*, uint32_t, void*, sdk::function<void(void*, struct nt::irp_t*)>*, sdk::function<void(void*, struct nt::irp_t*)>*)>*) rtl_oplock_break_h;
    
    // [FsRtlOplockBreakToNone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc88c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea030, 0x1fe000 bytes
    //
    _o45(sdk::function<int32_t(void**, struct io::stack_location_t*, struct nt::irp_t*, void*, sdk::function<void(void*, struct nt::irp_t*)>*, sdk::function<void(void*, struct nt::irp_t*)>*)>*) rtl_oplock_break_to_none;
    
    // [FsRtlOplockBreakToNoneEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc8c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea090, 0x1fe000 bytes
    //
    _o46(sdk::function<int32_t(void**, struct nt::irp_t*, uint32_t, void*, sdk::function<void(void*, struct nt::irp_t*)>*, sdk::function<void(void*, struct nt::irp_t*)>*)>*) rtl_oplock_break_to_none_ex;
    
    // [FsRtlOplockFsctrl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e72b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6625e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5e50, 0x1fe000 bytes
    //
    _o47(sdk::function<int32_t(void**, struct nt::irp_t*, uint32_t)>*) rtl_oplock_fsctrl;
    
    // [FsRtlOplockFsctrlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e72d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6644e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e0d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7ae0, 0x1fe000 bytes
    //
    _o48(sdk::function<int32_t(void**, struct nt::irp_t*, uint32_t, uint32_t)>*) rtl_oplock_fsctrl_ex;
    
    // [FsRtlOplockIsFastIoPossible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47b9c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64bfa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6be880, 0x1fe000 bytes
    //
    _o49(sdk::function<uint8_t(void**)>*) rtl_oplock_is_fast_io_possible;
    
    // [FsRtlOplockIsSharedRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x486518, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8eb0, 0x1fe000 bytes
    //
    _o50(sdk::function<uint8_t(struct nt::irp_t*)>*) rtl_oplock_is_shared_request;
    
    // [FsRtlOplockKeysEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x390ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391f40, 0x1fe000 bytes
    //
    _o51(sdk::function<uint8_t(struct nt::file_object_t*, struct nt::file_object_t*)>*) rtl_oplock_keys_equal;
    
    // [FsRtlPTeardownPerFileObjectContexts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e47a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x646570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73df9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba540, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) rtl_p_teardown_per_file_object_contexts;
    
    // [FsRtlPagingIoResourceSelector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a2d8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b320, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd512ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b320, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) rtl_paging_io_resource_selector;
    
    // [FsRtlPagingIoResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323348, 0x32828 bytes
    // ntoskrnl.exe .data:0xc476c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f2c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47660, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) rtl_paging_io_resources;
    
    // [FsRtlPostPagingFileStackOverflow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd9b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52c980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb400, 0x1fe000 bytes
    //
    _o55(sdk::function<void(void*, struct nt::kevent_t*, sdk::function<void(void*, struct nt::kevent_t*)>*)>*) rtl_post_paging_file_stack_overflow;
    
    // [FsRtlPostStackOverflow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd9c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52c9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb420, 0x1fe000 bytes
    //
    _o56(sdk::function<void(void*, struct nt::kevent_t*, sdk::function<void(void*, struct nt::kevent_t*)>*)>*) rtl_post_stack_overflow;
    
    // [FsRtlPrepareMdlWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0a90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6767f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80fc40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9a60, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) rtl_prepare_mdl_write;
    
    // [FsRtlPrepareMdlWriteDev]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62332c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938e30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886eb0, 0x1fe000 bytes
    //
    _o58(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, struct nt::mdl_t**, struct io::status_block_t*, struct nt::device_object_t*)>*) rtl_prepare_mdl_write_dev;
    
    // [FsRtlPrepareMdlWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0a24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80fbc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e99e0, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) rtl_prepare_mdl_write_ex;
    
    // [FsRtlPrepareToReuseEcp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6226d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7607d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768220, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) rtl_prepare_to_reuse_ecp;
    
    // [FsRtlPrivateCancelFileLockIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc624, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52af20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9b50, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) rtl_private_cancel_file_lock_irp;
    
    // [FsRtlPrivateCheckForExclusiveLockAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93c94, 0x32828 bytes
    // ntoskrnl.exe .text:0x2422fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360a68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e28d8, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) rtl_private_check_for_exclusive_lock_access;
    
    // [FsRtlPrivateCheckForSharedLockAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x934b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x241e1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28dbe8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4a80, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) rtl_private_check_for_shared_lock_access;
    
    // [FsRtlPrivateCheckWaitingLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94310, 0x32828 bytes
    // ntoskrnl.exe .text:0x2426d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3530a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3874, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) rtl_private_check_waiting_locks;
    
    // [FsRtlPrivateFastUnlockAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93fec, 0x32828 bytes
    // ntoskrnl.exe .text:0x240b24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352b24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3524, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) rtl_private_fast_unlock_all;
    
    // [FsRtlPrivateInitializeFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1f50, 0x32828 bytes
    // ntoskrnl.exe .text:0x242730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37db74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31f508, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) rtl_private_initialize_file_lock;
    
    // [FsRtlPrivateInsertExclusiveLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93d74, 0x32828 bytes
    // ntoskrnl.exe .text:0x241304, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360b50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2850, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) rtl_private_insert_exclusive_lock;
    
    // [FsRtlPrivateInsertLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92d54, 0x32828 bytes
    // ntoskrnl.exe .text:0x241660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28da1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4864, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) rtl_private_insert_lock;
    
    // [FsRtlPrivateInsertSharedLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92e34, 0x32828 bytes
    // ntoskrnl.exe .text:0x241740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28dc88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2b98, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) rtl_private_insert_shared_lock;
    
    // [FsRtlPrivateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x92a48, 0x32828 bytes
    // ntoskrnl.exe .text:0x241390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28c6e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e3940, 0x1fe000 bytes
    //
    _o70(sdk::function<uint8_t(struct nt::file_lock_t*, struct nt::file_object_t*, int64_t*, int64_t*, struct nt::kprocess_t*, uint32_t, uint8_t, uint8_t, struct io::status_block_t*, struct nt::irp_t*, void*, uint8_t)>*) rtl_private_lock;
    
    // [FsRtlPrivateRemoveLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc730, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b0f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9d20, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) rtl_private_remove_lock;
    
    // [FsRtlPrivateResetLowestLockOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93530, 0x32828 bytes
    // ntoskrnl.exe .text:0x2421b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28e640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4e20, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) rtl_private_reset_lowest_lock_offset;
    
    // [FsRtlProcessFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1312d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9d70, 0x1fe000 bytes
    //
    _o73(sdk::function<int32_t(struct nt::file_lock_t*, struct nt::irp_t*, void*)>*) rtl_process_file_lock;
    
    // [FsRtlPruneTunnelCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4460c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x640e24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9a14, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) rtl_prune_tunnel_cache;
    
    // [FsRtlQueryCachedVdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496df4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7c00, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) rtl_query_cached_vdl;
    
    // [FsRtlQueryInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8896d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887e80, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) rtl_query_information_file;
    
    // [FsRtlQueryKernelEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4836b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eaad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7411b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba880, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) rtl_query_kernel_ea_file;
    
    // [FsRtlQueryMaximumVirtualDiskNestingLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149510, 0x32828 bytes
    // ntoskrnl.exe .text:0x396550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a5030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397570, 0x1fe000 bytes
    //
    _o78(sdk::function<uint32_t()>*) rtl_query_maximum_virtual_disk_nesting_level;
    
    // [FsRtlRegisterFileSystemFilterCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x148a3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x396810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397830, 0x1fe000 bytes
    //
    _o79(sdk::function<int32_t(struct nt::driver_object_t*, struct fs::filter_callbacks_t*)>*) rtl_register_file_system_filter_callbacks;
    
    // [FsRtlRegisterFltMgrCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be9c0, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) rtl_register_flt_mgr_calls;
    
    // [FsRtlRegisterMupCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be9b0, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) rtl_register_mup_calls;
    
    // [FsRtlRegisterUncProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623784, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9393d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887430, 0x1fe000 bytes
    //
    _o82(sdk::function<int32_t(void**, const nt::unicode_view*, uint8_t)>*) rtl_register_unc_provider;
    
    // [FsRtlRegisterUncProviderEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6237bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887470, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) rtl_register_unc_provider_ex;
    
    // [FsRtlRegisterUncProviderEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568c00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a96f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1070, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) rtl_register_unc_provider_ex2;
    
    // [FsRtlReleaseEofLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x877a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x210550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e6590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ad90, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) rtl_release_eof_lock;
    
    // [FsRtlReleaseFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e2800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dfdd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cc4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x630890, 0x1fe000 bytes
    //
    _o86(sdk::function<void(struct nt::file_object_t*)>*) rtl_release_file;
    
    // [FsRtlReleaseFileForCcFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f978c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e725c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x739188, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee12c, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) rtl_release_file_for_cc_flush;
    
    // [FsRtlReleaseFileForModWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6a544, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b9500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d894, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35419c, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) rtl_release_file_for_mod_write;
    
    // [FsRtlReleaseFileNameInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f554, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6772b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d59c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea670, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) rtl_release_file_name_information;
    
    // [FsRtlReleaseHeaderMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89100, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263ad0, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) rtl_release_header_mutex;
    
    // [FsRtlRemoveBaseMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3b0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x247060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f0670, 0x1fe000 bytes
    //
    _o91(sdk::function<uint8_t(struct nt::base_mcb_t*, int64_t, int64_t)>*) rtl_remove_base_mcb_entry;
    
    // [FsRtlRemoveDotsFromPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b2d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x740530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80ba30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748170, 0x1fe000 bytes
    //
    _o92(sdk::function<int32_t(wchar_t*, uint16_t, wchar_t*)>*) rtl_remove_dots_from_path;
    
    // [FsRtlRemoveExtraCreateParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e46f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aa880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e21c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x600d40, 0x1fe000 bytes
    //
    _o93(sdk::function<int32_t(struct nt::ecp_list_t*, const struct nt::guid_t*, void**, uint32_t*)>*) rtl_remove_extra_create_parameter;
    
    // [FsRtlRemoveLargeEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4690, 0x32828 bytes
    // ntoskrnl.exe .text:0x247b48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3528a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f1158, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) rtl_remove_large_entry;
    
    // [FsRtlRemoveLargeMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbedc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e94e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e93c0, 0x1fe000 bytes
    //
    _o95(sdk::function<void(struct nt::large_mcb_t*, int64_t, int64_t)>*) rtl_remove_large_mcb_entry;
    
    // [FsRtlRemoveMcbEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbf44, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9440, 0x1fe000 bytes
    //
    _o96(sdk::function<void(struct nt::mcb_t*, uint32_t, uint32_t)>*) rtl_remove_mcb_entry;
    
    // [FsRtlRemoveNodeFromTunnel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9256c, 0x32828 bytes
    // ntoskrnl.exe .text:0x240e74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352e24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f38cc, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) rtl_remove_node_from_tunnel;
    
    // [FsRtlRemovePerFileContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd704, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb1e0, 0x1fe000 bytes
    //
    _o98(sdk::function<struct nt::fsrtl_per_file_context_t*(void**, void*, void*)>*) rtl_remove_per_file_context;
    
    // [FsRtlRemovePerFileObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x100ed4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ffba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f61c0, 0x1fe000 bytes
    //
    _o99(sdk::function<struct nt::fsrtl_per_fileobject_context_t*(struct nt::file_object_t*, void*, void*)>*) rtl_remove_per_file_object_context;
    
    // [FsRtlRemovePerStreamContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd81c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb2e0, 0x1fe000 bytes
    //
    _p00(sdk::function<struct nt::fsrtl_per_stream_context_t*(struct nt::fsrtl_advanced_fcb_header_t*, void*, void*)>*) rtl_remove_per_stream_context;
    
    // [FsRtlResetBaseMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4288, 0x32828 bytes
    // ntoskrnl.exe .text:0x2705c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3837b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321d90, 0x1fe000 bytes
    //
    _p01(sdk::function<void(struct nt::base_mcb_t*)>*) rtl_reset_base_mcb;
    
    // [FsRtlResetLargeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbf50, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9460, 0x1fe000 bytes
    //
    _p02(sdk::function<void(struct nt::large_mcb_t*, uint8_t)>*) rtl_reset_large_mcb;
    
    // [FsRtlSafeExtensions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a03e, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b053, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51044, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b054, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) rtl_safe_extensions;
    
    // [FsRtlSendModernAppTermination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccac4, 0x32828 bytes
    // ntoskrnl.exe .text:0x376440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3732d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3777c0, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) rtl_send_modern_app_termination;
    
    // [FsRtlSetDriverBacking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545ef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8133f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76b200, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) rtl_set_driver_backing;
    
    // [FsRtlSetEcpListIntoIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478b80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x646c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb070, 0x1fe000 bytes
    //
    _p06(sdk::function<int32_t(struct nt::irp_t*, struct nt::ecp_list_t*)>*) rtl_set_ecp_list_into_irp;
    
    // [FsRtlSetFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fe88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea80c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7405ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba5bc, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) rtl_set_file_size;
    
    // [FsRtlSetKernelEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49bc6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x740790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba6e0, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) rtl_set_kernel_ea_file;
    
    // [FsRtlSharedLockLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32ac40, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb900, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf83c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb980, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) rtl_shared_lock_lookaside_list;
    
    // [FsRtlSplitBaseMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbf80, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e95c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e94a0, 0x1fe000 bytes
    //
    _p10(sdk::function<uint8_t(struct nt::base_mcb_t*, int64_t, int64_t)>*) rtl_split_base_mcb;
    
    // [FsRtlSplitLargeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc0f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e9740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e9620, 0x1fe000 bytes
    //
    _p11(sdk::function<uint8_t(struct nt::large_mcb_t*, int64_t, int64_t)>*) rtl_split_large_mcb;
    
    // [FsRtlSplitLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfe1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x242608, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3530fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3ce8, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) rtl_split_locks;
    
    // [FsRtlStackOverflowRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd9c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52c9c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb440, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) rtl_stack_overflow_read;
    
    // [FsRtlSyncVolumes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) rtl_sync_volumes;
    
    // [FsRtlTeardownPerFileContexts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4835ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73d380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c55d0, 0x1fe000 bytes
    //
    _p15(sdk::function<void(void**)>*) rtl_teardown_per_file_contexts;
    
    // [FsRtlTeardownPerStreamContexts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e74bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x644b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ac580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b8fa0, 0x1fe000 bytes
    //
    _p16(sdk::function<void(struct nt::fsrtl_advanced_fcb_header_t*)>*) rtl_teardown_per_stream_contexts;
    
    // [FsRtlTieringHeatData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323220, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f100, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47500, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) rtl_tiering_heat_data;
    
    // [FsRtlTruncateBaseMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3a14, 0x32828 bytes
    // ntoskrnl.exe .text:0x246f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f0560, 0x1fe000 bytes
    //
    _p18(sdk::function<void(struct nt::base_mcb_t*, int64_t)>*) rtl_truncate_base_mcb;
    
    // [FsRtlTruncateLargeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb39dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x246f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f0520, 0x1fe000 bytes
    //
    _p19(sdk::function<void(struct nt::large_mcb_t*, int64_t)>*) rtl_truncate_large_mcb;
    
    // [FsRtlTruncateMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc168, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e97c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52a6a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e96a0, 0x1fe000 bytes
    //
    _p20(sdk::function<void(struct nt::mcb_t*, uint32_t)>*) rtl_truncate_mcb;
    
    // [FsRtlTruncateSmallMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2319b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ba5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x657050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b9460, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) rtl_truncate_small_mcb;
    
    // [FsRtlTryToAcquireHeaderMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd6f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x227b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3408f0, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) rtl_try_to_acquire_header_mutex;
    
    // [FsRtlUninitializeBaseMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc52b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x247be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f11f0, 0x1fe000 bytes
    //
    _p23(sdk::function<void(struct nt::base_mcb_t*)>*) rtl_uninitialize_base_mcb;
    
    // [FsRtlUninitializeFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3c78, 0x32828 bytes
    // ntoskrnl.exe .text:0x247c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3819a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f1240, 0x1fe000 bytes
    //
    _p24(sdk::function<void(struct nt::file_lock_t*)>*) rtl_uninitialize_file_lock;
    
    // [FsRtlUninitializeLargeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5284, 0x32828 bytes
    // ntoskrnl.exe .text:0x247ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f11b0, 0x1fe000 bytes
    //
    _p25(sdk::function<void(struct nt::large_mcb_t*)>*) rtl_uninitialize_large_mcb;
    
    // [FsRtlUninitializeMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6236f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x888b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8872d0, 0x1fe000 bytes
    //
    _p26(sdk::function<void(struct nt::mcb_t*)>*) rtl_uninitialize_mcb;
    
    // [FsRtlUninitializeOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1d54, 0x32828 bytes
    // ntoskrnl.exe .text:0x251570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35ee60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ff630, 0x1fe000 bytes
    //
    _p27(sdk::function<void(void**)>*) rtl_uninitialize_oplock;
    
    // [FsRtlUninitializeSmallMcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0x253520, 0x32828 bytes
    // ntoskrnl.exe INITKDBG:0xa0f0d0, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff540, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e0d0, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) rtl_uninitialize_small_mcb;
    
    // [FsRtlUpdateDiskCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0c9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x256180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35ed90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3056c0, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) rtl_update_disk_counters;
    
    // [FsRtlUpperOplockFsctrl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623818, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x889110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9399a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8878c0, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) rtl_upper_oplock_fsctrl;
    
    // [FsRtlValidateReparsePointBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109970, 0x32828 bytes
    // ntoskrnl.exe .text:0x253ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303b00, 0x1fe000 bytes
    //
    _p31(sdk::function<int32_t(uint32_t, struct nt::reparse_data_buffer_t*)>*) rtl_validate_reparse_point_buffer;
    
    // [FsRtlVirtualDiskMaxTreeDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ecc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f110, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09920, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f2a8, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) rtl_virtual_disk_max_tree_depth;
    
    // [FsRtlVolumeDeviceToCorrelationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51d684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66ac10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd970, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) rtl_volume_device_to_correlation_id;
    
    // [FsRtlWaitForSmssEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5719e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b69a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8701e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be580, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) rtl_wait_for_smss_event;
    
    // [FsRtlWaitingLockLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32ab40, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf81c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb900, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) rtl_waiting_lock_lookaside_list;
    
    // [FsRtlWorkerQueues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323140, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f080, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47420, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) rtl_worker_queues;
    
    // [FsRtlWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149c4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e77c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca260, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) rtl_worker_thread;
    
    // [FsRtlpAcknowledgeOplockBreak]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bca24, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea3c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b578, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea2a4, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) rtlp_acknowledge_oplock_break;
    
    // [FsRtlpAcknowledgeOplockBreakByCacheFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132a88, 0x32828 bytes
    // ntoskrnl.exe .text:0x38eabc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39a094, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38fb0c, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) rtlp_acknowledge_oplock_break_by_cache_flags;
    
    // [FsRtlpAllocateOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e8998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65f598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bc470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3128, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) rtlp_allocate_oplock;
    
    // [FsRtlpAttachOplockKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1049f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x251eb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4be4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ffe78, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) rtlp_attach_oplock_key;
    
    // [FsRtlpCallerIsAtomicRequestor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104af8, 0x32828 bytes
    // ntoskrnl.exe .text:0x258510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b474, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3080d0, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) rtlp_caller_is_atomic_requestor;
    
    // [FsRtlpCancelExclusiveIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10dd98, 0x32828 bytes
    // ntoskrnl.exe .text:0x368830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369be0, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) rtlp_cancel_exclusive_irp;
    
    // [FsRtlpCancelOplockRHIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc34d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24bae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3779d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5590, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) rtlp_cancel_oplock_rh_irp;
    
    // [FsRtlpCancelReadOnlyOplockIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bcc84, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea5f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b7b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea4d8, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) rtlp_cancel_read_only_oplock_irp;
    
    // [FsRtlpCancelWaitingIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bcd5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea6d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52b894, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea5b8, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) rtlp_cancel_waiting_irp;
    
    // [FsRtlpCleanupEcps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c6c00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61e340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760ae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66dd00, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) rtlp_cleanup_ecps;
    
    // [FsRtlpClearOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1049b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c244, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0ee8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5cf4, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) rtlp_clear_owner;
    
    // [FsRtlpComputeShareableOplockState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104710, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d9df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e098c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ae70, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) rtlp_compute_shareable_oplock_state;
    
    // [FsRtlpDoBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef8, 0x32828 bytes
    // ntoskrnl.exe .text:0x375af8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376e78, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) rtlp_do_boost;
    
    // [FsRtlpExclusiveIrpCancelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10dd88, 0x32828 bytes
    // ntoskrnl.exe .text:0x368810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369bc0, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) rtlp_exclusive_irp_cancel_routine;
    
    // [FsRtlpFreeMdlChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623f0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8898b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a6f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888060, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) rtlp_free_mdl_chain;
    
    // [FsRtlpGenericCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb60c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d1c0, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) rtlp_generic_completion;
    
    // [FsRtlpGetMaxVirtualDiskNestingLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149530, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c804c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e58b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8f1c, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) rtlp_get_max_virtual_disk_nesting_level;
    
    // [FsRtlpGrantAnyOplockFromExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bce0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ea7a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52bbc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea680, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) rtlp_grant_any_oplock_from_exclusive;
    
    // [FsRtlpHeatRegisterVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624bb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888cc8, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) rtlp_heat_register_volume;
    
    // [FsRtlpHeatUnregisterVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b4b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888e60, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) rtlp_heat_unregister_volume;
    
    // [FsRtlpModifyThreadPriorities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3e34, 0x32828 bytes
    // ntoskrnl.exe .text:0x375a34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e6948, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376db4, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) rtlp_modify_thread_priorities;
    
    // [FsRtlpNotifyOplockBreakComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6239ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x889290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939b20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887a40, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) rtlp_notify_oplock_break_complete;
    
    // [FsRtlpOpBatchBreakClosePending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6239b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8892ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939b3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887a5c, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) rtlp_op_batch_break_close_pending;
    
    // [FsRtlpOpenDev]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568de8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a98fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d8e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b127c, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) rtlp_open_dev;
    
    // [FsRtlpOplockBreakByCacheFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1021dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d4a00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e1f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x255a70, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) rtlp_oplock_break_by_cache_flags;
    
    // [FsRtlpOplockBreakNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623aec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8893e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939c78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887b98, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) rtlp_oplock_break_notify;
    
    // [FsRtlpOplockBreakToII]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9ffc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2651fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31557c, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) rtlp_oplock_break_to_ii;
    
    // [FsRtlpOplockBreakToNone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5020, 0x32828 bytes
    // ntoskrnl.exe .text:0x368fb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52bef8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a368, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) rtlp_oplock_break_to_none;
    
    // [FsRtlpOplockCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1009d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24bdd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e45a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5884, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) rtlp_oplock_cleanup;
    
    // [FsRtlpOplockDequeueRH]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x103398, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c1d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5c84, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) rtlp_oplock_dequeue_rh;
    
    // [FsRtlpOplockEnqueueRH]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104840, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d9ec4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0a94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25af44, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) rtlp_oplock_enqueue_rh;
    
    // [FsRtlpOplockFsctrlInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e72e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ba790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e0d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x610dc0, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) rtlp_oplock_fsctrl_internal;
    
    // [FsRtlpOplockKeysEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1010ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d57d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x256840, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) rtlp_oplock_keys_equal;
    
    // [FsRtlpOplockRHIrpCancelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc34c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24bac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3779b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5570, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) rtlp_oplock_rh_irp_cancel_routine;
    
    // [FsRtlpOplockSendModernAppTermination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc9ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x376370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3731f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3776f0, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) rtlp_oplock_send_modern_app_termination;
    
    // [FsRtlpOplockStoreKeyForDeleteOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1008c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d4550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e1dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2555c0, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) rtlp_oplock_store_key_for_delete_operation;
    
    // [FsRtlpOplockUpperLowerCompatible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e78e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ba744, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e11e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x610d74, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) rtlp_oplock_upper_lower_compatible;
    
    // [FsRtlpOplockWaitCompleteRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x623c18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x889540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x939dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x887cf0, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) rtlp_oplock_wait_complete_routine;
    
    // [FsRtlpPostStackOverflow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bda30, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb5d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ca34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb4b4, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) rtlp_post_stack_overflow;
    
    // [FsRtlpQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x624de4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88a740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b544, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x888ef0, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) rtlp_query_value_key;
    
    // [FsRtlpReadOnlyOplockIrpCancelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd0a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eaa30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52c240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea910, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) rtlp_read_only_oplock_irp_cancel_routine;
    
    // [FsRtlpRedirs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a204, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1fc, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) rtlp_redirs;
    
    // [FsRtlpRegisterProviderWithMUP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d9a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1190, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) rtlp_register_provider_with_mup;
    
    // [FsRtlpRegisterUncProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568c18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9718, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d7e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1098, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) rtlp_register_unc_provider;
    
    // [FsRtlpReleaseIrpsWaitingForRH]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc35d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24bbec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377b0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f569c, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) rtlp_release_irps_waiting_for_rh;
    
    // [FsRtlpRemoveAndCompleteReadOnlyIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccc04, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eaa4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52c25c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ea92c, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) rtlp_remove_and_complete_read_only_irp;
    
    // [FsRtlpRemoveAndCompleteWaitingIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc370c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eab4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377c08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eaa2c, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) rtlp_remove_and_complete_waiting_irp;
    
    // [FsRtlpRequestExclusiveOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1035e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x371df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a0a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x373170, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) rtlp_request_exclusive_oplock;
    
    // [FsRtlpRequestShareableOplock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x103e04, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d94f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dffd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a570, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) rtlp_request_shareable_oplock;
    
    // [FsRtlpUncSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3232e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47620, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc475e0, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) rtlp_unc_semaphore;
    
    // [FsRtlpVolumeStartupApplicationsComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a03f, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b054, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51045, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b053, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) rtlp_volume_startup_applications_complete;
    
    // [FsRtlpWaitForIoAtEof]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x875a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e34c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5a8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eaf9c, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) rtlp_wait_for_io_at_eof;
    
    // [FsRtlpWaitOnIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3e18, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eabf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382e1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eaad0, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) rtlp_wait_on_irp;
    
    // [FsRtlpWaitingIrpCancelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd0ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eafa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52c4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eae80, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) rtlp_waiting_irp_cancel_routine;
    
    // [fs__Contour]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xd11a8, 0x13864 bytes
    //
    _p92(sdk::unknown_ptr) contour;
    
    // [fs_ContourScan]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xcb28c, 0x13864 bytes
    //
    _p93(sdk::unknown_ptr) contour_scan;
    
    // [fs_ConvertGrayLevels]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2db384, 0x13864 bytes
    //
    _p94(sdk::unknown_ptr) convert_gray_levels;
    
    // [fs_FindBitMapSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xcdeec, 0x13864 bytes
    //
    _p95(sdk::unknown_ptr) find_bit_map_size;
    
    // [fs_GetGlyphIDs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2db65c, 0x13864 bytes
    //
    _p96(sdk::unknown_ptr) get_glyph_i_ds;
    
    // [fs_Initialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc4920, 0x13864 bytes
    //
    _p97(sdk::unknown_ptr) initialize;
    
    // [fs_NewContourGridFit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2451ec, 0x13864 bytes
    //
    _p98(sdk::unknown_ptr) new_contour_grid_fit;
    
    // [fs_NewGlyph]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xcec64, 0x13864 bytes
    //
    _p99(sdk::unknown_ptr) new_glyph;
    
    // [fs_NewSfnt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc6a14, 0x13864 bytes
    //
    _q00(sdk::unknown_ptr) new_sfnt;
    
    // [fs__NewTransformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc358c, 0x13864 bytes
    //
    _q01(sdk::unknown_ptr) new_transformation;
    
    // [fs_OpenFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc48cc, 0x13864 bytes
    //
    _q02(sdk::unknown_ptr) open_fonts;
    
    // [fsSelectionFlags]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xefee4, 0x13864 bytes
    //
    _q03(sdk::unknown_ptr) selection_flags;
    
    // [fsSelectionTTFD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x146360, 0x13864 bytes
    //
    _q04(sdk::unknown_ptr) selection_ttfd;
    
    // [fs_SetUpKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xcef0c, 0x13864 bytes
    //
    _q05(sdk::unknown_ptr) set_up_key;
    
    // [fs_WinNTGetGlyphIDs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc4df0, 0x13864 bytes
    //
    _q06(sdk::unknown_ptr) win_nt_get_glyph_i_ds;
    
    // [FsTypes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x24070, 0x2520 bytes
    // fltMgr.sys .data:0x2a070, 0x2428 bytes
    // fltMgr.sys .data:0x2a070, 0x2428 bytes
    // fltMgr.sys .data:0x2a070, 0x2428 bytes
    //
    _q07(sdk::unknown_ptr) types;
};
#include "magic/api.end.hpp"
