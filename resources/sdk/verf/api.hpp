#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace verf
{
    // [VfAllocateCrashDumpRegistersEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab1420, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) allocate_crash_dump_registers_ex;
    
    // [VfAllowedVolatileRC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36888, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) allowed_volatile_rc;
    
    // [VfAllowedVolatileRCId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x466e0, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) allowed_volatile_rc_id;
    
    // [VfAvlDeleteAllTreeNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac8230, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) avl_delete_all_tree_nodes;
    
    // [VfBindDifCallbackWrappers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab61e0, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) bind_dif_callback_wrappers;
    
    // [VfBindDifDDIWrappers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab6220, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) bind_dif_ddi_wrappers;
    
    // [VfCheckDifDdiExist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab6280, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) check_dif_ddi_exist;
    
    // [VfClearDifWithoutReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaaebac, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) clear_dif_without_reboot;
    
    // [VfCreateCommonBufferFromMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab1d40, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) create_common_buffer_from_mdl;
    
    // [VfDeadlockPluginEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac38c8, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) deadlock_plugin_entry;
    
    // [VfDeleteLookasideTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xace214, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) delete_lookaside_tree;
    
    // [VfDeleteResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad04d0, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) delete_resource;
    
    // [VfDeleteResourceTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad05b8, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) delete_resource_tree;
    
    // [VfDifAllocateCallbackStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba25c, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) dif_allocate_callback_storage;
    
    // [VfDifCallbackReplacementRequested]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd164, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) dif_callback_replacement_requested;
    
    // [VfDifIoCallbackThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd651e0, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) dif_io_callback_thunks;
    
    // [VfDifRecoverIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba284, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) dif_recover_io_callbacks;
    
    // [VfDifRunningWithoutReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc368c0, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) dif_running_without_reboot;
    
    // [VfDifThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd66fa0, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) dif_thunks;
    
    // [VfDifThunksBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd701c0, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) dif_thunks_bit_map;
    
    // [VfDifThunksBitMapHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e730, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) dif_thunks_bit_map_header;
    
    // [VfDmaPluginEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd520, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) dma_plugin_entry;
    
    // [VfDriverApplyDifVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab62d8, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) driver_apply_dif_verification;
    
    // [VfDriverLoadSucceeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9290, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) driver_load_succeeded;
    
    // [VfDriverProcessUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba3b0, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) driver_process_unload;
    
    // [VfDriverRemoveAllDifVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba430, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) driver_remove_all_dif_verification;
    
    // [VfDriverRemoveDifVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab6778, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) driver_remove_dif_verification;
    
    // [VfExAllocPoolInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabc810, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) ex_alloc_pool_internal;
    
    // [VfExtendedParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc70c10, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) extended_parameters;
    
    // [VfFaultsInitPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac1ea0, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) faults_init_phase1;
    
    // [VfFreeCrashDumpRegistersEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab23e0, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) free_crash_dump_registers_ex;
    
    // [VfHandlePoolAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabcfb0, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) handle_pool_alloc;
    
    // [VfInitDifWithoutReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaaec04, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) init_dif_without_reboot;
    
    // [VfInitPickCurrentRandomTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaaec94, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) init_pick_current_random_target;
    
    // [VfIoAllocateIrp1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab96e8, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) io_allocate_irp1;
    
    // [VfIovPluginEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd1c0, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) iov_plugin_entry;
    
    // [VfIrpDatabaseUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacda84, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) irp_database_uninitialize;
    
    // [VfIrqlPluginEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x665b7c, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) irql_plugin_entry;
    
    // [VfKeIrqlLogLower]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac1c84, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) ke_irql_log_lower;
    
    // [VfLookasideAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xace240, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) lookaside_add;
    
    // [VfLookasideDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xace35c, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) lookaside_delete;
    
    // [VfLwSPEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e3bd8, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) lw_sp_entry;
    
    // [VfMajorInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabefb4, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) major_init;
    
    // [VF_MARK_SCATTER_GATHER_LIST]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x7091e0, 0x32828 bytes
    //
    _m43(sdk::unknown_ptr) mark_scatter_gather_list;
    
    // [VfMiscCheckKernelAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bda28, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) misc_check_kernel_address;
    
    // [VfMiscExAcquireFastMutexUnsafe_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacba70, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) misc_ex_acquire_fast_mutex_unsafe_entry;
    
    // [VfMiscExAcquireResourceExclusiveLite_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac810, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) misc_ex_acquire_resource_exclusive_lite_entry;
    
    // [VfMiscExAcquireResourceSharedLite_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac810, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) misc_ex_acquire_resource_shared_lite_entry;
    
    // [VfMiscExAcquireSharedStarveExclusive_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac810, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) misc_ex_acquire_shared_starve_exclusive_entry;
    
    // [VfMiscExAcquireSharedWaitForExclusive_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac810, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) misc_ex_acquire_shared_wait_for_exclusive_entry;
    
    // [VfMiscExDeleteLookasideListEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacba90, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) misc_ex_delete_lookaside_list_ex_entry;
    
    // [VfMiscExDeleteNPagedLookasideList_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacba90, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) misc_ex_delete_n_paged_lookaside_list_entry;
    
    // [VfMiscExDeletePagedLookasideList_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacba90, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) misc_ex_delete_paged_lookaside_list_entry;
    
    // [VfMiscExDeleteResourceLite_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbab0, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) misc_ex_delete_resource_lite_entry;
    
    // [VfMiscExDeleteResourceLite_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbad0, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) misc_ex_delete_resource_lite_exit;
    
    // [VfMiscExInitializeLookasideListEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbb10, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) misc_ex_initialize_lookaside_list_ex_entry;
    
    // [VfMiscExInitializeLookasideListEx_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbb60, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) misc_ex_initialize_lookaside_list_ex_exit;
    
    // [VfMiscExInitializeNPagedLookasideList_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbb80, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) misc_ex_initialize_n_paged_lookaside_list_entry;
    
    // [VfMiscExInitializeNPagedLookasideList_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbb60, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) misc_ex_initialize_n_paged_lookaside_list_exit;
    
    // [VfMiscExInitializePagedLookasideList_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbb80, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) misc_ex_initialize_paged_lookaside_list_entry;
    
    // [VfMiscExInitializePagedLookasideList_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbb60, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) misc_ex_initialize_paged_lookaside_list_exit;
    
    // [VfMiscExInitializeResourceLite_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbbd0, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) misc_ex_initialize_resource_lite_entry;
    
    // [VfMiscExInitializeResourceLite_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbbf0, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) misc_ex_initialize_resource_lite_exit;
    
    // [VfMiscExReleaseFastMutex_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc30, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) misc_ex_release_fast_mutex_entry;
    
    // [VfMiscExReleaseFastMutexUnsafe_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc10, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) misc_ex_release_fast_mutex_unsafe_entry;
    
    // [VfMiscExReleaseResourceAndLeaveCriticalRegion_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac830, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) misc_ex_release_resource_and_leave_critical_region_entry;
    
    // [VfMiscExReleaseResourceAndLeavePriorityRegion_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac830, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) misc_ex_release_resource_and_leave_priority_region_entry;
    
    // [VfMiscExReleaseResourceForThreadLite_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc50, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) misc_ex_release_resource_for_thread_lite_entry;
    
    // [VfMiscExReleaseResourceLite_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac830, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) misc_ex_release_resource_lite_entry;
    
    // [VfMiscExfAcquirePushLockExclusive_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc70, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) misc_exf_acquire_push_lock_exclusive_entry;
    
    // [VfMiscExfAcquirePushLockShared_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc70, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) misc_exf_acquire_push_lock_shared_entry;
    
    // [VfMiscExfReleasePushLock_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc90, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) misc_exf_release_push_lock_entry;
    
    // [VfMiscExfReleasePushLockShared_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc90, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) misc_exf_release_push_lock_shared_entry;
    
    // [VfMiscExfTryAcquirePushLockShared_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc70, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) misc_exf_try_acquire_push_lock_shared_entry;
    
    // [VfMiscExfTryToWakePushLock_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbc90, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) misc_exf_try_to_wake_push_lock_entry;
    
    // [VfMiscIoConnectInterrupt_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) misc_io_connect_interrupt_entry;
    
    // [VfMiscIoConnectInterruptEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) misc_io_connect_interrupt_ex_entry;
    
    // [VfMiscIoDisconnectInterrupt_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) misc_io_disconnect_interrupt_entry;
    
    // [VfMiscIoDisconnectInterruptEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m78(sdk::unknown_ptr) misc_io_disconnect_interrupt_ex_entry;
    
    // [VfMiscIoFreeMdl_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbcb0, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) misc_io_free_mdl_entry;
    
    // [VfMiscIoInitializeWorkItem_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbd00, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) misc_io_initialize_work_item_entry;
    
    // [VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbd90, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) misc_ke_acquire_in_stack_queued_spin_lock_at_dpc_level_entry;
    
    // [VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbe00, 0x1fd000 bytes
    //
    _m82(sdk::unknown_ptr) misc_ke_acquire_in_stack_queued_spin_lock_for_dpc_entry;
    
    // [VfMiscKeAcquireSpinLockAtDpcLevel_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bda90, 0x1fd000 bytes
    //
    _m83(sdk::unknown_ptr) misc_ke_acquire_spin_lock_at_dpc_level_entry;
    
    // [VfMiscKeAcquireSpinLockRaiseToDpc_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaac850, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) misc_ke_acquire_spin_lock_raise_to_dpc_entry;
    
    // [VfMiscKeInitializeEvent_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbe40, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) misc_ke_initialize_event_entry;
    
    // [VfMiscKeInitializeMutant_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbe60, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) misc_ke_initialize_mutant_entry;
    
    // [VfMiscKeInitializeMutex_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbe60, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) misc_ke_initialize_mutex_entry;
    
    // [VfMiscKeInitializeSemaphore_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbe80, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) misc_ke_initialize_semaphore_entry;
    
    // [VfMiscKeInitializeTimerEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbea0, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) misc_ke_initialize_timer_ex_entry;
    
    // [VfMiscKeInsertQueueDpc_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbee0, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) misc_ke_insert_queue_dpc_entry;
    
    // [VfMiscKeReleaseInStackQueuedSpinLock_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbf50, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) misc_ke_release_in_stack_queued_spin_lock_entry;
    
    // [VfMiscKeReleaseInStackQueuedSpinLockForDpc_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbf00, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) misc_ke_release_in_stack_queued_spin_lock_for_dpc_entry;
    
    // [VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbf00, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) misc_ke_release_in_stack_queued_spin_lock_from_dpc_level_entry;
    
    // [VfMiscKeReleaseMutant_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbfb0, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) misc_ke_release_mutant_entry;
    
    // [VfMiscKeReleaseMutex_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbfb0, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) misc_ke_release_mutex_entry;
    
    // [VfMiscKeReleaseQueuedSpinLock_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbfd0, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) misc_ke_release_queued_spin_lock_entry;
    
    // [VfMiscKeReleaseSpinLock_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc010, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) misc_ke_release_spin_lock_entry;
    
    // [VfMiscKeReleaseSpinLockFromDpcLevel_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbff0, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) misc_ke_release_spin_lock_from_dpc_level_entry;
    
    // [VfMiscKeRemoveQueueDpc_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc080, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) misc_ke_remove_queue_dpc_entry;
    
    // [VfMiscKeSetEvent_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc0a0, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) misc_ke_set_event_entry;
    
    // [VfMiscKeSynchronizeExecution_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc0c0, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) misc_ke_synchronize_execution_entry;
    
    // [VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc0e0, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) misc_ke_try_to_acquire_spin_lock_at_dpc_level_entry;
    
    // [VfMiscKeWaitForMultipleObjects_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc140, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) misc_ke_wait_for_multiple_objects_entry;
    
    // [VfMiscKeWaitForSingleObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc170, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) misc_ke_wait_for_single_object_entry;
    
    // [VfMiscMmAllocateContiguousMemory_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc1d0, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) misc_mm_allocate_contiguous_memory_entry;
    
    // [VfMiscMmAllocateContiguousMemoryEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc1a0, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) misc_mm_allocate_contiguous_memory_ex_entry;
    
    // [VfMiscMmBuildMdlForNonPagedPool_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc200, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) misc_mm_build_mdl_for_non_paged_pool_entry;
    
    // [VfMiscMmBuildMdlForNonPagedPool_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc240, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) misc_mm_build_mdl_for_non_paged_pool_exit;
    
    // [VfMiscMmUnmapLockedPages_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc2b0, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) misc_mm_unmap_locked_pages_entry;
    
    // [VfMiscObGetObjectSecurity_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc510, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) misc_ob_get_object_security_entry;
    
    // [VfMiscObReferenceObjectByHandle_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc530, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) misc_ob_reference_object_by_handle_exit;
    
    // [VfMiscObReferenceObjectByPointer_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc5e0, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) misc_ob_reference_object_by_pointer_entry;
    
    // [VfMiscObReferenceObjectByPointerWithTag_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc5c0, 0x1fd000 bytes
    //
    _n13(sdk::unknown_ptr) misc_ob_reference_object_by_pointer_with_tag_entry;
    
    // [VfMiscObfDereferenceObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbff0, 0x1fd000 bytes
    //
    _n14(sdk::unknown_ptr) misc_obf_dereference_object_entry;
    
    // [VfMiscObfDereferenceObjectWithTag_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc630, 0x1fd000 bytes
    //
    _n15(sdk::unknown_ptr) misc_obf_dereference_object_with_tag_entry;
    
    // [VfMiscObfReferenceObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacbff0, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) misc_obf_reference_object_entry;
    
    // [VfMiscObfReferenceObject_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc650, 0x1fd000 bytes
    //
    _n17(sdk::unknown_ptr) misc_obf_reference_object_exit;
    
    // [VfMiscObfReferenceObjectWithTag_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc630, 0x1fd000 bytes
    //
    _n18(sdk::unknown_ptr) misc_obf_reference_object_with_tag_entry;
    
    // [VfMiscPluginEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacc684, 0x1fd000 bytes
    //
    _n19(sdk::unknown_ptr) misc_plugin_entry;
    
    // [VfMiscPluginUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bdab0, 0x1fd000 bytes
    //
    _n20(sdk::unknown_ptr) misc_plugin_unload;
    
    // [VfNumberOfClassDriverThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36758, 0x1fd000 bytes
    //
    _n21(sdk::unknown_ptr) number_of_class_driver_thunks;
    
    // [VfPacketFindAndLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac90ec, 0x1fd000 bytes
    //
    _n22(sdk::unknown_ptr) packet_find_and_lock;
    
    // [VfPacketFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9104, 0x1fd000 bytes
    //
    _n23(sdk::unknown_ptr) packet_free;
    
    // [VfPacketReleaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9158, 0x1fd000 bytes
    //
    _n24(sdk::unknown_ptr) packet_release_lock;
    
    // [VfPoolCheckIncorrectFreeApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac6100, 0x1fd000 bytes
    //
    _n25(sdk::unknown_ptr) pool_check_incorrect_free_api;
    
    // [VfPoolTrackingEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd6b8, 0x1fd000 bytes
    //
    _n26(sdk::unknown_ptr) pool_tracking_entry;
    
    // [VfPtAddStackInfoIfNotExist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaca5a0, 0x1fd000 bytes
    //
    _n27(sdk::unknown_ptr) pt_add_stack_info_if_not_exist;
    
    // [VfPtComparePoolInfoCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaca6f0, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) pt_compare_pool_info_callback;
    
    // [VfPtComparePoolStackInfoCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaca710, 0x1fd000 bytes
    //
    _n29(sdk::unknown_ptr) pt_compare_pool_stack_info_callback;
    
    // [VfPtExAllocatePool2_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n30(sdk::unknown_ptr) pt_ex_allocate_pool2_enter;
    
    // [VfPtExAllocatePool3_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n31(sdk::unknown_ptr) pt_ex_allocate_pool3_exit;
    
    // [VfPtExAllocatePool_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n32(sdk::unknown_ptr) pt_ex_allocate_pool_enter;
    
    // [VfPtExAllocatePoolWithQuota_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n33(sdk::unknown_ptr) pt_ex_allocate_pool_with_quota_enter;
    
    // [VfPtExAllocatePoolWithQuotaTag_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n34(sdk::unknown_ptr) pt_ex_allocate_pool_with_quota_tag_enter;
    
    // [VfPtExAllocatePoolWithTag_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n35(sdk::unknown_ptr) pt_ex_allocate_pool_with_tag_enter;
    
    // [VfPtExAllocatePoolWithTagPriority_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n36(sdk::unknown_ptr) pt_ex_allocate_pool_with_tag_priority_enter;
    
    // [VfPtExFreePool_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n37(sdk::unknown_ptr) pt_ex_free_pool_enter;
    
    // [VfPtExFreePoolWithTag_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n38(sdk::unknown_ptr) pt_ex_free_pool_with_tag_enter;
    
    // [VfPtFreePoolNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaca73c, 0x1fd000 bytes
    //
    _n39(sdk::unknown_ptr) pt_free_pool_notification;
    
    // [VfPtGenerateTraceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaca7d8, 0x1fd000 bytes
    //
    _n40(sdk::unknown_ptr) pt_generate_trace_information;
    
    // [VfPtProcessAllocPoolInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacaa18, 0x1fd000 bytes
    //
    _n41(sdk::unknown_ptr) pt_process_alloc_pool_info;
    
    // [VfPtProcessFreePoolInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacaad0, 0x1fd000 bytes
    //
    _n42(sdk::unknown_ptr) pt_process_free_pool_info;
    
    // [VfSecurityEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bb604, 0x1fd000 bytes
    //
    _n43(sdk::unknown_ptr) security_entry;
    
    // [VfSettingsIrpDeferralTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFD:0x75b078, 0x32828 bytes
    //
    _n44(sdk::unknown_ptr) settings_irp_deferral_time;
    
    // [VfSettingsIrplogCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFD:0x75b208, 0x32828 bytes
    //
    _n45(sdk::unknown_ptr) settings_irplog_count;
    
    // [VfSpExAllocatePool2_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n46(sdk::unknown_ptr) sp_ex_allocate_pool2_enter;
    
    // [VfSpExAllocatePool3_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n47(sdk::unknown_ptr) sp_ex_allocate_pool3_enter;
    
    // [VfSpExAllocatePool_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n48(sdk::unknown_ptr) sp_ex_allocate_pool_enter;
    
    // [VfSpExAllocatePoolWithQuota_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n49(sdk::unknown_ptr) sp_ex_allocate_pool_with_quota_enter;
    
    // [VfSpExAllocatePoolWithQuotaTag_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n50(sdk::unknown_ptr) sp_ex_allocate_pool_with_quota_tag_enter;
    
    // [VfSpExAllocatePoolWithTag_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n51(sdk::unknown_ptr) sp_ex_allocate_pool_with_tag_enter;
    
    // [VfSpExAllocatePoolWithTagPriority_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n52(sdk::unknown_ptr) sp_ex_allocate_pool_with_tag_priority_enter;
    
    // [VfSpExFreePool_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n53(sdk::unknown_ptr) sp_ex_free_pool_enter;
    
    // [VfSpExFreePoolWithTag_Enter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n54(sdk::unknown_ptr) sp_ex_free_pool_with_tag_enter;
    
    // [VfSpIoAllocateIrp_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n55(sdk::unknown_ptr) sp_io_allocate_irp_exit;
    
    // [VfSpIoAllocateMdl_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n56(sdk::unknown_ptr) sp_io_allocate_mdl_exit;
    
    // [VfSpIoSetCompletionRoutineEx_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4670, 0x1fd000 bytes
    //
    _n57(sdk::unknown_ptr) sp_io_set_completion_routine_ex_exit;
    
    // [VfSpRtlAnsiStringToUnicodeString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n58(sdk::unknown_ptr) sp_rtl_ansi_string_to_unicode_string_exit;
    
    // [VfSpRtlCreateUnicodeString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4720, 0x1fd000 bytes
    //
    _n59(sdk::unknown_ptr) sp_rtl_create_unicode_string_exit;
    
    // [VfSpRtlDowncaseUnicodeString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n60(sdk::unknown_ptr) sp_rtl_downcase_unicode_string_exit;
    
    // [VfSpRtlDuplicateUnicodeString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4750, 0x1fd000 bytes
    //
    _n61(sdk::unknown_ptr) sp_rtl_duplicate_unicode_string_exit;
    
    // [VfSpRtlOemStringToCountedUnicodeString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n62(sdk::unknown_ptr) sp_rtl_oem_string_to_counted_unicode_string_exit;
    
    // [VfSpRtlOemStringToUnicodeString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n63(sdk::unknown_ptr) sp_rtl_oem_string_to_unicode_string_exit;
    
    // [VfSpRtlUnicodeStringToAnsiString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n64(sdk::unknown_ptr) sp_rtl_unicode_string_to_ansi_string_exit;
    
    // [VfSpRtlUnicodeStringToCountedOemString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n65(sdk::unknown_ptr) sp_rtl_unicode_string_to_counted_oem_string_exit;
    
    // [VfSpRtlUnicodeStringToOemString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n66(sdk::unknown_ptr) sp_rtl_unicode_string_to_oem_string_exit;
    
    // [VfSpRtlUpcaseUnicodeString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n67(sdk::unknown_ptr) sp_rtl_upcase_unicode_string_exit;
    
    // [VfSpRtlUpcaseUnicodeStringToAnsiString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n68(sdk::unknown_ptr) sp_rtl_upcase_unicode_string_to_ansi_string_exit;
    
    // [VfSpRtlUpcaseUnicodeStringToCountedOemString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n69(sdk::unknown_ptr) sp_rtl_upcase_unicode_string_to_counted_oem_string_exit;
    
    // [VfSpRtlUpcaseUnicodeStringToOemString_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad46f0, 0x1fd000 bytes
    //
    _n70(sdk::unknown_ptr) sp_rtl_upcase_unicode_string_to_oem_string_exit;
    
    // [VfSpecialPoolEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x665d9c, 0x1fd000 bytes
    //
    _n71(sdk::unknown_ptr) special_pool_entry;
    
    // [VfSuspectApplyDifVolatileVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac6288, 0x1fd000 bytes
    //
    _n72(sdk::unknown_ptr) suspect_apply_dif_volatile_verification;
    
    // [VfSuspectDifRemoveEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac634c, 0x1fd000 bytes
    //
    _n73(sdk::unknown_ptr) suspect_dif_remove_entry;
    
    // [VfSuspectDriversLookupName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac69f4, 0x1fd000 bytes
    //
    _n74(sdk::unknown_ptr) suspect_drivers_lookup_name;
    
    // [VfSuspectRemoveDifVolatileVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac6c74, 0x1fd000 bytes
    //
    _n75(sdk::unknown_ptr) suspect_remove_dif_volatile_verification;
    
    // [VfTargetDriversDisableVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab7410, 0x1fd000 bytes
    //
    _n76(sdk::unknown_ptr) target_drivers_disable_verifier;
    
    // [VfTargetRecoverIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba794, 0x1fd000 bytes
    //
    _n77(sdk::unknown_ptr) target_recover_io_callbacks;
    
    // [VfTargetReplaceIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba7e8, 0x1fd000 bytes
    //
    _n78(sdk::unknown_ptr) target_replace_io_callbacks;
    
    // [VfThunkApplyPristineToAllSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac72cc, 0x1fd000 bytes
    //
    _n79(sdk::unknown_ptr) thunk_apply_pristine_to_all_session;
    
    // [VfThunkApplyThunksCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac73ac, 0x1fd000 bytes
    //
    _n80(sdk::unknown_ptr) thunk_apply_thunks_current_session;
    
    // [VfThunkApplyWdmThunkToAllSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac744c, 0x1fd000 bytes
    //
    _n81(sdk::unknown_ptr) thunk_apply_wdm_thunk_to_all_session;
    
    // [VfThunkGetNumberOfWdmThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa92c4, 0x1fd000 bytes
    //
    _n82(sdk::unknown_ptr) thunk_get_number_of_wdm_thunk;
    
    // [VfThunkHookExportAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac752c, 0x1fd000 bytes
    //
    _n83(sdk::unknown_ptr) thunk_hook_export_address;
    
    // [VfTrackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad05e4, 0x1fd000 bytes
    //
    _n84(sdk::unknown_ptr) track_resource;
    
    // [VF_UNMARK_SCATTER_GATHER_LIST]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x7091f8, 0x32828 bytes
    //
    _n85(sdk::unknown_ptr) unmark_scatter_gather_list;
    
    // [VfUtilClearOneBootSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x705cb0, 0x32828 bytes
    //
    _n86(sdk::unknown_ptr) util_clear_one_boot_settings;
    
    // [VfUtilCrashEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b97c4, 0x1fd000 bytes
    //
    _n87(sdk::unknown_ptr) util_crash_event;
    
    // [VfUtilIsSignedDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b98c8, 0x1fd000 bytes
    //
    _n88(sdk::unknown_ptr) util_is_signed_driver;
    
    // [VfUtilSetRuleClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b98ec, 0x1fd000 bytes
    //
    _n89(sdk::unknown_ptr) util_set_rule_class;
    
    // [VfVolatileApplyDifVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9a10, 0x1fd000 bytes
    //
    _n90(sdk::unknown_ptr) volatile_apply_dif_verification;
    
    // [VfVolatileClearDifRuleClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9a7c, 0x1fd000 bytes
    //
    _n91(sdk::unknown_ptr) volatile_clear_dif_rule_class;
    
    // [VfVolatileRemoveDifVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9b38, 0x1fd000 bytes
    //
    _n92(sdk::unknown_ptr) volatile_remove_dif_verification;
    
    // [VfVolatileSetDifRuleClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9bec, 0x1fd000 bytes
    //
    _n93(sdk::unknown_ptr) volatile_set_dif_rule_class;
    
    // [VfXdvDriverCaptureIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x701128, 0x32828 bytes
    //
    _n94(sdk::unknown_ptr) xdv_driver_capture_io_callbacks;
    
    // [VfXdvEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e4d8, 0x1fd000 bytes
    //
    _n95(sdk::unknown_ptr) xdv_enabled;
    
    // [VfZwAccessCheckAndAuditAlarm_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff00, 0x1fd000 bytes
    //
    _n96(sdk::unknown_ptr) zw_access_check_and_audit_alarm_entry;
    
    // [VfZwAddBootEntry_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _n97(sdk::unknown_ptr) zw_add_boot_entry_entry;
    
    // [VfZwAddDriverEntry_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _n98(sdk::unknown_ptr) zw_add_driver_entry_entry;
    
    // [VfZwAdjustPrivilegesToken_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabffc0, 0x1fd000 bytes
    //
    _n99(sdk::unknown_ptr) zw_adjust_privileges_token_entry;
    
    // [VfZwAllocateVirtualMemory_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0010, 0x1fd000 bytes
    //
    _o00(sdk::unknown_ptr) zw_allocate_virtual_memory_entry;
    
    // [VfZwAlpcAcceptConnectPort_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0050, 0x1fd000 bytes
    //
    _o01(sdk::unknown_ptr) zw_alpc_accept_connect_port_entry;
    
    // [VfZwAlpcConnectPort_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac00b0, 0x1fd000 bytes
    //
    _o02(sdk::unknown_ptr) zw_alpc_connect_port_entry;
    
    // [VfZwAlpcCreatePort_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0150, 0x1fd000 bytes
    //
    _o03(sdk::unknown_ptr) zw_alpc_create_port_entry;
    
    // [VfZwAlpcCreatePortSection_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _o04(sdk::unknown_ptr) zw_alpc_create_port_section_entry;
    
    // [VfZwAlpcCreateResourceReserve_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o05(sdk::unknown_ptr) zw_alpc_create_resource_reserve_entry;
    
    // [VfZwAlpcCreateSectionView_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o06(sdk::unknown_ptr) zw_alpc_create_section_view_entry;
    
    // [VfZwAlpcCreateSecurityContext_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o07(sdk::unknown_ptr) zw_alpc_create_security_context_entry;
    
    // [VfZwAlpcQueryInformation_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o08(sdk::unknown_ptr) zw_alpc_query_information_entry;
    
    // [VfZwAlpcSendWaitReceivePort_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0210, 0x1fd000 bytes
    //
    _o09(sdk::unknown_ptr) zw_alpc_send_wait_receive_port_entry;
    
    // [VfZwAlpcSetInformation_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _o10(sdk::unknown_ptr) zw_alpc_set_information_entry;
    
    // [VfZwCancelIoFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o11(sdk::unknown_ptr) zw_cancel_io_file_entry;
    
    // [VfZwCancelTimer_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o12(sdk::unknown_ptr) zw_cancel_timer_entry;
    
    // [VfZwCloseObjectAuditAlarm_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac02b0, 0x1fd000 bytes
    //
    _o13(sdk::unknown_ptr) zw_close_object_audit_alarm_entry;
    
    // [VfZwCommitEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o14(sdk::unknown_ptr) zw_commit_enlistment_entry;
    
    // [VfZwConnectPort_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac02e0, 0x1fd000 bytes
    //
    _o15(sdk::unknown_ptr) zw_connect_port_entry;
    
    // [VfZwCreateDirectoryObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o16(sdk::unknown_ptr) zw_create_directory_object_entry;
    
    // [VfZwCreateEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac03a0, 0x1fd000 bytes
    //
    _o17(sdk::unknown_ptr) zw_create_enlistment_entry;
    
    // [VfZwCreateEvent_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac03e0, 0x1fd000 bytes
    //
    _o18(sdk::unknown_ptr) zw_create_event_entry;
    
    // [VfZwCreateFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0420, 0x1fd000 bytes
    //
    _o19(sdk::unknown_ptr) zw_create_file_entry;
    
    // [VfZwCreateJobObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o20(sdk::unknown_ptr) zw_create_job_object_entry;
    
    // [VfZwCreateKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0480, 0x1fd000 bytes
    //
    _o21(sdk::unknown_ptr) zw_create_key_entry;
    
    // [VfZwCreateSection_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac04d0, 0x1fd000 bytes
    //
    _o22(sdk::unknown_ptr) zw_create_section_entry;
    
    // [VfZwCreateSymbolicLinkObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0520, 0x1fd000 bytes
    //
    _o23(sdk::unknown_ptr) zw_create_symbolic_link_object_entry;
    
    // [VfZwCreateTimer_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac03e0, 0x1fd000 bytes
    //
    _o24(sdk::unknown_ptr) zw_create_timer_entry;
    
    // [VfZwCreateTransaction_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac05c0, 0x1fd000 bytes
    //
    _o25(sdk::unknown_ptr) zw_create_transaction_entry;
    
    // [VfZwCreateTransactionManager_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0570, 0x1fd000 bytes
    //
    _o26(sdk::unknown_ptr) zw_create_transaction_manager_entry;
    
    // [VfZwDeleteBootEntry_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0620, 0x1fd000 bytes
    //
    _o27(sdk::unknown_ptr) zw_delete_boot_entry_entry;
    
    // [VfZwDeleteFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0650, 0x1fd000 bytes
    //
    _o28(sdk::unknown_ptr) zw_delete_file_entry;
    
    // [VfZwDeleteValueKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0680, 0x1fd000 bytes
    //
    _o29(sdk::unknown_ptr) zw_delete_value_key_entry;
    
    // [VfZwDeviceIoControlFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac06b0, 0x1fd000 bytes
    //
    _o30(sdk::unknown_ptr) zw_device_io_control_file_entry;
    
    // [VfZwDisplayString_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0680, 0x1fd000 bytes
    //
    _o31(sdk::unknown_ptr) zw_display_string_entry;
    
    // [VfZwDuplicateObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0720, 0x1fd000 bytes
    //
    _o32(sdk::unknown_ptr) zw_duplicate_object_entry;
    
    // [VfZwDuplicateToken_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0750, 0x1fd000 bytes
    //
    _o33(sdk::unknown_ptr) zw_duplicate_token_entry;
    
    // [VfZwEnumerateBootEntries_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _o34(sdk::unknown_ptr) zw_enumerate_boot_entries_entry;
    
    // [VfZwEnumerateDriverEntries_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _o35(sdk::unknown_ptr) zw_enumerate_driver_entries_entry;
    
    // [VfZwEnumerateKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o36(sdk::unknown_ptr) zw_enumerate_key_entry;
    
    // [VfZwEnumerateValueKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o37(sdk::unknown_ptr) zw_enumerate_value_key_entry;
    
    // [VfZwFlushInstructionCache_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _o38(sdk::unknown_ptr) zw_flush_instruction_cache_entry;
    
    // [VfZwFlushVirtualMemory_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0790, 0x1fd000 bytes
    //
    _o39(sdk::unknown_ptr) zw_flush_virtual_memory_entry;
    
    // [VfZwFreeVirtualMemory_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac07e0, 0x1fd000 bytes
    //
    _o40(sdk::unknown_ptr) zw_free_virtual_memory_entry;
    
    // [VfZwFsControlFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac06b0, 0x1fd000 bytes
    //
    _o41(sdk::unknown_ptr) zw_fs_control_file_entry;
    
    // [VfZwLoadDriver_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0680, 0x1fd000 bytes
    //
    _o42(sdk::unknown_ptr) zw_load_driver_entry;
    
    // [VfZwLoadKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0820, 0x1fd000 bytes
    //
    _o43(sdk::unknown_ptr) zw_load_key_entry;
    
    // [VfZwMapViewOfSection_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0860, 0x1fd000 bytes
    //
    _o44(sdk::unknown_ptr) zw_map_view_of_section_entry;
    
    // [VfZwModifyBootEntry_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o45(sdk::unknown_ptr) zw_modify_boot_entry_entry;
    
    // [VfZwModifyDriverEntry_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o46(sdk::unknown_ptr) zw_modify_driver_entry_entry;
    
    // [VfZwNotifyChangeKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac08b0, 0x1fd000 bytes
    //
    _o47(sdk::unknown_ptr) zw_notify_change_key_entry;
    
    // [VfZwOpenDirectoryObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o48(sdk::unknown_ptr) zw_open_directory_object_entry;
    
    // [VfZwOpenEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0930, 0x1fd000 bytes
    //
    _o49(sdk::unknown_ptr) zw_open_enlistment_entry;
    
    // [VfZwOpenEvent_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o50(sdk::unknown_ptr) zw_open_event_entry;
    
    // [VfZwOpenFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0970, 0x1fd000 bytes
    //
    _o51(sdk::unknown_ptr) zw_open_file_entry;
    
    // [VfZwOpenJobObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o52(sdk::unknown_ptr) zw_open_job_object_entry;
    
    // [VfZwOpenKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o53(sdk::unknown_ptr) zw_open_key_entry;
    
    // [VfZwOpenProcess_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac09c0, 0x1fd000 bytes
    //
    _o54(sdk::unknown_ptr) zw_open_process_entry;
    
    // [VfZwOpenProcessToken_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o55(sdk::unknown_ptr) zw_open_process_token_entry;
    
    // [VfZwOpenProcessTokenEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o56(sdk::unknown_ptr) zw_open_process_token_ex_entry;
    
    // [VfZwOpenSection_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o57(sdk::unknown_ptr) zw_open_section_entry;
    
    // [VfZwOpenSymbolicLinkObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o58(sdk::unknown_ptr) zw_open_symbolic_link_object_entry;
    
    // [VfZwOpenThread_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac09c0, 0x1fd000 bytes
    //
    _o59(sdk::unknown_ptr) zw_open_thread_entry;
    
    // [VfZwOpenThreadToken_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o60(sdk::unknown_ptr) zw_open_thread_token_entry;
    
    // [VfZwOpenThreadTokenEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o61(sdk::unknown_ptr) zw_open_thread_token_ex_entry;
    
    // [VfZwOpenTimer_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0360, 0x1fd000 bytes
    //
    _o62(sdk::unknown_ptr) zw_open_timer_entry;
    
    // [VfZwOpenTransaction_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0a60, 0x1fd000 bytes
    //
    _o63(sdk::unknown_ptr) zw_open_transaction_entry;
    
    // [VfZwOpenTransactionManager_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0a10, 0x1fd000 bytes
    //
    _o64(sdk::unknown_ptr) zw_open_transaction_manager_entry;
    
    // [VfZwPowerInformation_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0010, 0x1fd000 bytes
    //
    _o65(sdk::unknown_ptr) zw_power_information_entry;
    
    // [VfZwPrePrepareEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o66(sdk::unknown_ptr) zw_pre_prepare_enlistment_entry;
    
    // [VfZwPrepareComplete_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o67(sdk::unknown_ptr) zw_prepare_complete_entry;
    
    // [VfZwPrepareEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o68(sdk::unknown_ptr) zw_prepare_enlistment_entry;
    
    // [VfZwProtectVirtualMemory_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0ab0, 0x1fd000 bytes
    //
    _o69(sdk::unknown_ptr) zw_protect_virtual_memory_entry;
    
    // [VfZwPulseEvent_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o70(sdk::unknown_ptr) zw_pulse_event_entry;
    
    // [VfZwQueryBootEntryOrder_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _o71(sdk::unknown_ptr) zw_query_boot_entry_order_entry;
    
    // [VfZwQueryBootOptions_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _o72(sdk::unknown_ptr) zw_query_boot_options_entry;
    
    // [VfZwQueryDefaultLocale_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o73(sdk::unknown_ptr) zw_query_default_locale_entry;
    
    // [VfZwQueryDefaultUILanguage_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o74(sdk::unknown_ptr) zw_query_default_ui_language_entry;
    
    // [VfZwQueryDirectoryFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0b70, 0x1fd000 bytes
    //
    _o75(sdk::unknown_ptr) zw_query_directory_file_entry;
    
    // [VfZwQueryDirectoryFileEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0b00, 0x1fd000 bytes
    //
    _o76(sdk::unknown_ptr) zw_query_directory_file_ex_entry;
    
    // [VfZwQueryDirectoryObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabffc0, 0x1fd000 bytes
    //
    _o77(sdk::unknown_ptr) zw_query_directory_object_entry;
    
    // [VfZwQueryDriverEntryOrder_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _o78(sdk::unknown_ptr) zw_query_driver_entry_order_entry;
    
    // [VfZwQueryEaFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0be0, 0x1fd000 bytes
    //
    _o79(sdk::unknown_ptr) zw_query_ea_file_entry;
    
    // [VfZwQueryFullAttributesFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0c30, 0x1fd000 bytes
    //
    _o80(sdk::unknown_ptr) zw_query_full_attributes_file_entry;
    
    // [VfZwQueryInformationEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o81(sdk::unknown_ptr) zw_query_information_enlistment_entry;
    
    // [VfZwQueryInformationFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac07e0, 0x1fd000 bytes
    //
    _o82(sdk::unknown_ptr) zw_query_information_file_entry;
    
    // [VfZwQueryInformationJobObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o83(sdk::unknown_ptr) zw_query_information_job_object_entry;
    
    // [VfZwQueryInformationProcess_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o84(sdk::unknown_ptr) zw_query_information_process_entry;
    
    // [VfZwQueryInformationThread_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o85(sdk::unknown_ptr) zw_query_information_thread_entry;
    
    // [VfZwQueryInformationToken_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o86(sdk::unknown_ptr) zw_query_information_token_entry;
    
    // [VfZwQueryInformationTransaction_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o87(sdk::unknown_ptr) zw_query_information_transaction_entry;
    
    // [VfZwQueryInformationTransactionManager_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o88(sdk::unknown_ptr) zw_query_information_transaction_manager_entry;
    
    // [VfZwQueryInstallUILanguage_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _o89(sdk::unknown_ptr) zw_query_install_ui_language_entry;
    
    // [VfZwQueryKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o90(sdk::unknown_ptr) zw_query_key_entry;
    
    // [VfZwQueryLicenseValue_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0c70, 0x1fd000 bytes
    //
    _o91(sdk::unknown_ptr) zw_query_license_value_entry;
    
    // [VfZwQueryObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o92(sdk::unknown_ptr) zw_query_object_entry;
    
    // [VfZwQuerySection_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o93(sdk::unknown_ptr) zw_query_section_entry;
    
    // [VfZwQuerySecurityObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o94(sdk::unknown_ptr) zw_query_security_object_entry;
    
    // [VfZwQuerySymbolicLinkObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0cc0, 0x1fd000 bytes
    //
    _o95(sdk::unknown_ptr) zw_query_symbolic_link_object_entry;
    
    // [VfZwQuerySystemInformation_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _o96(sdk::unknown_ptr) zw_query_system_information_entry;
    
    // [VfZwQueryValueKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0d00, 0x1fd000 bytes
    //
    _o97(sdk::unknown_ptr) zw_query_value_key_entry;
    
    // [VfZwQueryVolumeInformationFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac07e0, 0x1fd000 bytes
    //
    _o98(sdk::unknown_ptr) zw_query_volume_information_file_entry;
    
    // [VfZwReadFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0d50, 0x1fd000 bytes
    //
    _o99(sdk::unknown_ptr) zw_read_file_entry;
    
    // [VfZwRemoveIoCompletionEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0dc0, 0x1fd000 bytes
    //
    _p00(sdk::unknown_ptr) zw_remove_io_completion_ex_entry;
    
    // [VfZwReplaceKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0e10, 0x1fd000 bytes
    //
    _p01(sdk::unknown_ptr) zw_replace_key_entry;
    
    // [VfZwRequestWaitReplyPort_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _p02(sdk::unknown_ptr) zw_request_wait_reply_port_entry;
    
    // [VfZwResetEvent_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _p03(sdk::unknown_ptr) zw_reset_event_entry;
    
    // [VfZwRollbackEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _p04(sdk::unknown_ptr) zw_rollback_enlistment_entry;
    
    // [VfZwSetBootEntryOrder_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p05(sdk::unknown_ptr) zw_set_boot_entry_order_entry;
    
    // [VfZwSetBootOptions_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p06(sdk::unknown_ptr) zw_set_boot_options_entry;
    
    // [VfZwSetDriverEntryOrder_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p07(sdk::unknown_ptr) zw_set_driver_entry_order_entry;
    
    // [VfZwSetEaFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac07e0, 0x1fd000 bytes
    //
    _p08(sdk::unknown_ptr) zw_set_ea_file_entry;
    
    // [VfZwSetEvent_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _p09(sdk::unknown_ptr) zw_set_event_entry;
    
    // [VfZwSetInformationEnlistment_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p10(sdk::unknown_ptr) zw_set_information_enlistment_entry;
    
    // [VfZwSetInformationFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac07e0, 0x1fd000 bytes
    //
    _p11(sdk::unknown_ptr) zw_set_information_file_entry;
    
    // [VfZwSetInformationJobObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p12(sdk::unknown_ptr) zw_set_information_job_object_entry;
    
    // [VfZwSetInformationObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p13(sdk::unknown_ptr) zw_set_information_object_entry;
    
    // [VfZwSetInformationProcess_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p14(sdk::unknown_ptr) zw_set_information_process_entry;
    
    // [VfZwSetInformationThread_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p15(sdk::unknown_ptr) zw_set_information_thread_entry;
    
    // [VfZwSetInformationTransaction_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p16(sdk::unknown_ptr) zw_set_information_transaction_entry;
    
    // [VfZwSetSecurityObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _p17(sdk::unknown_ptr) zw_set_security_object_entry;
    
    // [VfZwSetSystemInformation_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0280, 0x1fd000 bytes
    //
    _p18(sdk::unknown_ptr) zw_set_system_information_entry;
    
    // [VfZwSetSystemTime_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabff80, 0x1fd000 bytes
    //
    _p19(sdk::unknown_ptr) zw_set_system_time_entry;
    
    // [VfZwSetTimer_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0e50, 0x1fd000 bytes
    //
    _p20(sdk::unknown_ptr) zw_set_timer_entry;
    
    // [VfZwSetValueKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0ea0, 0x1fd000 bytes
    //
    _p21(sdk::unknown_ptr) zw_set_value_key_entry;
    
    // [VfZwSetVolumeInformationFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac07e0, 0x1fd000 bytes
    //
    _p22(sdk::unknown_ptr) zw_set_volume_information_file_entry;
    
    // [VfZwTranslateFilePath_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xabffc0, 0x1fd000 bytes
    //
    _p23(sdk::unknown_ptr) zw_translate_file_path_entry;
    
    // [VfZwUnloadDriver_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0680, 0x1fd000 bytes
    //
    _p24(sdk::unknown_ptr) zw_unload_driver_entry;
    
    // [VfZwUnloadKey_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0650, 0x1fd000 bytes
    //
    _p25(sdk::unknown_ptr) zw_unload_key_entry;
    
    // [VfZwWaitForMultipleObjects_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01d0, 0x1fd000 bytes
    //
    _p26(sdk::unknown_ptr) zw_wait_for_multiple_objects_entry;
    
    // [VfZwWaitForSingleObject_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac01a0, 0x1fd000 bytes
    //
    _p27(sdk::unknown_ptr) zw_wait_for_single_object_entry;
    
    // [VfZwWriteFile_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac0d50, 0x1fd000 bytes
    //
    _p28(sdk::unknown_ptr) zw_write_file_entry;
    
    // [VfAllocPoolNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9ddf64, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcf64, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) alloc_pool_notification;
    
    // [VfDifAPIThunkContextHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd46018, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46018, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) dif_api_thunk_context_head;
    
    // [VfDifSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd461c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461c4, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) dif_setting;
    
    // [VfErrorReport1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d5fb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4fb8, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) error_report1;
    
    // [VfErrorReport9]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d60f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d50f0, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) error_report9;
    
    // [VfFaultsInitPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGEVRFY:0x713c58, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1e18, 0x1fd000 bytes
    //
    _p34(sdk::unknown_ptr) faults_init_phase0;
    
    // [VfIrpDatabaseInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9dea74, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dda74, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) irp_database_init;
    
    // [VfIsDriverSuspect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c0534, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf534, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) is_driver_suspect;
    
    // [VfKeIrqlLogRaise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGEVRFY:0x715d1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1cb0, 0x1fd000 bytes
    //
    _p37(sdk::unknown_ptr) ke_irql_log_raise;
    
    // [VfNotifyDifPlugins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c69a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c59a8, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) notify_dif_plugins;
    
    // [VfPoolInitPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9de140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd140, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) pool_init_phase0;
    
    // [VfUtilFillPluginRequestedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c4660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3660, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) util_fill_plugin_requested_data;
    
    // [VfUtilGetAvailableSystemPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c46e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c36e0, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) util_get_available_system_pages;
    
    // [VfUtilGetDifPluginDriverData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59a790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59a610, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) util_get_dif_plugin_driver_data;
    
    // [VfUtilGetSPAllocSizeLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c0040, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf040, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) util_get_sp_alloc_size_limit;
    
    // [VfUtilIsSpecialPoolAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c48e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c38e0, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) util_is_special_pool_address;
    
    // [VfUtilUpdateSpecialPoolSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c4b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3b90, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) util_update_special_pool_setting;
    
    // [VfAllocateCommonBufferVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c8c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab11f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7c00, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) allocate_common_buffer_vector;
    
    // [VfAllocateCommonBufferWithBounds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c8ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7ca0, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) allocate_common_buffer_with_bounds;
    
    // [VfClearVerifierSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59a310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b93ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a190, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) clear_verifier_settings;
    
    // [VfClearanceFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d194, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e54, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca84, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) clearance_flag;
    
    // [VfCtxHookAndConnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ca74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1f5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0f5c, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) ctx_hook_and_connect_interrupt;
    
    // [VfCtxHookAndConnectInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71cb50, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1050, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) ctx_hook_and_connect_interrupt_ex;
    
    // [VfDeadlockAfterCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716be8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbc64, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dac64, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) deadlock_after_call_driver;
    
    // [VfDeadlockBeforeCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716c50, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbcd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dacd4, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) deadlock_before_call_driver;
    
    // [VfDifCaptureDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x379c84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339168, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b004, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) dif_capture_driver_entry;
    
    // [VfDifCaptureIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x379c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339144, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37afe0, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) dif_capture_io_callbacks;
    
    // [VF_FIND_BUFFER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c81e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab07a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c71e8, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) find_buffer;
    
    // [VfFreeCommonBufferFromVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c9c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2350, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8c60, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) free_common_buffer_from_vector;
    
    // [VfFreeCommonBufferVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c9cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab23a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8cb0, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) free_common_buffer_vector;
    
    // [VfFreePoolNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713998, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de024, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd024, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) free_pool_notification;
    
    // [VfGetCommonBufferFromVectorByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c9df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2500, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8df0, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) get_common_buffer_from_vector_by_index;
    
    // [VfHalVerifierInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70abac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca708, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9708, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) hal_verifier_initialize;
    
    // [VfIsRuleClassEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c4020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa95f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3020, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) is_rule_class_enabled;
    
    // [VfKeInsertQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715cd8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8db0, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) ke_insert_queue_dpc;
    
    // [VfKeRemoveQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715da0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8e70, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) ke_remove_queue_dpc;
    
    // [VfLookasideInitializeInternalNPagedList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701344, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0758, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf758, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) lookaside_initialize_internal_n_paged_list;
    
    // [VfMandatoryThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75c460, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e150, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e150, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) mandatory_thunks;
    
    // [VfNotifyVerifierExtensions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707e30, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6a88, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5a88, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) notify_verifier_extensions;
    
    // [VfOrderDependentThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75d390, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3f1e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3f1e0, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) order_dependent_thunks;
    
    // [VfOrderDependentThunksBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f350, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47550, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47550, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) order_dependent_thunks_bit_map;
    
    // [VfOrderDependentThunksBitMapHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f228, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463c0, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) order_dependent_thunks_bit_map_header;
    
    // [VfPersistentStateRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc01fc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc03658, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02008, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) persistent_state_root;
    
    // [VfProtectedDriverNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa6d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b96f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b86f0, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) protected_driver_names;
    
    // [VfQueryThreadContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222604, 0x32828 bytes
    // ntoskrnl.exe .text:0x59aa10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59a890, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) query_thread_context;
    
    // [VfRuleClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4b68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b68, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) rule_classes;
    
    // [VfRuleClassesRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1ca18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca90, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) rule_classes_record;
    
    // [VfRuleClassesSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12068, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120c8, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) rule_classes_size;
    
    // [VfRuleViolationStackSavedArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd4dd00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd78650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4dd00, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) rule_violation_stack_saved_area;
    
    // [VfSetIoBuildRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f0dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf6d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce6d8, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) set_io_build_request;
    
    // [VfThunkAdjustExportAddressIfHooked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712340, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d69a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d59a4, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) thunk_adjust_export_address_if_hooked;
    
    // [VfThunkApplyMandatoryThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7124ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5b1c, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) thunk_apply_mandatory_thunks;
    
    // [VfThunkApplyThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71257c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6c04, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5c04, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) thunk_apply_thunks;
    
    // [VfThunkFindExportAddressAllTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78bd8c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa479b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa41d98, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) thunk_find_export_address_all_tables;
    
    // [VfThunkInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78c028, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa47c4c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa42034, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) thunk_init;
    
    // [VfTriageContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d3f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d270, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) triage_context;
    
    // [VfUtilAddressRangeRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705c28, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4384, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3384, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) util_address_range_remove;
    
    // [VfUtilCaptureViolationKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c43f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae490, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c33f0, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) util_capture_violation_kernel_stack;
    
    // [VfUtilCheckKernelAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705c74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c458c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c358c, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) util_check_kernel_address;
    
    // [VfUtilCheckRuleEnforcement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c45dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae634, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c35dc, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) util_check_rule_enforcement;
    
    // [VfUtilGetDriverName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c4770, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3770, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) util_get_driver_name;
    
    // [VfUtilGetOriginalAddDeviceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9bff90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa92e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bef90, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) util_get_original_add_device_callback;
    
    // [VfUtilGetOriginalDriverInitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9bffb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa9300, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9befb0, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) util_get_original_driver_init_callback;
    
    // [VfUtilGetOriginalDriverUnloadCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9bffd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa9320, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9befd0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) util_get_original_driver_unload_callback;
    
    // [VfUtilGetOriginalIrpMajorCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9bfff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa9340, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9beff0, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) util_get_original_irp_major_callback;
    
    // [VfUtilGetOriginalStartIoCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c0020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa9370, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf020, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) util_get_original_start_io_callback;
    
    // [VfUtilGetSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c47a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c37a0, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) util_get_signing_level;
    
    // [VfUtilIsBootDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c47c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c37c0, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) util_is_boot_driver;
    
    // [VfUtilSynchronizationObjectSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706078, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4b0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3b0c, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) util_synchronization_object_sanity_checks;
    
    // [VfXdvIoCallbackThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75d170, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3eda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3eda0, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) xdv_io_callback_thunks;
    
    // [VfXdvThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75fd20, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd42410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd42410, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) xdv_thunks;
    
    // [VfXdvThunksBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f448, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47688, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47688, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) xdv_thunks_bit_map;
    
    // [VfXdvThunksBitMapHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f238, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463d0, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) xdv_thunks_bit_map_header;
    
    // [VfZwAccessCheckAndAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720140, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6070, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5070, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) zw_access_check_and_audit_alarm;
    
    // [VfZwAddBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72023c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5190, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) zw_add_boot_entry;
    
    // [VfZwAddDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720294, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6200, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5200, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) zw_add_driver_entry;
    
    // [VfZwAdjustPrivilegesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7202ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6270, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5270, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) zw_adjust_privileges_token;
    
    // [VfZwAllocateVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72038c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6320, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5320, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) zw_allocate_virtual_memory;
    
    // [VfZwAlpcAcceptConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720414, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e63c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e53c0, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) zw_alpc_accept_connect_port;
    
    // [VfZwAlpcConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7204e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e64b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e54b0, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) zw_alpc_connect_port;
    
    // [VfZwAlpcCreatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7205fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6600, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5600, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) zw_alpc_create_port;
    
    // [VfZwAlpcCreatePortSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72066c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6680, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5680, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) zw_alpc_create_port_section;
    
    // [VfZwAlpcCreateResourceReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720700, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6730, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5730, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) zw_alpc_create_resource_reserve;
    
    // [VfZwAlpcCreateSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72075c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e67a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e57a0, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) zw_alpc_create_section_view;
    
    // [VfZwAlpcCreateSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7207a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6800, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5800, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) zw_alpc_create_security_context;
    
    // [VfZwAlpcQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7207f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6860, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5860, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) zw_alpc_query_information;
    
    // [VfZwAlpcSendWaitReceivePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720874, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e68f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e58f0, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) zw_alpc_send_wait_receive_port;
    
    // [VfZwAlpcSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720960, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e69e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e59e0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) zw_alpc_set_information;
    
    // [VfZwCancelIoFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7209bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5a50, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) zw_cancel_io_file;
    
    // [VfZwCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7209fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5aa0, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) zw_cancel_timer;
    
    // [VfZwCloseObjectAuditAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720a3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5af0, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) zw_close_object_audit_alarm;
    
    // [VfZwCommitEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720a8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5b50, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) zw_commit_enlistment;
    
    // [VfZwConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720acc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5ba0, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) zw_connect_port;
    
    // [VfZwCreateDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720bc0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5cb0, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) zw_create_directory_object;
    
    // [VfZwCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720c24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5d20, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) zw_create_enlistment;
    
    // [VfZwCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720ca8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5de0, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) zw_create_event;
    
    // [VfZwCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720d20, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5e70, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) zw_create_file;
    
    // [VfZwCreateJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720de0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5f70, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) zw_create_job_object;
    
    // [VfZwCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720e44, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5fe0, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) zw_create_key;
    
    // [VfZwCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720ef8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e70b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e60b0, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) zw_create_section;
    
    // [VfZwCreateSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x720f94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7170, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6170, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) zw_create_symbolic_link_object;
    
    // [VfZwCreateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721018, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7200, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6200, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) zw_create_timer;
    
    // [VfZwCreateTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721090, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7290, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6290, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) zw_create_transaction;
    
    // [VfZwCreateTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721150, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7390, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6390, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) zw_create_transaction_manager;
    
    // [VfZwDeleteBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7211d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6430, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) zw_delete_boot_entry;
    
    // [VfZwDeleteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721200, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6450, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) zw_delete_file;
    
    // [VfZwDeleteValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721230, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7490, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6490, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) zw_delete_value_key;
    
    // [VfZwDeviceIoControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721270, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e74e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e64e0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) zw_device_io_control_file;
    
    // [VfZwDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721348, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e75e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e65e0, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) zw_display_string;
    
    // [VfZwDuplicateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721378, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7620, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6620, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) zw_duplicate_object;
    
    // [VfZwDuplicateToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7213d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e76b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e66b0, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) zw_duplicate_token;
    
    // [VfZwEnumerateBootEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721458, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7750, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6750, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) zw_enumerate_boot_entries;
    
    // [VfZwEnumerateDriverEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7214b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e77c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e67c0, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) zw_enumerate_driver_entries;
    
    // [VfZwEnumerateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721508, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7830, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6830, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) zw_enumerate_key;
    
    // [VfZwEnumerateValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721588, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e78d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e68d0, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) zw_enumerate_value_key;
    
    // [VfZwFlushInstructionCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721608, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6970, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) zw_flush_instruction_cache;
    
    // [VfZwFlushVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721658, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e79d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e69d0, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) zw_flush_virtual_memory;
    
    // [VfZwFreeVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7216dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6a60, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) zw_free_virtual_memory;
    
    // [VfZwFsControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721754, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6af0, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) zw_fs_control_file;
    
    // [VfZwLoadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72182c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6bf0, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) zw_load_driver;
    
    // [VfZwLoadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72185c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6c30, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) zw_load_key;
    
    // [VfZwMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7218b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6ca0, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) zw_map_view_of_section;
    
    // [VfZwModifyBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721978, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6d90, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) zw_modify_boot_entry;
    
    // [VfZwModifyDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7219a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6dd0, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) zw_modify_driver_entry;
    
    // [VfZwNotifyChangeKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7219d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6e10, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) zw_notify_change_key;
    
    // [VfZwOpenDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721aac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6f20, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) zw_open_directory_object;
    
    // [VfZwOpenEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721b10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e6f90, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) zw_open_enlistment;
    
    // [VfZwOpenEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721b90, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7020, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) zw_open_event;
    
    // [VfZwOpenFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721bf4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7090, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) zw_open_file;
    
    // [VfZwOpenJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721c78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8130, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7130, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) zw_open_job_object;
    
    // [VfZwOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721cdc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e81a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e71a0, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) zw_open_key;
    
    // [VfZwOpenProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721d40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8210, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7210, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) zw_open_process;
    
    // [VfZwOpenProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721dc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e82a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e72a0, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) zw_open_process_token;
    
    // [VfZwOpenProcessTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721e10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8300, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7300, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) zw_open_process_token_ex;
    
    // [VfZwOpenSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721e6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8370, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7370, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) zw_open_section;
    
    // [VfZwOpenSymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721ed0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e83e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e73e0, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) zw_open_symbolic_link_object;
    
    // [VfZwOpenThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721f34, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7450, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) zw_open_thread;
    
    // [VfZwOpenThreadToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x721fb8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e84e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e74e0, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) zw_open_thread_token;
    
    // [VfZwOpenThreadTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722014, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8550, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7550, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) zw_open_thread_token_ex;
    
    // [VfZwOpenTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722084, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e85d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e75d0, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) zw_open_timer;
    
    // [VfZwOpenTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7220e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8640, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7640, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) zw_open_transaction;
    
    // [VfZwOpenTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72216c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e86e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e76e0, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) zw_open_transaction_manager;
    
    // [VfZwPowerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722200, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7790, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) zw_power_information;
    
    // [VfZwPrePrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722278, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8820, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7820, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) zw_pre_prepare_enlistment;
    
    // [VfZwPrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7222b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8870, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7870, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) zw_prepare_complete;
    
    // [VfZwPrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7222f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e88c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e78c0, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) zw_prepare_enlistment;
    
    // [VfZwProtectVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722338, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8910, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7910, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) zw_protect_virtual_memory;
    
    // [VfZwPulseEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7223cc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e89b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e79b0, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) zw_pulse_event;
    
    // [VfZwQueryBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72240c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7a00, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) zw_query_boot_entry_order;
    
    // [VfZwQueryBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722464, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7a70, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) zw_query_boot_options;
    
    // [VfZwQueryDefaultLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7224bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7ae0, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) zw_query_default_locale;
    
    // [VfZwQueryDefaultUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7224fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7b30, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) zw_query_default_ui_language;
    
    // [VfZwQueryDirectoryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72252c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7b70, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) zw_query_directory_file;
    
    // [VfZwQueryDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722604, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7c80, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) zw_query_directory_object;
    
    // [VfZwQueryDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7226b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7d40, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) zw_query_driver_entry_order;
    
    // [VfZwQueryEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722708, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7db0, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) zw_query_ea_file;
    
    // [VfZwQueryFullAttributesFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7227b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7e90, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) zw_query_full_attributes_file;
    
    // [VfZwQueryInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72280c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7f00, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) zw_query_information_enlistment;
    
    // [VfZwQueryInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72288c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e7f90, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) zw_query_information_file;
    
    // [VfZwQueryInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722904, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8020, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) zw_query_information_job_object;
    
    // [VfZwQueryInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722984, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e90b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e80b0, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) zw_query_information_process;
    
    // [VfZwQueryInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722a04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8140, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) zw_query_information_thread;
    
    // [VfZwQueryInformationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722a84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e91d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e81d0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) zw_query_information_token;
    
    // [VfZwQueryInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722b04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9260, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8260, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) zw_query_information_transaction;
    
    // [VfZwQueryInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722b84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e92f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e82f0, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) zw_query_information_transaction_manager;
    
    // [VfZwQueryInstallUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722c04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9380, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8380, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) zw_query_install_ui_language;
    
    // [VfZwQueryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722c34, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e93c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e83c0, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) zw_query_key;
    
    // [VfZwQueryLicenseValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722cb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8450, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) zw_query_license_value;
    
    // [VfZwQueryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722d48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e94f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e84f0, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) zw_query_object;
    
    // [VfZwQuerySection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722dc8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9580, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8580, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) zw_query_section;
    
    // [VfZwQuerySecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722e48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9610, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8610, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) zw_query_security_object;
    
    // [VfZwQuerySymbolicLinkObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722ec8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e96a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e86a0, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) zw_query_symbolic_link_object;
    
    // [VfZwQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722f30, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9720, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8720, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) zw_query_system_information;
    
    // [VfZwQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x722fa8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e97b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e87b0, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) zw_query_value_key;
    
    // [VfZwQueryVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723030, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9860, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8860, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) zw_query_volume_information_file;
    
    // [VfZwReadFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7230a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e98f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e88f0, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) zw_read_file;
    
    // [VfZwRemoveIoCompletionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7231a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8a00, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) zw_remove_io_completion_ex;
    
    // [VfZwReplaceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723228, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9ab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8ab0, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) zw_replace_key;
    
    // [VfZwRequestWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723290, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8b30, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) zw_request_wait_reply_port;
    
    // [VfZwResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7232f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8bb0, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) zw_reset_event;
    
    // [VfZwRestoreKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723338, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8c00, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) zw_restore_key;
    
    // [VfZwRollbackEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723340, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8c20, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) zw_rollback_enlistment;
    
    // [VfZwSetBootEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723380, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9c70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8c70, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) zw_set_boot_entry_order;
    
    // [VfZwSetBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7233bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8cc0, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) zw_set_boot_options;
    
    // [VfZwSetDriverEntryOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7233f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8d10, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) zw_set_driver_entry_order;
    
    // [VfZwSetEaFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723434, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8d60, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) zw_set_ea_file;
    
    // [VfZwSetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7234ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8df0, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) zw_set_event;
    
    // [VfZwSetInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7234ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8e40, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) zw_set_information_enlistment;
    
    // [VfZwSetInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723548, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8eb0, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) zw_set_information_file;
    
    // [VfZwSetInformationJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7235c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8f40, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) zw_set_information_job_object;
    
    // [VfZwSetInformationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72361c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e8fb0, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) zw_set_information_object;
    
    // [VfZwSetInformationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723678, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9020, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) zw_set_information_process;
    
    // [VfZwSetInformationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7236d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9090, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) zw_set_information_thread;
    
    // [VfZwSetInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723730, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea100, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9100, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) zw_set_information_transaction;
    
    // [VfZwSetSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72378c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea170, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9170, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) zw_set_security_object;
    
    // [VfZwSetSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7237d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea1d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e91d0, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) zw_set_system_information;
    
    // [VfZwSetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723824, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea230, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9230, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) zw_set_system_time;
    
    // [VfZwSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x72387c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea2a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e92a0, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) zw_set_timer;
    
    // [VfZwSetValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723918, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea360, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9360, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) zw_set_value_key;
    
    // [VfZwSetVolumeInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723998, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea400, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9400, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) zw_set_volume_information_file;
    
    // [VfZwTranslateFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723a10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea490, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9490, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) zw_translate_file_path;
    
    // [VfZwUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723a94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea520, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9520, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) zw_unload_driver;
    
    // [VfZwUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723ac4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea560, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9560, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) zw_unload_key;
    
    // [VfZwWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723af4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea5a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e95a0, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) zw_wait_for_multiple_objects;
    
    // [VfZwWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723b74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea630, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9630, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) zw_wait_for_single_object;
    
    // [VfZwWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723bc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea690, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9690, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) zw_write_file;
    
    // [VfAddVerifierEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723e78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea978, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9630, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9978, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) add_verifier_entry;
    
    // [VfAfterCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e910, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cee84, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab93d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cde84, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) after_call_driver;
    
    // [VfAllocateAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709210, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c85c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab0b90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c75c0, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) allocate_adapter_channel;
    
    // [VfAllocateAdapterChannelEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7093d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab0de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7810, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) allocate_adapter_channel_ex;
    
    // [VfAllocateCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7095b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7a70, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) allocate_common_buffer;
    
    // [VfAllocateCommonBufferEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70965c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1110, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7b20, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) allocate_common_buffer_ex;
    
    // [VfAllocateCrashDumpRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7096e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1380, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7d90, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) allocate_crash_dump_registers;
    
    // [VfAllocateDomainCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222790, 0x32828 bytes
    // ntoskrnl.exe .text:0x59aee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ad60, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) allocate_domain_common_buffer;
    
    // [VfAmdkmpagServiceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa0f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9108, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2130, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b80f8, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) amdkmpag_service_name;
    
    // [VF_ASSERT_IRQL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708f98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c80ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab06ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c70ec, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) assert_irql;
    
    // [VF_ASSERT_MAX_IRQL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709010, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c816c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab072c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c716c, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) assert_max_irql;
    
    // [VfAvlCleanupLockContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b70c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d5c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e944, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) avl_cleanup_lock_context;
    
    // [VfAvlDeleteTreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d364, 0x32828 bytes
    // ntoskrnl.exe .text:0x36e164, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208b14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f4e4, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) avl_delete_tree_node;
    
    // [VfAvlEnumerateNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7198e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de608, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac82a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd608, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) avl_enumerate_nodes;
    
    // [VfAvlInitializeLockContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b888, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c604, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4646d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c484, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) avl_initialize_lock_context;
    
    // [VfAvlInitializeTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2239c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c61c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bd1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c49c, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) avl_initialize_tree;
    
    // [VfAvlInitializeTreeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70123c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0644, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa93e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf644, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) avl_initialize_tree_ex;
    
    // [VfAvlInsertReservedTreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b73c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3395c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e990, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) avl_insert_reserved_tree_node;
    
    // [VfAvlLookupTreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d414, 0x32828 bytes
    // ntoskrnl.exe .text:0x36e220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f5a0, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) avl_lookup_tree_node;
    
    // [VfAvlReserveNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b89c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36eb10, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) avl_reserve_node;
    
    // [VfBeforeCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ead8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf078, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab95ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce078, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) before_call_driver;
    
    // [VfBTSDataManagementArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x730980, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd49100, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd71650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd49100, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) bts_data_management_area;
    
    // [VfBTSInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f07c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46074, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e55c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46074, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) bts_initialized;
    
    // [VfBTSProcessorFamily]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b048, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6502c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e020, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) bts_processor_family;
    
    // [VfBTSStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x732280, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4c900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd76650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4c900, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) bts_started;
    
    // [VfBTSSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e598, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460bc, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) bts_supported;
    
    // [VfBugCheckNoStackUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2230f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b9d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bae10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b858, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) bug_check_no_stack_usage;
    
    // [VfBugcheckTmpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f028, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46028, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46028, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) bugcheck_tmp_data;
    
    // [VfBugcheckTmpDataLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f020, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46058, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e530, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46058, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) bugcheck_tmp_data_lock;
    
    // [VfBuildMdlFromScatterGatherList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709774, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1460, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7e30, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) build_mdl_from_scatter_gather_list;
    
    // [VfBuildScatterGatherList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7098c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8000, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) build_scatter_gather_list;
    
    // [VfBuildScatterGatherListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709b9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9360, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab19b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8360, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) build_scatter_gather_list_ex;
    
    // [VfCalculateScatterGatherListSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709d50, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9520, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8520, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) calculate_scatter_gather_list_size;
    
    // [VfCancelAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709da0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9590, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8590, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) cancel_adapter_channel;
    
    // [VfCancelMappedTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709e5c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8660, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) cancel_mapped_transfer;
    
    // [VfCheckForLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a598, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df4c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xace178, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de4c8, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) check_for_lookaside;
    
    // [VfCheckForResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b1d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e043c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad038c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df43c, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) check_for_resource;
    
    // [VfCheckImageCompliance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706d48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c591c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf49c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c491c, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) check_image_compliance;
    
    // [VfCheckNxPagePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2223e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a630, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) check_nx_page_priority;
    
    // [VfCheckNxPageProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2223fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a650, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) check_nx_page_protection;
    
    // [VfCheckNxPoolType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222414, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a7f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a670, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) check_nx_pool_type;
    
    // [VfCheckPagePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7071a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5c14, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4c14, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) check_page_priority;
    
    // [VfCheckPageProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707240, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5cbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf848, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4cbc, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) check_page_protection;
    
    // [VfCheckPoolType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7072e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5d64, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf8f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4d64, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) check_pool_type;
    
    // [VfCheckUserHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7147a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8134, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabfce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7134, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) check_user_handle;
    
    // [VfConfigureAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709e8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c96a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c86a0, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) configure_adapter_channel;
    
    // [VfCscServiceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa108, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b90d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2100, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8128, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) csc_service_name;
    
    // [VfCtxInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71cbec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e211c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad09b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e111c, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) ctx_init;
    
    // [VfDeadlockAcquireResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716510, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db578, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2dac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da578, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) deadlock_acquire_resource;
    
    // [VfDeadlockDeleteMemoryRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716d4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbde0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac6ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dade0, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) deadlock_delete_memory_range;
    
    // [VfDeadlockInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716df4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbe90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac347c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dae90, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) deadlock_initialize;
    
    // [VfDeadlockInitializeResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7170e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc164, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac3738, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db164, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) deadlock_initialize_resource;
    
    // [VfDeadlockReleaseResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71725c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc2e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac3ecc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db2e8, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) deadlock_release_resource;
    
    // [VfDevObjAdjustFdoForVerifierFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7106d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2f60, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) dev_obj_adjust_fdo_for_verifier_filters;
    
    // [VfDevObjIsDeviceRemoved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7106f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3f88, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe0a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2f88, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) dev_obj_is_device_removed;
    
    // [VfDevObjMarkDeviceRemoved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710758, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3ff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe118, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2ff8, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) dev_obj_mark_device_removed;
    
    // [VfDevObjPostAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7107a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4054, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe174, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3054, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) dev_obj_post_add_device;
    
    // [VfDevObjPreAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7107f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d40a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe1c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d30a8, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) dev_obj_pre_add_device;
    
    // [VfDisableCodeIntegrityBreaks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7073a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf9bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4e30, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) disable_code_integrity_breaks;
    
    // [VfDisableHalVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222870, 0x32828 bytes
    // ntoskrnl.exe .text:0x59afc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9de8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ae48, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) disable_hal_verifier;
    
    // [VfDriverEnableVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707af8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6620, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6498, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5620, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) driver_enable_verifier;
    
    // [VfDriverEnableVerifierForAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707c74, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c67b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6618, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c57b8, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) driver_enable_verifier_for_all;
    
    // [VfDriverInitStarting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701168, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bff74, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa92b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bef74, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) driver_init_starting;
    
    // [VfDriverInitSuccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70122c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c07bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa9508, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf7bc, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) driver_init_success;
    
    // [VfDriverIsKernelImageAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707d68, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c68c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6714, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c58c0, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) driver_is_kernel_image_address;
    
    // [VfDriverLoadBootDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78bd38, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa47954, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb404d8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa41d3c, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) driver_load_boot_drivers;
    
    // [VfDriverLoadImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x700d58, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c00a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa921c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf0a0, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) driver_load_image;
    
    // [VfDriverLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70142c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c05c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab673c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf5c8, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) driver_lock;
    
    // [VfDriverUnloadImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701170, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c04c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa8e04, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf4c4, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) driver_unload_image;
    
    // [VfDriverUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707d8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c68ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c58ec, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) driver_unlock;
    
    // [VfErrorBugcheckData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f420, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6f990, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47660, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) error_bugcheck_data;
    
    // [VfErrorBugcheckDataReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f13c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4617c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e624, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4617c, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) error_bugcheck_data_ready;
    
    // [VfErrorReleaseTriageInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701488, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf554, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4fa8, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) error_release_triage_information;
    
    // [VfErrorReport7]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711a4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf564, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4fd0, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) error_report7;
    
    // [VfErrorReport8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711adc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6068, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf5fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5068, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) error_report8;
    
    // [VfErrorStoreTriageInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711b60, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d616c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf684, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d516c, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) error_store_triage_information;
    
    // [VfExcludeSections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5b88, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0ef50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09488, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0ef90, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) exclude_sections;
    
    // [VfExcludedDriversList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301610, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36920, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb10, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) excluded_drivers_list;
    
    // [VfFailDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fe74, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3c70, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) fail_device_node;
    
    // [VfFailDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22242c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a690, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) fail_driver;
    
    // [VfFailSystemBIOS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222454, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a6c0, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) fail_system_bios;
    
    // [VfFastIoCheckState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7088f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c79b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7204, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c69b4, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) fast_io_check_state;
    
    // [VfFastIoSnapState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7089a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7a8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab72dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6a8c, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) fast_io_snap_state;
    
    // [VfFaultInjectionBootMinutes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1205c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120bc, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) fault_injection_boot_minutes;
    
    // [VfFaultInjectionMaxProbability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa918, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12b90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0db90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12c00, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) fault_injection_max_probability;
    
    // [VfFaultInjectionProbability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c64, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12060, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120c0, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) fault_injection_probability;
    
    // [VfFaultsInjectPoolAllocationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713d70, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da6fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d96fc, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) faults_inject_pool_allocation_failure;
    
    // [VfFaultsInjectResourceFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713df0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da7dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1fac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d97dc, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) faults_inject_resource_failure;
    
    // [VfFaultsIsSystemSufficientlyBooted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713f24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da918, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac20e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9918, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) faults_is_system_sufficiently_booted;
    
    // [VfFaultsSetParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713f7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da978, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2148, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9978, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) faults_set_parameters;
    
    // [VfFillAllocatePagesForMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f79c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5488, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacf9b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4488, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) fill_allocate_pages_for_mdl;
    
    // [VfFillAllocatedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713920, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddfa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac600c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcfa4, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) fill_allocated_memory;
    
    // [VfFilterAttach]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71db04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2ea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb20c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1ea4, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) filter_attach;
    
    // [VfFilterCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f150, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4618c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e634, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4618c, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) filter_created;
    
    // [VfFilterDriverObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301670, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1caf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36948, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb90, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) filter_driver_object;
    
    // [VF_FIND_DEVICE_INFORMATION_AND_REMOVE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709088, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8328, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab08ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7328, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) find_device_information_and_remove;
    
    // [VF_FIND_INACTIVE_ADAPTER_AND_REMOVE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709108, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8414, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab09dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7414, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) find_inactive_adapter_and_remove;
    
    // [VfFlightOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3426a4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d1a4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d02c, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) flight_options;
    
    // [VfFlushAdapterBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709ec8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c96f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c86f0, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) flush_adapter_buffers;
    
    // [VfFlushAdapterBuffersEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a060, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c98a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab1f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c88a0, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) flush_adapter_buffers_ex;
    
    // [VfFlushDmaBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2228ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ae90, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) flush_dma_buffer;
    
    // [VfForcedPendingIrps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301678, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cad8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36afc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb88, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) forced_pending_irps;
    
    // [VfForcedPendingLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301680, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cca8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb80, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) forced_pending_log;
    
    // [VfForcedPendingLogLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa920, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12b98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0db98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12c08, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) forced_pending_log_length;
    
    // [VfFreeAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a0fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9950, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2030, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8950, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) free_adapter_channel;
    
    // [VfFreeAdapterObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a19c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab20e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8a00, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) free_adapter_object;
    
    // [VfFreeCapturedUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705898, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3fbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae0c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2fbc, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) free_captured_unicode_string;
    
    // [VfFreeCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a2b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8b90, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) free_common_buffer;
    
    // [VfFreeMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a368, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2400, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8cf0, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) free_map_registers;
    
    // [VfFreeMemoryNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7058b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae0e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2fe0, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) free_memory_notification;
    
    // [VfGetDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a458, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2560, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c8e60, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) get_dma_adapter;
    
    // [VfGetDmaAdapterInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a570, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9000, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) get_dma_adapter_info;
    
    // [VfGetDmaAlignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a5a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca040, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2740, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9040, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) get_dma_alignment;
    
    // [VfGetDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2228ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9e50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59aee0, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) get_dma_domain;
    
    // [VfGetDmaTransferInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a5d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca080, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2790, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9080, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) get_dma_transfer_info;
    
    // [VfGetHookAddressForOriginal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707da8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6918, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab688c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5918, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) get_hook_address_for_original;
    
    // [VfGetPristineDispatchRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e894, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ceccc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab91fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdccc, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) get_pristine_dispatch_routine;
    
    // [VfGetPristineDriverInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70e8dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ced1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab924c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdd1c, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) get_pristine_driver_init;
    
    // [VfGetScatterGatherList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a628, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2800, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c90f0, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) get_scatter_gather_list;
    
    // [VfGetScatterGatherListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70a964, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c94b0, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) get_scatter_gather_list_ex;
    
    // [VfGetVerifierInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723f40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9eaa54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bd608, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9a54, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) get_verifier_information;
    
    // [VfGetVerifierInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723fe8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9eab1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9778, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9b1c, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) get_verifier_information_ex;
    
    // [VfHalAllocateMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70aae4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca640, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9640, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) hal_allocate_map_registers;
    
    // [VfHandleTracingEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12074, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd14, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120d4, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) handle_tracing_entries;
    
    // [VfInitBootDriversLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78bc54, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa47854, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40100, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa41c3c, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) init_boot_drivers_loaded;
    
    // [VfInitSetVerifyDriverTargets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdb30, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa923d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb829cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa915bc, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) init_set_verify_driver_targets;
    
    // [VfInitSystemNoRebootNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706204, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaece8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3d40, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) init_system_no_reboot_needed;
    
    // [VfInitVerifierComponents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706330, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaee40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3e70, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) init_verifier_components;
    
    // [VfInitializeBranchTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711d1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6344, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5344, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) initialize_branch_tracing;
    
    // [VfInitializeDmaTransferContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ac40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca7b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c97b0, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) initialize_dma_transfer_context;
    
    // [VfInitializedWithoutReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b14, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cad0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb20, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) initialized_without_reboot;
    
    // [VfInsertContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222488, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b99d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a700, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) insert_context;
    
    // [VfIoAllocateIrp2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ec1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf1c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9760, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce1c8, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) io_allocate_irp2;
    
    // [VfIoCompletionCheckState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7089f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7adc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab732c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6adc, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) io_completion_check_state;
    
    // [VfIoDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710840, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d40f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe214, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d30f4, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) io_delete_device;
    
    // [VfIoDetachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7109ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d41d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe398, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d31d4, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) io_detach_device;
    
    // [VfIoDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b008, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65000, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e000, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) io_disabled;
    
    // [VfIoFreeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ec98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf24c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab97e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce24c, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) io_free_irp;
    
    // [VfIoInitializeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ee30, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf404, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab999c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce404, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) io_initialize_irp;
    
    // [VfIoSwitchedOffNoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b78, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d3f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e64, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d440, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) io_switched_off_no_reboot;
    
    // [VfIrpAllocateCallDriverData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70eed8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9a48, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce4b0, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) irp_allocate_call_driver_data;
    
    // [VfIrpDatabaseCheckExFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719988, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de6bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac876, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd6bc, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) irp_database_check_ex_free_pool;
    
    // [VfIrpDatabaseEntryFindAndLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719a10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de758, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacd768, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd758, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) irp_database_entry_find_and_lock;
    
    // [VfIrpDatabaseEntryInsertAndLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719ab4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de808, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacd818, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd808, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) irp_database_entry_insert_and_lock;
    
    // [VfIrpDatabaseEntryReleaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719b8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de8dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacd8ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd8dc, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) irp_database_entry_release_lock;
    
    // [VfIrpDatabaseInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301840, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccb4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd40, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) irp_database_initialized;
    
    // [VfIrpLogDeleteDeviceLogs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c390, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e16a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac8750, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e06a0, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) irp_log_delete_device_logs;
    
    // [VfIrpLogLockDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c420, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1794, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac8844, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0794, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) irp_log_lock_database;
    
    // [VfIrpLogRecordEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c46c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1848, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac88fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0848, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) irp_log_record_event;
    
    // [VfIrpLogRetrieveWmiData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c644, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1a98, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac8b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0a98, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) irp_log_retrieve_wmi_data;
    
    // [VfIrpLogUnlockDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c924, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1d8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac8e30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0d8c, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) irp_log_unlock_database;
    
    // [VfIrpSendSynchronousIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ef30, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf510, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9aa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce510, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) irp_send_synchronous_irp;
    
    // [VfIrpWatermark]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f0a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf69c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce69c, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) irp_watermark;
    
    // [VfIsPCIBus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ac70, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca7e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2e74, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c97e8, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) is_pci_bus;
    
    // [VfIsVerificationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3cb0, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) is_verification_enabled;
    
    // [VfIsVerificationEnabledForImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222384, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a6e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9788, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a568, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) is_verification_enabled_for_image;
    
    // [VfIsVerifierEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x271690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323220, 0x1fe000 bytes
    //
    _s91(sdk::function<uint32_t()>*) is_verifier_enabled;
    
    // [VfIsVerifierExtensionEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f0c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a714, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b97b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a594, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) is_verifier_extension_enabled;
    
    // [VfJoinDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22290c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59af10, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) join_dma_domain;
    
    // [VfKeCheckForChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715bb0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9ca8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8ca8, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) ke_check_for_changes;
    
    // [VfKeCriticalRegionTraces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f180, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461d0, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) ke_critical_region_traces;
    
    // [VfKeCriticalRegionTracesIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2a4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46424, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e63c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46424, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) ke_critical_region_traces_index;
    
    // [VfKeCriticalRegionTracesLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b01c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e030, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e030, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) ke_critical_region_traces_length;
    
    // [VfKeIrqlTransitionReserveLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715d40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8e00, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) ke_irql_transition_reserve_log_entry;
    
    // [VfKernelImageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa080, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9040, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2038, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8040, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) kernel_image_name;
    
    // [VfKsDllBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f118, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46138, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e600, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46140, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) ks_dll_base;
    
    // [VfKsName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa070, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b90a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2068, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8090, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) ks_name;
    
    // [VfKsSizeOfImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f138, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46174, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e61c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46174, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) ks_size_of_image;
    
    // [VfLeaveDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22293c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b0d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59af50, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) leave_dma_domain;
    
    // [VfMajorAdvanceIrpStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7113e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d58c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabee6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d48c8, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) major_advance_irp_status;
    
    // [VfMajorBuildIrpLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711480, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabef14, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4970, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) major_build_irp_log_entry;
    
    // [VfMajorIsNewRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711514, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabefd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4a10, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) major_is_new_request;
    
    // [VfMajorIsValidIrpStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71158c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf058, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4a90, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) major_is_valid_irp_status;
    
    // [VfMajorRegisterHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7115fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5b0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf0d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4b0c, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) major_register_handlers;
    
    // [VfMajorTestStartedPdoStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711690, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5ba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf164, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4ba4, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) major_test_started_pdo_stack;
    
    // [VfMajorVerifyFinalIrpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71170c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5c2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf1d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4c2c, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) major_verify_final_irp_stack;
    
    // [VfMajorVerifyIrpStackDownward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711778, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5ca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf250, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4ca4, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) major_verify_irp_stack_downward;
    
    // [VfMajorVerifyIrpStackUpward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711844, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5d78, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf324, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4d78, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) major_verify_irp_stack_upward;
    
    // [VfMajorVerifyNewIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7118f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5e34, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf3e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4e34, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) major_verify_new_irp;
    
    // [VfMajorVerifyNewRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71199c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5ee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf490, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4ee4, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) major_verify_new_request;
    
    // [VfMapTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70acf0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca870, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab2f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9870, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) map_transfer;
    
    // [VfMapTransferEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ae98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9caa30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab30b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9a30, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) map_transfer_ex;
    
    // [VF_MARK_FOR_DEFERRED_REMOVE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x709194, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c850c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab0ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c750c, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) mark_for_deferred_remove;
    
    // [VfMrxsmbDllBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f108, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46128, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46128, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) mrxsmb_dll_base;
    
    // [VfMrxsmbName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa030, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2078, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8050, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) mrxsmb_name;
    
    // [VfMrxsmbSizeOfImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f130, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46168, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e618, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4616c, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) mrxsmb_size_of_image;
    
    // [VfMupServiceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa118, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b90e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2110, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b80e8, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) mup_service_name;
    
    // [VfNotifyOfHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70afec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cab8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3218, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9b8c, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) notify_of_hibernate;
    
    // [VfNotifyVerifierOfEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7058e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae120, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3050, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) notify_verifier_of_event;
    
    // [VfObjectContextInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707934, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6408, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaff94, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5408, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) object_context_init;
    
    // [VfOptionFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301384, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d198, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d020, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) option_flags;
    
    // [VfPacketCreateAndLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a9c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df968, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac900c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de968, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) packet_create_and_lock;
    
    // [VfPendingCheckForChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70feb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d369c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabd7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d269c, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) pending_check_for_changes;
    
    // [VfPendingFinishLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ff24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3714, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabd828, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2714, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) pending_finish_logging;
    
    // [VfPendingInitPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ff54, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d374c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabd860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d274c, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) pending_init_phase1;
    
    // [VfPendingMoreProcessingRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710050, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3850, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabd970, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2850, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) pending_more_processing_required;
    
    // [VfPendingShouldForce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71015c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d396c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabda8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d296c, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) pending_should_force;
    
    // [VfPendingStartLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710268, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabdb98, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2a80, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) pending_start_logging;
    
    // [VfPnpAdvanceIrpStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b414, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e06c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad2b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df6c0, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) pnp_advance_irp_status;
    
    // [VfPnpDumpIrpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b440, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e06f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad2b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df6f0, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) pnp_dump_irp_stack;
    
    // [VfPnpIsSystemRestrictedIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b63c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e08d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad2d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df8d0, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) pnp_is_system_restricted_irp;
    
    // [VfPnpTestStartedPdoStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b6c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0960, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad2df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df960, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) pnp_test_started_pdo_stack;
    
    // [VfPnpVerifyIrpStackDownward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b8ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad2fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfb90, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) pnp_verify_irp_stack_downward;
    
    // [VfPnpVerifyIrpStackUpward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ba78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3140, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfd20, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) pnp_verify_irp_stack_upward;
    
    // [VfPnpVerifyNewRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71bc6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3350, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dff10, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) pnp_verify_new_request;
    
    // [VfPoolCheckForLeaks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713a0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac608c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd0d0, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) pool_check_for_leaks;
    
    // [VfPoolDelayFreeData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33f520, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec8c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec8c0, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) pool_delay_free_data;
    
    // [VfPoolDelayFreeIfPossible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d324, 0x32828 bytes
    // ntoskrnl.exe .text:0x36e490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f810, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) pool_delay_free_if_possible;
    
    // [VfPoolInitPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713a6c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de1d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6118, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd1d0, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) pool_init_phase1;
    
    // [VfPoolIsInternalFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223644, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c5cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bd12c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c44c, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) pool_is_internal_free;
    
    // [VfPoolThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75c6b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e4a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65620, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e4a0, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) pool_thunks;
    
    // [VfPoolThunksBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f288, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fa08, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46410, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) pool_thunks_bit_map;
    
    // [VfPoolThunksBitMapHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f208, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e710, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463a0, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) pool_thunks_bit_map_header;
    
    // [VfPoolTraces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e560, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460b0, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) pool_traces;
    
    // [VfPoolTracesIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4642c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4642c, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) pool_traces_index;
    
    // [VfPoolTracesLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b004, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e004, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e004, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) pool_traces_length;
    
    // [VfPowerDumpIrpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71bf18, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e11b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3670, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e01b0, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) power_dump_irp_stack;
    
    // [VfPowerIsSystemRestrictedIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71bfe0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1280, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3740, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0280, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) power_is_system_restricted_irp;
    
    // [VfPowerTestStartedPdoStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71bff4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e12a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3760, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e02a0, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) power_test_started_pdo_stack;
    
    // [VfPowerVerifyIrpStackDownward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c054, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1310, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad37c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0310, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) power_verify_irp_stack_downward;
    
    // [VfPowerVerifyIrpStackUpward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c14c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad38b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0410, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) power_verify_irp_stack_upward;
    
    // [VfPowerVerifyNewRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c17c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad38f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0450, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) power_verify_new_request;
    
    // [VfProbeAndCaptureUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705a08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4184, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae240, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3184, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) probe_and_capture_unicode_string;
    
    // [VfProbeAndCaptureUnicodeStringBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705a38, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c41bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae27c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c31bc, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) probe_and_capture_unicode_string_buffer;
    
    // [VfPutDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70b07c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cac30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9c30, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) put_dma_adapter;
    
    // [VfPutScatterGatherList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70b340, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9caf30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab35c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c9f30, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) put_scatter_gather_list;
    
    // [VfQueryDeviceContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222558, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a7d0, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) query_device_context;
    
    // [VfQueryDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22272c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59abf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59aa70, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) query_dispatch_table;
    
    // [VfQueryDriverContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22258c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a810, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) query_driver_context;
    
    // [VfQueryIrpContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2225c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a850, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) query_irp_context;
    
    // [VfRandomGetNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705b00, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4290, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae358, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3290, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) random_get_number;
    
    // [VfRandomTargetsBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f510, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd70180, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47c80, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) random_targets_bit_map;
    
    // [VfRandomTargetsBitMapHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f248, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e678, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461f0, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) random_targets_bit_map_header;
    
    // [VfRandomVerifiedDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f008, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46008, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46008, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) random_verified_drivers;
    
    // [VfRdbssServiceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa0e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b90f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2120, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b80d8, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) rdbss_service_name;
    
    // [VfReadDmaCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70b490, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb170, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3810, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca170, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) read_dma_counter;
    
    // [VfRealHalAllocateMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f1b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46340, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36460, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46340, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) real_hal_allocate_map_registers;
    
    // [VfRegularThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75db10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3faa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd66180, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3faa0, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) regular_thunks;
    
    // [VfRegularThunksBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f4f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47730, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fa10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47730, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) regular_thunks_bit_map;
    
    // [VfRegularThunksBitMapHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f218, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e720, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463b0, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) regular_thunks_bit_map_header;
    
    // [VfRemLockDeleteMemoryRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710e00, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d46bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac1c2, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d36bc, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) rem_lock_delete_memory_range;
    
    // [VfRemLockReportBadReleaseAndWaitTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710e8c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4754, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe86c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3754, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) rem_lock_report_bad_release_and_wait_tag;
    
    // [VfRemLockReportBadReleaseTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710eb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4784, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe89c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3784, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) rem_lock_report_bad_release_tag;
    
    // [VfRemoveContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222640, 0x32828 bytes
    // ntoskrnl.exe .text:0x59aa50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a8d0, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) remove_context;
    
    // [VfRemoveVerifierEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x724030, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9eab64, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac97c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9b64, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) remove_verifier_entry;
    
    // [VfReportIssueWithOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2232a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x59be24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bca4, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) report_issue_with_options;
    
    // [VfSafeMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b04, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36748, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cabc, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) safe_mode;
    
    // [VfSetVerifierInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x724048, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9eab8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac97e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9b8c, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) set_verifier_information;
    
    // [VfSetVerifierInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x724140, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9eac94, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9920, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9c94, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) set_verifier_information_ex;
    
    // [VfSetVerifierRunningMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712e90, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d77b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6d3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d67b0, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) set_verifier_running_mode;
    
    // [VfSettingsApplyMiscellaneousChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719718, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6d64, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd3f0, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) settings_apply_miscellaneous_checks;
    
    // [VfSettingsCheckForChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719730, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de42c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd42c, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) settings_check_for_changes;
    
    // [VfSettingsMiscellaneousChecksInitPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719810, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de528, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd528, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) settings_miscellaneous_checks_init_phase1;
    
    // [VfShutdownScheduleWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223674, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c198, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bcd48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c018, 0x1fe000 bytes
    //
    _t88(sdk::unknown_ptr) shutdown_schedule_watchdog;
    
    // [VfShutdownThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f188, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e700, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461d8, 0x1fe000 bytes
    //
    _t89(sdk::unknown_ptr) shutdown_thread;
    
    // [VfStartBranchTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711eb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d64dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d54dc, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) start_branch_tracing;
    
    // [VfStopBranchTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711f38, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6568, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabfa6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5568, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) stop_branch_tracing;
    
    // [VfSuspectDriversAllocateEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718e70, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d77d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6394, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d67d8, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) suspect_drivers_allocate_entry;
    
    // [VfSuspectDriversGetVerifierInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718ed8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7890, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac644c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6890, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) suspect_drivers_get_verifier_information;
    
    // [VfSuspectDriversInsert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7190e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7b14, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac66d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6b14, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) suspect_drivers_insert;
    
    // [VfSuspectDriversIsLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdf78, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa928e4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82a90, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91ac8, 0x1fe000 bytes
    //
    _t95(sdk::unknown_ptr) suspect_drivers_is_loaded;
    
    // [VfSuspectDriversList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1d170, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d430, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) suspect_drivers_list;
    
    // [VfSuspectDriversLoadCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719114, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7b48, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6704, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6b48, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) suspect_drivers_load_callback;
    
    // [VfSuspectDriversParseRegistryString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdf9c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92910, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82ab8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91af4, 0x1fe000 bytes
    //
    _t98(sdk::unknown_ptr) suspect_drivers_parse_registry_string;
    
    // [VfSuspectDriversRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719490, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6a14, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6ee0, 0x1fe000 bytes
    //
    _t99(sdk::unknown_ptr) suspect_drivers_remove;
    
    // [VfSuspectDriversUnloadCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719514, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7f6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6ab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6f6c, 0x1fe000 bytes
    //
    _u00(sdk::unknown_ptr) suspect_drivers_unload_callback;
    
    // [VfSuspectExcludedDriversAllocateEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719668, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d80d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d70d0, 0x1fe000 bytes
    //
    _u01(sdk::unknown_ptr) suspect_excluded_drivers_allocate_entry;
    
    // [VfSynth3DvscName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa0d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9118, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa20d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8118, 0x1fe000 bytes
    //
    _u02(sdk::unknown_ptr) synth3_dvsc_name;
    
    // [VfSynth3DvspName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa0b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9128, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa20e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8108, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) synth3_dvsp_name;
    
    // [VfTargetDriversAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b63c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d4dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3393b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e85c, 0x1fe000 bytes
    //
    _u04(sdk::unknown_ptr) target_drivers_add;
    
    // [VfTargetDriversEnableVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712eb0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4d44, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7480, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3d44, 0x1fe000 bytes
    //
    _u05(sdk::unknown_ptr) target_drivers_enable_verifier;
    
    // [VfTargetDriversGetNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2235f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bdcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3391a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bc4c, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) target_drivers_get_node;
    
    // [VfTargetDriversGetVerifierData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712f4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7528, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3df0, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) target_drivers_get_verifier_data;
    
    // [VfTargetDriversGetZeroCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712f94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4e44, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7578, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3e44, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) target_drivers_get_zero_counters;
    
    // [VfTargetDriversIsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71302c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7614, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3ee0, 0x1fe000 bytes
    //
    _u09(sdk::unknown_ptr) target_drivers_is_enabled;
    
    // [VfTargetDriversRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d1f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36e33c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2089e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f6bc, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) target_drivers_remove;
    
    // [VfTargetEtwRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71305c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7648, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3f14, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) target_etw_register;
    
    // [VfTargetEtwUnregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713144, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5004, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7734, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4004, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) target_etw_unregister;
    
    // [VfTcpIpDllBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46120, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46120, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) tcp_ip_dll_base;
    
    // [VfTcpIpName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa020, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9070, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2048, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8060, 0x1fe000 bytes
    //
    _u14(sdk::unknown_ptr) tcp_ip_name;
    
    // [VfTcpIpSizeOfImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f12c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4616c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e610, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46168, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) tcp_ip_size_of_image;
    
    // [VfTdxDllBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f100, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46130, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46138, 0x1fe000 bytes
    //
    _u16(sdk::unknown_ptr) tdx_dll_base;
    
    // [VfTdxName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa040, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2058, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8070, 0x1fe000 bytes
    //
    _u17(sdk::unknown_ptr) tdx_name;
    
    // [VfTdxSizeOfImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f128, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46170, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e614, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46170, 0x1fe000 bytes
    //
    _u18(sdk::unknown_ptr) tdx_size_of_image;
    
    // [VfThunkAddDriverThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712180, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d67e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6f7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d57e0, 0x1fe000 bytes
    //
    _u19(sdk::unknown_ptr) thunk_add_driver_thunks;
    
    // [VfThunkAddSpecialDriverThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712200, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6864, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5864, 0x1fe000 bytes
    //
    _u20(sdk::unknown_ptr) thunk_add_special_driver_thunks;
    
    // [VfThunkAddTargetNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x700fa0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0100, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa8ee4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf100, 0x1fe000 bytes
    //
    _u21(sdk::unknown_ptr) thunk_add_target_notify;
    
    // [VfThunkApplyDriverAddedThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7123e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6a54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7160, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5a54, 0x1fe000 bytes
    //
    _u22(sdk::unknown_ptr) thunk_apply_driver_added_thunks;
    
    // [VfThunkRemoveTargetNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7011d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0484, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa8e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf484, 0x1fe000 bytes
    //
    _u23(sdk::unknown_ptr) thunk_remove_target_notify;
    
    // [VfThunksExtended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301858, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cce8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b0c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd80, 0x1fe000 bytes
    //
    _u24(sdk::unknown_ptr) thunks_extended;
    
    // [VfTmDllBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f110, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46130, 0x1fe000 bytes
    //
    _u25(sdk::unknown_ptr) tm_dll_base;
    
    // [VfTmName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa050, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2088, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b80a0, 0x1fe000 bytes
    //
    _u26(sdk::unknown_ptr) tm_name;
    
    // [VfTmSizeOfImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f134, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46178, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e620, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46178, 0x1fe000 bytes
    //
    _u27(sdk::unknown_ptr) tm_size_of_image;
    
    // [VfTriageAddDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdb74, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa924ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82dd4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91690, 0x1fe000 bytes
    //
    _u28(sdk::unknown_ptr) triage_add_drivers;
    
    // [VfTriageSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6584, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6c984, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb563e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6c154, 0x1fe000 bytes
    //
    _u29(sdk::unknown_ptr) triage_system;
    
    // [VfUtilAddressRangeAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705b88, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c42cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae394, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c32cc, 0x1fe000 bytes
    //
    _u30(sdk::unknown_ptr) util_address_range_add;
    
    // [VfUtilAddressRangeFit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705bb0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c42fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae3c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c32fc, 0x1fe000 bytes
    //
    _u31(sdk::unknown_ptr) util_address_range_fit;
    
    // [VfUtilAddressRangeFitNoLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705be8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c433c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae404, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c333c, 0x1fe000 bytes
    //
    _u32(sdk::unknown_ptr) util_address_range_fit_no_lock;
    
    // [VfUtilAddressRangeRemoveCheckEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705c4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c43b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae44c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c33b0, 0x1fe000 bytes
    //
    _u33(sdk::unknown_ptr) util_address_range_remove_check_empty;
    
    // [VfUtilDbgPrint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2223ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a724, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9864, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a5a4, 0x1fe000 bytes
    //
    _u34(sdk::unknown_ptr) util_dbg_print;
    
    // [VfUtilEqualUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705ddc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4614, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae66c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3614, 0x1fe000 bytes
    //
    _u35(sdk::unknown_ptr) util_equal_unicode_string;
    
    // [VfUtilFreePoolCheckIRQL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d314, 0x32828 bytes
    // ntoskrnl.exe .text:0x36e470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f7f0, 0x1fe000 bytes
    //
    _u36(sdk::unknown_ptr) util_free_pool_check_irql;
    
    // [VfUtilFreePoolDispatchLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2223dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b98b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a5f0, 0x1fe000 bytes
    //
    _u37(sdk::unknown_ptr) util_free_pool_dispatch_level;
    
    // [VfUtilIsLocalSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705e18, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c47e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae724, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c37e4, 0x1fe000 bytes
    //
    _u38(sdk::unknown_ptr) util_is_local_system;
    
    // [VfUtilIsProtectedDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705ea4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c488c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae7cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c388c, 0x1fe000 bytes
    //
    _u39(sdk::unknown_ptr) util_is_protected_driver;
    
    // [VfUtilPrintCheckinString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705ef0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae804, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3900, 0x1fe000 bytes
    //
    _u40(sdk::unknown_ptr) util_print_checkin_string;
    
    // [VfVerifyMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc10cf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b498, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10d58, 0x1fe000 bytes
    //
    _u41(sdk::unknown_ptr) verify_mode;
    
    // [VfVidName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa0c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9138, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa20f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8138, 0x1fe000 bytes
    //
    _u42(sdk::unknown_ptr) vid_name;
    
    // [VfWdCancelTimeoutTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301afc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cfa4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36dc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d01c, 0x1fe000 bytes
    //
    _u43(sdk::unknown_ptr) wd_cancel_timeout_ticks;
    
    // [VfWdCheckForSettingsChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719cf8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9deb54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca034, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddb54, 0x1fe000 bytes
    //
    _u44(sdk::unknown_ptr) wd_check_for_settings_change;
    
    // [VfWdInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719d78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9debd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca0b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddbd8, 0x1fe000 bytes
    //
    _u45(sdk::unknown_ptr) wd_init;
    
    // [VfWdIrpListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f198, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46200, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e688, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46200, 0x1fe000 bytes
    //
    _u46(sdk::unknown_ptr) wd_irp_list_head;
    
    // [VfWdIrpListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f1a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46338, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e6e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46338, 0x1fe000 bytes
    //
    _u47(sdk::unknown_ptr) wd_irp_list_lock;
    
    // [VfWdIrpTimeoutMsec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e628, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461bc, 0x1fe000 bytes
    //
    _u48(sdk::unknown_ptr) wd_irp_timeout_msec;
    
    // [VfWdSetCancelTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719e34, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9deca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca17c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddca0, 0x1fe000 bytes
    //
    _u49(sdk::unknown_ptr) wd_set_cancel_timeout;
    
    // [VfWdmDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f59e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc05220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc05260, 0x1fe000 bytes
    //
    _u50(sdk::unknown_ptr) wdm_dispatch_table;
    
    // [VfWin32kDllBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f098, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e580, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460a8, 0x1fe000 bytes
    //
    _u51(sdk::unknown_ptr) win32k_dll_base;
    
    // [VfWin32kName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa060, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9080, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2098, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8080, 0x1fe000 bytes
    //
    _u52(sdk::unknown_ptr) win32k_name;
    
    // [VfWin32kSizeOfImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0a4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e57c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460b8, 0x1fe000 bytes
    //
    _u53(sdk::unknown_ptr) win32k_size_of_image;
    
    // [VfWmiDumpIrpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c1b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1490, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3930, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0490, 0x1fe000 bytes
    //
    _u54(sdk::unknown_ptr) wmi_dump_irp_stack;
    
    // [VfWmiTestStartedPdoStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c1fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e14e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3980, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e04e0, 0x1fe000 bytes
    //
    _u55(sdk::unknown_ptr) wmi_test_started_pdo_stack;
    
    // [VfWmiVerifyIrpStackDownward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c260, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1550, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad39f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0550, 0x1fe000 bytes
    //
    _u56(sdk::unknown_ptr) wmi_verify_irp_stack_downward;
    
    // [VfWmiVerifyIrpStackUpward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c2d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e15d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3a70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e05d0, 0x1fe000 bytes
    //
    _u57(sdk::unknown_ptr) wmi_verify_irp_stack_upward;
    
    // [VfWmiVerifyNewRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c358, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0660, 0x1fe000 bytes
    //
    _u58(sdk::unknown_ptr) wmi_verify_new_request;
    
    // [VfXdvDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f59c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc051f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc05238, 0x1fe000 bytes
    //
    _u59(sdk::unknown_ptr) xdv_dispatch_table;
    
    // [VfXdvExcludeParseRegistryString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7be158, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92acc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82c68, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91cb0, 0x1fe000 bytes
    //
    _u60(sdk::unknown_ptr) xdv_exclude_parse_registry_string;
    
    // [VfXdvExcludedDriversList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301660, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36930, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb00, 0x1fe000 bytes
    //
    _u61(sdk::unknown_ptr) xdv_excluded_drivers_list;
    
    // [VfXdvSuppressDriversBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ceaf0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd55360, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd810e0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd55360, 0x1fe000 bytes
    //
    _u62(sdk::unknown_ptr) xdv_suppress_drivers_buffer;
    
    // [VfXdvSuppressDriversBufferLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce128, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54154, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f154, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54154, 0x1fe000 bytes
    //
    _u63(sdk::unknown_ptr) xdv_suppress_drivers_buffer_length;
    
    // [VfZeroAllPagesRunning]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b044, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e548, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46070, 0x1fe000 bytes
    //
    _u64(sdk::unknown_ptr) zero_all_pages_running;
};
#include "magic/api.end.hpp"
