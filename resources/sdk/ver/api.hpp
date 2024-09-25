#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ver
{
    // [ViAdapterListInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36429, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) adapter_list_initialized;
    
    // [ViBindDifThunkNormal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab68d8, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) bind_dif_thunk_normal;
    
    // [ViBugCheckInitialControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFB:0x72f2c8, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) bug_check_initial_control;
    
    // [ViCheckDifDdiExist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab6914, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) check_dif_ddi_exist;
    
    // [ViCodeSectionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc368b0, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) code_section_handle;
    
    // [ViCommonBufferCalculatePadding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x70c038, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) common_buffer_calculate_padding;
    
    // [ViDataSectionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc368b8, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) data_section_handle;
    
    // [ViDeadlockExAcquireFastMutex_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5010, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) deadlock_ex_acquire_fast_mutex_exit;
    
    // [ViDeadlockExAcquireFastMutexUnsafe_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac4fd0, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) deadlock_ex_acquire_fast_mutex_unsafe_exit;
    
    // [ViDeadlockExAcquireResourceExclusiveLite_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5050, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) deadlock_ex_acquire_resource_exclusive_lite_exit;
    
    // [ViDeadlockExAcquireResourceSharedLite_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5050, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) deadlock_ex_acquire_resource_shared_lite_exit;
    
    // [ViDeadlockExAcquireSharedStarveExclusive_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5050, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) deadlock_ex_acquire_shared_starve_exclusive_exit;
    
    // [ViDeadlockExAcquireSharedWaitForExclusive_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5050, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) deadlock_ex_acquire_shared_wait_for_exclusive_exit;
    
    // [ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5090, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) deadlock_ex_enter_critical_region_and_acquire_resource_exclusive_exit;
    
    // [ViDeadlockExEnterCriticalRegionAndAcquireResourceShared_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5090, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) deadlock_ex_enter_critical_region_and_acquire_resource_shared_exit;
    
    // [ViDeadlockExEnterPriorityRegionAndAcquireResourceExclusive_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5090, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) deadlock_ex_enter_priority_region_and_acquire_resource_exclusive_exit;
    
    // [ViDeadlockExEnterPriorityRegionAndAcquireResourceShared_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5090, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) deadlock_ex_enter_priority_region_and_acquire_resource_shared_exit;
    
    // [ViDeadlockExReleaseFastMutex_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5100, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) deadlock_ex_release_fast_mutex_entry;
    
    // [ViDeadlockExReleaseFastMutexUnsafe_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac50d0, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) deadlock_ex_release_fast_mutex_unsafe_entry;
    
    // [ViDeadlockExTryToAcquireFastMutex_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5130, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) deadlock_ex_try_to_acquire_fast_mutex_exit;
    
    // [ViDeadlockKeAcquireInStackQueuedSpinLockAtDpcLevel_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac52d0, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) deadlock_ke_acquire_in_stack_queued_spin_lock_at_dpc_level_exit;
    
    // [ViDeadlockKeAcquireInStackQueuedSpinLock_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac52d0, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) deadlock_ke_acquire_in_stack_queued_spin_lock_exit;
    
    // [ViDeadlockKeAcquireInStackQueuedSpinLockForDpc_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac52d0, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) deadlock_ke_acquire_in_stack_queued_spin_lock_for_dpc_exit;
    
    // [ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac52d0, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) deadlock_ke_acquire_in_stack_queued_spin_lock_raise_to_synch_exit;
    
    // [ViDeadlockKeAcquireSpinLockAtDpcLevel_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5310, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) deadlock_ke_acquire_spin_lock_at_dpc_level_exit;
    
    // [ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5310, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) deadlock_ke_acquire_spin_lock_raise_to_dpc_exit;
    
    // [ViDeadlockKeInitializeMutant_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5350, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) deadlock_ke_initialize_mutant_exit;
    
    // [ViDeadlockKeInitializeMutex_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac53a0, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) deadlock_ke_initialize_mutex_exit;
    
    // [ViDeadlockKeReleaseInStackQueuedSpinLock_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac53c0, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) deadlock_ke_release_in_stack_queued_spin_lock_entry;
    
    // [ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac53c0, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) deadlock_ke_release_in_stack_queued_spin_lock_for_dpc_entry;
    
    // [ViDeadlockKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac53c0, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) deadlock_ke_release_in_stack_queued_spin_lock_from_dpc_level_entry;
    
    // [ViDeadlockKeReleaseMutant_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5400, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) deadlock_ke_release_mutant_entry;
    
    // [ViDeadlockKeReleaseMutex_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5430, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) deadlock_ke_release_mutex_entry;
    
    // [ViDeadlockKeReleaseSpinLock_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5490, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) deadlock_ke_release_spin_lock_entry;
    
    // [ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5460, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) deadlock_ke_release_spin_lock_from_dpc_level_entry;
    
    // [ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac54c0, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) deadlock_ke_try_to_acquire_spin_lock_at_dpc_level_exit;
    
    // [ViDeadlockKeWaitForMultipleObjects_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5500, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) deadlock_ke_wait_for_multiple_objects_exit;
    
    // [ViDeadlockKeWaitForSingleObject_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5560, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) deadlock_ke_wait_for_single_object_exit;
    
    // [ViDeadlockObjectAcquired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac5750, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) deadlock_object_acquired;
    
    // [ViDeadlockPluginSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc364b0, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) deadlock_plugin_settings;
    
    // [ViDeadlockPluginUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bcda0, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) deadlock_plugin_unload;
    
    // [ViDifFindIoCallbackContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba714, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) dif_find_io_callback_context;
    
    // [ViDmaInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9508, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) dma_init;
    
    // [ViDmaOperationsV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd66d20, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) dma_operations_v2;
    
    // [ViDmaOperationsV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd66e60, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) dma_operations_v3;
    
    // [ViDmaSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36430, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) dma_setting;
    
    // [ViDmaUninit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac9600, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) dma_uninit;
    
    // [ViDomainCommonBufferListInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3642a, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) domain_common_buffer_list_initialized;
    
    // [ViExAcquireFastMutexCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d5cc, 0x32828 bytes
    //
    _m48(sdk::unknown_ptr) ex_acquire_fast_mutex_common;
    
    // [ViFilterIsDeviceExcluded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71e0d0, 0x32828 bytes
    //
    _m49(sdk::unknown_ptr) filter_is_device_excluded;
    
    // [ViFnAutoFailInject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e4d0, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) fn_auto_fail_inject;
    
    // [ViFnXdvLoadDifPlugins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e668, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) fn_xdv_load_dif_plugins;
    
    // [ViGenericAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d73c, 0x32828 bytes
    //
    _m52(sdk::unknown_ptr) generic_add_device;
    
    // [ViGenericCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d78c, 0x32828 bytes
    //
    _m53(sdk::unknown_ptr) generic_cleanup;
    
    // [ViGenericClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d7a0, 0x32828 bytes
    //
    _m54(sdk::unknown_ptr) generic_close;
    
    // [ViGenericCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d7b4, 0x32828 bytes
    //
    _m55(sdk::unknown_ptr) generic_create;
    
    // [ViGenericCreateMailslot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d7c4, 0x32828 bytes
    //
    _m56(sdk::unknown_ptr) generic_create_mailslot;
    
    // [ViGenericCreateNamedPipe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d7d8, 0x32828 bytes
    //
    _m57(sdk::unknown_ptr) generic_create_named_pipe;
    
    // [ViGenericDeviceChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d7ec, 0x32828 bytes
    //
    _m58(sdk::unknown_ptr) generic_device_change;
    
    // [ViGenericDeviceControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d800, 0x32828 bytes
    //
    _m59(sdk::unknown_ptr) generic_device_control;
    
    // [ViGenericDirectoryControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d814, 0x32828 bytes
    //
    _m60(sdk::unknown_ptr) generic_directory_control;
    
    // [ViGenericDispatchHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d828, 0x32828 bytes
    //
    _m61(sdk::unknown_ptr) generic_dispatch_handler;
    
    // [ViGenericDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d880, 0x32828 bytes
    //
    _m62(sdk::unknown_ptr) generic_driver_entry;
    
    // [ViGenericDriverStartIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d8d0, 0x32828 bytes
    //
    _m63(sdk::unknown_ptr) generic_driver_start_io;
    
    // [ViGenericDriverUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d924, 0x32828 bytes
    //
    _m64(sdk::unknown_ptr) generic_driver_unload;
    
    // [ViGenericFileSystemControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d974, 0x32828 bytes
    //
    _m65(sdk::unknown_ptr) generic_file_system_control;
    
    // [ViGenericFlushBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d988, 0x32828 bytes
    //
    _m66(sdk::unknown_ptr) generic_flush_buffers;
    
    // [ViGenericInternalDeviceControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d99c, 0x32828 bytes
    //
    _m67(sdk::unknown_ptr) generic_internal_device_control;
    
    // [ViGenericLockControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d9b0, 0x32828 bytes
    //
    _m68(sdk::unknown_ptr) generic_lock_control;
    
    // [ViGenericMajorFunctionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFD:0x75d090, 0x32828 bytes
    //
    _m69(sdk::unknown_ptr) generic_major_function_list;
    
    // [ViGenericPnp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d9c4, 0x32828 bytes
    //
    _m70(sdk::unknown_ptr) generic_pnp;
    
    // [ViGenericPower]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d9d8, 0x32828 bytes
    //
    _m71(sdk::unknown_ptr) generic_power;
    
    // [ViGenericQueryEa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71d9ec, 0x32828 bytes
    //
    _m72(sdk::unknown_ptr) generic_query_ea;
    
    // [ViGenericQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da00, 0x32828 bytes
    //
    _m73(sdk::unknown_ptr) generic_query_information;
    
    // [ViGenericQueryQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da14, 0x32828 bytes
    //
    _m74(sdk::unknown_ptr) generic_query_quota;
    
    // [ViGenericQuerySecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da28, 0x32828 bytes
    //
    _m75(sdk::unknown_ptr) generic_query_security;
    
    // [ViGenericQueryVolumeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da3c, 0x32828 bytes
    //
    _m76(sdk::unknown_ptr) generic_query_volume_information;
    
    // [ViGenericRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da50, 0x32828 bytes
    //
    _m77(sdk::unknown_ptr) generic_read;
    
    // [ViGenericSetEa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da64, 0x32828 bytes
    //
    _m78(sdk::unknown_ptr) generic_set_ea;
    
    // [ViGenericSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da78, 0x32828 bytes
    //
    _m79(sdk::unknown_ptr) generic_set_information;
    
    // [ViGenericSetQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71da8c, 0x32828 bytes
    //
    _m80(sdk::unknown_ptr) generic_set_quota;
    
    // [ViGenericSetSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71daa0, 0x32828 bytes
    //
    _m81(sdk::unknown_ptr) generic_set_security;
    
    // [ViGenericSetVolumeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71dab4, 0x32828 bytes
    //
    _m82(sdk::unknown_ptr) generic_set_volume_information;
    
    // [ViGenericShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71dac8, 0x32828 bytes
    //
    _m83(sdk::unknown_ptr) generic_shutdown;
    
    // [ViGenericSystemControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71dadc, 0x32828 bytes
    //
    _m84(sdk::unknown_ptr) generic_system_control;
    
    // [ViGenericWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFY:0x71daf0, 0x32828 bytes
    //
    _m85(sdk::unknown_ptr) generic_write;
    
    // [ViGetAdapterInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab4e2c, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) get_adapter_information;
    
    // [ViGetAdapterSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab5010, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) get_adapter_signature;
    
    // [ViGetRealDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xab5158, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) get_real_dma_adapter;
    
    // [ViHalWaitBlockLookasideInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36428, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) hal_wait_block_lookaside_initialized;
    
    // [ViIovAllocateIrp_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) iov_allocate_irp_entry;
    
    // [ViIovAllocateIrpEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) iov_allocate_irp_ex_entry;
    
    // [ViIovExFreePool_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd410, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) iov_ex_free_pool_entry;
    
    // [ViIovExFreePoolWithTag_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd3f0, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) iov_ex_free_pool_with_tag_entry;
    
    // [ViIovFreeIrp_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) iov_free_irp_entry;
    
    // [ViIovInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac8358, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) iov_initialization;
    
    // [ViIovIoAcquireRemoveLockEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) iov_io_acquire_remove_lock_ex_entry;
    
    // [ViIovIoBuildAsynchronousFsdRequest_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac8730, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) iov_io_build_asynchronous_fsd_request_exit;
    
    // [ViIovIoBuildDeviceIoControlRequest_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd430, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) iov_io_build_device_io_control_request_exit;
    
    // [ViIovIoBuildSynchronousFsdRequest_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd450, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) iov_io_build_synchronous_fsd_request_exit;
    
    // [ViIovIoInitializeRemoveLockEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) iov_io_initialize_remove_lock_ex_entry;
    
    // [ViIovIoReleaseRemoveLockAndWaitEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) iov_io_release_remove_lock_and_wait_ex_entry;
    
    // [ViIovIoReleaseRemoveLockEx_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) iov_io_release_remove_lock_ex_entry;
    
    // [ViIovPluginSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc364a0, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) iov_plugin_setting;
    
    // [ViIovPluginUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd470, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) iov_plugin_unload;
    
    // [ViIrqlExAcquireFastMutex_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4440, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) irql_ex_acquire_fast_mutex_exit;
    
    // [ViIrqlExTryToAcquireFastMutex_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4460, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) irql_ex_try_to_acquire_fast_mutex_exit;
    
    // [ViIrqlInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4484, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) irql_init;
    
    // [ViIrqlKeEnterCriticalRegion_Exit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4530, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) irql_ke_enter_critical_region_exit;
    
    // [ViIrqlKeLeaveCriticalRegion_Entry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4550, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) irql_ke_leave_critical_region_entry;
    
    // [ViIrqlLogCRStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4594, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) irql_log_cr_stack_trace;
    
    // [ViIrqlPluginSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0e0e0, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) irql_plugin_setting;
    
    // [ViIrqlPluginUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4610, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) irql_plugin_unload;
    
    // [ViIrqlTrimAndLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e4e4, 0x1fd000 bytes
    //
    _n13(sdk::unknown_ptr) irql_trim_and_log;
    
    // [ViIsIrpCallDriverDataInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36505, 0x1fd000 bytes
    //
    _n14(sdk::unknown_ptr) is_irp_call_driver_data_initialized;
    
    // [ViKeAcquireSpinLockCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac1cec, 0x1fd000 bytes
    //
    _n15(sdk::unknown_ptr) ke_acquire_spin_lock_common;
    
    // [ViKeIrqlLogAndTrimMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac1da8, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) ke_irql_log_and_trim_memory;
    
    // [ViLegacyVolatile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc368a8, 0x1fd000 bytes
    //
    _n17(sdk::unknown_ptr) legacy_volatile;
    
    // [ViMiscCheckKeLowerIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd308, 0x1fd000 bytes
    //
    _n18(sdk::unknown_ptr) misc_check_ke_lower_irql;
    
    // [ViMiscCheckKeRaiseIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd3ac, 0x1fd000 bytes
    //
    _n19(sdk::unknown_ptr) misc_check_ke_raise_irql;
    
    // [ViMiscCheckResourceAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd41c, 0x1fd000 bytes
    //
    _n20(sdk::unknown_ptr) misc_check_resource_acquire;
    
    // [ViMiscCheckResourceRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd4bc, 0x1fd000 bytes
    //
    _n21(sdk::unknown_ptr) misc_check_resource_release;
    
    // [ViMiscEnforceRule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd528, 0x1fd000 bytes
    //
    _n22(sdk::unknown_ptr) misc_enforce_rule;
    
    // [ViMiscExCheckAPCsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd574, 0x1fd000 bytes
    //
    _n23(sdk::unknown_ptr) misc_ex_check_ap_cs_disabled;
    
    // [ViMiscSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36410, 0x1fd000 bytes
    //
    _n24(sdk::unknown_ptr) misc_setting;
    
    // [ViMiscValidateKeWaitUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd5e0, 0x1fd000 bytes
    //
    _n25(sdk::unknown_ptr) misc_validate_ke_wait_usage;
    
    // [ViMiscValidateSynchronizationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacd700, 0x1fd000 bytes
    //
    _n26(sdk::unknown_ptr) misc_validate_synchronization_object;
    
    // [ViNumberOfDifThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd65080, 0x1fd000 bytes
    //
    _n27(sdk::unknown_ptr) number_of_dif_thunks;
    
    // [ViNumberOfPoolThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd65078, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) number_of_pool_thunks;
    
    // [ViNumberOfRegularThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6507c, 0x1fd000 bytes
    //
    _n29(sdk::unknown_ptr) number_of_regular_thunks;
    
    // [ViNumberOfWdmThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3674c, 0x1fd000 bytes
    //
    _n30(sdk::unknown_ptr) number_of_wdm_thunks;
    
    // [ViPacketCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3649c, 0x1fd000 bytes
    //
    _n31(sdk::unknown_ptr) packet_count;
    
    // [ViPacketLookasideInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36498, 0x1fd000 bytes
    //
    _n32(sdk::unknown_ptr) packet_lookaside_initialized;
    
    // [ViPoolInfoAllocDeletionFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e64c, 0x1fd000 bytes
    //
    _n33(sdk::unknown_ptr) pool_info_alloc_deletion_failure;
    
    // [ViPoolInfoAllocInsertionFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e648, 0x1fd000 bytes
    //
    _n34(sdk::unknown_ptr) pool_info_alloc_insertion_failure;
    
    // [ViPoolInfoAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6fb40, 0x1fd000 bytes
    //
    _n35(sdk::unknown_ptr) pool_info_avl;
    
    // [ViPoolInfoAvlInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e550, 0x1fd000 bytes
    //
    _n36(sdk::unknown_ptr) pool_info_avl_initialized;
    
    // [ViPoolStackInfoAllocCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36424, 0x1fd000 bytes
    //
    _n37(sdk::unknown_ptr) pool_stack_info_alloc_count;
    
    // [ViPoolStackInfoAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6fa80, 0x1fd000 bytes
    //
    _n38(sdk::unknown_ptr) pool_stack_info_avl;
    
    // [ViPoolStackInfoAvlInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e554, 0x1fd000 bytes
    //
    _n39(sdk::unknown_ptr) pool_stack_info_avl_initialized;
    
    // [ViPoolStackInfoFailureCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFD:0xd6e650, 0x1fd000 bytes
    //
    _n40(sdk::unknown_ptr) pool_stack_info_failure_count;
    
    // [ViPoolTrackingSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36e70, 0x1fd000 bytes
    //
    _n41(sdk::unknown_ptr) pool_tracking_setting;
    
    // [ViPtAcquireTreeLockAtDpcLevelSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd890, 0x1fd000 bytes
    //
    _n42(sdk::unknown_ptr) pt_acquire_tree_lock_at_dpc_level_safe;
    
    // [ViPtAllocPoolInfoCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacab80, 0x1fd000 bytes
    //
    _n43(sdk::unknown_ptr) pt_alloc_pool_info_callback;
    
    // [ViPtAllocPoolStackInfoCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacab80, 0x1fd000 bytes
    //
    _n44(sdk::unknown_ptr) pt_alloc_pool_stack_info_callback;
    
    // [ViPtCaptureTraceInformationCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacabb0, 0x1fd000 bytes
    //
    _n45(sdk::unknown_ptr) pt_capture_trace_information_call_back;
    
    // [ViPtCleanupLockContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd8d4, 0x1fd000 bytes
    //
    _n46(sdk::unknown_ptr) pt_cleanup_lock_context;
    
    // [ViPtDeleteAvlTrees]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacabf0, 0x1fd000 bytes
    //
    _n47(sdk::unknown_ptr) pt_delete_avl_trees;
    
    // [ViPtFreePoolInfoEntryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacad40, 0x1fd000 bytes
    //
    _n48(sdk::unknown_ptr) pt_free_pool_info_entry_callback;
    
    // [ViPtFreeStackInfoEntryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacad90, 0x1fd000 bytes
    //
    _n49(sdk::unknown_ptr) pt_free_stack_info_entry_callback;
    
    // [ViPtInitAvlTrees]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacadb0, 0x1fd000 bytes
    //
    _n50(sdk::unknown_ptr) pt_init_avl_trees;
    
    // [ViPtInitCircularPoolTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacae2c, 0x1fd000 bytes
    //
    _n51(sdk::unknown_ptr) pt_init_circular_pool_trace;
    
    // [ViPtInitializeLockContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd970, 0x1fd000 bytes
    //
    _n52(sdk::unknown_ptr) pt_initialize_lock_context;
    
    // [ViPtLogStackCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacaf00, 0x1fd000 bytes
    //
    _n53(sdk::unknown_ptr) pt_log_stack_callout;
    
    // [ViPtLogStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacb05c, 0x1fd000 bytes
    //
    _n54(sdk::unknown_ptr) pt_log_stack_trace;
    
    // [ViPtPluginUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xacb1b0, 0x1fd000 bytes
    //
    _n55(sdk::unknown_ptr) pt_plugin_unload;
    
    // [ViPtRaiseIrqlSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd984, 0x1fd000 bytes
    //
    _n56(sdk::unknown_ptr) pt_raise_irql_safe;
    
    // [ViPtReleaseTreeLockFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd9f4, 0x1fd000 bytes
    //
    _n57(sdk::unknown_ptr) pt_release_tree_lock_from_dpc_level;
    
    // [ViRandomExAuxVarY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFD:0x75b07c, 0x32828 bytes
    //
    _n58(sdk::unknown_ptr) random_ex_aux_var_y;
    
    // [ViRandomExConstantVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFD:0x75ce90, 0x32828 bytes
    //
    _n59(sdk::unknown_ptr) random_ex_constant_vector;
    
    // [ViSetDifPluginMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xaa9528, 0x1fd000 bytes
    //
    _n60(sdk::unknown_ptr) set_dif_plugin_mode;
    
    // [ViSetIoBuildRequestFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5bd4c0, 0x1fd000 bytes
    //
    _n61(sdk::unknown_ptr) set_io_build_request_flag;
    
    // [ViSpRtlReplaceStringBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad4774, 0x1fd000 bytes
    //
    _n62(sdk::unknown_ptr) sp_rtl_replace_string_buffer;
    
    // [ViTargetDriversFreeVerifiedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba89c, 0x1fd000 bytes
    //
    _n63(sdk::unknown_ptr) target_drivers_free_verified_data;
    
    // [ViThunkApplyPristineCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac758c, 0x1fd000 bytes
    //
    _n64(sdk::unknown_ptr) thunk_apply_pristine_current_session;
    
    // [ViThunkApplyWdmThunksCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac76bc, 0x1fd000 bytes
    //
    _n65(sdk::unknown_ptr) thunk_apply_wdm_thunks_current_session;
    
    // [ViThunkFindAllSharedExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7804, 0x1fd000 bytes
    //
    _n66(sdk::unknown_ptr) thunk_find_all_shared_exports;
    
    // [ViThunkFindAllThunkedImports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7940, 0x1fd000 bytes
    //
    _n67(sdk::unknown_ptr) thunk_find_all_thunked_imports;
    
    // [ViThunkFindDriverImportEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7a28, 0x1fd000 bytes
    //
    _n68(sdk::unknown_ptr) thunk_find_driver_import_entry;
    
    // [ViThunkFindSharedExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7ac0, 0x1fd000 bytes
    //
    _n69(sdk::unknown_ptr) thunk_find_shared_exports;
    
    // [ViThunkGetPristine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7b80, 0x1fd000 bytes
    //
    _n70(sdk::unknown_ptr) thunk_get_pristine;
    
    // [ViThunkGetWdmThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7bc4, 0x1fd000 bytes
    //
    _n71(sdk::unknown_ptr) thunk_get_wdm_thunk;
    
    // [ViThunkHookExportAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7c48, 0x1fd000 bytes
    //
    _n72(sdk::unknown_ptr) thunk_hook_export_address;
    
    // [ViThunkIsExportAddressShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x78bfd0, 0x32828 bytes
    //
    _n73(sdk::unknown_ptr) thunk_is_export_address_shared;
    
    // [ViThunkReplaceIatEntryForClassDriverThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac7fe8, 0x1fd000 bytes
    //
    _n74(sdk::unknown_ptr) thunk_replace_iat_entry_for_class_driver_thunk;
    
    // [ViThunkReplaceIatEntryForWdmThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xac8048, 0x1fd000 bytes
    //
    _n75(sdk::unknown_ptr) thunk_replace_iat_entry_for_wdm_thunk;
    
    // [ViUnbindDifThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ba734, 0x1fd000 bytes
    //
    _n76(sdk::unknown_ptr) unbind_dif_thunk;
    
    // [ViUpdateStackInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36420, 0x1fd000 bytes
    //
    _n77(sdk::unknown_ptr) update_stack_info;
    
    // [ViVerifyOnlySpinlocksFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFB:0x72f290, 0x32828 bytes
    //
    _n78(sdk::unknown_ptr) verify_only_spinlocks_from_registry;
    
    // [ViWdmThunksWithIatIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc36750, 0x1fd000 bytes
    //
    _n79(sdk::unknown_ptr) wdm_thunks_with_iat_index;
    
    // [ViZwBreakForIssues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEVRFD:0x75b054, 0x32828 bytes
    //
    _n80(sdk::unknown_ptr) zw_break_for_issues;
    
    // [ViDifAllocateCallbackStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59ac68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59aae8, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) dif_allocate_callback_storage;
    
    // [ViLwspPoolTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d3c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1d240, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) lwsp_pool_tags;
    
    // [ViLwspPoolTagsSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12050, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc120b0, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) lwsp_pool_tags_size;
    
    // [ViSetRequestedAPIs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c6bdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5bdc, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) set_requested_ap_is;
    
    // [ViSetRequestedIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59adbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59ac3c, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) set_requested_io_callbacks;
    
    // [ViSetRequestedOrderDependentAPIs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59ae38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59acb8, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) set_requested_order_dependent_ap_is;
    
    // [ViSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d000, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1d2c0, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) system_partition;
    
    // [ViSystemPartitionMemoryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1d340, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) system_partition_memory_info;
    
    // [ViThunkFindAPIContextByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d6fbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5fbc, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) thunk_find_api_context_by_name;
    
    // [ViThunkReplaceImportIfThunkedOrderDependent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9d7498, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6498, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) thunk_replace_import_if_thunked_order_dependent;
    
    // [ViTipControlLimitDenominator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d3ec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1d26c, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) tip_control_limit_denominator;
    
    // [ViTipControlLimitNumerator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d3e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1d268, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) tip_control_limit_numerator;
    
    // [ViTipControlSparseness]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1d3f4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1d274, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) tip_control_sparseness;
    
    // [ViUtilsForDIF]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd3e2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e2d0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) utils_for_dif;
    
    // [ViXdvSetRequestedAPIsforDIF]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9c7220, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6220, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) xdv_set_requested_ap_isfor_dif;
    
    // [ViAllocationsFailedDeliberately]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f294, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46418, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46418, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) allocations_failed_deliberately;
    
    // [ViDifCaptureDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59acac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ba4dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ab2c, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) dif_capture_driver_entry;
    
    // [ViDifCaptureIoCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59acd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ba54c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ab58, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) dif_capture_io_callbacks;
    
    // [ViDifCheckCallbackInterception]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x379cb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b038, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) dif_check_callback_interception;
    
    // [ViDMADisabledNoRebootNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460c8, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) dma_disabled_no_reboot_needed;
    
    // [ViDmaOperations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75c5a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e360, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e360, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) dma_operations;
    
    // [ViDriverXDVBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1ca50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36898, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cae0, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) driver_xdv_base;
    
    // [ViDriverXDVImageSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1ca58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc368a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cad4, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) driver_xdv_image_size;
    
    // [ViExCheckAPCsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d64c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2d74, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1d74, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) ex_check_ap_cs_disabled;
    
    // [ViExCheckAPCLevelOrBelow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d614, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2d34, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1d34, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) ex_check_apc_level_or_below;
    
    // [ViExReleaseFastMutexCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d6b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1de0, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) ex_release_fast_mutex_common;
    
    // [ViExTryToAcquireFastMutexCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d6e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1e20, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) ex_try_to_acquire_fast_mutex_common;
    
    // [ViExpectedDriversCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd46024, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46024, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) expected_drivers_count;
    
    // [ViFaultsInitializeAppsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9daf80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac27a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9f80, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) faults_initialize_apps_list;
    
    // [ViFaultsInitializeTagsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x9db054, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac287c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da054, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) faults_initialize_tags_list;
    
    // [ViFaultsProcessNotifyRoutineSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd460d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460d8, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) faults_process_notify_routine_set;
    
    // [ViFnXdvNotifyExtensions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b1f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46358, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46358, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) fn_xdv_notify_extensions;
    
    // [ViGetRealDmaOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c954, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cca50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cba50, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) get_real_dma_operation;
    
    // [ViHalApplySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c9e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccaec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbaec, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) hal_apply_settings;
    
    // [ViHalEnabledInThePast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f154, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46190, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) hal_enabled_in_the_past;
    
    // [ViInitPickRandomTargets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6c93c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb56398, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6c10c, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) init_pick_random_targets;
    
    // [ViInitSystemPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6ca2c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb6011c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6c1fc, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) init_system_phase1;
    
    // [ViInjectDmaFailures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b218, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9028, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8028, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) inject_dma_failures;
    
    // [ViKeAcquireSpinLockAtDpcLevelCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715dc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8ea0, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) ke_acquire_spin_lock_at_dpc_level_common;
    
    // [ViKeAcquireSpinLockRaiseToDpcCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715e54, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8f40, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) ke_acquire_spin_lock_raise_to_dpc_common;
    
    // [ViKeInitializeMutantCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715ea8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8fa0, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) ke_initialize_mutant_common;
    
    // [ViKeInitializeMutexCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715ed8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9fdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8fdc, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) ke_initialize_mutex_common;
    
    // [ViKeLogCriticalRegionStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22368c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c1b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c038, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) ke_log_critical_region_stack_trace;
    
    // [ViKeLowerIrqlSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715fc8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da0e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d90e8, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) ke_lower_irql_sanity_checks;
    
    // [ViKeObjectAcquired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716078, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da1b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d91b4, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) ke_object_acquired;
    
    // [ViKeRaiseIrqlSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7160e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da22c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d922c, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) ke_raise_irql_sanity_checks;
    
    // [ViKeReleaseSpinLockCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716194, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da310, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9310, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) ke_release_spin_lock_common;
    
    // [ViKeTryToAcquireSpinLockAtDpcLevelCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7161f4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da380, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9380, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) ke_try_to_acquire_spin_lock_at_dpc_level_common;
    
    // [ViKeWaitForMultipleObjectsCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716278, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da420, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9420, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) ke_wait_for_multiple_objects_common;
    
    // [ViKeWaitForSingleObjectCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x716354, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da508, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9508, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) ke_wait_for_single_object_common;
    
    // [ViKeWaitSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7163fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da5bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d95bc, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) ke_wait_sanity_checks;
    
    // [ViLogAndLoadXdv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa9242c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82a20, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91610, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) log_and_load_xdv;
    
    // [ViLookasideAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a61c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df564, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de564, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) lookaside_add;
    
    // [ViLookasideDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a728, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df68c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de68c, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) lookaside_delete;
    
    // [ViLookasideTrackList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a7ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df76c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de76c, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) lookaside_track_list;
    
    // [ViPoolLogStackCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704694, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3940, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2940, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) pool_log_stack_callout;
    
    // [ViPoolLogStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713bb0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de348, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd348, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) pool_log_stack_trace;
    
    // [ViRequiredTimeSinceBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa018, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9038, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8038, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) required_time_since_boot;
    
    // [ViResourceAcquireSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b304, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0580, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df580, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) resource_acquire_sanity_checks;
    
    // [ViResourceReleaseSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71b3ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0648, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9df648, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) resource_release_sanity_checks;
    
    // [ViRtlReplaceStringBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e59c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3cec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2cec, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) rtl_replace_string_buffer;
    
    // [ViSufficientlyBootedForDmaFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460c4, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) sufficiently_booted_for_dma_failure;
    
    // [ViThunkAdjustExportAddressIfHooked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71264c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6cec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5cec, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) thunk_adjust_export_address_if_hooked;
    
    // [ViThunkApplyMandatoryThunksCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712730, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6ddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5ddc, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) thunk_apply_mandatory_thunks_current_session;
    
    // [ViThunkApplyThunksCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7127b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6e6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5e6c, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) thunk_apply_thunks_current_session;
    
    // [ViThunkReplaceImportEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712cf0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7420, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6420, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) thunk_replace_import_entry;
    
    // [ViThunkReplaceImportIfThunkedRegular]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712d64, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7574, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6574, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) thunk_replace_import_if_thunked_regular;
    
    // [ViUtilsForXDV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd3e310, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65190, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e310, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) utils_for_xdv;
    
    // [ViXdvBindXdvDDIWrappers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707f5c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5c50, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) xdv_bind_xdv_ddi_wrappers;
    
    // [ViXdvBindXdvDriverEntryWrappers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708040, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6d1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5d1c, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) xdv_bind_xdv_driver_entry_wrappers;
    
    // [ViXdvEPBound]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f178, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461b8, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) xdv_ep_bound;
    
    // [ViXdvEPThunksNoXdvEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f174, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461b4, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) xdv_ep_thunks_no_xdv_entry;
    
    // [ViXdvSearchAllThunkArrays]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70832c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7110, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6110, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) xdv_search_all_thunk_arrays;
    
    // [ViXdvSearchAndReplaceThunkArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708390, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c717c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c617c, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) xdv_search_and_replace_thunk_array;
    
    // [ViXdvSearchAndReplaceThunkArrayOrderDependent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7083d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c71cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c61cc, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) xdv_search_and_replace_thunk_array_order_dependent;
    
    // [ViXdvSetXdvKernelUtilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59aeb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ba760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ad34, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) xdv_set_xdv_kernel_utilities;
    
    // [ViXdvThunksBoundToXdv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460ec, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) xdv_thunks_bound_to_xdv;
    
    // [ViXdvThunksNoXdvEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f170, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461ac, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) xdv_thunks_no_xdv_entry;
    
    // [ViXdvThunksNotFound]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f16c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461b0, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) xdv_thunks_not_found;
    
    // [ViXdvThunksNotPristine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460f0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) xdv_thunks_not_pristine;
    
    // [ViXdvThunksShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460f4, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) xdv_thunks_shared;
    
    // [ViXdvTipUtils]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0xd46150, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e708, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46160, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) xdv_tip_utils;
    
    // [ViActiveVerifierThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301850, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cd04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd8c, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) active_verifier_thunks;
    
    // [ViAdapterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70b4b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca1a0, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) adapter_callback;
    
    // [ViAdapterList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f060, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46078, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36440, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46078, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) adapter_list;
    
    // [ViAllocateContextTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707994, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6474, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaffec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5474, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) allocate_context_table;
    
    // [ViAllocateContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70b650, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb3ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3a6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca3ac, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) allocate_contiguous_memory;
    
    // [ViAllocateFromContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70b768, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb4cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3b8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca4cc, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) allocate_from_contiguous_memory;
    
    // [ViAllocateMapRegisterFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70b7fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb5c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3c84, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca5c4, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) allocate_map_register_file;
    
    // [ViAllocateMapRegistersFromFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ba08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb7d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab3e8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ca7d8, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) allocate_map_registers_from_file;
    
    // [ViAvlAcquireTableLockAtDpcLevelSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b800, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d6e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3396ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ea60, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) avl_acquire_table_lock_at_dpc_level_safe;
    
    // [ViAvlAllocateNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4ce8, 0x32828 bytes
    // ntoskrnl.exe .text:0x361c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x363050, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) avl_allocate_node;
    
    // [ViAvlCompareNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf964, 0x32828 bytes
    // ntoskrnl.exe .text:0x378640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3799c0, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) avl_compare_node;
    
    // [ViAvlCompareNodeUseSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf920, 0x32828 bytes
    // ntoskrnl.exe .text:0x3785f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3764c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379970, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) avl_compare_node_use_session_id;
    
    // [ViAvlInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301aa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cfa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b3c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d018, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) avl_initialized;
    
    // [ViAvlNodeInitializeSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b920, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d81c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33951c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36eb9c, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) avl_node_initialize_session_id;
    
    // [ViAvlNodeLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341680, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee780, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee780, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) avl_node_lookaside;
    
    // [ViAvlRaiseIrqlSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b858, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d73c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36eabc, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) avl_raise_irql_safe;
    
    // [ViAvlReleaseTableLockFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b7d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d6ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3396b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ea2c, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) avl_release_table_lock_from_dpc_level;
    
    // [ViAvlTableIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b874, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d774, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339664, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36eaf4, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) avl_table_index;
    
    // [ViBugcheckLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72fbc0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd70390, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47e40, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) bugcheck_log;
    
    // [ViBugcheckLogIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46438, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46434, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) bugcheck_log_index;
    
    // [ViBugcheckWorkaroundLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72fa40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd70210, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47cc0, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) bugcheck_workaround_log;
    
    // [ViBugcheckWorkaroundLogIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46434, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46438, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) bugcheck_workaround_log_index;
    
    // [ViCheckAdapterBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70bc48, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbb2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab41e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cab2c, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) check_adapter_buffers;
    
    // [ViCheckMdlLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70bcf0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbc54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab431c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cac54, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) check_mdl_length;
    
    // [ViCheckPadding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70bd3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab4364, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9caca0, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) check_padding;
    
    // [ViCheckTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70bef0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbe50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab4514, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cae50, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) check_tag;
    
    // [ViCiDefaultActions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75c408, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e138, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65178, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e138, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) ci_default_actions;
    
    // [ViCiPreprocessOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7073d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf9dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4e50, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) ci_preprocess_options;
    
    // [ViCopyBackModifiedBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c084, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbfa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab4664, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cafa0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) copy_back_modified_buffer;
    
    // [ViCopyDeviceDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c1b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc0dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab47a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb0dc, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) copy_device_description;
    
    // [ViCreateProcessCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf4a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b0c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4646b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c740, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) create_process_callback;
    
    // [ViCreateProcessCallbackInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714044, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9daa54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2224, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9a54, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) create_process_callback_internal;
    
    // [ViCtxAllocateIsrContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71cccc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2200, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0a64, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1200, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) ctx_allocate_isr_context;
    
    // [ViCtxCaptureInitialIsrState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71cd1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2254, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0ab8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1254, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) ctx_capture_initial_isr_state;
    
    // [ViCtxCheckAndReleaseIsrState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71cdc8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e22f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0b58, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e12f4, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) ctx_check_and_release_isr_state;
    
    // [ViCtxEqualExtendedState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71cebc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e23f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0c78, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e13f0, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) ctx_equal_extended_state;
    
    // [ViCtxHintIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46444, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4643c, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) ctx_hint_index;
    
    // [ViCtxInitializedIsrStateBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f05c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46070, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e558, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4606c, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) ctx_initialized_isr_state_blocks;
    
    // [ViCtxInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46448, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46448, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) ctx_interrupts;
    
    // [ViCtxInterruptsChecked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46440, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46444, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) ctx_interrupts_checked;
    
    // [ViCtxIsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71cfc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2510, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1510, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) ctx_isr;
    
    // [ViCtxIsrMessageBased]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d010, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2570, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1570, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) ctx_isr_message_based;
    
    // [ViCtxIsrStateBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x731d80, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd48c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd71150, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd48c00, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) ctx_isr_state_blocks;
    
    // [ViCtxSetPrivateConnectParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71d06c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e25dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad0e6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e15dc, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) ctx_set_private_connect_parameters;
    
    // [ViCtxXStateEnabledMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f120, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46148, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e608, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46148, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) ctx_x_state_enabled_mask;
    
    // [ViCtxXStateSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f058, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4606c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46068, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) ctx_x_state_size;
    
    // [ViDdiBuildWmiRegInfoData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707490, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaafaa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4f14, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) ddi_build_wmi_reg_info_data;
    
    // [ViDdiDeviceObjectArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46100, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46100, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) ddi_device_object_array;
    
    // [ViDdiDispatchWmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707578, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6010, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaafba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5010, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) ddi_dispatch_wmi;
    
    // [ViDdiDispatchWmiQueryAllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7075d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c607c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaafc04, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c507c, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) ddi_dispatch_wmi_query_all_data;
    
    // [ViDdiDispatchWmiRegInfoEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70775c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6218, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaafda0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5218, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) ddi_dispatch_wmi_reg_info_ex;
    
    // [ViDdiDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7077e8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c62b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaafe40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c52b0, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) ddi_driver_entry;
    
    // [ViDdiInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1caf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb98, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) ddi_initialized;
    
    // [ViDdiWmiMofKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f400, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47640, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fa60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47650, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) ddi_wmi_mof_key;
    
    // [ViDdiWmiMofResourceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f410, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47650, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fa70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47640, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) ddi_wmi_mof_resource_name;
    
    // [ViDeadlockAddParticipant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x717720, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc7b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac43a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db7b4, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) deadlock_add_participant;
    
    // [ViDeadlockAddResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71774c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc7e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac43dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db7e8, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) deadlock_add_resource;
    
    // [ViDeadlockAddThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x717984, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dca28, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4624, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dba28, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) deadlock_add_thread;
    
    // [ViDeadlockAgeWindow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b214, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65088, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e060, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) deadlock_age_window;
    
    // [ViDeadlockAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x717a40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac46e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbae8, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) deadlock_allocate;
    
    // [ViDeadlockAnalyze]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x717a9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcb44, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4740, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbb44, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) deadlock_analyze;
    
    // [ViDeadlockCanProceed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x717d14, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcdb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac79a, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbdb8, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) deadlock_can_proceed;
    
    // [ViDeadlockCertify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x717dac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dce2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac49ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dbe2c, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) deadlock_certify;
    
    // [ViDeadlockCheckDuplicatesAmongChildren]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x717fa8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4bd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc050, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) deadlock_check_duplicates_among_children;
    
    // [ViDeadlockCheckDuplicatesAmongRoots]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718024, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4c54, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc0d0, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) deadlock_check_duplicates_among_roots;
    
    // [ViDeadlockCheckStackLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7180a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd15c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4cdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc15c, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) deadlock_check_stack_limits;
    
    // [ViDeadlockChildrenCountMaximum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b010, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9004, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2004, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8004, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) deadlock_children_count_maximum;
    
    // [ViDeadlockDatabaseHashIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718110, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd1d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4d54, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc1d4, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) deadlock_database_hash_index;
    
    // [ViDeadlockDatabaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301348, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c8c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc364c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c928, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) deadlock_database_lock;
    
    // [ViDeadlockDatabaseOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301350, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c8c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc364c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c920, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) deadlock_database_owner;
    
    // [ViDeadlockDefaultActions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa1c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b91e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa21e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8218, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) deadlock_default_actions;
    
    // [ViDeadlockDetectionApplySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718140, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd20c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4d8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc20c, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) deadlock_detection_apply_settings;
    
    // [ViDeadlockDetectionEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f010, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46010, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e538, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46010, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) deadlock_detection_enabled;
    
    // [ViDeadlockDetectionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71818c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd25c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4dd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc25c, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) deadlock_detection_lock;
    
    // [ViDeadlockDetectionTryConvertSharedToExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2236f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c228, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bcd68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c0a8, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) deadlock_detection_try_convert_shared_to_exclusive;
    
    // [ViDeadlockDetectionUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7181c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd294, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc294, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) deadlock_detection_unlock;
    
    // [ViDeadlockEmptyDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7181dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd2c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac4e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc2c4, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) deadlock_empty_database;
    
    // [ViDeadlockForgetResourceHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718350, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd444, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac516c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc444, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) deadlock_forget_resource_history;
    
    // [ViDeadlockFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718474, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd558, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc558, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) deadlock_free;
    
    // [ViDeadlockGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f000, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46000, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) deadlock_globals;
    
    // [ViDeadlockIssue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301360, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c8e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc364e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c940, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) deadlock_issue;
    
    // [ViDeadlockKernelVerifierLookasideAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7184b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd5a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5590, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc5a0, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) deadlock_kernel_verifier_lookaside_allocate;
    
    // [ViDeadlockMergeNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7184c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd5c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac55b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc5c4, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) deadlock_merge_nodes;
    
    // [ViDeadlockNodeLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f640, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fe00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47900, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) deadlock_node_lookaside;
    
    // [ViDeadlockPopulateLookasideCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718670, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd760, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac57c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc760, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) deadlock_populate_lookaside_cache;
    
    // [ViDeadlockPreprocessOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7186d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd7c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5830, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc7c8, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) deadlock_preprocess_options;
    
    // [ViDeadlockRemoveMemoryRangeResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223720, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c258, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bcdb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c0d8, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) deadlock_remove_memory_range_resources;
    
    // [ViDeadlockRemoveMemoryRangeThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223878, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c3b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bcf18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c238, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) deadlock_remove_memory_range_threads;
    
    // [ViDeadlockRemoveNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7187c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd8c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5934, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc8c4, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) deadlock_remove_node;
    
    // [ViDeadlockRemoveResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718928, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd9fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dc9fc, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) deadlock_remove_resource;
    
    // [ViDeadlockRemoveThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718ac4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddb98, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcb98, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) deadlock_remove_thread;
    
    // [ViDeadlockReservedNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b028, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b900c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa200c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8008, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) deadlock_reserved_nodes;
    
    // [ViDeadlockReservedResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b02c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9010, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2010, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8010, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) deadlock_reserved_resources;
    
    // [ViDeadlockReservedThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b030, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9008, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2008, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b800c, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) deadlock_reserved_threads;
    
    // [ViDeadlockResourceLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f5c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47880, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fd80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47800, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) deadlock_resource_lookaside;
    
    // [ViDeadlockResourceTypeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa090, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b90b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa20a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b80b0, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) deadlock_resource_type_info;
    
    // [ViDeadlockResourceTypeSizeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa148, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9168, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2160, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8168, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) deadlock_resource_type_size_info;
    
    // [ViDeadlockSearchResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718c10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcce0, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) deadlock_search_resource;
    
    // [ViDeadlockSearchThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718cb0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddd88, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcd88, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) deadlock_search_thread;
    
    // [ViDeadlockSimilarNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718d38, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dde18, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5eb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dce18, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) deadlock_similar_node;
    
    // [ViDeadlockSimilarNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718d58, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dde40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dce40, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) deadlock_similar_nodes;
    
    // [ViDeadlockState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f014, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46020, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) deadlock_state;
    
    // [ViDeadlockThreadLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f6c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47800, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fd00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47880, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) deadlock_thread_lookaside;
    
    // [ViDeadlockTrimResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718d78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dde68, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5f04, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dce68, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) deadlock_trim_resources;
    
    // [ViDeadlockTrimThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b210, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e064, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6508c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e064, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) deadlock_trim_threshold;
    
    // [ViDeadlockUpdateChildrenCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718de0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5f60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcec4, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) deadlock_update_children_count;
    
    // [ViDeadlockVerifyOnlySpinlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f148, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b901c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa201c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b801c, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) deadlock_verify_only_spinlocks;
    
    // [ViDesktopTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa128, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9148, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2150, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8148, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) desktop_type_name;
    
    // [ViDevObjAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710a4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d427c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe440, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d327c, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) dev_obj_add;
    
    // [ViDevObjAllocationFailures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f160, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e658, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461a4, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) dev_obj_allocation_failures;
    
    // [ViDevObjAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f328, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47528, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6f9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47528, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) dev_obj_avl;
    
    // [ViDevObjDelayFreeAvlNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701480, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa93a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf060, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) dev_obj_delay_free_avl_node;
    
    // [ViDevObjInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e570, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460e4, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) dev_obj_initialized;
    
    // [ViDevObjRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710ac0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d42fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d32fc, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) dev_obj_remove;
    
    // [ViDmaVerifierTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa008, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9020, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8020, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) dma_verifier_tag;
    
    // [ViDomainCommonBufferList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f1c8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46360, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36480, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46360, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) domain_common_buffer_list;
    
    // [ViDoubleBufferDma]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b00c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e008, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65004, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e008, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) double_buffer_dma;
    
    // [ViDriverKernelBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36740, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cad8, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) driver_kernel_base;
    
    // [ViDriverKernelEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36890, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cae8, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) driver_kernel_end;
    
    // [ViDriverReApplyVerifierForAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707e94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6b08, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6934, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5b08, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) driver_re_apply_verifier_for_all;
    
    // [ViDriversLoadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301620, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc368e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cb40, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) drivers_load_lock;
    
    // [ViDriversLoadLockOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301658, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cab8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36918, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1caf0, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) drivers_load_lock_owner;
    
    // [ViEnableAfterHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f080, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46090, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) enable_after_hibernate;
    
    // [ViErrorDescriptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75caa0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e9b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e9b0, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) error_descriptions;
    
    // [ViErrorDisplayDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711ba4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d61b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf6d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d51b8, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) error_display_description;
    
    // [ViErrorFinishReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711bf4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d620c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabf724, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d520c, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) error_finish_report;
    
    // [ViErrorReport1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2233c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bf48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb3b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bdc8, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) error_report1;
    
    // [ViErrorReport10]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22343c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bfcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb438, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59be4c, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) error_report10;
    
    // [ViErrorReport4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2234c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb4cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bee0, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) error_report4;
    
    // [ViErrorReport6]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223564, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c104, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bf84, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) error_report6;
    
    // [ViEtwLastStopTraceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b070, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46198, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e644, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46198, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) etw_last_stop_trace_count;
    
    // [ViFaultApplicationsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cac0, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) fault_applications_list;
    
    // [ViFaultInjectionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301600, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36738, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cab0, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) fault_injection_lock;
    
    // [ViFaultTagsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36720, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1caa0, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) fault_tags_list;
    
    // [ViFaultTraces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f1c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46350, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e6f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46350, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) fault_traces;
    
    // [ViFaultTracesIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f298, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4641c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4641c, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) fault_traces_index;
    
    // [ViFaultTracesLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b038, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e010, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65024, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e010, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) fault_traces_length;
    
    // [ViFaultsAddAllApps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714110, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dab2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2354, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9b2c, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) faults_add_all_apps;
    
    // [ViFaultsAddAllTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7141bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dabd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2400, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9bd8, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) faults_add_all_tags;
    
    // [ViFaultsAddAppNoDuplicates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714268, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dac84, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac24ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9c84, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) faults_add_app_no_duplicates;
    
    // [ViFaultsAddTagNoDuplicates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714364, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dadd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2600, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9dd8, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) faults_add_tag_no_duplicates;
    
    // [ViFaultsDecisions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f258, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e790, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd463e0, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) faults_decisions;
    
    // [ViFaultsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460d0, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) faults_disabled;
    
    // [ViFaultsForceAllAPIs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36734, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cab8, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) faults_force_all_ap_is;
    
    // [ViFaultsGetBaseImageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71445c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9daf28, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2750, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9f28, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) faults_get_base_image_name;
    
    // [ViFaultsInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460d4, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) faults_initialized;
    
    // [ViFaultsInjectionNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7144ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db12c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2958, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da12c, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) faults_injection_notification;
    
    // [ViFaultsIsAppTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714544, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db1d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2a00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da1d4, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) faults_is_app_target;
    
    // [ViFaultsIsCurrentAppTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7145a4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db23c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da23c, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) faults_is_current_app_target;
    
    // [ViFaultsIsTagPresentInList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714618, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db320, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2b50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da320, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) faults_is_tag_present_in_list;
    
    // [ViFaultsIsTagTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71465c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db36c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2b9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da36c, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) faults_is_tag_target;
    
    // [ViFaultsRemoveAllApps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7146c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db3d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da3d8, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) faults_remove_all_apps;
    
    // [ViFaultsRemoveAllTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714730, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9db4a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac2cd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da4a4, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) faults_remove_all_tags;
    
    // [ViFilterAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7014a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa93d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf090, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) filter_add_device;
    
    // [ViFilterDeviceUsageNotificationCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71dc4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3070, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb3e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2070, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) filter_device_usage_notification_completion;
    
    // [ViFilterDispatchGeneric]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71dd00, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e31d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e21d0, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) filter_dispatch_generic;
    
    // [ViFilterDispatchPnp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ddc8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e32b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb600, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e22b0, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) filter_dispatch_pnp;
    
    // [ViFilterDispatchPower]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71df80, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3480, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2480, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) filter_dispatch_power;
    
    // [ViFilterDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e048, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3560, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb8b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2560, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) filter_driver_entry;
    
    // [ViFilterGenericCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e0a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e3660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb9b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e2660, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) filter_generic_completion_routine;
    
    // [ViFilterRemoveNotificationCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e154, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e36a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacb9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e26a0, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) filter_remove_notification_completion;
    
    // [ViFilterStartCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71e17c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e36d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacba20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e26d0, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) filter_start_completion_routine;
    
    // [ViFindMappedRegisterInFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c2a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc1d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab489c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb1d8, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) find_mapped_register_in_file;
    
    // [ViFindTriageDriverTargets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdc60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa925a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82ecc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91788, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) find_triage_driver_targets;
    
    // [ViFindTriageRule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdcd8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92624, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82f4c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91808, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) find_triage_rule;
    
    // [ViFlushDoubleBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c2d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc210, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab48d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb210, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) flush_double_buffer;
    
    // [ViFlushZeroMapRegisterBaseWcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22295c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b0f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9eec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59af78, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) flush_zero_map_register_base_wcbs;
    
    // [ViFnExtensionHiberFunc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b068, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46158, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e588, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46150, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) fn_extension_hiber_func;
    
    // [ViFnXdvQueryDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b200, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46160, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46158, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) fn_xdv_query_dispatch_table;
    
    // [ViForceAllDriversSuspect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b0c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36618, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca88, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) force_all_drivers_suspect;
    
    // [ViFreeContextTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7079cc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c64b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab002c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c54b4, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) free_context_table;
    
    // [ViFreeMapRegisterFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c488, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc3c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab4a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb3c4, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) free_map_register_file;
    
    // [ViFreeMapRegistersToFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c5d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc57c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab4c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb57c, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) free_map_registers_to_file;
    
    // [ViFreeToContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c6a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc650, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab4d34, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb650, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) free_to_contiguous_memory;
    
    // [ViFreeTrackedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705470, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3238, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabd3fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2238, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) free_tracked_pool;
    
    // [ViFullyInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca5c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc368a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cad0, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) fully_initialized;
    
    // [ViGenericBuildIrpLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7068bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaefb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4430, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) generic_build_irp_log_entry;
    
    // [ViGenericDumpIrpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706918, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c54a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf020, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c44a0, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) generic_dump_irp_stack;
    
    // [ViGenericIsNewRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706958, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c54f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf070, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c44f0, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) generic_is_new_request;
    
    // [ViGenericIsValidIrpStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706978, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5520, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4520, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) generic_is_valid_irp_status;
    
    // [ViGenericVerifyFinalIrpStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701470, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf050, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) generic_verify_final_irp_stack;
    
    // [ViGenericVerifyIrpStackDownward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706980, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5540, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4540, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) generic_verify_irp_stack_downward;
    
    // [ViGenericVerifyIrpStackUpward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706b7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5740, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf2c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4740, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) generic_verify_irp_stack_upward;
    
    // [ViGenericVerifyNewIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x706c3c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaf390, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4810, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) generic_verify_new_irp;
    
    // [ViGenericVerifyNewRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701470, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa9390, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf050, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) generic_verify_new_request;
    
    // [ViGetAdapterInformationInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c738, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc748, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab4e44, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb748, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) get_adapter_information_internal;
    
    // [ViGetContextPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7079dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c64d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab004c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c54d4, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) get_context_pointer;
    
    // [ViGetMapRegisterFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c830, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc914, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab501c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb914, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) get_map_register_file;
    
    // [ViGetMdlBufferSa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70c844, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc93c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab5044, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cb93c, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) get_mdl_buffer_sa;
    
    // [ViGrowPoolAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x705640, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3434, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb160, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2434, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) grow_pool_allocation;
    
    // [ViHalDefaultActions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa3d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b93f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2480, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b83f0, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) hal_default_actions;
    
    // [ViHalFreeDomainCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ca4c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccb54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab51e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbb54, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) hal_free_domain_common_buffer;
    
    // [ViHalPreprocessOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70caec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccc60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab52f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbc60, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) hal_preprocess_options;
    
    // [ViHalTrackDomainCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70cbdc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccd54, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab53e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbd54, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) hal_track_domain_common_buffer;
    
    // [ViHalWaitBlockLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f380, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd182c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47580, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) hal_wait_block_lookaside;
    
    // [ViHandleBreaksEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b220, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e068, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65090, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e068, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) handle_breaks_enabled;
    
    // [ViHasBufferBeenTouched]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70cc34, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cce14, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab54a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbe14, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) has_buffer_been_touched;
    
    // [ViHaveFaultTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36730, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca98, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) have_fault_tags;
    
    // [ViHookDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70cca4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cce8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab5520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbe8c, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) hook_dma_adapter;
    
    // [ViImageExecutionOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f078, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e574, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460a4, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) image_execution_options;
    
    // [ViInitSystemPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6438, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6c758, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5617c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6bf28, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) init_system_phase0;
    
    // [ViInitializeLocalSystemDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7060e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4bb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaea28, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3bb8, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) initialize_local_system_descriptor;
    
    // [ViInitializePadding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ce0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccfec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab56e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cbfec, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) initialize_padding;
    
    // [ViInjectInPagePathOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301854, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cd00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd84, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) inject_in_page_path_only;
    
    // [ViInternalTriageRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75c428, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dc88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12cd0, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) internal_triage_rules;
    
    // [ViIoCallbackSnapState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x708a84, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c7b84, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab73d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6b84, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) io_callback_snap_state;
    
    // [ViIoCallbackStateLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f940, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd70100, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47a80, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) io_callback_state_lookaside;
    
    // [ViIoCallbacksInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0cc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e578, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460e8, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) io_callbacks_initialized;
    
    // [ViIrpAllocateLockedPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f14c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf750, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9c64, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce750, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) irp_allocate_locked_packet;
    
    // [ViIrpCallDriverDataList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f7c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6ff00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47a00, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) irp_call_driver_data_list;
    
    // [ViIrpCheckKernelAddressForIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f27c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf888, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce888, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) irp_check_kernel_address_for_irp;
    
    // [ViIrpDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301828, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36ae8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd58, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) irp_database;
    
    // [ViIrpDatabaseAcquireLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2239e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c63c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdae4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c4bc, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) irp_database_acquire_lock_exclusive;
    
    // [ViIrpDatabaseAcquireLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdb08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c4e0, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) irp_database_acquire_lock_shared;
    
    // [ViIrpDatabaseAddressRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301830, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36af0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd50, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) irp_database_address_ranges;
    
    // [ViIrpDatabaseFindPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719c98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9deaec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacdac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddaec, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) irp_database_find_pointer;
    
    // [ViIrpDatabaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301820, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cce0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36af8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd60, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) irp_database_lock;
    
    // [ViIrpDatabaseReleaseLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223a20, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdb2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c504, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) irp_database_release_lock_exclusive;
    
    // [ViIrpDatabaseReleaseLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223a30, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bdba8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c580, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) irp_database_release_lock_shared;
    
    // [ViIrpLogDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301848, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd38, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) irp_log_database;
    
    // [ViIrpLogDatabaseFindPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71c9dc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac8f58, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0ea8, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) irp_log_database_find_pointer;
    
    // [ViIrpLogDatabaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301838, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd48, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) irp_log_database_lock;
    
    // [ViIrpLogDdiLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359204, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b670, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e20, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) irp_log_ddi_lock;
    
    // [ViIrpLogExposeWmiCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71ca08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e1ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac8f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0ee0, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) irp_log_expose_wmi_callback;
    
    // [ViIrpSynchronousCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70f2fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cf910, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab9e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ce910, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) irp_synchronous_completion_routine;
    
    // [ViIsActiveChannelWcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222a10, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b20c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ba000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b08c, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) is_active_channel_wcb;
    
    // [ViIsBTSSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x711f9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d65d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabfadc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d55d8, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) is_bts_supported;
    
    // [ViIsContextIdValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707a34, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6534, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab009c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5534, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) is_context_id_valid;
    
    // [ViIsDriverSuspectForVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7013ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c4ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaaeb4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3ce0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) is_driver_suspect_for_verifier;
    
    // [ViIsThreadInsidePagingCodePaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x718e0c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac5fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dcef8, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) is_thread_inside_paging_code_paths;
    
    // [ViKeInjectStatusAlerted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715f08, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da018, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac618, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d9018, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) ke_inject_status_alerted;
    
    // [ViKeIrqlLogCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x715f64, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9da07c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaac682, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d907c, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) ke_irql_log_common;
    
    // [ViKeTrackIrqlDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f158, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46194, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e638, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46194, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) ke_track_irql_disabled;
    
    // [ViKeTrackIrqlSkipped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f29c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46420, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46420, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) ke_track_irql_skipped;
    
    // [ViLoadedDriversCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b074, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e01c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6500c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e01c, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) loaded_drivers_count;
    
    // [ViLocalSystemDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f190, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e670, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461e8, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) local_system_descriptor;
    
    // [ViLockContextPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707a58, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c655c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab00bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c555c, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) lock_context_pointer;
    
    // [ViLookasideAllocationFailures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f088, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4609c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e53c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46094, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) lookaside_allocation_failures;
    
    // [ViLookasideAlreadyLoadedDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e568, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460e0, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) lookaside_already_loaded_drivers;
    
    // [ViLookasideAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd474d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e768, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd474d8, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) lookaside_avl;
    
    // [ViLookasideDelayFreeAvlNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701480, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa93a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf060, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) lookaside_delay_free_avl_node;
    
    // [ViLookasideInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f084, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46094, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e54c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46098, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) lookaside_initialized;
    
    // [ViLookupThunkArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707f24, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6b9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab69dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5b9c, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) lookup_thunk_array;
    
    // [ViLowerIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2239a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c4e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bd048, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c368, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) lower_irql;
    
    // [ViMajorVerifierRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72fe40, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd480c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd70610, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd480c0, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) major_verifier_routines;
    
    // [ViMakeVerifierSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdd74, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa926c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82ff0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa918ac, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) make_verifier_settings;
    
    // [ViMapDoubleBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70ceac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd094, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab578c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc094, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) map_double_buffer;
    
    // [ViMaxCommonBuffersPerAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b21c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b902c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2028, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b802c, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) max_common_buffers_per_adapter;
    
    // [ViMaxMapRegistersPerAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b04c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9014, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2014, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8014, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) max_map_registers_per_adapter;
    
    // [ViMemoryFillSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b03c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e014, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65028, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e014, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) memory_fill_size;
    
    // [ViMmMapLockedPagesSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f834, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5528, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacfa58, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4528, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) mm_map_locked_pages_sanity_checks;
    
    // [ViMmValidateIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71f928, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e5620, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xacfb50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e4620, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) mm_validate_irql;
    
    // [ViNotifyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cfc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36e00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d280, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) notify_event;
    
    // [ViObjectContextInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4643c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46440, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) object_context_initialized;
    
    // [ViObjectContextTableLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f9c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd70000, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47b80, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) object_context_table_lookaside;
    
    // [ViPacketLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f840, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6ff80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47b00, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) packet_lookaside;
    
    // [ViPacketNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71aa78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfa30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac9170, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dea30, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) packet_notification_callback;
    
    // [ViPendingCompleteAfterWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7102b4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3ad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabdbec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2ad4, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) pending_complete_after_wait;
    
    // [ViPendingCompleteAtDPC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7103d8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabdd30, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2c10, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) pending_complete_at_dpc;
    
    // [ViPendingDelayCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7103e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3c28, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabdd48, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2c28, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) pending_delay_completion;
    
    // [ViPendingProbability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa91c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12b94, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0db94, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12c04, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) pending_probability;
    
    // [ViPendingQueuePassiveLevelCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71054c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3d94, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabdeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2d94, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) pending_queue_passive_level_completion;
    
    // [ViPendingTryReserveWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223228, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bd40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb204, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bbc0, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) pending_try_reserve_worker;
    
    // [ViPendingWorkerIndexHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30168c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cb00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36954, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd2c, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) pending_worker_index_hint;
    
    // [ViPendingWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7105f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabdf70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d2e50, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) pending_worker_thread;
    
    // [ViPendingWorkers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3016a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cb20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cba0, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) pending_workers;
    
    // [ViPendingWorkersBusyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301698, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cb04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36958, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd20, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) pending_workers_busy_count;
    
    // [ViPendingWorkersCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301688, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36950, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd30, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) pending_workers_count;
    
    // [ViPnpVerifyMinorWasProcessedProperly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71bd44, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e0ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3430, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dfff0, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) pnp_verify_minor_was_processed_properly;
    
    // [ViPoolDelayFreeTrimThreadRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713b60, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de2f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6230, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd2f0, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) pool_delay_free_trim_thread_routine;
    
    // [ViPostPoolAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7056e4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d34dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabd608, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d24dc, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) post_pool_allocation;
    
    // [ViProtectBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b018, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e00c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65008, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e00c, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) protect_buffers;
    
    // [ViQueryObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x707a98, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c65a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab0104, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c55a4, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) query_object_context;
    
    // [ViRaiseIrqlToDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2239b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x59c560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bd0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59c3e0, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) raise_irql_to_dpc_level;
    
    // [ViRandomSeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f17c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e65c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461c0, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) random_seed;
    
    // [ViRecursionDepthLimitFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f094, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460fc, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) recursion_depth_limit_from_registry;
    
    // [ViReleaseDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d27c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd520, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab5c1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc520, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) release_dma_adapter;
    
    // [ViRemLockAllocationFailures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f164, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e654, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461a0, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) rem_lock_allocation_failures;
    
    // [ViRemLockAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f300, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47500, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6f9b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47500, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) rem_lock_avl;
    
    // [ViRemLockDelayFreeAvlNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701480, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa93a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf060, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) rem_lock_delay_free_avl_node;
    
    // [ViRemLockDeleteFirstTreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710edc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d47b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe8cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d37b4, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) rem_lock_delete_first_tree_node;
    
    // [ViRemLockFindSurrogate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x710f78, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4860, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabe978, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d3860, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) rem_lock_find_surrogate;
    
    // [ViRemLockInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f01c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46050, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46050, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) rem_lock_initialized;
    
    // [ViRemLockReusedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46430, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) rem_lock_reused_count;
    
    // [ViRemoveChannelWcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222a84, 0x32828 bytes
    // ntoskrnl.exe .text:0x59b2e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ba0ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b168, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) remove_channel_wcb;
    
    // [ViRequiredTimeSinceBootInMsecs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f1b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46348, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e6f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46348, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) required_time_since_boot_in_msecs;
    
    // [ViResourceAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f1e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46378, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e740, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46378, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) resource_avl;
    
    // [ViResourceDelayFreeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701480, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0060, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa93a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf060, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) resource_delay_free_node;
    
    // [ViResourceInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f08c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e540, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460a0, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) resource_initialized;
    
    // [ViResourceNotTracked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f054, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46068, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e56c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46064, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) resource_not_tracked;
    
    // [ViResourceStaleNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f15c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4619c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e640, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4619c, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) resource_stale_nodes;
    
    // [ViResourcesAlreadyLoadedDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f090, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46098, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e544, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4609c, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) resources_already_loaded_drivers;
    
    // [ViScatterGatherCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d388, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd690, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab5d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc690, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) scatter_gather_callback;
    
    // [ViSearchedNodesLimitFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e59c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460f8, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) searched_nodes_limit_from_registry;
    
    // [ViSessionDataInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f168, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd461a8, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) session_data_initialized;
    
    // [ViSessionDataLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f8c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd70080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47c00, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) session_data_lookaside;
    
    // [ViSettingsEnableKernelHandleChecking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719830, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de554, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6ebc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd554, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) settings_enable_kernel_handle_checking;
    
    // [ViSettingsIoCheckForChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719890, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9de5b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6f18, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dd5b0, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) settings_io_check_for_changes;
    
    // [ViSetupBTSPerProcNoEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7120c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d670c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabfc10, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d570c, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) setup_bts_per_proc_no_enable;
    
    // [ViShortTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa010, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9030, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2030, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8030, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) short_time;
    
    // [ViShutdownScheduleWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x714980, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d8354, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1084, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7354, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) shutdown_schedule_watchdog;
    
    // [ViShutdownTimeoutCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b050, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460dc, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) shutdown_timeout_count;
    
    // [ViShutdownWatchdogDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f570, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fcc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47750, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) shutdown_watchdog_dpc;
    
    // [ViShutdownWatchdogExecuteDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7149fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d83d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1100, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d73d0, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) shutdown_watchdog_execute_dpc;
    
    // [ViShutdownWatchdogTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f530, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47750, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fc80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47790, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) shutdown_watchdog_timer;
    
    // [ViSpecialAllocateCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d40c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd72c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab5e2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc72c, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) special_allocate_common_buffer;
    
    // [ViSpecialFreeCommonBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d554, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cd8a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab5fa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cc8a8, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) special_free_common_buffer;
    
    // [ViStackSwitchAlreadyReported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f14c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46188, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e630, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46188, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) stack_switch_already_reported;
    
    // [ViSuperDebug]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b000, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9000, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2000, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8000, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) super_debug;
    
    // [ViSuspectDriversLookupEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7196c4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0584, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac6ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf584, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) suspect_drivers_lookup_entry;
    
    // [ViSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d67c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cda00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6104, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cca00, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) swap;
    
    // [ViSystemSufficientlyBooted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0b8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460cc, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) system_sufficiently_booted;
    
    // [ViTagBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70d724, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9cdab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab61b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ccab0, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) tag_buffer;
    
    // [ViTargetAddCountersCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713238, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5110, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7840, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4110, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) target_add_counters_callback;
    
    // [ViTargetAddToCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713380, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5260, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7994, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4260, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) target_add_to_counter;
    
    // [ViTargetAllocationFailures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301aa4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cf9c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b7c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cfc8, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) target_allocation_failures;
    
    // [ViTargetDelayFreeAvlNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd564c, 0x32828 bytes
    // ntoskrnl.exe .text:0x361c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x363040, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) target_delay_free_avl_node;
    
    // [ViTargetDriversAllocateVerifiedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713410, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5300, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7a34, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4300, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) target_drivers_allocate_verified_data;
    
    // [ViTargetDriversAvl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301ac0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cf60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cfe0, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) target_drivers_avl;
    
    // [ViTargetFreeContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71349c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5394, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4394, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) target_free_contiguous_memory;
    
    // [ViTargetFreeContiguousMemoryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71350c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5420, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4420, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) target_free_contiguous_memory_callback;
    
    // [ViTargetFreeContiguousMemoryFromNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71352c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5448, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7b68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4448, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) target_free_contiguous_memory_from_node;
    
    // [ViTargetIncrementCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713594, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d54bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7bdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d44bc, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) target_increment_counter;
    
    // [ViTargetInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301af8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cf98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cfcc, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) target_initialized;
    
    // [ViTargetRemovingCheckContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7135f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5530, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4530, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) target_removing_check_contiguous_memory;
    
    // [ViTargetRemovingCheckEtwWmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713660, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d55ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7ccc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d45ac, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) target_removing_check_etw_wmi;
    
    // [ViTargetTrackContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713710, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5660, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4660, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) target_track_contiguous_memory;
    
    // [ViTargetUpdateTreeAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713818, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5778, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7e94, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4778, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) target_update_tree_allowed;
    
    // [ViTargetWMIDeregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x713834, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d579c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7eb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d479c, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) target_wmi_deregister;
    
    // [ViTargetWMIDeregisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7138a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5830, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4830, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) target_wmi_deregister_callback;
    
    // [ViTargetWMIRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7138cc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5864, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab7f84, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d4864, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) target_wmi_register;
    
    // [ViTargetWMIRegistrationMismatches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2d0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd474d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6f988, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd474d0, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) target_wmi_registration_mismatches;
    
    // [ViThunkCreateSharedExportInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701070, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c01d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa8f78, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf1d8, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) thunk_create_shared_export_information;
    
    // [ViThunkCreateThunkTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712870, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7784, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d5f34, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) thunk_create_thunk_table;
    
    // [ViThunkFindAllExportAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78be20, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa47a4c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb402cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa41e34, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) thunk_find_all_export_addresses;
    
    // [ViThunkFindAllSpecialTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7128f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d703c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7890, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d603c, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) thunk_find_all_special_tables;
    
    // [ViThunkFindExportAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78beb4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa47af0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40388, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa41ed8, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) thunk_find_export_address;
    
    // [ViThunkFindNextSpecialTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71299c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d70ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d60ec, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) thunk_find_next_special_table;
    
    // [ViThunkFreeSharedThunksArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x700ddc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0458, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa8eb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf458, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) thunk_free_shared_thunks_array;
    
    // [ViThunkRecoverPristines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7129ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7144, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7d6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6144, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) thunk_recover_pristines;
    
    // [ViThunkRemoveImportEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712aa0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7200, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7dec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6200, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) thunk_remove_import_entry;
    
    // [ViThunkReplaceAllSharedExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712b10, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7278, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7e64, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6278, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) thunk_replace_all_shared_exports;
    
    // [ViThunkReplaceAllThunkedImports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712b94, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7304, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac7ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6304, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) thunk_replace_all_thunked_imports;
    
    // [ViThunkReplacePristine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712d9c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7638, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac80d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6638, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) thunk_replace_pristine;
    
    // [ViThunkReplaceSharedExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712dc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7668, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac8108, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6668, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) thunk_replace_shared_exports;
    
    // [ViThunkReplaceSpecialPristine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x712e04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d7720, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac81ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d6720, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) thunk_replace_special_pristine;
    
    // [ViThunkSnapSharedExportByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x700eb4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c035c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa90fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf35c, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) thunk_snap_shared_export_by_name;
    
    // [ViThunkSnapSharedExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x700e04, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c02ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa904c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf2ac, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) thunk_snap_shared_exports;
    
    // [ViTrackIrqlIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f2a0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46428, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46428, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) track_irql_index;
    
    // [ViTrackIrqlQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0e0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46108, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e528, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46108, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) track_irql_queue;
    
    // [ViTrackIrqlQueueLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b014, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e024, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6501c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e024, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) track_irql_queue_length;
    
    // [ViTriageCrashData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301860, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cf20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cfa0, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) triage_crash_data;
    
    // [ViTriageSameDriversFromDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bde60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa927b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb830e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa9199c, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) triage_same_drivers_from_dump;
    
    // [ViTrimSpaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9dfc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1261c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1268c, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) trim_spaces;
    
    // [ViUnlockContextPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701474, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c660c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab016c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c560c, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) unlock_context_pointer;
    
    // [ViValidateTriageRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bdf10, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92874, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8319c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91a58, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) validate_triage_rules;
    
    // [ViVerifierBugcheckAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa470, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9490, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa23e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8490, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) verifier_bugcheck_attributes;
    
    // [ViVerifierDriverAddedSpecialThunkListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ccf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd70, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) verifier_driver_added_special_thunk_list_head;
    
    // [ViVerifierDriverAddedThunkListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3015a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cff0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36dd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d2b0, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) verifier_driver_added_thunk_list_head;
    
    // [ViVerifierEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cfe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36de0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1d2a0, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) verifier_enabled;
    
    // [ViVerifierSpecialThunkTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cce4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36b08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd88, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) verifier_special_thunk_tables;
    
    // [ViVerifyAllDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301b08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ca10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ca8c, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) verify_all_drivers;
    
    // [ViVerifyBTSBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f018, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46054, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e518, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46054, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) verify_bts_buffer_size;
    
    // [ViVerifyDma]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301690, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36458, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cd28, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) verify_dma;
    
    // [ViVerifyTargets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3018a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1cd20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc36bc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1cda0, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) verify_targets;
    
    // [ViVerifyTriage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c68, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12064, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd1c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120c4, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) verify_triage;
    
    // [ViVerifyTriageRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x732c80, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4b900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd75650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4b900, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) verify_triage_rules;
    
    // [ViVerifyTriageRulesSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b034, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e018, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65018, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e018, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) verify_triage_rules_size;
    
    // [ViWdBeforeCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719e88, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9decf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca1d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddcf8, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) wd_before_call_driver;
    
    // [ViWdBeforeCancelIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719ee8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ded60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca23c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddd60, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) wd_before_cancel_irp;
    
    // [ViWdBreaksEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b20c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e034, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65084, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd3e034, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) wd_breaks_enabled;
    
    // [ViWdCancelIrpCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f28c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46414, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46414, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) wd_cancel_irp_count;
    
    // [ViWdCancelling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f0ac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e594, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd460c0, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) wd_cancelling;
    
    // [ViWdInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f140, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46180, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e590, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46180, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) wd_initialized;
    
    // [ViWdInsertSortIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719f7c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dee0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca2e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dde0c, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) wd_insert_sort_irp;
    
    // [ViWdIrpBeforeCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x719fdc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dee7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca358, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9dde7c, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) wd_irp_before_completion_routine;
    
    // [ViWdIrpListLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f00c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46014, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e4dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46014, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) wd_irp_list_length;
    
    // [ViWdIrpListLengthMaximum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f144, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46184, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46184, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) wd_irp_list_length_maximum;
    
    // [ViWdIrpLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f740, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47980, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fe80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd47980, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) wd_irp_lookaside_list;
    
    // [ViWdIrpTimedOut]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a060, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9def10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca3ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddf10, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) wd_irp_timed_out;
    
    // [ViWdIrpTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f470, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd476b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fc00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd476f0, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) wd_irp_timer;
    
    // [ViWdIrpTimerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f4b0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd476f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6fc40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd476b0, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) wd_irp_timer_dpc;
    
    // [ViWdIrpTimerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x71a0ec, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9defb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaca490, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ddfb0, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) wd_irp_timer_dpc_routine;
    
    // [ViWdTickCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFB:0x72f050, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46064, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd6e51c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd46060, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) wd_tick_count;
    
    // [ViWindowStationTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa138, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9158, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2140, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8158, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) window_station_type_name;
    
    // [ViXdvDriverLoadImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70815c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c6e2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6a1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c5e2c, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) xdv_driver_load_image;
    
    // [ViXdvGetFuncAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7082fc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c70d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xab6c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c60d8, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) xdv_get_func_address;
    
    // [ViZwCheckApcRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723cbc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea794, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac0ed8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9794, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) zw_check_apc_requirement;
    
    // [ViZwCheckObjectAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723d1c, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea7fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac0f34, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e97fc, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) zw_check_object_attributes;
    
    // [ViZwCheckUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723d68, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea84c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac0f84, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e984c, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) zw_check_unicode_string;
    
    // [ViZwCheckVirtualAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723df8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea8e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac100c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e98e4, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) zw_check_virtual_address;
    
    // [ViZwShouldCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x723e38, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea930, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xac1048, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9930, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) zw_should_check;
};
#include "magic/api.end.hpp"
