#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ext
{
    // [ExtEnvDestroySpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50e038, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) env_destroy_spin_lock;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsRemoveLogContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m01(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_remove_log_container;
    
    // [ext_ms_win_ntos_clipsp_l1_1_0_ClipSpUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) ms_win_ntos_clipsp_l1_1_0_clip_sp_uninitialize;
    
    // [ext_ms_win_ntos_globmerger_l1_1_0_CimfsMountBootVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) ms_win_ntos_globmerger_l1_1_0_cimfs_mount_boot_volume;
    
    // [ext_ms_win_ntos_ium_l1_1_0_IumApiInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) ms_win_ntos_ium_l1_1_0_ium_api_init;
    
    // [ext_ms_win_ntos_ksecurity_l1_1_1_AppContainerPrivilegesEnabledExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) ms_win_ntos_ksecurity_l1_1_1_app_container_privileges_enabled_ext;
    
    // [ext_ms_win_ntos_ksigningpolicy_l1_1_0_SeQuerySigningPolicyExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) ms_win_ntos_ksigningpolicy_l1_1_0_se_query_signing_policy_ext;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrClaimPersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m07(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_claim_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrCleanupPageDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_cleanup_page_database;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrEnumeratePersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m09(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_enumerate_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrFreePersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_free_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrFreePersistedMemoryBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_free_persisted_memory_block;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrGetFirmwareInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_get_firmware_information;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrInitPageDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m13(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_init_page_database;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m14(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_init_system;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrMdlToMemoryRuns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_mdl_to_memory_runs;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrPersistMemoryWithMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m16(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_persist_memory_with_metadata;
    
    // [ext_ms_win_ntos_ksr_l1_1_1_KsrQueryMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_1_ksr_query_metadata;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrClaimPersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_claim_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrCleanupPageDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_cleanup_page_database;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrEnumeratePersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_enumerate_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrFreePersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_free_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrFreePersistedMemoryBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_free_persisted_memory_block;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrGetFirmwareInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_get_firmware_information;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrInitPageDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_init_page_database;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_init_system;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrMdlToMemoryRuns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_mdl_to_memory_runs;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrPersistMemoryWithMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_persist_memory_with_metadata;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrQueryMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_query_metadata;
    
    // [ext_ms_win_ntos_runlevels_l1_1_0_ExpInitializeRunLevel0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) ms_win_ntos_runlevels_l1_1_0_exp_initialize_run_level0;
    
    // [ext_ms_win_ntos_werkernel_l1_1_0_WerLiveKernelCancelReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m30(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_0_wer_live_kernel_cancel_report;
    
    // [ext_ms_win_ntos_werkernel_l1_1_0_WerLiveKernelCloseHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m31(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_0_wer_live_kernel_close_handle;
    
    // [ext_ms_win_ntos_werkernel_l1_1_0_WerLiveKernelCreateReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m32(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_0_wer_live_kernel_create_report;
    
    // [ext_ms_win_ntos_werkernel_l1_1_0_WerLiveKernelInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m33(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_0_wer_live_kernel_init_system;
    
    // [ext_ms_win_ntos_werkernel_l1_1_0_WerLiveKernelOpenDumpFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m34(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_0_wer_live_kernel_open_dump_file;
    
    // [ext_ms_win_ntos_werkernel_l1_1_0_WerLiveKernelSubmitReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    //
    _m35(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_0_wer_live_kernel_submit_report;
    
    // [ExtEnvZeroMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3692e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a690, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) env_zero_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrClaimPersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m37(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_claim_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrCleanupPageDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m38(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_cleanup_page_database;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrEnumeratePersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m39(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_enumerate_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrFreePersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _m40(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_free_persisted_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrFreePersistedMemoryBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_free_persisted_memory_block;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrGetFirmwareInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_get_firmware_information;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrInitPageDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_init_page_database;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_init_system;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrMdlToMemoryRuns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_mdl_to_memory_runs;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrPersistMemoryWithMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_persist_memory_with_metadata;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrQueryMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_query_metadata;
    
    // [ExtEnvAllocateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cf680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf570, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) env_allocate_memory;
    
    // [ExtEnvAllocatePhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cf6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ddc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf5c0, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) env_allocate_physical_memory;
    
    // [ExtEnvAllocationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fda0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48c40, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) env_allocation_list;
    
    // [ExtEnvAllocationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48c80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fdc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48c60, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) env_allocation_lock;
    
    // [ExtEnvClearBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cf914, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf804, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) env_clear_bits;
    
    // [ExtEnvCriticalFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cf92c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e018, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf81c, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) env_critical_failure;
    
    // [ExtEnvFreeMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cf94c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e0ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf83c, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) env_free_memory;
    
    // [ExtEnvFreePhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cf98c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e12c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf87c, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) env_free_physical_memory;
    
    // [ExtEnvInitializeBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x254160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3680d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303eb0, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) env_initialize_bit_map;
    
    // [ExtEnvInitializeSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cfac4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e82cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf9b4, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) env_initialize_spin_lock;
    
    // [ExtEnvLockList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48c70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fdb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48c50, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) env_lock_list;
    
    // [ExtEnvRegisterIommu]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8b570, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3e328, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8a7f0, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) env_register_iommu;
    
    // [ExtEnvSetVpptTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b9e64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f85b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9d34, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) env_set_vppt_target;
    
    // [ext_ms_win_ntos_processparameters_l1_1_0_PsDestroyProcessParameterOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) ms_win_ntos_processparameters_l1_1_0_ps_destroy_process_parameter_overrides;
    
    // [ext_ms_win_ntos_processparameters_l1_1_0_PsGetProcessParameterOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) ms_win_ntos_processparameters_l1_1_0_ps_get_process_parameter_overrides;
    
    // [ext_ms_win_ntos_stateseparation_l1_1_0_ExpInitializeStateSeparationPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) ms_win_ntos_stateseparation_l1_1_0_exp_initialize_state_separation_phase0;
    
    // [ext_ms_win_ntos_stateseparation_l1_1_0_ExpInitializeStateSeparationPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) ms_win_ntos_stateseparation_l1_1_0_exp_initialize_state_separation_phase1;
    
    // [ext_ms_win_ntos_stateseparation_l1_1_0_ExpInitializeStateSeparationPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) ms_win_ntos_stateseparation_l1_1_0_exp_initialize_state_separation_phase2;
    
    // [ext_ms_win_ntos_trace_l1_1_0_TraceInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) ms_win_ntos_trace_l1_1_0_trace_init_system;
    
    // [ext_ms_win_ntos_werkernel_l1_1_1_WerLiveKernelCancelReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_1_wer_live_kernel_cancel_report;
    
    // [ext_ms_win_ntos_werkernel_l1_1_1_WerLiveKernelCloseHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_1_wer_live_kernel_close_handle;
    
    // [ext_ms_win_ntos_werkernel_l1_1_1_WerLiveKernelCreateReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_1_wer_live_kernel_create_report;
    
    // [ext_ms_win_ntos_werkernel_l1_1_1_WerLiveKernelInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_1_wer_live_kernel_init_system;
    
    // [ext_ms_win_ntos_werkernel_l1_1_1_WerLiveKernelOpenDumpFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_1_wer_live_kernel_open_dump_file;
    
    // [ext_ms_win_ntos_werkernel_l1_1_1_WerLiveKernelSubmitReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_1_wer_live_kernel_submit_report;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsAddLogContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_add_log_container;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsCloseLogFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_close_log_file_object;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsCreateLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_create_log_file;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsCreateMarshallingArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_create_marshalling_area;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsDeleteLogByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_delete_log_by_pointer;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsDeleteMarshallingArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_delete_marshalling_area;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsFlushToLsn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_flush_to_lsn;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsGetLogFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_get_log_file_information;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsLsnContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_lsn_container;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsLsnDifference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_lsn_difference;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsLsnEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_lsn_equal;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsLsnInvalid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_lsn_invalid;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsLsnLess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_lsn_less;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsMgmtDeregisterManagedClient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_mgmt_deregister_managed_client;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsMgmtInstallPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_mgmt_install_policy;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsMgmtRegisterManagedClient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_mgmt_register_managed_client;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsReadLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_read_log_record;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsReadNextLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_read_next_log_record;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsReadRestartArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_read_restart_area;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsReserveAndAppendLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_reserve_and_append_log;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsTerminateReadLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_terminate_read_log;
    
    // [ext_ms_win_fs_clfs_l1_1_0_ClfsWriteRestartArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) ms_win_fs_clfs_l1_1_0_clfs_write_restart_area;
    
    // [ext_ms_win_ntos_clipsp_l1_1_0_ClipSpInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) ms_win_ntos_clipsp_l1_1_0_clip_sp_initialize;
    
    // [ext_ms_win_ntos_kcminitcfg_l1_1_0_CmCompleteInitMachineConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) ms_win_ntos_kcminitcfg_l1_1_0_cm_complete_init_machine_config;
    
    // [ext_ms_win_ntos_kcminitcfg_l1_1_0_CmSetInitMachineConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) ms_win_ntos_kcminitcfg_l1_1_0_cm_set_init_machine_config;
    
    // [ext_ms_win_ntos_ksecurity_l1_1_1_QueryUpdateFileEaAllowedExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) ms_win_ntos_ksecurity_l1_1_1_query_update_file_ea_allowed_ext;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtCommitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_commit_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtCommitEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_commit_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtCommitTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_commit_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_create_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtCreateResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_create_resource_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtCreateTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_create_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtCreateTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_create_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtEnumerateTransactionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_enumerate_transaction_object;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtFreezeTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_freeze_transactions;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtGetNotificationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_get_notification_resource_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtOpenEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_open_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtOpenResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_open_resource_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtOpenTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_open_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtOpenTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_open_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtPrePrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_pre_prepare_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtPrePrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_pre_prepare_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtPrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_prepare_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtPrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_prepare_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtPropagationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_propagation_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtPropagationFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_propagation_failed;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtQueryInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_query_information_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtQueryInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_query_information_resource_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtQueryInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_query_information_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtQueryInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_query_information_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtReadOnlyEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_read_only_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRecoverEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_recover_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRecoverResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_recover_resource_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRecoverTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_recover_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRegisterProtocolAddressInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_register_protocol_address_information;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRenameTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_rename_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRollbackComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_rollback_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRollbackEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_rollback_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRollbackTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_rollback_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtRollforwardTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_rollforward_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtSetInformationEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_set_information_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtSetInformationResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_set_information_resource_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtSetInformationTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_set_information_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtSetInformationTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_set_information_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtSinglePhaseReject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_single_phase_reject;
    
    // [ext_ms_win_ntos_tm_l1_1_0_NtThawTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_nt_thaw_transactions;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmCancelPropagationRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_cancel_propagation_request;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmCommitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_commit_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmCommitEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_commit_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmCommitTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_commit_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_create_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmCurrentTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_current_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmDereferenceEnlistmentKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_dereference_enlistment_key;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmEnableCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_enable_callbacks;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmEndPropagationRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_end_propagation_request;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmFreezeTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_freeze_transactions;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmGetTransactionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_get_transaction_id;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_init_system;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmInitSystemPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_init_system_phase2;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmInitializeTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_initialize_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_is_ktm_commit_coordinator;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmIsTransactionActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_is_transaction_active;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmPrePrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_pre_prepare_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmPrePrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_pre_prepare_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmPrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_prepare_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmPrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_prepare_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmPropagationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_propagation_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmPropagationFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_propagation_failed;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmReadOnlyEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_read_only_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRecoverEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_recover_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRecoverResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_recover_resource_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRecoverTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_recover_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmReferenceEnlistmentKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_reference_enlistment_key;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRenameTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_rename_transaction_manager;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRequestOutcomeEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_request_outcome_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRollbackComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_rollback_complete;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRollbackEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_rollback_enlistment;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmRollbackTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_rollback_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmSetCurrentTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_set_current_transaction;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_shutdown_system;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmSinglePhaseReject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_single_phase_reject;
    
    // [ext_ms_win_ntos_tm_l1_1_0_TmThawTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) ms_win_ntos_tm_l1_1_0_tm_thaw_transactions;
    
    // [ext_ms_win_ntos_ucode_l1_1_0_ExpMicrocodeInformationLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) ms_win_ntos_ucode_l1_1_0_exp_microcode_information_load;
    
    // [ext_ms_win_ntos_ucode_l1_1_0_ExpMicrocodeInformationUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) ms_win_ntos_ucode_l1_1_0_exp_microcode_information_unload;
    
    // [ext_ms_win_ntos_ucode_l1_1_0_ExpMicrocodeInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) ms_win_ntos_ucode_l1_1_0_exp_microcode_initialization;
    
    // [ext_ms_win_core_win32k_dxgk_internal_l1_1_0_DxgkCloseAdapterInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe4ee0, 0x27ef0 bytes
    //
    _n78(sdk::unknown_ptr) ms_win_core_win32k_dxgk_internal_l1_1_0_dxgk_close_adapter_internal;
    
    // [ext_ms_win_core_win32k_dxgk_internal_l1_1_0_DxgkOpenAdapterFromLuidInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe4ee0, 0x27ef0 bytes
    //
    _n79(sdk::unknown_ptr) ms_win_core_win32k_dxgk_internal_l1_1_0_dxgk_open_adapter_from_luid_internal;
    
    // [ext_ms_win_core_win32k_dxgk_internal_l1_1_0_DxgkWaitForVerticalBlankEventInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe4ee0, 0x27ef0 bytes
    //
    _n80(sdk::unknown_ptr) ms_win_core_win32k_dxgk_internal_l1_1_0_dxgk_wait_for_vertical_blank_event_internal;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkCancelPresents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n81(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_cancel_presents;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkCheckSinglePlaneForMultiPlaneOverlaySupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n82(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_check_single_plane_for_multi_plane_overlay_support;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkGetProperties]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n83(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_get_properties;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkSetProperties]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n84(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_set_properties;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetSwapChainSurfacePhysicalAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n85(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_swap_chain_surface_physical_address;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectAddContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n86(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_add_content;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectAddPoolBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n87(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_add_pool_buffer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectConsumerAcquirePresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n88(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_consumer_acquire_present;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectConsumerAdjustUsageReference]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n89(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_consumer_adjust_usage_reference;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectConsumerBeginProcessPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n90(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_consumer_begin_process_present;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectConsumerEndProcessPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n91(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_consumer_end_process_present;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectConsumerPostMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n92(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_consumer_post_message;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectConsumerQueryBufferInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n93(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_consumer_query_buffer_info;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n94(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_create;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectDisconnectEndpoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n95(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_disconnect_endpoint;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectEnablePresentStatisticsType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n96(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_enable_present_statistics_type;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectOpen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n97(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_open;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectPresentCancel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n98(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_present_cancel;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectQueryBufferAvailableEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _n99(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_query_buffer_available_event;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectQueryEndpointConnected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o00(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_query_endpoint_connected;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectQueryLostEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o01(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_query_lost_event;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectQueryNextMessageToProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o02(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_query_next_message_to_producer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectReadNextMessageToProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o03(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_read_next_message_to_producer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectRemoveContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o04(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_remove_content;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectRemovePoolBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o05(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_remove_pool_buffer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_1_NtFlipObjectSetContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o06(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_1_nt_flip_object_set_content;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtBindCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o07(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_bind_composition_surface;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtCreateCompositionSurfaceHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o08(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_create_composition_surface_handle;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtNotifyPresentToCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o09(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_notify_present_to_composition_surface;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtOpenCompositionSurfaceDirtyRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o10(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_open_composition_surface_dirty_region;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtOpenCompositionSurfaceRealizationInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o11(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_open_composition_surface_realization_info;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtOpenCompositionSurfaceSectionInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o12(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_open_composition_surface_section_info;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtQueryCompositionSurfaceBinding]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o13(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_query_composition_surface_binding;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtQueryCompositionSurfaceFrameRate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o14(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_query_composition_surface_frame_rate;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtQueryCompositionSurfaceHDRMetaData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o15(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_query_composition_surface_hdr_meta_data;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtQueryCompositionSurfaceRenderingRealization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o16(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_query_composition_surface_rendering_realization;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtQueryCompositionSurfaceStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o17(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_query_composition_surface_statistics;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtSetCompositionSurfaceAnalogExclusive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o18(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_set_composition_surface_analog_exclusive;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtSetCompositionSurfaceBufferUsage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o19(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_set_composition_surface_buffer_usage;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtSetCompositionSurfaceDirectFlipState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o20(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_set_composition_surface_direct_flip_state;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtSetCompositionSurfaceIndependentFlipInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o21(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_set_composition_surface_independent_flip_info;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtSetCompositionSurfaceStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o22(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_set_composition_surface_statistics;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtUnBindCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o23(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_un_bind_composition_surface;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_1_NtValidateCompositionSurfaceHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32k.sys .text:0x12200, 0x3e907 bytes
    //
    _o24(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_1_nt_validate_composition_surface_handle;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_atmfdEnableDriver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_atmfd_enable_driver;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bATMFDDisabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_atmfd_disabled;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bDeleteFont]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_delete_font;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bDoubleDpi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_double_dpi;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bEnableFontDriver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_enable_font_driver;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bInitFontTables]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_init_font_tables;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bInitRedirDev]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_init_redir_dev;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bInitStockFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_init_stock_fonts;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bInitializeEUDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_initialize_eudc;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bSetDevDragRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_set_dev_drag_rect;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bSpEnableSprites]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_b_sp_enable_sprites;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_BmfdEnableDriver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_bmfd_enable_driver;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_CleanupHLSURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_cleanup_hlsurf;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_CreatePhysicalMonitorWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_create_physical_monitor_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DestroyPhysicalMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_destroy_physical_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DEVICE_PFTOBJ_pPFFGetWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_device_pftobj_p_pff_get_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DEVLOCKOBJ_bDisposeTrgDcoWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_devlockobj_b_dispose_trg_dco_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DEVLOCKOBJ_bPrepareTrgDcoWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_devlockobj_b_prepare_trg_dco_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DrvRealizeHalftonePaletteWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_drv_realize_halftone_palette_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DwmAsyncRegisterSharedThumbnailVisualApiExt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dwm_async_register_shared_thumbnail_visual_api_ext;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DwmAsyncRegisterSharedVirtualDesktopVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dwm_async_register_shared_virtual_desktop_visual;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DwmDestroyDeviceSpecificResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dwm_destroy_device_specific_resources;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngAccumD3DPresentBounds]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_accum_d3d_present_bounds;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngAcquireStableSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_acquire_stable_sprite;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngAcquireStableVisRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_acquire_stable_vis_rgn;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngAddRedirBitmapD3DDirtyRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_add_redir_bitmap_d3d_dirty_rgn;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngBltViaGDI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_blt_via_gdi;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngColorFillViaGDI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_color_fill_via_gdi;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngDetectGDIPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_detect_gdi_path;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngGetClientRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_get_client_rect;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngGetDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_get_dc;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngGetRedirBitmapSharedHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_get_redir_bitmap_shared_handle;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngGetRemoteDeviceCount]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_get_remote_device_count;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngGetRgnData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_get_rgn_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngGetWindowRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_get_window_rect;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngIsDwmProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_is_dwm_process;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngIsRedirectionDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_is_redirection_dc;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngLockVisRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_lock_vis_rgn;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngQueryWin32InfoPlatform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_query_win32_info_platform;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngReleaseDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_release_dc;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngReleaseStableSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_release_stable_sprite;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngReleaseStableVisRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_release_stable_vis_rgn;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngUnlockVisRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_unlock_vis_rgn;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_DxgkEngWatchVisRgnChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_dxgk_eng_watch_vis_rgn_change;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_EnableHalftone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_enable_halftone;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_EngBitBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_eng_bit_blt;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_EngCopyBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_eng_copy_bits;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_EngFreeModule]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_eng_free_module;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_FinishStockFontInit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_finish_stock_font_init;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_FinishStockFontReinit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_finish_stock_font_reinit;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_FontDriverQueryRoutine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_font_driver_query_routine;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_FreeNonCachedUserMemWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_free_non_cached_user_mem_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GdiMultiUserFontCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gdi_multi_user_font_cleanup;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GdiThreadCalloutFlushUserBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gdi_thread_callout_flush_user_batch;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetColorManagementCapsWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_get_color_management_caps_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetDpiSettingWithNoDefault]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_get_dpi_setting_with_no_default;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetMAPPER_SignatureTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_get_mapper_signature_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetMaxGdiHandleCount]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_get_max_gdi_handle_count;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetNineGridRenderingData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_get_nine_grid_rendering_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetWin8StyleDpiSettingFromRegistry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_get_win8_style_dpi_setting_from_registry;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgForceFontAssocCodePage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getg_force_font_assoc_code_page;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgSystemAnsiCodePage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getg_system_ansi_code_page;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgSystemOemCodePage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getg_system_oem_code_page;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgbFinishDefGUIFontInit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgb_finish_def_gui_font_init;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetghsemEnableEUDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getghsem_enable_eudc;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpBmpDev]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgp_bmp_dev;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpDefITable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgp_def_i_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpPFTDeviceWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgp_pft_device_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpRedirDev]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgp_redir_dev;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpfmffTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgpfmff_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpfsTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgpfs_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpniFontsDirectoryAndScratch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _o96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgpni_fonts_directory_and_scratch;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgptoWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgpto_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgpwszFamilyDefaultFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgpwsz_family_default_fonts;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GetgvsStateWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _o99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_getgvs_state_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreDeleteClientObj]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_delete_client_obj;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreDeleteWnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _p01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_delete_wnd;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreDwmDesktopOverlaysEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_dwm_desktop_overlays_enabled;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreFlush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _p03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_flush;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreGetAspectRatioFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_get_aspect_ratio_filter;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreGetRandomRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_get_random_rgn;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreGetTextExtentW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_get_text_extent_w;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreHideSprites]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _p07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_hide_sprites;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreHintDCWnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_hint_dc_wnd;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreInternalHidePointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_internal_hide_pointer;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreMovePointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _p10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_move_pointer;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GrePolyBezier]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_poly_bezier;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GrePolyBezierTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_poly_bezier_to;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GrePolyPolygon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_poly_polygon;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GrePolyPolyline]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_poly_polyline;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GrePolylineTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_polyline_to;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreSelectFont]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_select_font;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreSelectRedirectionBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_select_redirection_bitmap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreSetBitmapBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_set_bitmap_bits;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GreSetLFONTOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_gre_set_lfont_owner;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_GrepSfmRemoveSurfaces]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _p20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_grep_sfm_remove_surfaces;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_hfontCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_hfont_create;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_HT_DestroyDeviceHalftoneInfoWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _p22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_ht_destroy_device_halftone_info_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_InitFNTCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _p23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_init_fnt_cache;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_InitializeGdiCrossSessionGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_initialize_gdi_cross_session_globals;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsBmfdEnableDriverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_bmfd_enable_driver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsCleanupHLSURFSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_cleanup_hlsurf_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsCreatePhysicalMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_create_physical_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDestroyPhysicalMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_destroy_physical_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDEVICE_PFTOBJ_pPFFGetSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_device_pftobj_p_pff_get_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDEVLOCKOBJ_bDisposeTrgDcoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_devlockobj_b_dispose_trg_dco_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDEVLOCKOBJ_bPrepareTrgDcoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_devlockobj_b_prepare_trg_dco_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDrvRealizeHalftonePaletteSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_drv_realize_halftone_palette_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDwmActive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dwm_active;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDwmDestroyDeviceSpecificResourcesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dwm_destroy_device_specific_resources_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngAccumD3DPresentBoundsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_accum_d3d_present_bounds_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngAcquireStableSpriteSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_acquire_stable_sprite_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngAcquireStableVisRgnSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_acquire_stable_vis_rgn_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngAddRedirBitmapD3DDirtyRgnSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_add_redir_bitmap_d3d_dirty_rgn_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngBltViaGDISupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_blt_via_gdi_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngDetectGDIPathSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_detect_gdi_path_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngGetClientRectSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_get_client_rect_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngGetDCSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_get_dc_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngGetRedirBitmapSharedHandleSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_get_redir_bitmap_shared_handle_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngGetRgnDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_get_rgn_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngGetWindowRectSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_get_window_rect_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngIsDwmProcessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_is_dwm_process_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngIsRedirectionDCSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_is_redirection_dc_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngLockVisRgnSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_lock_vis_rgn_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngQueryWin32InfoPlatformSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_query_win32_info_platform_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngReleaseDCSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_release_dc_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngReleaseStableSpriteSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_release_stable_sprite_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngReleaseStableVisRgnSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_release_stable_vis_rgn_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngUnlockVisRgnSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_unlock_vis_rgn_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsDxgkEngWatchVisRgnChangeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_dxgk_eng_watch_vis_rgn_change_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsEnableHalftoneSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_enable_halftone_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsEngBitBltSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_eng_bit_blt_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsEngCopyBitsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_eng_copy_bits_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsEngFreeModuleSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_eng_free_module_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsFinishStockFontInitSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_finish_stock_font_init_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsFinishStockFontReinitSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_finish_stock_font_reinit_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsFontDriverQueryRoutineSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_font_driver_query_routine_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsFreeNonCachedUserMemSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_free_non_cached_user_mem_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGdiMultiUserFontCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gdi_multi_user_font_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGdiThreadCalloutFlushUserBatchSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gdi_thread_callout_flush_user_batch_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetColorManagementCapsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_get_color_management_caps_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetDpiSettingWithNoDefaultSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_get_dpi_setting_with_no_default_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetMAPPER_SignatureTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_get_mapper_signature_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetWin8StyleDpiSettingFromRegistrySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_get_win8_style_dpi_setting_from_registry_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgbFinishDefGUIFontInitSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgb_finish_def_gui_font_init_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpBmpDevSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgp_bmp_dev_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpDefITableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgp_def_i_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpPFTDeviceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgp_pft_device_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpRedirDevSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgp_redir_dev_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpfmffTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgpfmff_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpfsTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgpfs_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpniFontsDirectoryAndScratchSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgpni_fonts_directory_and_scratch_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGetgpwszFamilyDefaultFontsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_getgpwsz_family_default_fonts_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreDeleteClientObjSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_delete_client_obj_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreDeleteWndSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_delete_wnd_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreFlushSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_flush_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreGetAspectRatioFilterSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_get_aspect_ratio_filter_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreGetRandomRgnSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_get_random_rgn_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreGetTextExtentWSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_get_text_extent_w_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreHideSpritesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_hide_sprites_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreHintDCWndSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_hint_dc_wnd_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreInternalHidePointerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_internal_hide_pointer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreMovePointerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_move_pointer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGrePolyBezierSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_poly_bezier_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGrePolyBezierToSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_poly_bezier_to_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGrePolyPolygonSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_poly_polygon_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGrePolyPolylineSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_poly_polyline_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGrePolylineToSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_polyline_to_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreSelectFontSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_select_font_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreSelectRedirectionBitmapSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_select_redirection_bitmap_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreSetBitmapBitsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_set_bitmap_bits_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGreSetLFONTOwnerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_gre_set_lfont_owner_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsGrepSfmRemoveSurfacesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_grep_sfm_remove_surfaces_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsHT_DestroyDeviceHalftoneInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _p98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_ht_destroy_device_halftone_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsHWCursorUpdatePointerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _p99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_hw_cursor_update_pointer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsInitFNTCacheSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_init_fnt_cache_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsInitializeGdiCrossSessionGlobalsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_initialize_gdi_cross_session_globals_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsIsDwmActiveSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_is_dwm_active_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsMonitorAPIProcessTerminatingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_monitor_api_process_terminating_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsMulConvertChildRedirectionDfbSurfaceToDibSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_mul_convert_child_redirection_dfb_surface_to_dib_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsMulDestroyBrushInternalSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_mul_destroy_brush_internal_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsMulGetAdditionalFunctionTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_mul_get_additional_function_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsMulReplaceRedirectionChildSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_mul_replace_redirection_child_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsMultiUserCleanupPathAllocSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_multi_user_cleanup_path_alloc_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsMultiUserGreDeleteScriptsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_multi_user_gre_delete_scripts_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsNineGridRenderingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_nine_grid_rendering_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsNtGdiFastPolyPolylineSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_nt_gdi_fast_poly_polyline_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsNtGdiFlushUserBatchSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_nt_gdi_flush_user_batch_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsPanningGetFunctionTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_panning_get_function_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsPDEVOBJ_bCreateDefaultBrushesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_pdevobj_b_create_default_brushes_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsPDEVOBJ_bCreateHalftoneBrushesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_pdevobj_b_create_halftone_brushes_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsPDEVOBJ_bDisableHalftoneSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_pdevobj_b_disable_halftone_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsPDEVOBJ_vProfileDriverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_pdevobj_v_profile_driver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsPFTOBJ_bUnloadWorkhorseSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_pftobj_b_unload_workhorse_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsRFONTOBJ_dtHelperSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_rfontobj_dt_helper_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsRFONTOBJ_vConstructPRFONTSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_rfontobj_v_construct_prfont_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsRFONTOBJ_vDeleteRFONTSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_rfontobj_v_delete_rfont_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_sfmlogicalsurface_create_hlsurf_clone_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsSFMLOGICALSURFACEREF_vDestructorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_sfmlogicalsurfaceref_v_destructor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsTrapAppContainerRenderingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_trap_app_container_rendering_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUmfdIsCurrentProcessUmfdHostNoLockSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umfd_is_current_process_umfd_host_no_lock_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUmfdUninitializeProcessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umfd_uninitialize_process_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUmfdUninitializeThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umfd_uninitialize_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUMPDCachedResourceCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umpd_cached_resource_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUMPDDrvDeleteDeviceBitmapSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umpd_drv_delete_device_bitmap_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUMPDEngFreeUserMemSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umpd_eng_free_user_mem_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUMPD_ldevLoadDriverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umpd_ldev_load_driver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUMPD_ldevUnloadImageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umpd_ldev_unload_image_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUMPDOBJ_bCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_umpdobj_b_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUntrapAppContainerRenderingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_untrap_app_container_rendering_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUpdateGammaRampOnDeviceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_update_gamma_ramp_on_device_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUserGetHipDeviceInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_user_get_hip_device_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUserGetRedirectedWindowOriginSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_user_get_redirected_window_origin_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUserReleaseRedirectionBitmapSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_user_release_redirection_bitmap_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsUserResetPointerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_user_reset_pointer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsVerifierEngFreeMemSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_verifier_eng_free_mem_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsVerifierInitializationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_verifier_initialization_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsW32kCddClipRegionSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_w32k_cdd_clip_region_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsW32kCddDisableGdiHwAccelerationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_w32k_cdd_disable_gdi_hw_acceleration_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsW32kCddIsNullBrushSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_w32k_cdd_is_null_brush_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsW32kCddLineToSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_w32k_cdd_line_to_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsW32kCddStrokePathSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_w32k_cdd_stroke_path_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsW32kGenerateMoveDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_w32k_generate_move_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsXDCOBJ_vCleanupColorTransformSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_xdcobj_v_cleanup_color_transform_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsXDCOBJ_vSetDefaultFontSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_xdcobj_v_set_default_font_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsXEPATHOBJ_vConstructHPATHSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_xepathobj_v_construct_hpath_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsXEPATHOBJ_vDestructSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_is_xepathobj_v_destruct_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsatmfdEnableDriverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isatmfd_enable_driver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbATMFDDisabledSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_atmfd_disabled_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbDeleteFontSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_delete_font_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbDoubleDpiSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_double_dpi_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbEnableFontDriverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_enable_font_driver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbInitFontTablesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_init_font_tables_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbInitRedirDevSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_init_redir_dev_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbInitStockFontsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_init_stock_fonts_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbInitializeEUDCSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_initialize_eudc_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbSetDevDragRectSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_set_dev_drag_rect_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsbSpEnableSpritesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isb_sp_enable_sprites_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IshfontCreateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_ishfont_create_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsttfdEnableDriverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isttfd_enable_driver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvAccNotifyDeleteSurfaceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_acc_notify_delete_surface_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvCleanupFontsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_cleanup_fonts_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvCleanupMetaTypeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_cleanup_meta_type_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvCleanupOwnedRedirectionDeviceBitmapsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_cleanup_owned_redirection_device_bitmaps_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvCleanupPrivateFontsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_cleanup_private_fonts_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvCleanupUMWindowlessSpriteSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_cleanup_um_windowless_sprite_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvConvertLogFontWSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_convert_log_font_w_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvDisableSynchronizeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_disable_synchronize_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvEnableSynchronizeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_enable_synchronize_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvGetJpn98FixPitchSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_get_jpn98_fix_pitch_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvInitFontMapperFamilyFallbackTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_init_font_mapper_family_fallback_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvInitFontSubTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_init_font_sub_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvInitFontsDirectoryNameInformationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_init_fonts_directory_name_information_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvInitMapperSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_init_mapper_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvMirrorIncludeNotifySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_mirror_include_notify_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvNetworkedFontFileCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_networked_font_file_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvRestorePathSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_restore_path_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvSpDisableSpritesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_sp_disable_sprites_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvSpDwmMigrateLSurfShapeReferenceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_sp_dwm_migrate_l_surf_shape_reference_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvSpDwmMigrateSpriteLSurfReferenceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_sp_dwm_migrate_sprite_l_surf_reference_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvSpDynamicModeChangeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_sp_dynamic_mode_change_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvSpUnTearDownSpritesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_sp_un_tear_down_sprites_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvTrustedFontFileTableCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_trusted_font_file_table_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvUnmapRemoteFontsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isv_unmap_remote_fonts_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_IsvtfdEnableDriverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _q89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_isvtfd_enable_driver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_MonitorAPIProcessTerminating]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _q90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_monitor_api_process_terminating;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_MulConvertChildRedirectionDfbSurfaceToDib]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _q91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_mul_convert_child_redirection_dfb_surface_to_dib;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_MulDestroyBrushInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _q92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_mul_destroy_brush_internal;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_MulGetAdditionalFunctionTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _q93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_mul_get_additional_function_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_MulReplaceRedirectionChild]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _q94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_mul_replace_redirection_child;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_MultiUserCleanupPathAlloc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _q95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_multi_user_cleanup_path_alloc;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_MultiUserGreDeleteScripts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _q96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_multi_user_gre_delete_scripts;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_NtGdiFastPolyPolyline]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _q97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_nt_gdi_fast_poly_polyline;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_NtGdiFlushUserBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _q98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_nt_gdi_flush_user_batch;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_PanningGetFunctionTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _q99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_panning_get_function_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_PDEVOBJ_bCreateDefaultBrushesWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_pdevobj_b_create_default_brushes_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_PDEVOBJ_bCreateHalftoneBrushesWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_pdevobj_b_create_halftone_brushes_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_PDEVOBJ_bDisableHalftoneWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_pdevobj_b_disable_halftone_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_PDEVOBJ_vProfileDriverWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_pdevobj_v_profile_driver_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_PFTOBJ_bUnloadWorkhorseWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_pftobj_b_unload_workhorse_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_RFONTOBJ_dtHelperWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_rfontobj_dt_helper_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_RFONTOBJ_vConstructPRFONTWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_rfontobj_v_construct_prfont_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_RFONTOBJ_vDeleteRFONTWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_rfontobj_v_delete_rfont_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_SFMLOGICALSURFACE_CreateHLSURFCloneWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_sfmlogicalsurface_create_hlsurf_clone_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_SFMLOGICALSURFACEREF_vDestructorWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_sfmlogicalsurfaceref_v_destructor_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_TrapAppContainerRenderingWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_trap_app_container_rendering_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_ttfdEnableDriver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_ttfd_enable_driver;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UmfdIsCurrentProcessUmfdHostNoLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umfd_is_current_process_umfd_host_no_lock;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UmfdSessionInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umfd_session_initialize;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UmfdSessionUninitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umfd_session_uninitialize;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UmfdUninitializeProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umfd_uninitialize_process;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UmfdUninitializeThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umfd_uninitialize_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UMPDCachedResourceCleanupWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umpd_cached_resource_cleanup_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UMPDDrvDeleteDeviceBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umpd_drv_delete_device_bitmap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UMPDEngFreeUserMem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umpd_eng_free_user_mem;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UMPD_ldevLoadDriverWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umpd_ldev_load_driver_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UMPD_ldevUnloadImageWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umpd_ldev_unload_image_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UMPDOBJ_bCleanupWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_umpdobj_b_cleanup_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UntrapAppContainerRenderingWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_untrap_app_container_rendering_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UpdateGammaRampOnDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_update_gamma_ramp_on_device;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UserGetHipDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_user_get_hip_device_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UserGetRedirectedWindowOrigin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_user_get_redirected_window_origin;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UserReleaseRedirectionBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_user_release_redirection_bitmap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_UserResetPointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_user_reset_pointer;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vAccNotifyDeleteSurfaceWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_acc_notify_delete_surface_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vCleanupFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_cleanup_fonts;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vCleanupMetaType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_cleanup_meta_type;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vCleanupOwnedRedirectionDeviceBitmapsWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_cleanup_owned_redirection_device_bitmaps_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vCleanupPrivateFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_cleanup_private_fonts;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vCleanupUMWindowlessSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_cleanup_um_windowless_sprite;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vConvertLogFontW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_convert_log_font_w;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vDisableSynchronize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_disable_synchronize;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vEnableSynchronize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_enable_synchronize;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vGetJpn98FixPitch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_get_jpn98_fix_pitch;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vInitFontMapperFamilyFallbackTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_init_font_mapper_family_fallback_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vInitFontSubTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_init_font_sub_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vInitFontsDirectoryNameInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_init_fonts_directory_name_information;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vInitMapper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_init_mapper;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vMirrorIncludeNotifyWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_mirror_include_notify_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vNetworkedFontFileCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_networked_font_file_cleanup;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vRestorePathWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_restore_path_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vSpDisableMultiMon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_sp_disable_multi_mon;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vSpDisableSpritesWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_sp_disable_sprites_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vSpDwmMigrateLSurfShapeReferenceWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_sp_dwm_migrate_l_surf_shape_reference_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vSpDwmMigrateSpriteLSurfReferenceWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_sp_dwm_migrate_sprite_l_surf_reference_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vSpDynamicModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_sp_dynamic_mode_change;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vSpEnableMultiMon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_sp_enable_multi_mon;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vSpUnTearDownSprites]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_sp_un_tear_down_sprites;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vTrustedFontFileTableCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_trusted_font_file_table_cleanup;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vUnmapRemoteFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_v_unmap_remote_fonts;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_VerifierEngFreeMem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_verifier_eng_free_mem;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_VerifierInitialization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_verifier_initialization;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vtfdEnableDriver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_vtfd_enable_driver;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_W32kCddClipRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_w32k_cdd_clip_region;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_W32kCddDisableGdiHwAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_w32k_cdd_disable_gdi_hw_acceleration;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_W32kCddIsNullBrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_w32k_cdd_is_null_brush;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_W32kCddLineTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_w32k_cdd_line_to;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_W32kCddStrokePath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_w32k_cdd_stroke_path;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_W32kGenerateMoveData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_w32k_generate_move_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_XDCOBJ_vCleanupColorTransformWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_xdcobj_v_cleanup_color_transform_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_XDCOBJ_vSetDefaultFontWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_xdcobj_v_set_default_font_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_XEPATHOBJ_vConstructHPATHWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_xepathobj_v_construct_hpath_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_1_0_XEPATHOBJ_vDestructWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_1_0_xepathobj_v_destruct_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_AdjustLinearity]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_adjust_linearity;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_AllocateCvr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_allocate_cvr;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_AllocateW32Process]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_allocate_w32_process;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ApplyMagInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_apply_mag_input_transform;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ApplyPTPTranslation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_apply_ptp_translation;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ApplyTransforms]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_apply_transforms;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_AutoRotationUpdateRegistry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_auto_rotation_update_registry;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_BuildHwndList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_build_hwnd_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_BuildMouseAccelerationCurve]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_build_mouse_acceleration_curve;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CacheRotationInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cache_rotation_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CalcVisRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_calc_vis_rgn;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CalcWindowsFullScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_calc_windows_full_screen;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CanForceForeground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_can_force_foreground;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CheckAllowForeground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_check_allow_foreground;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CheckPointerDeviceMonitors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_check_pointer_device_monitors;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CheckSessionPoolAllocations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_check_session_pool_allocations;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CheckWinstaAttributeAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_check_winsta_attribute_access;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CheckupHidLeak]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_checkup_hid_leak;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CitGetWindowInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cit_get_window_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupDesktopsMonitorsAndWindowsSnapShot]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_desktops_monitors_and_windows_snap_shot;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupDwmInputProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_dwm_input_processing;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupFeedbackData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_feedback_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupHidRequestList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_hid_request_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupIAMAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_iam_access;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupInjectedTouchProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _r92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_injected_touch_process;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupKeyboardLayouts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_keyboard_layouts;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupMediaChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_media_change;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupModuleAllocations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_module_allocations;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupPointerInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_pointer_input;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CleanupW32ThreadLocks]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_cleanup_w32_thread_locks;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ClearDelegationCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_clear_delegation_capture;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ComputeVirtualHimetricSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _r99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_compute_virtual_himetric_size;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CreateBitmapStrip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_create_bitmap_strip;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CreateCaptionStrip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_create_caption_strip;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CreateInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_create_input_context;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_CreateSetupNameArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_create_setup_name_array;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DCompSessionInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_d_comp_session_initialize;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DCELogicalSpeedTopLevelHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_dce_logical_speed_top_level_hit_test;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DDCCICleanUpWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_ddcci_clean_up_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DDCCIInitializeWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_ddcci_initialize_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DeleteFadeSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_delete_fade_sprite;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DeleteHrgnClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_delete_hrgn_clip;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DereferenceClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_dereference_class;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DesktopAlloc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_desktop_alloc;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DesktopFree]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_desktop_free;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DesktopOpenProcedure]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_desktop_open_procedure;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyDpiMetricsCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_dpi_metrics_cache;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyEventHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_event_hook;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyInputHangInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_input_hang_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyKF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_kf;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyKL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_kl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__DestroyMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_menu;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyProcessHidRequests]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_process_hid_requests;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyProcessInfoEditionRundown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_process_info_edition_rundown;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyProcessesClasses]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_processes_classes;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroySMWP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_smwp;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyThreadHidObjects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_thread_hid_objects;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyThreadsHotKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_threads_hot_keys;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyThreadsMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_threads_messages;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyThreadsTimers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_threads_timers;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyUnlockedCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_unlocked_cursor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DestroyWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_destroy_window_station;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DisableUserkTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_disable_userk_trace_logging;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DoPrediction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_do_prediction;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DwmAsyncNotifyDigitizerActiveContactsWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_dwm_async_notify_digitizer_active_contacts_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DwmAsyncNotifyDisplayModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_dwm_async_notify_display_mode_change;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DwmAsyncNotifySessionConnected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_dwm_async_notify_session_connected;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_DwmSyncFlushForceRenderAndWaitForBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_dwm_sync_flush_force_render_and_wait_for_batch;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_EnableUserkTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_enable_userk_trace_logging;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_EnsurePointerDeviceHasMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_ensure_pointer_device_has_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_EnterEditionCrit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_enter_edition_crit;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FVisCountable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_f_vis_countable;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FadeDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_fade_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FindMonitorForDigitizer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_find_monitor_for_digitizer;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FindMonitorForDigitizerWithQDCData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_find_monitor_for_digitizer_with_qdc_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FlushWEFCOMPOSITEDDCEBounds]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_flush_wefcompositeddce_bounds;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeAllSpbs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_all_spbs;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeDdeXact]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_dde_xact;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_device_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__FreeGestureInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_gesture_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeHidData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_hid_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_hook;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeHwndList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_hwnd_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeImeHotKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_ime_hot_keys;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_input_context;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeMessageList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_message_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreePointerDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_pointer_device;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreePointerDeviceCalData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_pointer_device_cal_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreePointerDeviceCalibrationInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_pointer_device_calibration_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeProcessMessageFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_process_message_filter;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeSMS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_sms;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeThreadsWinEvents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_threads_win_events;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeThreadsWindowHooks]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_threads_window_hooks;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_timer;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__FreeTouchInputInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_touch_input_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreeWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_free_window_station;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_freeze_thaw_timers;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetAppCompatFlags2QuadWord]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_app_compat_flags2_quad_word;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetClassPtr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_class_ptr;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetDesktopHeapSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_desktop_heap_size;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetDesktopView]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_desktop_view;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetDpiSetting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_dpi_setting;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetJournallingQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_journalling_queue;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetKbdTablesFallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_kbd_tables_fallback;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetLayeredOrRedirectedParent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_layered_or_redirected_parent;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetMaxOpenRetries]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_max_open_retries;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetPenArbitrationType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_pen_arbitration_type;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetPhysicalSizeFromMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_physical_size_from_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetPowerTransitionsState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_power_transitions_state;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__GetProcessWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_process_window_station;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetRedirectionBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_redirection_bitmap;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetSMSLookaside]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_sms_lookaside;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetStyleWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_style_window;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__GetTextMetricsW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_text_metrics_w;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__GetTopLevelWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_top_level_window;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetUserHandedness]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_get_user_handedness;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetausMouseVKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_getaus_mouse_v_key;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetgfSwitchInProgress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_getgf_switch_in_progress;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetglpSetupPrograms]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_getglp_setup_programs;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetgpPublicObjectList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_getgp_public_object_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetgpastrSetupExe]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_getgpastr_setup_exe;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetguiKeyboardCorrectionCalloutTimeout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_getgui_keyboard_correction_callout_timeout;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_GetpbwlCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_getpbwl_cache;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_hUserCreateKernelEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_h_user_create_kernel_event;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_HandleDisplayChangeForInactiveDesktops]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_handle_display_change_for_inactive_desktops;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_HasHidTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_has_hid_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IAMKeyAcquired]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_iam_key_acquired;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitClipFormatExceptionList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_clip_format_exception_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitClipboardILDef]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_clipboard_il_def;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitDwmInputProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _s98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_dwm_input_processing;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitFakeMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _s99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_fake_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitFunctionTables]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_function_tables;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitKeyboardState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_keyboard_state;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitMessageTables]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_message_tables;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitModuleAllocations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_module_allocations;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitOLEFormats]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _t04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_ole_formats;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitRimClient]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _t05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_rim_client;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitSMSLookaside]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _t06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_sms_lookaside;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitTimerCoalescing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_init_timer_coalescing;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializeFeedbackData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_feedback_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializeHidRequestList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_hid_request_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializeMediaChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _t10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_media_change;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializeNavigationWindowRegistry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _t11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_navigation_window_registry;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializePointerDevicesPresenceState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_pointer_devices_presence_state;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializePointerInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_pointer_input;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializePointerPrediction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_pointer_prediction;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializeTouchPadSysParams]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _t15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_touch_pad_sys_params;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializeWin32CrossSessionGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _t16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_win32_cross_session_globals;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_InitializeWin32PoolTracking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _t17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_initialize_win32_pool_tracking;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsAdjustLinearitySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_adjust_linearity_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsAllocateCvrSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_allocate_cvr_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsAllocateW32ProcessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_allocate_w32_process_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsApplyMagInputTransformSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_apply_mag_input_transform_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsApplyPTPTranslationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_apply_ptp_translation_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsApplyTransformsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_apply_transforms_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsAutoRotationUpdateRegistrySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_auto_rotation_update_registry_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsBuildHwndListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_build_hwnd_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsBuildMouseAccelerationCurveSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_build_mouse_acceleration_curve_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCacheRotationInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cache_rotation_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCalcVisRgnSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_calc_vis_rgn_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCalcWindowsFullScreenSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_calc_windows_full_screen_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCanForceForegroundSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_can_force_foreground_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCheckAllowForegroundSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_check_allow_foreground_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCheckPointerDeviceMonitorsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_check_pointer_device_monitors_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCheckSessionPoolAllocationsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_check_session_pool_allocations_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCheckWinstaAttributeAccessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_check_winsta_attribute_access_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCheckupHidLeakSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_checkup_hid_leak_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCitGetWindowInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cit_get_window_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupDesktopsMonitorsAndWindowsSnapShotSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_desktops_monitors_and_windows_snap_shot_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupDwmInputProcessingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_dwm_input_processing_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupFeedbackDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_feedback_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupHidRequestListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_hid_request_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupIAMAccessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_iam_access_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupInjectedTouchProcessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_injected_touch_process_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupKeyboardLayoutsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_keyboard_layouts_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupMediaChangeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_media_change_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupModuleAllocationsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_module_allocations_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupPointerInputSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_pointer_input_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCleanupW32ThreadLocksSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_cleanup_w32_thread_locks_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsClearDelegationCaptureSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_clear_delegation_capture_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCompositionInputThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_composition_input_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsComputeVirtualHimetricSizeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_compute_virtual_himetric_size_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCreateBitmapStripSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_create_bitmap_strip_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCreateCaptionStripSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_create_caption_strip_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCreateInputContextSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_create_input_context_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsCreateSetupNameArraySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_create_setup_name_array_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDbgLockQCursorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_dbg_lock_q_cursor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDCELogicalSpeedTopLevelHitTestSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_dce_logical_speed_top_level_hit_test_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDDCCICleanUpSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_ddcci_clean_up_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDDCCIInitializeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_ddcci_initialize_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDeleteFadeSpriteSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_delete_fade_sprite_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDeleteHrgnClipSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_delete_hrgn_clip_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDereferenceClassSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_dereference_class_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDesktopAllocSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_desktop_alloc_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDesktopOpenProcedureSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_desktop_open_procedure_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyDpiMetricsCacheSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_dpi_metrics_cache_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyEventHookSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_event_hook_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyInputHangInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_input_hang_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyKFSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_kf_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyKLSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_kl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_DestroyMenuSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_menu_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyProcessHidRequestsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_process_hid_requests_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyProcessesClassesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_processes_classes_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroySMWPSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_smwp_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyThreadHidObjectsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_thread_hid_objects_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyThreadsHotKeysSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_threads_hot_keys_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyThreadsMessagesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_threads_messages_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyThreadsTimersSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_threads_timers_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyUnlockedCursorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_unlocked_cursor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDestroyWindowStationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_destroy_window_station_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDoPredictionSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_do_prediction_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_dwm_async_notify_digitizer_active_contacts_wrap_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDwmAsyncNotifyDisplayModeChangeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_dwm_async_notify_display_mode_change_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDwmAsyncNotifySessionConnectedSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_dwm_async_notify_session_connected_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsDwmSyncFlushForceRenderAndWaitForBatchSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_dwm_sync_flush_force_render_and_wait_for_batch_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsEnsurePointerDeviceHasMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_ensure_pointer_device_has_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsEnterEditionCritSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_enter_edition_crit_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFVisCountableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_f_vis_countable_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFadeDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_fade_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFindMonitorForDigitizerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_find_monitor_for_digitizer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFindMonitorForDigitizerWithQDCDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_find_monitor_for_digitizer_with_qdc_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFlushWEFCOMPOSITEDDCEBoundsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_flush_wefcompositeddce_bounds_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeAllSpbsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_all_spbs_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeDdeXactSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_dde_xact_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeDeviceInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_device_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_FreeGestureInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_gesture_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeHidDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_hid_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeHookSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_hook_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeHwndListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_hwnd_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeImeHotKeysSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _t99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_ime_hot_keys_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeInputContextSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_input_context_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeMessageListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_message_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreePointerDeviceCalDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_pointer_device_cal_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreePointerDeviceCalibrationInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_pointer_device_calibration_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreePointerDeviceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_pointer_device_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeProcessMessageFilterSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_process_message_filter_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeSMSSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_sms_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeThreadsWinEventsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_threads_win_events_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeThreadsWindowHooksSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_threads_window_hooks_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeTimerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_timer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_FreeTouchInputInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_touch_input_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreeWindowStationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_free_window_station_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsFreezeThawTimersSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_freeze_thaw_timers_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetAppCompatFlags2QuadWordSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_app_compat_flags2_quad_word_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetClassPtrSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_class_ptr_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetDesktopViewSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_desktop_view_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetDpiSettingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_dpi_setting_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetJournallingQueueSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_journalling_queue_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetKbdTablesFallbackSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_kbd_tables_fallback_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetLayeredOrRedirectedParentSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_layered_or_redirected_parent_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetMaxOpenRetriesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_max_open_retries_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetPenArbitrationTypeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_pen_arbitration_type_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetPhysicalSizeFromMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_physical_size_from_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetPowerTransitionsStateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_power_transitions_state_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_GetProcessWindowStationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_process_window_station_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetRedirectionBitmapSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_redirection_bitmap_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetSMSLookasideSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_sms_lookaside_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetStyleWindowSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_style_window_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_GetTextMetricsWSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_text_metrics_w_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_GetTopLevelWindowSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_top_level_window_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetUserHandednessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_get_user_handedness_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetausMouseVKeySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_getaus_mouse_v_key_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetgfSwitchInProgressSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_getgf_switch_in_progress_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetglpSetupProgramsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_getglp_setup_programs_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetgpPublicObjectListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_getgp_public_object_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetgpastrSetupExeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_getgpastr_setup_exe_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetguiKeyboardCorrectionCalloutTimeoutSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_getgui_keyboard_correction_callout_timeout_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsGetpbwlCacheSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_getpbwl_cache_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsHandleDisplayChangeForInactiveDesktopsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_handle_display_change_for_inactive_desktops_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsHasHidTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_has_hid_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsHungWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _u40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_hung_window;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIAMKeyAcquiredSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_iam_key_acquired_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitClipFormatExceptionListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_clip_format_exception_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitClipboardILDefSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_clipboard_il_def_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitDwmInputProcessingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_dwm_input_processing_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitFakeMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_fake_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitFunctionTablesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_function_tables_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitKeyboardStateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_keyboard_state_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitMessageTablesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_message_tables_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitModuleAllocationsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_module_allocations_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitOLEFormatsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_ole_formats_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitRimClientSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_rim_client_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitSMSLookasideSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_sms_lookaside_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitTimerCoalescingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_init_timer_coalescing_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializeFeedbackDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_feedback_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializeHidRequestListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_hid_request_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializeMediaChangeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_media_change_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializeNavigationWindowRegistrySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_navigation_window_registry_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializePointerDevicesPresenceStateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_pointer_devices_presence_state_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializePointerInputSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_pointer_input_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializePointerPredictionSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_pointer_prediction_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializeTouchPadSysParamsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_touch_pad_sys_params_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializeWin32CrossSessionGlobalsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_win32_cross_session_globals_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsInitializeWin32PoolTrackingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_initialize_win32_pool_tracking_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsHungWindowSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_hung_window_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsKeyStateCachedSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_key_state_cached_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsLegacyTouchPadDeviceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_legacy_touch_pad_device_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsNativeSubSystemTypeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_native_sub_system_type_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsPointerInputTypeRedirectedSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_pointer_input_type_redirected_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsPrecisionTouchPadEnabledSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_precision_touch_pad_enabled_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsProcessForegroundSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_process_foreground_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsPTPInputEnabledSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_ptp_input_enabled_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsRemoteConnectionSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_remote_connection_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsIsShellThreadMiPEnabledSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_is_shell_thread_mi_p_enabled_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsKeyStateCached]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _u74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_key_state_cached;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsLeaveEditionCritSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_leave_edition_crit_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsLegacyTouchPadDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _u76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_legacy_touch_pad_device;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsLW_BrushInitSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_lw_brush_init_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMagContextDestroySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_mag_context_destroy_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMagContextInitializeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_mag_context_initialize_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMagContextThreadCalloutSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_mag_context_thread_callout_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMagpRevokeInputTransfromSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_magp_revoke_input_transfrom_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMapDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_map_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMNFlushDestroyedPopupsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_mn_flush_destroyed_popups_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMNUnlinkDelayedFreePopupsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_mn_unlink_delayed_free_popups_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsModerncoreAtomTableSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_moderncore_atom_table_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsModerncorePowerDimMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_moderncore_power_dim_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsModerncorePowerOffMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_moderncore_power_off_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsModerncorePowerOnMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_moderncore_power_on_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsModerncorePowerUnDimMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_moderncore_power_un_dim_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsModerncoreUpdateLastInputTimeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_moderncore_update_last_input_time_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsModerncoreUserPowerInfoCalloutSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_moderncore_user_power_info_callout_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_MonitorFromPointSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_monitor_from_point_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_MonitorFromRectSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_monitor_from_rect_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsMSGSQMRemoveProcessSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_msgsqm_remove_process_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsNativeSubSystemType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _u95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_native_sub_system_type;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsOkayToCloseDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_okay_to_close_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsOkayToCloseWindowStationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_okay_to_close_window_station_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPackAffectedThreadsFromThreadCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_pack_affected_threads_from_thread_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPaintScreenBackgroundSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _u99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_paint_screen_background_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsParseWindowStationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_parse_window_station_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPatchThreadWindowsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_patch_thread_windows_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPlayEventSoundSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_play_event_sound_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPlaySoundDisconnectSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_play_sound_disconnect_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPointerInputTypeRedirected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _v04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_pointer_input_type_redirected;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPopAndFreeAlwaysW32ThreadLockSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_pop_and_free_always_w32_thread_lock_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPopAndFreeW32ThreadLockSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_pop_and_free_w32_thread_lock_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPopW32ThreadLockSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_pop_w32_thread_lock_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPostIAMShellHookMessageExSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_post_iam_shell_hook_message_ex_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_PostMessageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_post_message_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPostMousePointerLeaveAndCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_post_mouse_pointer_leave_and_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPostPlaySoundMessageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_post_play_sound_message_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPostPointerDeviceInRangeMessageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_post_pointer_device_in_range_message_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPostPointerDeviceOutOfRangeMessageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_post_pointer_device_out_of_range_message_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPostPointerEventMessageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_post_pointer_event_message_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPowerOffGdiSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_power_off_gdi_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPowerOnGdiSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_power_on_gdi_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPowerStateTasksAllowedSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_power_state_tasks_allowed_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPrecisionTouchPadEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _v18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_precision_touch_pad_enabled;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPrepareGammaRampDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_prepare_gamma_ramp_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsProcessForeground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _v20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_process_foreground;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsProcessHidRawInputSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_process_hid_raw_input_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsProcessKeyboardInputSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_process_keyboard_input_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsProcessMouseInputSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_process_mouse_input_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPTPInputEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _v24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_ptp_input_enabled;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsPushW32ThreadLockSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_push_w32_thread_lock_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsQueueNotifyMessageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_queue_notify_message_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRawInputThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_raw_input_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsReadDigitizerToMonitorMappingsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_read_digitizer_to_monitor_mappings_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRecolorDeskPatternSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_recolor_desk_pattern_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRecreateTouchInjectionDevicesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_recreate_touch_injection_devices_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsReferenceClassSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_reference_class_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsReferenceWindowStationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_reference_window_station_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsReleaseWallpaperSettingsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_release_wallpaper_settings_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRemoteConnection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _v34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_remote_connection;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRemoveInputDevicesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_remove_input_devices_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRemoveProcessFromJobSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_remove_process_from_job_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRemovePtiFromShellMiPListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_remove_pti_from_shell_mi_p_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRemoveThreadSwitchWindowInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_remove_thread_switch_window_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsResetEdgyDataOwnershipForCurrentThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_reset_edgy_data_ownership_for_current_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRestoreGammaRampSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_restore_gamma_ramp_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsResumeThreadQueueSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_resume_thread_queue_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRetrieveCalibrationDataSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_retrieve_calibration_data_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsRevalidateDCESupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_revalidate_dce_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSendMsgCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_send_msg_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetAppCompatFlagsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_app_compat_flags_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetContactBoundarySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_contact_boundary_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetDesktopMetricsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_desktop_metrics_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetDpiScalingSettingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_dpi_scaling_setting_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetDpiSettingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_dpi_setting_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetForegroundPrioritySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_foreground_priority_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetManifestWinVerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_manifest_win_ver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetNewForegroundQueueSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_new_foreground_queue_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetPointerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_pointer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetRITTimerSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_rit_timer_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetTimerCoalescingToleranceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_timer_coalescing_tolerance_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetUnavailableInputSourceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_unavailable_input_source_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetUserPTPEnabledPreferenceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_user_ptp_enabled_preference_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetWakeBitSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_set_wake_bit_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSetupClassAtomsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_setup_class_atoms_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsShellThreadMiPEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _v60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_shell_thread_mi_p_enabled;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsShutdownNavigationWindowRegistrySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_shutdown_navigation_window_registry_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSnapshotMonitorRectsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_snapshot_monitor_rects_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSpbCheckDceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_spb_check_dce_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsStartScreenSaverSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_start_screen_saver_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsStopFadeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_stop_fade_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsSuspendThreadQueueSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_suspend_thread_queue_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsTransformForInputMagnificationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_transform_for_input_magnification_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsTransitionCursorSuppressionStateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_transition_cursor_suppression_state_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUIPISQMStatusSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_uipisqm_status_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUninitializeWin32CrossSessionGlobalsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_uninitialize_win32_cross_session_globals_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUninitializeWin32PoolTrackingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_uninitialize_win32_pool_tracking_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUnloadCursorsAndIconsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_unload_cursors_and_icons_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUnlockCaptureWindowSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_unlock_capture_window_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUnmapDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_unmap_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUnreferenceUndispatchedFrameListSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_unreference_undispatched_frame_list_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_UnregisterDManipHookSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_unregister_d_manip_hook_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Is_UnregisterUserApiHookSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_unregister_user_api_hook_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUpdateCursorSizesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_update_cursor_sizes_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUpdateInputGlobalsExSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_update_input_globals_ex_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUpdatePointerDeviceSystemMetricsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_update_pointer_device_system_metrics_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUpdatePointerDevicesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_update_pointer_devices_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUpdateRedirectedDCESupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_update_redirected_dce_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUpdateWindowMonitorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_update_window_monitor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUserDetachQueueFromInputWindowApiExtSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_user_detach_queue_from_input_window_api_ext_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUserEnableConsoleModeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_user_enable_console_mode_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUserJobCalloutSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_user_job_callout_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUserValidateAndAttachQueueToInputWindowApiExtSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_user_validate_and_attach_queue_to_input_window_api_ext_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsUserkTraceLoggingSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_userk_trace_logging_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsValidateDeviceSignatureSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_validate_device_signature_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsValidatetagWNDLayoutSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_validatetag_wnd_layout_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsVerifySyncOnlyMessagesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_verify_sync_only_messages_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsVerifyTcbPrivilegesSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_verify_tcb_privileges_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsW32pProcessCalloutSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_w32p_process_callout_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsW32pThreadCalloutSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_w32p_thread_callout_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWakeRITForConfigSwitchSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_wake_rit_for_config_switch_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32AllocPagedLookasideListImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_alloc_paged_lookaside_list_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32AllocPoolImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_alloc_pool_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32AllocPoolWithPriorityImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_alloc_pool_with_priority_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32AllocPoolWithQuotaImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _v99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_alloc_pool_with_quota_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32AllocateFromPagedLookasideListImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_allocate_from_paged_lookaside_list_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32FreePagedLookasideListImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_free_paged_lookaside_list_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32FreePoolImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_free_pool_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWin32FreeToPagedLookasideListImplSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_win32_free_to_paged_lookaside_list_impl_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsWindowStationOpenProcedureSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_window_station_open_procedure_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsZombieCursorSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_is_zombie_cursor_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsvCleanupRimClientSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isv_cleanup_rim_client_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsvShimNoDtToDitMouseBatchSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isv_shim_no_dt_to_dit_mouse_batch_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxBroadcastDisplaySettingsChangeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_broadcast_display_settings_change_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxBroadcastModernAppRedrawSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_broadcast_modern_app_redraw_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxCancelTrackingForThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_cancel_tracking_for_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxCleanupAndFreeDdeConvSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_cleanup_and_free_dde_conv_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxCleanupThreadPointerInputInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_cleanup_thread_pointer_input_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxClientMonitorEnumProcSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_client_monitor_enum_proc_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxClientThreadSetupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_client_thread_setup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxCloseClipboardSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_close_clipboard_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxDesktopThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_desktop_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_desktops_recalc_and_broadcast_display_change_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxDestroyThreadDDEObjectSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_destroy_thread_dde_object_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxDestroyWindowSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_destroy_window_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxDwmStopRedirectionSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_dwm_stop_redirection_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxEndMenuLoopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_end_menu_loop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxFlushPaletteSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_flush_palette_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxFullScreenCleanupSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_full_screen_cleanup_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxHandleHealthyThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_handle_healthy_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxInternalInvalidateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_internal_invalidate_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxMNCloseHierarchySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_mn_close_hierarchy_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxMNEndMenuStateInternalSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_mn_end_menu_state_internal_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxMNEndMenuStateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_mn_end_menu_state_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxProcessHidInputSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_process_hid_input_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxRefreshDisplayOrientationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_refresh_display_orientation_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxRemoteConsoleShadowStartSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_remote_console_shadow_start_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxResolveDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_resolve_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxRestoreCsrssThreadDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_restore_csrss_thread_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSendMessageBSMSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_send_message_bsm_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSendNotifyMessageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_send_notify_message_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSetCsrssThreadDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_set_csrss_thread_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSetForegroundThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_set_foreground_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSetInformationThreadSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_set_information_thread_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSetProcessWindowStationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_set_process_window_station_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSetWindowNCMetricsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_set_window_nc_metrics_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxSystemParametersInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_system_parameters_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxUnlockMenuStateSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_unlock_menu_state_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxUpdateInputHangInfoSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_update_input_hang_info_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxUserReinitializeAutoRotationSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_user_reinitialize_auto_rotation_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxUserResetDisplayDeviceSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_user_reset_display_device_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IsxxxWindowEventSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_isxxx_window_event_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IszzzCalcStartCursorHideSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_iszzz_calc_start_cursor_hide_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IszzzResetSharedDesktopsSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_iszzz_reset_shared_desktops_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IszzzSetDesktopSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_iszzz_set_desktop_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IszzzSetFMouseMovedSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_iszzz_set_f_mouse_moved_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_IszzzUpdateCursorImageSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _w51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_iszzz_update_cursor_image_supported;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_LeaveEditionCrit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_leave_edition_crit;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_LW_BrushInit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_lw_brush_init;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MagContextDestroy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_mag_context_destroy;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MagContextInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_mag_context_initialize;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MagContextThreadCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_mag_context_thread_callout;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MagpRevokeInputTransfrom]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_magp_revoke_input_transfrom;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MapDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_map_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MNFlushDestroyedPopups]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_mn_flush_destroyed_popups;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MNUnlinkDelayedFreePopups]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_mn_unlink_delayed_free_popups;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ModerncoreAtomTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_moderncore_atom_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ModerncorePowerDimMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_moderncore_power_dim_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ModerncorePowerOffMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_moderncore_power_off_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ModerncorePowerOnMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_moderncore_power_on_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ModerncorePowerUnDimMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_moderncore_power_un_dim_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ModerncoreUpdateLastInputTime]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_moderncore_update_last_input_time;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ModerncoreUserPowerInfoCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_moderncore_user_power_info_callout;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__MonitorFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_monitor_from_point;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__MonitorFromRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_monitor_from_rect;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_MSGSQMRemoveProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_msgsqm_remove_process;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_OkayToCloseDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_okay_to_close_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_OkayToCloseWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_okay_to_close_window_station;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PackAffectedThreadsFromThreadCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_pack_affected_threads_from_thread_cleanup;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PaintScreenBackground]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_paint_screen_background;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ParseWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_parse_window_station;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PatchThreadWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_patch_thread_windows;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PlayEventSound]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_play_event_sound;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PlaySoundDisconnectWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_play_sound_disconnect_wrap;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PopAndFreeAlwaysW32ThreadLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_pop_and_free_always_w32_thread_lock;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PopAndFreeW32ThreadLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_pop_and_free_w32_thread_lock;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PopW32ThreadLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_pop_w32_thread_lock;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PostIAMShellHookMessageEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_post_iam_shell_hook_message_ex;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__PostMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_post_message;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PostMousePointerLeaveAndCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_post_mouse_pointer_leave_and_cleanup;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PostPlaySoundMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_post_play_sound_message;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PostPointerDeviceInRangeMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_post_pointer_device_in_range_message;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PostPointerDeviceOutOfRangeMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_post_pointer_device_out_of_range_message;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PostPointerEventMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_post_pointer_event_message;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PowerOffGdi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_power_off_gdi;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PowerOnGdi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_power_on_gdi;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PowerStateTasksAllowed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_power_state_tasks_allowed;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PrepareGammaRampData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _w92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_prepare_gamma_ramp_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ProcessDelayedSdc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_process_delayed_sdc;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ProcessHidRawInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_process_hid_raw_input;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ProcessKeyboardInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_process_keyboard_input;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ProcessMouseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_process_mouse_input;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_PushW32ThreadLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_push_w32_thread_lock;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_QueueNotifyMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_queue_notify_message;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RawInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _w99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_raw_input_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ReadDigitizerToMonitorMappings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_read_digitizer_to_monitor_mappings;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RecolorDeskPattern]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_recolor_desk_pattern;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RecreateTouchInjectionDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_recreate_touch_injection_devices;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ReferenceClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_reference_class;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ReferenceWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_reference_window_station;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ReleaseWallpaperSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_release_wallpaper_settings;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RemoveInputDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_remove_input_devices;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RemoveProcessFromJob]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_remove_process_from_job;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RemovePtiFromShellMiPList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_remove_pti_from_shell_mi_p_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RemoveThreadSwitchWindowInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_remove_thread_switch_window_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ResetEdgyDataOwnershipForCurrentThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_reset_edgy_data_ownership_for_current_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RestoreGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_restore_gamma_ramp;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ResumeThreadQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_resume_thread_queue;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RetrieveCalibrationData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_retrieve_calibration_data;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_RevalidateDCE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_revalidate_dce;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SendMsgCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_send_msg_cleanup;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetAppCompatFlags]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_app_compat_flags;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetContactBoundary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_contact_boundary;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetDesktopMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_desktop_metrics;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetDpiScalingSetting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_dpi_scaling_setting;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetDpiSetting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_dpi_setting;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetForegroundPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_foreground_priority;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetManifestWinVer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_manifest_win_ver;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetNewForegroundQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_new_foreground_queue;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetPointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_pointer;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetRITTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_rit_timer;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetTimerCoalescingTolerance]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_timer_coalescing_tolerance;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetUnavailableInputSource]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_unavailable_input_source;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetUserPTPEnabledPreference]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_user_ptp_enabled_preference;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetWakeBit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_set_wake_bit;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SetupClassAtoms]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_setup_class_atoms;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ShutdownNavigationWindowRegistry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_shutdown_navigation_window_registry;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SnapshotMonitorRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_snapshot_monitor_rects;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SpbCheckDce]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_spb_check_dce;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_StartScreenSaver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_start_screen_saver;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_StopFade]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_stop_fade;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_SuspendThreadQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_suspend_thread_queue;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_TraceLoggingDesktopAllocFailureEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_trace_logging_desktop_alloc_failure_event;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_TransformForInputMagnification]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_transform_for_input_magnification;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_TransitionCursorSuppressionState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x39(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_transition_cursor_suppression_state;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UIPISQMStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x40(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_uipisqm_status;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UninitializeWin32CrossSessionGlobals]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x41(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_uninitialize_win32_cross_session_globals;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UninitializeWin32PoolTracking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x42(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_uninitialize_win32_pool_tracking;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UnloadCursorsAndIcons]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x43(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_unload_cursors_and_icons;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UnlockCaptureWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x44(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_unlock_capture_window;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UnmapDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x45(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_unmap_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UnreferenceUndispatchedFrameList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x46(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_unreference_undispatched_frame_list;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__UnregisterDManipHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x47(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_unregister_d_manip_hook;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0__UnregisterUserApiHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x48(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_unregister_user_api_hook;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UpdateCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x49(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_update_cursor_sizes;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UpdateInputGlobalsEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x50(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_update_input_globals_ex;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UpdatePointerDeviceSystemMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x51(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_update_pointer_device_system_metrics;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UpdatePointerDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x52(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_update_pointer_devices;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UpdateRedirectedDCE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x53(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_update_redirected_dce;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UpdateWindowMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x54(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_update_window_monitor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserActivateDwmInputProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae70, 0x1eb80 bytes
    //
    _x55(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_activate_dwm_input_processing;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserDeactivateDwmInputProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x56(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_deactivate_dwm_input_processing;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserDetachQueueFromInputWindowApiExt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x57(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_detach_queue_from_input_window_api_ext;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserEnableConsoleMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _x58(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_enable_console_mode;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserIsCurrentThreadDesktopComposed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x59(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_is_current_thread_desktop_composed;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserIsWindowDesktopComposed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x60(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_is_window_desktop_composed;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserJobCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x61(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_job_callout;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserProcessDwmInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x62(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_process_dwm_input;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserRemoveWindowedSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x63(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_remove_windowed_swap_chain;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserSetWindowedSwapChainApiExt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x64(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_set_windowed_swap_chain_api_ext;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_UserValidateAndAttachQueueToInputWindowApiExt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    //
    _x65(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_user_validate_and_attach_queue_to_input_window_api_ext;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_vCleanupRimClient]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x66(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_v_cleanup_rim_client;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_vShimNoDtToDitMouseBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x67(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_v_shim_no_dt_to_dit_mouse_batch;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ValidateDeviceSignature]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x68(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_validate_device_signature;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ValidatetagWNDLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x69(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_validatetag_wnd_layout;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_VerifySyncOnlyMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x70(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_verify_sync_only_messages;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_VerifyTcbPrivileges]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    //
    _x71(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_verify_tcb_privileges;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_W32pProcessCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x72(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_w32p_process_callout;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_W32pThreadCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x73(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_w32p_thread_callout;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_WakeRITForConfigSwitch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x74(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_wake_rit_for_config_switch;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_WakeRITForShutdown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x75(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_wake_rit_for_shutdown;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32AllocPagedLookasideListImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x76(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_alloc_paged_lookaside_list_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32AllocPoolImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x77(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_alloc_pool_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32AllocPoolWithPriorityImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x78(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_alloc_pool_with_priority_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32AllocPoolWithQuotaImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x79(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_alloc_pool_with_quota_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32AllocateFromPagedLookasideListImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x80(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_allocate_from_paged_lookaside_list_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32FreePagedLookasideListImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x81(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_free_paged_lookaside_list_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32FreePoolImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x82(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_free_pool_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_Win32FreeToPagedLookasideListImpl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x83(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_win32_free_to_paged_lookaside_list_impl;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_WindowStationOpenProcedure]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x84(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_window_station_open_procedure;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxBroadcastDisplaySettingsChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x85(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_broadcast_display_settings_change;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxBroadcastModernAppRedraw]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x86(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_broadcast_modern_app_redraw;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxCancelTrackingForThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x87(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_cancel_tracking_for_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxCleanupAndFreeDdeConv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x88(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_cleanup_and_free_dde_conv;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxCleanupThreadPointerInputInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x89(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_cleanup_thread_pointer_input_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxClientMonitorEnumProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x90(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_client_monitor_enum_proc;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxClientThreadSetup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x91(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_client_thread_setup;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxCloseClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x92(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_close_clipboard;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxDesktopThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x93(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_desktop_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxDesktopsRecalcAndBroadcastDisplayChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x94(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_desktops_recalc_and_broadcast_display_change;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxDestroyThreadDDEObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x95(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_destroy_thread_dde_object;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxDestroyWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x96(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_destroy_window;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxDwmStopRedirection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _x97(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_dwm_stop_redirection;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxEndMenuLoop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_end_menu_loop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxFlushPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _x99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_flush_palette;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxFullScreenCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_full_screen_cleanup;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxHandleHealthyThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_handle_healthy_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxInternalInvalidate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_internal_invalidate;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxMNCloseHierarchy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_mn_close_hierarchy;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxMNEndMenuState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_mn_end_menu_state;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxMNEndMenuStateInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_mn_end_menu_state_internal;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxProcessHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_process_hid_input;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxRefreshDisplayOrientation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_refresh_display_orientation;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxRemoteConsoleShadowStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_remote_console_shadow_start;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxResolveDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_resolve_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxRestoreCsrssThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y10(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_restore_csrss_thread_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSendMessageBSM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y11(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_send_message_bsm;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSendNotifyMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y12(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_send_notify_message;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSetCsrssThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y13(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_set_csrss_thread_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSetForegroundThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y14(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_set_foreground_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSetInformationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y15(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_set_information_thread;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSetProcessWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y16(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_set_process_window_station;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSetWindowNCMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y17(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_set_window_nc_metrics;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxSystemParametersInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y18(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_system_parameters_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxUnlockMenuState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y19(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_unlock_menu_state;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxUpdateInputHangInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y20(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_update_input_hang_info;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxUserReinitializeAutoRotation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y21(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_user_reinitialize_auto_rotation;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxUserResetDisplayDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y22(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_user_reset_display_device;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxxWindowEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y23(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_xxx_window_event;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_ZombieCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y24(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_zombie_cursor;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzzCalcStartCursorHide]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y25(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzz_calc_start_cursor_hide;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzzResetSharedDesktops]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y26(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzz_reset_shared_desktops;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzzSetDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y27(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzz_set_desktop;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzzSetFMouseMoved]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y28(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzz_set_f_mouse_moved;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzzUpdateCursorImage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y29(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_1_0_zzz_update_cursor_image;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_IsSysEntryApiExtSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    //
    _y30(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_is_sys_entry_api_ext_supported;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryGetDispatchTableValues]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    //
    _y31(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_get_dispatch_table_values;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryGetW32pArgumentTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y32(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_get_w32p_argument_table;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryGetW32pArgumentTableFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y33(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_get_w32p_argument_table_filter;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryGetW32pServiceLimit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y34(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_get_w32p_service_limit;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryGetW32pServiceLimitFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y35(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_get_w32p_service_limit_filter;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryGetW32pServiceTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y36(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_get_w32p_service_table;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryGetW32pServiceTableFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _y37(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_get_w32p_service_table_filter;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_1_0_SysEntryPsEstablishWin32Callouts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _y38(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_1_0_sys_entry_ps_establish_win32_callouts;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectAddContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y39(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_add_content;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectAddPoolBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y40(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_add_pool_buffer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectConsumerAcquirePresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y41(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_consumer_acquire_present;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectConsumerAdjustUsageReference]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y42(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_consumer_adjust_usage_reference;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectConsumerBeginProcessPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y43(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_consumer_begin_process_present;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectConsumerEndProcessPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y44(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_consumer_end_process_present;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectConsumerPostMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y45(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_consumer_post_message;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectConsumerQueryBufferInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y46(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_consumer_query_buffer_info;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y47(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_create;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectDisconnectEndpoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y48(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_disconnect_endpoint;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectEnablePresentStatisticsType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y49(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_enable_present_statistics_type;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectOpen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y50(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_open;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectPresentCancel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y51(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_present_cancel;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectQueryBufferAvailableEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y52(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_query_buffer_available_event;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectQueryEndpointConnected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y53(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_query_endpoint_connected;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectQueryNextMessageToProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y54(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_query_next_message_to_producer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectReadNextMessageToProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y55(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_read_next_message_to_producer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectRemoveContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y56(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_remove_content;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectRemovePoolBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y57(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_remove_pool_buffer;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectSetContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y58(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_set_content;
    
    // [ext_ms_win_core_win32k_flipmgr_l1_1_0_NtFlipObjectSetMaximumBackchannelQueueDepth]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y59(sdk::unknown_ptr) ms_win_core_win32k_flipmgr_l1_1_0_nt_flip_object_set_maximum_backchannel_queue_depth;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtBindCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y60(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_bind_composition_surface;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtCreateCompositionSurfaceHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y61(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_create_composition_surface_handle;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtNotifyPresentToCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y62(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_notify_present_to_composition_surface;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtOpenCompositionSurfaceDirtyRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y63(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_open_composition_surface_dirty_region;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtOpenCompositionSurfaceSectionInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y64(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_open_composition_surface_section_info;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtOpenCompositionSurfaceSwapChainHandleInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y65(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_open_composition_surface_swap_chain_handle_info;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtQueryCompositionSurfaceBinding]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y66(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_query_composition_surface_binding;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtQueryCompositionSurfaceHDRMetaData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y67(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_query_composition_surface_hdr_meta_data;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtQueryCompositionSurfaceRenderingRealization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y68(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_query_composition_surface_rendering_realization;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtQueryCompositionSurfaceStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y69(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_query_composition_surface_statistics;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtSetCompositionSurfaceAnalogExclusive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y70(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_set_composition_surface_analog_exclusive;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtSetCompositionSurfaceBufferUsage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y71(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_set_composition_surface_buffer_usage;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtSetCompositionSurfaceDirectFlipState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y72(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_set_composition_surface_direct_flip_state;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtSetCompositionSurfaceIndependentFlipInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y73(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_set_composition_surface_independent_flip_info;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtSetCompositionSurfaceStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y74(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_set_composition_surface_statistics;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtUnBindCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y75(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_un_bind_composition_surface;
    
    // [ext_ms_win_core_win32k_surfmgr_l1_1_0_NtValidateCompositionSurfaceHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _y76(sdk::unknown_ptr) ms_win_core_win32k_surfmgr_l1_1_0_nt_validate_composition_surface_handle;
    
    // [ext_ms_win_core_win32k_base_export_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x648d0, 0x388c7 bytes
    // win32k.sys .data:0x6e910, 0x3e907 bytes
    // win32k.sys .data:0x648d0, 0x388c7 bytes
    //
    _y77(sdk::unknown_ptr) ms_win_core_win32k_base_export_l1;
    
    // [ext_ms_win_core_win32k_base_export_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b2b0, 0x388c7 bytes
    // win32k.sys .data:0x643a0, 0x3e907 bytes
    // win32k.sys .data:0x5b2b0, 0x388c7 bytes
    //
    _y78(sdk::unknown_ptr) ms_win_core_win32k_base_export_l1_host;
    
    // [ext_ms_win_core_win32k_base_export_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x253b50, 0x243e0 bytes
    // win32kbase.sys .data:0x2a6fc0, 0x27ef0 bytes
    // win32kbase.sys .data:0x250b60, 0x243e0 bytes
    //
    _y79(sdk::unknown_ptr) ms_win_core_win32k_base_export_l1_table;
    
    // [ext_ms_win_core_win32k_base_export_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22be00, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f960, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229e40, 0x243e0 bytes
    //
    _y80(sdk::unknown_ptr) ms_win_core_win32k_base_export_l1_table_size;
    
    // [ext_ms_win_core_win32k_baseinit_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66d70, 0x388c7 bytes
    // win32k.sys .data:0x711f8, 0x3e907 bytes
    // win32k.sys .data:0x66d70, 0x388c7 bytes
    //
    _y81(sdk::unknown_ptr) ms_win_core_win32k_baseinit_l1;
    
    // [ext_ms_win_core_win32k_baseinit_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b790, 0x388c7 bytes
    // win32k.sys .data:0x64880, 0x3e907 bytes
    // win32k.sys .data:0x5b790, 0x388c7 bytes
    //
    _y82(sdk::unknown_ptr) ms_win_core_win32k_baseinit_l1_host;
    
    // [ext_ms_win_core_win32k_baseinit_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x253db0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7220, 0x27ef0 bytes
    // win32kbase.sys .data:0x250dc0, 0x243e0 bytes
    //
    _y83(sdk::unknown_ptr) ms_win_core_win32k_baseinit_l1_table;
    
    // [ext_ms_win_core_win32k_baseinit_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c848, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804b8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a888, 0x243e0 bytes
    //
    _y84(sdk::unknown_ptr) ms_win_core_win32k_baseinit_l1_table_size;
    
    // [ext_ms_win_core_win32k_common_export_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x64820, 0x388c7 bytes
    // win32k.sys .data:0x6e860, 0x3e907 bytes
    // win32k.sys .data:0x64820, 0x388c7 bytes
    //
    _y85(sdk::unknown_ptr) ms_win_core_win32k_common_export_l1;
    
    // [ext_ms_win_core_win32k_common_export_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b280, 0x388c7 bytes
    // win32k.sys .data:0x64370, 0x3e907 bytes
    // win32k.sys .data:0x5b280, 0x388c7 bytes
    //
    _y86(sdk::unknown_ptr) ms_win_core_win32k_common_export_l1_host;
    
    // [ext_ms_win_core_win32k_common_export_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32ba90, 0x1596d bytes
    // win32kfull.sys .data:0x329aa0, 0x1659e bytes
    // win32kfull.sys .data:0x32ba90, 0x1596d bytes
    //
    _y87(sdk::unknown_ptr) ms_win_core_win32k_common_export_l1_table;
    
    // [ext_ms_win_core_win32k_common_export_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f389c, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f428c, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f386c, 0x1596d bytes
    //
    _y88(sdk::unknown_ptr) ms_win_core_win32k_common_export_l1_table_size;
    
    // [ext_ms_win_core_win32k_common_input_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66d30, 0x388c7 bytes
    // win32k.sys .data:0x711b8, 0x3e907 bytes
    // win32k.sys .data:0x66d30, 0x388c7 bytes
    //
    _y89(sdk::unknown_ptr) ms_win_core_win32k_common_input_l1;
    
    // [ext_ms_win_core_win32k_common_input_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b730, 0x388c7 bytes
    // win32k.sys .data:0x64820, 0x3e907 bytes
    // win32k.sys .data:0x5b730, 0x388c7 bytes
    //
    _y90(sdk::unknown_ptr) ms_win_core_win32k_common_input_l1_host;
    
    // [ext_ms_win_core_win32k_common_input_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32bb38, 0x1596d bytes
    // win32kfull.sys .data:0x329b48, 0x1659e bytes
    // win32kfull.sys .data:0x32bb38, 0x1596d bytes
    //
    _y91(sdk::unknown_ptr) ms_win_core_win32k_common_input_l1_table;
    
    // [ext_ms_win_core_win32k_common_input_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a60, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4450, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a30, 0x1596d bytes
    //
    _y92(sdk::unknown_ptr) ms_win_core_win32k_common_input_l1_table_size;
    
    // [ext_ms_win_core_win32k_common_inputrim_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66ce0, 0x388c7 bytes
    // win32k.sys .data:0x71160, 0x3e907 bytes
    // win32k.sys .data:0x66ce0, 0x388c7 bytes
    //
    _y93(sdk::unknown_ptr) ms_win_core_win32k_common_inputrim_l1;
    
    // [ext_ms_win_core_win32k_common_inputrim_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b6d0, 0x388c7 bytes
    // win32k.sys .data:0x647c0, 0x3e907 bytes
    // win32k.sys .data:0x5b6d0, 0x388c7 bytes
    //
    _y94(sdk::unknown_ptr) ms_win_core_win32k_common_inputrim_l1_host;
    
    // [ext_ms_win_core_win32k_common_inputrim_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32bb60, 0x1596d bytes
    // win32kfull.sys .data:0x329b70, 0x1659e bytes
    // win32kfull.sys .data:0x32bb60, 0x1596d bytes
    //
    _y95(sdk::unknown_ptr) ms_win_core_win32k_common_inputrim_l1_table;
    
    // [ext_ms_win_core_win32k_common_inputrim_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a64, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4454, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a34, 0x1596d bytes
    //
    _y96(sdk::unknown_ptr) ms_win_core_win32k_common_inputrim_l1_table_size;
    
    // [ext_ms_win_core_win32k_common_user_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x64b50, 0x388c7 bytes
    // win32k.sys .data:0x6eb90, 0x3e907 bytes
    // win32k.sys .data:0x64b50, 0x388c7 bytes
    //
    _y97(sdk::unknown_ptr) ms_win_core_win32k_common_user_l1;
    
    // [ext_ms_win_core_win32k_common_user_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b310, 0x388c7 bytes
    // win32k.sys .data:0x64400, 0x3e907 bytes
    // win32k.sys .data:0x5b310, 0x388c7 bytes
    //
    _y98(sdk::unknown_ptr) ms_win_core_win32k_common_user_l1_host;
    
    // [ext_ms_win_core_win32k_common_user_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32bb70, 0x1596d bytes
    // win32kfull.sys .data:0x329b80, 0x1659e bytes
    // win32kfull.sys .data:0x32bb70, 0x1596d bytes
    //
    _y99(sdk::unknown_ptr) ms_win_core_win32k_common_user_l1_table;
    
    // [ext_ms_win_core_win32k_common_user_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a68, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4458, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a38, 0x1596d bytes
    //
    _z00(sdk::unknown_ptr) ms_win_core_win32k_common_user_l1_table_size;
    
    // [ext_ms_win_core_win32k_dcomp_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x667d0, 0x388c7 bytes
    // win32k.sys .data:0x70be0, 0x3e907 bytes
    // win32k.sys .data:0x667d0, 0x388c7 bytes
    //
    _z01(sdk::unknown_ptr) ms_win_core_win32k_dcomp_l1;
    
    // [ext_ms_win_core_win32k_dcomp_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b4c0, 0x388c7 bytes
    // win32k.sys .data:0x645b0, 0x3e907 bytes
    // win32k.sys .data:0x5b4c0, 0x388c7 bytes
    //
    _z02(sdk::unknown_ptr) ms_win_core_win32k_dcomp_l1_host;
    
    // [ext_ms_win_core_win32k_dcomp_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x253df0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7260, 0x27ef0 bytes
    // win32kbase.sys .data:0x250e00, 0x243e0 bytes
    //
    _z03(sdk::unknown_ptr) ms_win_core_win32k_dcomp_l1_table;
    
    // [ext_ms_win_core_win32k_dcomp_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c84c, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804bc, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a88c, 0x243e0 bytes
    //
    _z04(sdk::unknown_ptr) ms_win_core_win32k_dcomp_l1_table_size;
    
    // [ext_ms_win_core_win32k_ddccigdi_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x669e0, 0x388c7 bytes
    // win32k.sys .data:0x70e20, 0x3e907 bytes
    // win32k.sys .data:0x669e0, 0x388c7 bytes
    //
    _z05(sdk::unknown_ptr) ms_win_core_win32k_ddccigdi_l1;
    
    // [ext_ms_win_core_win32k_ddccigdi_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b550, 0x388c7 bytes
    // win32k.sys .data:0x64640, 0x3e907 bytes
    // win32k.sys .data:0x5b550, 0x388c7 bytes
    //
    _z06(sdk::unknown_ptr) ms_win_core_win32k_ddccigdi_l1_host;
    
    // [ext_ms_win_core_win32k_ddccigdi_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32bbe0, 0x1596d bytes
    // win32kfull.sys .data:0x329be0, 0x1659e bytes
    // win32kfull.sys .data:0x32bbe0, 0x1596d bytes
    //
    _z07(sdk::unknown_ptr) ms_win_core_win32k_ddccigdi_l1_table;
    
    // [ext_ms_win_core_win32k_ddccigdi_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a80, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4470, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a50, 0x1596d bytes
    //
    _z08(sdk::unknown_ptr) ms_win_core_win32k_ddccigdi_l1_table_size;
    
    // [ext_ms_win_core_win32k_dxgdi_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66a20, 0x388c7 bytes
    // win32k.sys .data:0x70e60, 0x3e907 bytes
    // win32k.sys .data:0x66a20, 0x388c7 bytes
    //
    _z09(sdk::unknown_ptr) ms_win_core_win32k_dxgdi_l1;
    
    // [ext_ms_win_core_win32k_dxgdi_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b580, 0x388c7 bytes
    // win32k.sys .data:0x64670, 0x3e907 bytes
    // win32k.sys .data:0x5b580, 0x388c7 bytes
    //
    _z10(sdk::unknown_ptr) ms_win_core_win32k_dxgdi_l1_host;
    
    // [ext_ms_win_core_win32k_dxgdi_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32bc20, 0x1596d bytes
    // win32kfull.sys .data:0x329c20, 0x1659e bytes
    // win32kfull.sys .data:0x32bc20, 0x1596d bytes
    //
    _z11(sdk::unknown_ptr) ms_win_core_win32k_dxgdi_l1_table;
    
    // [ext_ms_win_core_win32k_dxgdi_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a98, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4474, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a68, 0x1596d bytes
    //
    _z12(sdk::unknown_ptr) ms_win_core_win32k_dxgdi_l1_table_size;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkCreateTrackedWorkload]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z13(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_create_tracked_workload;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkDestroyTrackedWorkload]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z14(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_destroy_tracked_workload;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkDispMgrOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z15(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_disp_mgr_operation;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkDisplayPortOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z16(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_display_port_operation;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkDuplicateHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z17(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_duplicate_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkEnumAdapters3]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z18(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_enum_adapters3;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkGetAvailableTrackedWorkloadIndex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z19(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_get_available_tracked_workload_index;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkGetProcessList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z20(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_get_process_list;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkGetTrackedWorkloadStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z21(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_get_tracked_workload_statistics;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkOutputDuplPresentToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z22(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_output_dupl_present_to_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkPinResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z23(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_pin_resources;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkRegisterVailProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z24(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_register_vail_process;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkResetTrackedWorkloadStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z25(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_reset_tracked_workload_statistics;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkSubmitPresentBltToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z26(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_submit_present_blt_to_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkSubmitPresentToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z27(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_submit_present_to_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkUnpinResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z28(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_unpin_resources;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkUpdateTrackedWorkload]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z29(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_update_tracked_workload;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkVailConnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z30(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_vail_connect;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkVailDisconnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z31(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_vail_disconnect;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtDxgkVailPromoteCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z32(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_dxgk_vail_promote_composition_surface;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIAbandonSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z33(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_abandon_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIAcquireKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z34(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_acquire_keyed_mutex;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIAcquireKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z35(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_acquire_keyed_mutex2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIAcquireSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z36(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_acquire_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIAddSurfaceToSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z37(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_add_surface_to_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIAdjustFullscreenGamma]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z38(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_adjust_fullscreen_gamma;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICacheHybridQueryValue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z39(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_cache_hybrid_query_value;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIChangeVideoMemoryReservation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z40(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_change_video_memory_reservation;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckExclusiveOwnership]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x1010, 0x388c7 bytes
    // win32k.sys .text:0x1010, 0x3e907 bytes
    // win32k.sys .text:0x1010, 0x388c7 bytes
    //
    _z41(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_exclusive_ownership;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckMonitorPowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z42(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_monitor_power_state;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckMultiPlaneOverlaySupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z43(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_multi_plane_overlay_support;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckMultiPlaneOverlaySupport2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z44(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_multi_plane_overlay_support2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckMultiPlaneOverlaySupport3]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z45(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_multi_plane_overlay_support3;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckOcclusion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z46(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_occlusion;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckSharedResourceAccess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z47(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_shared_resource_access;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICheckVidPnExclusiveOwnership]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z48(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_check_vid_pn_exclusive_ownership;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICloseAdapter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z49(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_close_adapter;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIConfigureSharedResource]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z50(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_configure_shared_resource;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z51(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_allocation;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateBundleObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z52(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_bundle_object;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z53(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_context;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateContextVirtual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z54(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_context_virtual;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z55(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_device;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateHwContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z56(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_hw_context;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z57(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z58(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_keyed_mutex;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z59(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_keyed_mutex2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateOutputDupl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z60(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_output_dupl;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z61(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_overlay;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreatePagingQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z62(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_paging_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateProtectedSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z63(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_protected_session;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z64(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDICreateSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z65(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_create_synchronization_object;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z66(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_allocation;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyAllocation2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z67(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_allocation2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z68(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_context;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z69(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_device;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyHwContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z70(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_hw_context;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z71(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z72(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_keyed_mutex;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyOutputDupl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z73(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_output_dupl;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z74(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_overlay;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyPagingQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z75(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_paging_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroyProtectedSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z76(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_protected_session;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDestroySynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z77(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_destroy_synchronization_object;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDispMgrCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z78(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_disp_mgr_create;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDispMgrSourceOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z79(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_disp_mgr_source_operation;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDispMgrTargetOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z80(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_disp_mgr_target_operation;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIEnumAdapters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z81(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_enum_adapters;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIEnumAdapters2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z82(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_enum_adapters2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIEscape]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z83(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_escape;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIEvict]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z84(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_evict;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIExtractBundleObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z85(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_extract_bundle_object;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIFlipOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z86(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_flip_overlay;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIFlushHeapTransitions]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z87(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_flush_heap_transitions;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIFreeGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z88(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_free_gpu_virtual_address;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetAllocationPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z89(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_allocation_priority;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetCachedHybridQueryValue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z90(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_cached_hybrid_query_value;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetContextInProcessSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z91(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_context_in_process_scheduling_priority;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetContextSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z92(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_context_scheduling_priority;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetDeviceState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z93(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_device_state;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetDisplayModeList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z94(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_display_mode_list;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetDWMVerticalBlankEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z95(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_dwm_vertical_blank_event;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetMemoryBudgetTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z96(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_memory_budget_target;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetMultiPlaneOverlayCaps]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z97(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_multi_plane_overlay_caps;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetMultisampleMethodList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z98(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_multisample_method_list;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetOverlayState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _z99(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_overlay_state;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetPostCompositionCaps]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a00(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_post_composition_caps;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetPresentHistory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a01(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_present_history;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetProcessDeviceRemovalSupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a02(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_process_device_removal_support;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetProcessSchedulingPriorityBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a03(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_process_scheduling_priority_band;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetProcessSchedulingPriorityClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a04(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_process_scheduling_priority_class;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetResourcePresentPrivateDriverData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a05(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_resource_present_private_driver_data;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetRuntimeData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a06(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_runtime_data;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetScanLine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a07(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_scan_line;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetSetSwapChainMetadata]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a08(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_set_swap_chain_metadata;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetSharedPrimaryHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a09(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_shared_primary_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetSharedResourceAdapterLuid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a10(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_shared_resource_adapter_luid;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetSharedResourceAdapterLuidFlipManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a11(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_shared_resource_adapter_luid_flip_manager;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIGetYieldPercentage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a12(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_get_yield_percentage;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIInvalidateActiveVidPn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a13(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_invalidate_active_vid_pn;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIInvalidateCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a14(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_invalidate_cache;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDILock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a15(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_lock;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDILock2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a16(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_lock2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIMakeResident]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a17(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_make_resident;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIMapGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a18(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_map_gpu_virtual_address;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIMarkDeviceAsError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a19(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_mark_device_as_error;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDINetDispGetNextChunkInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a20(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_net_disp_get_next_chunk_info;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDINetDispQueryMiracastDisplayDeviceStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a21(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_net_disp_query_miracast_display_device_status;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDINetDispQueryMiracastDisplayDeviceSupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a22(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_net_disp_query_miracast_display_device_support;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDINetDispStartMiracastDisplayDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a23(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_net_disp_start_miracast_display_device;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDINetDispStopMiracastDisplayDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a24(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_net_disp_stop_miracast_display_device;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOfferAllocations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a25(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_offer_allocations;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenAdapterFromDeviceName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a26(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_adapter_from_device_name;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenAdapterFromHdc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a27(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_adapter_from_hdc;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenAdapterFromLuid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a28(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_adapter_from_luid;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenBundleObjectNtHandleFromName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a29(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_bundle_object_nt_handle_from_name;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a30(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_keyed_mutex;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a31(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_keyed_mutex2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenKeyedMutexFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a32(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_keyed_mutex_from_nt_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenNtHandleFromName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a33(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_nt_handle_from_name;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenProtectedSessionFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a34(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_protected_session_from_nt_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenResource]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a35(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_resource;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenResourceFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a36(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_resource_from_nt_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a37(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenSyncObjectFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a38(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_sync_object_from_nt_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenSyncObjectFromNtHandle2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a39(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_sync_object_from_nt_handle2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenSyncObjectNtHandleFromName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a40(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_sync_object_nt_handle_from_name;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOpenSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a41(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_open_synchronization_object;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOutputDuplGetFrameInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a42(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_output_dupl_get_frame_info;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOutputDuplGetMetaData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a43(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_output_dupl_get_meta_data;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOutputDuplGetPointerShapeData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a44(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_output_dupl_get_pointer_shape_data;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOutputDuplPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a45(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_output_dupl_present;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIOutputDuplReleaseFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a46(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_output_dupl_release_frame;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIPollDisplayChildren]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a47(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_poll_display_children;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a48(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_present;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIPresentMultiPlaneOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a49(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_present_multi_plane_overlay;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIPresentMultiPlaneOverlay2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a50(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_present_multi_plane_overlay2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIPresentMultiPlaneOverlay3]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a51(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_present_multi_plane_overlay3;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIPresentRedirected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a52(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_present_redirected;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryAdapterInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a53(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_adapter_info;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryAllocationResidency]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a54(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_allocation_residency;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryClockCalibration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a55(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_clock_calibration;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryFSEBlock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a56(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_fse_block;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryProcessOfferInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a57(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_process_offer_info;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryProtectedSessionInfoFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a58(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_protected_session_info_from_nt_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryProtectedSessionStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a59(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_protected_session_status;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a60(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_remote_vid_pn_source_from_gdi_display_name;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryResourceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a61(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_resource_info;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryResourceInfoFromNtHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a62(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_resource_info_from_nt_handle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a63(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_statistics;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryVidPnExclusiveOwnership]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a64(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_vid_pn_exclusive_ownership;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIQueryVideoMemoryInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a65(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_query_video_memory_info;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIReclaimAllocations]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a66(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_reclaim_allocations;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIReclaimAllocations2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a67(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_reclaim_allocations2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIReleaseKeyedMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a68(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_release_keyed_mutex;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIReleaseKeyedMutex2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a69(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_release_keyed_mutex2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIReleaseProcessVidPnSourceOwners]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a70(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_release_process_vid_pn_source_owners;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIReleaseSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a71(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_release_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIRemoveSurfaceFromSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a72(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_remove_surface_from_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIRender]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a73(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_render;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIReserveGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a74(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_reserve_gpu_virtual_address;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetAllocationPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a75(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_allocation_priority;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetContextInProcessSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a76(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_context_in_process_scheduling_priority;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetContextSchedulingPriority]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a77(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_context_scheduling_priority;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetDisplayMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a78(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_display_mode;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetDodIndirectSwapchain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a79(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_dod_indirect_swapchain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetFSEBlock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a80(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_fse_block;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetGammaRamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a81(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_gamma_ramp;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetHwProtectionTeardownRecovery]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a82(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_hw_protection_teardown_recovery;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetMemoryBudgetTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a83(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_memory_budget_target;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetMonitorColorSpaceTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a84(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_monitor_color_space_transform;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetProcessDeviceRemovalSupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a85(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_process_device_removal_support;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetProcessSchedulingPriorityBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a86(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_process_scheduling_priority_band;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetProcessSchedulingPriorityClass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a87(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_process_scheduling_priority_class;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetQueuedLimit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a88(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_queued_limit;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetStablePowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a89(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_stable_power_state;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetStereoEnabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a90(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_stereo_enabled;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetSyncRefreshCountWaitTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a91(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_sync_refresh_count_wait_target;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetVidPnSourceHwProtection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a92(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_vid_pn_source_hw_protection;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetVidPnSourceOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a93(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_vid_pn_source_owner;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISetYieldPercentage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a94(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_set_yield_percentage;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIShareObjects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a95(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_share_objects;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISignalSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a96(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_signal_synchronization_object;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISignalSynchronizationObjectFromCpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a97(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_signal_synchronization_object_from_cpu;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISignalSynchronizationObjectFromGpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a98(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_signal_synchronization_object_from_gpu;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISignalSynchronizationObjectFromGpu2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _a99(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_signal_synchronization_object_from_gpu2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISubmitCommand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b00(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_submit_command;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISubmitCommandToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b01(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_submit_command_to_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISubmitSignalSyncObjectsToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b02(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_submit_signal_sync_objects_to_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDISubmitWaitForSyncObjectsToHwQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b03(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_submit_wait_for_sync_objects_to_hw_queue;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDITrimProcessCommitment]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b04(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_trim_process_commitment;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIUnOrderedPresentSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b05(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_un_ordered_present_swap_chain;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIUnlock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b06(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_unlock;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIUnlock2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b07(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_unlock2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIUpdateAllocationProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b08(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_update_allocation_property;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIUpdateGpuVirtualAddress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b09(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_update_gpu_virtual_address;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIUpdateOverlay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b10(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_update_overlay;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIWaitForIdle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b11(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_wait_for_idle;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIWaitForSynchronizationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b12(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_wait_for_synchronization_object;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIWaitForSynchronizationObjectFromCpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b13(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_wait_for_synchronization_object_from_cpu;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIWaitForSynchronizationObjectFromGpu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b14(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_wait_for_synchronization_object_from_gpu;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIWaitForVerticalBlankEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b15(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_wait_for_vertical_blank_event;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIWaitForVerticalBlankEvent2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b16(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddi_wait_for_vertical_blank_event2;
    
    // [ext_ms_win_core_win32k_dxgk_l1_1_0_NtGdiDdDDIDDisplayEnum]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b17(sdk::unknown_ptr) ms_win_core_win32k_dxgk_l1_1_0_nt_gdi_dd_ddid_display_enum;
    
    // [ext_ms_win_core_win32k_full_export_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x644a0, 0x388c7 bytes
    // win32k.sys .data:0x6e4e0, 0x3e907 bytes
    // win32k.sys .data:0x644a0, 0x388c7 bytes
    //
    _b18(sdk::unknown_ptr) ms_win_core_win32k_full_export_l1;
    
    // [ext_ms_win_core_win32k_full_export_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b250, 0x388c7 bytes
    // win32k.sys .data:0x64340, 0x3e907 bytes
    // win32k.sys .data:0x5b250, 0x388c7 bytes
    //
    _b19(sdk::unknown_ptr) ms_win_core_win32k_full_export_l1_host;
    
    // [ext_ms_win_core_win32k_full_export_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32bc50, 0x1596d bytes
    // win32kfull.sys .data:0x329c50, 0x1659e bytes
    // win32kfull.sys .data:0x32bc50, 0x1596d bytes
    //
    _b20(sdk::unknown_ptr) ms_win_core_win32k_full_export_l1_table;
    
    // [ext_ms_win_core_win32k_full_export_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a9c, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4478, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a6c, 0x1596d bytes
    //
    _b21(sdk::unknown_ptr) ms_win_core_win32k_full_export_l1_table_size;
    
    // [ext_ms_win_core_win32k_full_float_export_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x64b30, 0x388c7 bytes
    // win32k.sys .data:0x6eb70, 0x3e907 bytes
    // win32k.sys .data:0x64b30, 0x388c7 bytes
    //
    _b22(sdk::unknown_ptr) ms_win_core_win32k_full_float_export_l1;
    
    // [ext_ms_win_core_win32k_full_float_export_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b2e0, 0x388c7 bytes
    // win32k.sys .data:0x643d0, 0x3e907 bytes
    // win32k.sys .data:0x5b2e0, 0x388c7 bytes
    //
    _b23(sdk::unknown_ptr) ms_win_core_win32k_full_float_export_l1_host;
    
    // [ext_ms_win_core_win32k_full_float_export_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x330300, 0x1596d bytes
    // win32kfull.sys .data:0x32e5f0, 0x1659e bytes
    // win32kfull.sys .data:0x330300, 0x1596d bytes
    //
    _b24(sdk::unknown_ptr) ms_win_core_win32k_full_float_export_l1_table;
    
    // [ext_ms_win_core_win32k_full_float_export_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3ac4, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f44a4, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a94, 0x1596d bytes
    //
    _b25(sdk::unknown_ptr) ms_win_core_win32k_full_float_export_l1_table_size;
    
    // [ext_ms_win_core_win32k_fulldcompbase_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66960, 0x388c7 bytes
    // win32k.sys .data:0x70da0, 0x3e907 bytes
    // win32k.sys .data:0x66960, 0x388c7 bytes
    //
    _b26(sdk::unknown_ptr) ms_win_core_win32k_fulldcompbase_l1;
    
    // [ext_ms_win_core_win32k_fulldcompbase_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b4f0, 0x388c7 bytes
    // win32k.sys .data:0x645e0, 0x3e907 bytes
    // win32k.sys .data:0x5b4f0, 0x388c7 bytes
    //
    _b27(sdk::unknown_ptr) ms_win_core_win32k_fulldcompbase_l1_host;
    
    // [ext_ms_win_core_win32k_fulldcompbase_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x253f80, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7420, 0x27ef0 bytes
    // win32kbase.sys .data:0x250f90, 0x243e0 bytes
    //
    _b28(sdk::unknown_ptr) ms_win_core_win32k_fulldcompbase_l1_table;
    
    // [ext_ms_win_core_win32k_fulldcompbase_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c850, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804c0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a890, 0x243e0 bytes
    //
    _b29(sdk::unknown_ptr) ms_win_core_win32k_fulldcompbase_l1_table_size;
    
    // [ext_ms_win_core_win32k_fulldwm_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66cf0, 0x388c7 bytes
    // win32k.sys .data:0x71170, 0x3e907 bytes
    // win32k.sys .data:0x66cf0, 0x388c7 bytes
    //
    _b30(sdk::unknown_ptr) ms_win_core_win32k_fulldwm_l1;
    
    // [ext_ms_win_core_win32k_fulldwm_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b700, 0x388c7 bytes
    // win32k.sys .data:0x647f0, 0x3e907 bytes
    // win32k.sys .data:0x5b700, 0x388c7 bytes
    //
    _b31(sdk::unknown_ptr) ms_win_core_win32k_fulldwm_l1_host;
    
    // [ext_ms_win_core_win32k_fulldwm_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32bfd0, 0x1596d bytes
    // win32kfull.sys .data:0x329fd0, 0x1659e bytes
    // win32kfull.sys .data:0x32bfd0, 0x1596d bytes
    //
    _b32(sdk::unknown_ptr) ms_win_core_win32k_fulldwm_l1_table;
    
    // [ext_ms_win_core_win32k_fulldwm_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3aa0, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f447c, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a70, 0x1596d bytes
    //
    _b33(sdk::unknown_ptr) ms_win_core_win32k_fulldwm_l1_table_size;
    
    // [ext_ms_win_core_win32k_fullgdi_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x65af0, 0x388c7 bytes
    // win32k.sys .data:0x6ff10, 0x3e907 bytes
    // win32k.sys .data:0x65af0, 0x388c7 bytes
    //
    _b34(sdk::unknown_ptr) ms_win_core_win32k_fullgdi_l1;
    
    // [ext_ms_win_core_win32k_fullgdi_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b3a0, 0x388c7 bytes
    // win32k.sys .data:0x64490, 0x3e907 bytes
    // win32k.sys .data:0x5b3a0, 0x388c7 bytes
    //
    _b35(sdk::unknown_ptr) ms_win_core_win32k_fullgdi_l1_host;
    
    // [ext_ms_win_core_win32k_fullgdi_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32c010, 0x1596d bytes
    // win32kfull.sys .data:0x32a020, 0x1659e bytes
    // win32kfull.sys .data:0x32c010, 0x1596d bytes
    //
    _b36(sdk::unknown_ptr) ms_win_core_win32k_fullgdi_l1_table;
    
    // [ext_ms_win_core_win32k_fullgdi_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3aa4, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4480, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a74, 0x1596d bytes
    //
    _b37(sdk::unknown_ptr) ms_win_core_win32k_fullgdi_l1_table_size;
    
    // [ext_ms_win_core_win32k_fulluser64_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66d58, 0x388c7 bytes
    // win32k.sys .data:0x711e0, 0x3e907 bytes
    // win32k.sys .data:0x66d58, 0x388c7 bytes
    //
    _b38(sdk::unknown_ptr) ms_win_core_win32k_fulluser64_l1;
    
    // [ext_ms_win_core_win32k_fulluser64_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b760, 0x388c7 bytes
    // win32k.sys .data:0x64850, 0x3e907 bytes
    // win32k.sys .data:0x5b760, 0x388c7 bytes
    //
    _b39(sdk::unknown_ptr) ms_win_core_win32k_fulluser64_l1_host;
    
    // [ext_ms_win_core_win32k_fulluser64_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x330318, 0x1596d bytes
    // win32kfull.sys .data:0x32e608, 0x1659e bytes
    // win32kfull.sys .data:0x330318, 0x1596d bytes
    //
    _b40(sdk::unknown_ptr) ms_win_core_win32k_fulluser64_l1_table;
    
    // [ext_ms_win_core_win32k_fulluser64_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3ac8, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f44a8, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a98, 0x1596d bytes
    //
    _b41(sdk::unknown_ptr) ms_win_core_win32k_fulluser64_l1_table_size;
    
    // [ext_ms_win_core_win32k_fulluser_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x64bc0, 0x388c7 bytes
    // win32k.sys .data:0x6ebf0, 0x3e907 bytes
    // win32k.sys .data:0x64bc0, 0x388c7 bytes
    //
    _b42(sdk::unknown_ptr) ms_win_core_win32k_fulluser_l1;
    
    // [ext_ms_win_core_win32k_fulluser_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b340, 0x388c7 bytes
    // win32k.sys .data:0x64430, 0x3e907 bytes
    // win32k.sys .data:0x5b340, 0x388c7 bytes
    //
    _b43(sdk::unknown_ptr) ms_win_core_win32k_fulluser_l1_host;
    
    // [ext_ms_win_core_win32k_fulluser_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32c9a0, 0x1596d bytes
    // win32kfull.sys .data:0x32a9a0, 0x1659e bytes
    // win32kfull.sys .data:0x32c9a0, 0x1596d bytes
    //
    _b44(sdk::unknown_ptr) ms_win_core_win32k_fulluser_l1_table;
    
    // [ext_ms_win_core_win32k_fulluser_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3aa8, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4484, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a78, 0x1596d bytes
    //
    _b45(sdk::unknown_ptr) ms_win_core_win32k_fulluser_l1_table_size;
    
    // [ext_ms_win_core_win32k_fulluserbase_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66690, 0x388c7 bytes
    // win32k.sys .data:0x70ab0, 0x3e907 bytes
    // win32k.sys .data:0x66690, 0x388c7 bytes
    //
    _b46(sdk::unknown_ptr) ms_win_core_win32k_fulluserbase_l1;
    
    // [ext_ms_win_core_win32k_fulluserbase_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b430, 0x388c7 bytes
    // win32k.sys .data:0x64520, 0x3e907 bytes
    // win32k.sys .data:0x5b430, 0x388c7 bytes
    //
    _b47(sdk::unknown_ptr) ms_win_core_win32k_fulluserbase_l1_host;
    
    // [ext_ms_win_core_win32k_fulluserbase_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x253fa0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7440, 0x27ef0 bytes
    // win32kbase.sys .data:0x250fb0, 0x243e0 bytes
    //
    _b48(sdk::unknown_ptr) ms_win_core_win32k_fulluserbase_l1_table;
    
    // [ext_ms_win_core_win32k_fulluserbase_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c854, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804c4, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a894, 0x243e0 bytes
    //
    _b49(sdk::unknown_ptr) ms_win_core_win32k_fulluserbase_l1_table_size;
    
    // [ext_ms_win_core_win32k_gdi_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x665d0, 0x388c7 bytes
    // win32k.sys .data:0x70a00, 0x3e907 bytes
    // win32k.sys .data:0x665d0, 0x388c7 bytes
    //
    _b50(sdk::unknown_ptr) ms_win_core_win32k_gdi_l1;
    
    // [ext_ms_win_core_win32k_gdi_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b400, 0x388c7 bytes
    // win32k.sys .data:0x644f0, 0x3e907 bytes
    // win32k.sys .data:0x5b400, 0x388c7 bytes
    //
    _b51(sdk::unknown_ptr) ms_win_core_win32k_gdi_l1_host;
    
    // [ext_ms_win_core_win32k_gdi_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x254020, 0x243e0 bytes
    // win32kbase.sys .data:0x2a74c0, 0x27ef0 bytes
    // win32kbase.sys .data:0x251030, 0x243e0 bytes
    //
    _b52(sdk::unknown_ptr) ms_win_core_win32k_gdi_l1_table;
    
    // [ext_ms_win_core_win32k_gdi_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c870, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804d8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8b0, 0x243e0 bytes
    //
    _b53(sdk::unknown_ptr) ms_win_core_win32k_gdi_l1_table_size;
    
    // [ext_ms_win_core_win32k_input_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x65970, 0x388c7 bytes
    // win32k.sys .data:0x6fd70, 0x3e907 bytes
    // win32k.sys .data:0x65970, 0x388c7 bytes
    //
    _b54(sdk::unknown_ptr) ms_win_core_win32k_input_l1;
    
    // [ext_ms_win_core_win32k_input_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b370, 0x388c7 bytes
    // win32k.sys .data:0x64460, 0x3e907 bytes
    // win32k.sys .data:0x5b370, 0x388c7 bytes
    //
    _b55(sdk::unknown_ptr) ms_win_core_win32k_input_l1_host;
    
    // [ext_ms_win_core_win32k_input_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x2540e0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7570, 0x27ef0 bytes
    // win32kbase.sys .data:0x2510f0, 0x243e0 bytes
    //
    _b56(sdk::unknown_ptr) ms_win_core_win32k_input_l1_table;
    
    // [ext_ms_win_core_win32k_input_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c888, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804f0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8c8, 0x243e0 bytes
    //
    _b57(sdk::unknown_ptr) ms_win_core_win32k_input_l1_table_size;
    
    // [ext_ms_win_core_win32k_inputmit_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66a50, 0x388c7 bytes
    // win32k.sys .data:0x70e90, 0x3e907 bytes
    // win32k.sys .data:0x66a50, 0x388c7 bytes
    //
    _b58(sdk::unknown_ptr) ms_win_core_win32k_inputmit_l1;
    
    // [ext_ms_win_core_win32k_inputmit_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b5b0, 0x388c7 bytes
    // win32k.sys .data:0x646a0, 0x3e907 bytes
    // win32k.sys .data:0x5b5b0, 0x388c7 bytes
    //
    _b59(sdk::unknown_ptr) ms_win_core_win32k_inputmit_l1_host;
    
    // [ext_ms_win_core_win32k_inputmit_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x254260, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7710, 0x27ef0 bytes
    // win32kbase.sys .data:0x251270, 0x243e0 bytes
    //
    _b60(sdk::unknown_ptr) ms_win_core_win32k_inputmit_l1_table;
    
    // [ext_ms_win_core_win32k_inputmit_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c88c, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804f4, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8cc, 0x243e0 bytes
    //
    _b61(sdk::unknown_ptr) ms_win_core_win32k_inputmit_l1_table_size;
    
    // [ext_ms_win_core_win32k_inputrim_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66c30, 0x388c7 bytes
    // win32k.sys .data:0x710a0, 0x3e907 bytes
    // win32k.sys .data:0x66c30, 0x388c7 bytes
    //
    _b62(sdk::unknown_ptr) ms_win_core_win32k_inputrim_l1;
    
    // [ext_ms_win_core_win32k_inputrim_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b6a0, 0x388c7 bytes
    // win32k.sys .data:0x64790, 0x3e907 bytes
    // win32k.sys .data:0x5b6a0, 0x388c7 bytes
    //
    _b63(sdk::unknown_ptr) ms_win_core_win32k_inputrim_l1_host;
    
    // [ext_ms_win_core_win32k_inputrim_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x254330, 0x243e0 bytes
    // win32kbase.sys .data:0x2a77f0, 0x27ef0 bytes
    // win32kbase.sys .data:0x251340, 0x243e0 bytes
    //
    _b64(sdk::unknown_ptr) ms_win_core_win32k_inputrim_l1_table;
    
    // [ext_ms_win_core_win32k_inputrim_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c890, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804f8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8d0, 0x243e0 bytes
    //
    _b65(sdk::unknown_ptr) ms_win_core_win32k_inputrim_l1_table_size;
    
    // [ext_ms_win_core_win32k_mindwm_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66b70, 0x388c7 bytes
    // win32k.sys .data:0x70fe0, 0x3e907 bytes
    // win32k.sys .data:0x66b70, 0x388c7 bytes
    //
    _b66(sdk::unknown_ptr) ms_win_core_win32k_mindwm_l1;
    
    // [ext_ms_win_core_win32k_mindwm_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b640, 0x388c7 bytes
    // win32k.sys .data:0x64730, 0x3e907 bytes
    // win32k.sys .data:0x5b640, 0x388c7 bytes
    //
    _b67(sdk::unknown_ptr) ms_win_core_win32k_mindwm_l1_host;
    
    // [ext_ms_win_core_win32k_mininput_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66770, 0x388c7 bytes
    // win32k.sys .data:0x70b90, 0x3e907 bytes
    // win32k.sys .data:0x66770, 0x388c7 bytes
    //
    _b68(sdk::unknown_ptr) ms_win_core_win32k_mininput_l1;
    
    // [ext_ms_win_core_win32k_mininput_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b490, 0x388c7 bytes
    // win32k.sys .data:0x64580, 0x3e907 bytes
    // win32k.sys .data:0x5b490, 0x388c7 bytes
    //
    _b69(sdk::unknown_ptr) ms_win_core_win32k_mininput_l1_host;
    
    // [ext_ms_win_core_win32k_mininputmit_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66b40, 0x388c7 bytes
    // win32k.sys .data:0x70fb8, 0x3e907 bytes
    // win32k.sys .data:0x66b40, 0x388c7 bytes
    //
    _b70(sdk::unknown_ptr) ms_win_core_win32k_mininputmit_l1;
    
    // [ext_ms_win_core_win32k_mininputmit_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b610, 0x388c7 bytes
    // win32k.sys .data:0x64700, 0x3e907 bytes
    // win32k.sys .data:0x5b610, 0x388c7 bytes
    //
    _b71(sdk::unknown_ptr) ms_win_core_win32k_mininputmit_l1_host;
    
    // [ext_ms_win_core_win32k_mininputmitbase_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66b18, 0x388c7 bytes
    // win32k.sys .data:0x70f70, 0x3e907 bytes
    // win32k.sys .data:0x66b18, 0x388c7 bytes
    //
    _b72(sdk::unknown_ptr) ms_win_core_win32k_mininputmitbase_l1;
    
    // [ext_ms_win_core_win32k_mininputmitbase_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b5e0, 0x388c7 bytes
    // win32k.sys .data:0x646d0, 0x3e907 bytes
    // win32k.sys .data:0x5b5e0, 0x388c7 bytes
    //
    _b73(sdk::unknown_ptr) ms_win_core_win32k_mininputmitbase_l1_host;
    
    // [ext_ms_win_core_win32k_mininputmitbase_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x2543e0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a78b0, 0x27ef0 bytes
    // win32kbase.sys .data:0x2513f0, 0x243e0 bytes
    //
    _b74(sdk::unknown_ptr) ms_win_core_win32k_mininputmitbase_l1_table;
    
    // [ext_ms_win_core_win32k_mininputmitbase_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c894, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804fc, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8d4, 0x243e0 bytes
    //
    _b75(sdk::unknown_ptr) ms_win_core_win32k_mininputmitbase_l1_table_size;
    
    // [ext_ms_win_core_win32k_minuser_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66bb0, 0x388c7 bytes
    // win32k.sys .data:0x71020, 0x3e907 bytes
    // win32k.sys .data:0x66bb0, 0x388c7 bytes
    //
    _b76(sdk::unknown_ptr) ms_win_core_win32k_minuser_l1;
    
    // [ext_ms_win_core_win32k_minuser_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b670, 0x388c7 bytes
    // win32k.sys .data:0x64760, 0x3e907 bytes
    // win32k.sys .data:0x5b670, 0x388c7 bytes
    //
    _b77(sdk::unknown_ptr) ms_win_core_win32k_minuser_l1_host;
    
    // [ext_ms_win_core_win32k_opmgdi_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66980, 0x388c7 bytes
    // win32k.sys .data:0x70dc0, 0x3e907 bytes
    // win32k.sys .data:0x66980, 0x388c7 bytes
    //
    _b78(sdk::unknown_ptr) ms_win_core_win32k_opmgdi_l1;
    
    // [ext_ms_win_core_win32k_opmgdi_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b520, 0x388c7 bytes
    // win32k.sys .data:0x64610, 0x3e907 bytes
    // win32k.sys .data:0x5b520, 0x388c7 bytes
    //
    _b79(sdk::unknown_ptr) ms_win_core_win32k_opmgdi_l1_host;
    
    // [ext_ms_win_core_win32k_opmgdi_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x254410, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7900, 0x27ef0 bytes
    // win32kbase.sys .data:0x251420, 0x243e0 bytes
    //
    _b80(sdk::unknown_ptr) ms_win_core_win32k_opmgdi_l1_table;
    
    // [ext_ms_win_core_win32k_opmgdi_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c898, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280500, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8d8, 0x243e0 bytes
    //
    _b81(sdk::unknown_ptr) ms_win_core_win32k_opmgdi_l1_table_size;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerConfirmOutstandingAnalogToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b82(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_confirm_outstanding_analog_token;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerCreateCompositionTokenHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b83(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_create_composition_token_handle;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerCreateFlipObjectReturnTokenHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b84(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_create_flip_object_return_token_handle;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerCreateFlipObjectTokenHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b85(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_create_flip_object_token_handle;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerGetAnalogExclusiveSurfaceUpdates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b86(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_get_analog_exclusive_surface_updates;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerGetAnalogExclusiveTokenEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b87(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_get_analog_exclusive_token_event;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerOpenSectionAndEvents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b88(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_open_section_and_events;
    
    // [ext_ms_win_core_win32k_tokenmgr_l1_1_0_NtTokenManagerThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    // win32k.sys .text:0x12200, 0x3e907 bytes
    // win32k.sys .text:0x10e60, 0x388c7 bytes
    //
    _b89(sdk::unknown_ptr) ms_win_core_win32k_tokenmgr_l1_1_0_nt_token_manager_thread;
    
    // [ext_ms_win_core_win32k_user_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66480, 0x388c7 bytes
    // win32k.sys .data:0x70890, 0x3e907 bytes
    // win32k.sys .data:0x66480, 0x388c7 bytes
    //
    _b90(sdk::unknown_ptr) ms_win_core_win32k_user_l1;
    
    // [ext_ms_win_core_win32k_user_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b3d0, 0x388c7 bytes
    // win32k.sys .data:0x644c0, 0x3e907 bytes
    // win32k.sys .data:0x5b3d0, 0x388c7 bytes
    //
    _b91(sdk::unknown_ptr) ms_win_core_win32k_user_l1_host;
    
    // [ext_ms_win_core_win32k_user_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x254470, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7960, 0x27ef0 bytes
    // win32kbase.sys .data:0x251480, 0x243e0 bytes
    //
    _b92(sdk::unknown_ptr) ms_win_core_win32k_user_l1_table;
    
    // [ext_ms_win_core_win32k_user_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c89c, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280504, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8dc, 0x243e0 bytes
    //
    _b93(sdk::unknown_ptr) ms_win_core_win32k_user_l1_table_size;
    
    // [ext_ms_win_core_win32k_userdisplay_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x66710, 0x388c7 bytes
    // win32k.sys .data:0x70b30, 0x3e907 bytes
    // win32k.sys .data:0x66710, 0x388c7 bytes
    //
    _b94(sdk::unknown_ptr) ms_win_core_win32k_userdisplay_l1;
    
    // [ext_ms_win_core_win32k_userdisplay_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b460, 0x388c7 bytes
    // win32k.sys .data:0x64550, 0x3e907 bytes
    // win32k.sys .data:0x5b460, 0x388c7 bytes
    //
    _b95(sdk::unknown_ptr) ms_win_core_win32k_userdisplay_l1_host;
    
    // [ext_ms_win_core_win32k_userdisplay_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x2545c0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a7ad0, 0x27ef0 bytes
    // win32kbase.sys .data:0x2515d0, 0x243e0 bytes
    //
    _b96(sdk::unknown_ptr) ms_win_core_win32k_userdisplay_l1_table;
    
    // [ext_ms_win_core_win32k_userdisplay_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c8a0, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280508, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8e0, 0x243e0 bytes
    //
    _b97(sdk::unknown_ptr) ms_win_core_win32k_userdisplay_l1_table_size;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ee90, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3d10, 0x27ef0 bytes
    // win32kbase.sys .data:0x25bed0, 0x243e0 bytes
    //
    _b98(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x253970, 0x243e0 bytes
    // win32kbase.sys .data:0x2a6d00, 0x27ef0 bytes
    // win32kbase.sys .data:0x250980, 0x243e0 bytes
    //
    _b99(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_host;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32d750, 0x1596d bytes
    // win32kfull.sys .data:0x32bb20, 0x1659e bytes
    // win32kfull.sys .data:0x32d750, 0x1596d bytes
    //
    _c00(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntgdi_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3aac, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4488, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a7c, 0x1596d bytes
    //
    _c01(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntgdi_l1_table_size;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25f990, 0x243e0 bytes
    // win32kbase.sys .data:0x2b4800, 0x27ef0 bytes
    // win32kbase.sys .data:0x25c9d0, 0x243e0 bytes
    //
    _c02(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x2539a0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a6d30, 0x27ef0 bytes
    // win32kbase.sys .data:0x2509b0, 0x243e0 bytes
    //
    _c03(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_host;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32e250, 0x1596d bytes
    // win32kfull.sys .data:0x32c610, 0x1659e bytes
    // win32kfull.sys .data:0x32e250, 0x1596d bytes
    //
    _c04(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_table;
    
    // [ext_ms_win_moderncore_win32k_base_ntuser_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3ac0, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f44a0, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a90, 0x1596d bytes
    //
    _c05(sdk::unknown_ptr) ms_win_moderncore_win32k_base_ntuser_l1_table_size;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33c8c0, 0x1596d bytes
    // win32kfull.sys .data:0x33ac10, 0x1659e bytes
    // win32kfull.sys .data:0x33c880, 0x1596d bytes
    //
    _c06(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_host]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32ba00, 0x1596d bytes
    // win32kfull.sys .data:0x329a10, 0x1659e bytes
    // win32kfull.sys .data:0x32ba00, 0x1596d bytes
    //
    _c07(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_host;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_table]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .data:0x5b000, 0x388c7 bytes
    // win32k.sys .data:0x64000, 0x3e907 bytes
    // win32k.sys .data:0x5b000, 0x388c7 bytes
    //
    _c08(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_table;
    
    // [ext_ms_win_moderncore_win32k_base_sysentry_l1_table_size]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32k.sys .rdata:0x50140, 0x388c7 bytes
    // win32k.sys .rdata:0x58160, 0x3e907 bytes
    // win32k.sys .rdata:0x50140, 0x388c7 bytes
    //
    _c09(sdk::unknown_ptr) ms_win_moderncore_win32k_base_sysentry_l1_table_size;
    
    // [ext_ms_win_ntos_werkernel_l1_1_1_WerSubmitUserCrashReport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e60, 0x243e0 bytes
    // win32kbase.sys .text:0xdaed0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8800, 0x243e0 bytes
    //
    _c10(sdk::unknown_ptr) ms_win_ntos_werkernel_l1_1_1_wer_submit_user_crash_report;
    
    // [ExtTextOutRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x934e0, 0x13864 bytes
    // win32kfull.sys .text:0x430a8, 0x1596d bytes
    // win32kfull.sys .text:0xd210, 0x1659e bytes
    // win32kfull.sys .text:0x434b8, 0x1596d bytes
    //
    _c11(sdk::unknown_ptr) text_out_rect;
    
    // [ext_ms_win_ntos_ksr_l1_1_0_KsrGetFirmwareInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x8d80, 0x1d08 bytes
    //
    _c12(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_0_ksr_get_firmware_information;
    
    // [ext_ms_win_ntos_ksr_l1_1_4_KsrPersistMemory]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x1930, 0x1cf0 bytes
    //
    _c13(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_4_ksr_persist_memory;
    
    // [ext_ms_win_ntos_ksr_l1_1_3_KsrPersistMemory]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .text:0x1690, 0x1cf0 bytes
    // pci.sys .text:0x1a80, 0x1cf0 bytes
    //
    _c14(sdk::unknown_ptr) ms_win_ntos_ksr_l1_1_3_ksr_persist_memory;
    
    // [ExtAdapterIoctlPost]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ba8, 0x440c8 bytes
    //
    _c15(sdk::unknown_ptr) adapter_ioctl_post;
    
    // [ExtAdapterIoctlPre]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79bd8, 0x440c8 bytes
    //
    _c16(sdk::unknown_ptr) adapter_ioctl_pre;
    
    // [ExtAdapterIoctlReplace]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79bf0, 0x440c8 bytes
    //
    _c17(sdk::unknown_ptr) adapter_ioctl_replace;
    
    // [ExtDeviceObject]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79bc8, 0x440c8 bytes
    //
    _c18(sdk::unknown_ptr) device_object;
    
    // [ExtExtendedFuncPost]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b80, 0x440c8 bytes
    //
    _c19(sdk::unknown_ptr) extended_func_post;
    
    // [ExtExtendedFuncPre]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79bf8, 0x440c8 bytes
    //
    _c20(sdk::unknown_ptr) extended_func_pre;
    
    // [ExtExtendedFuncReplace]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b90, 0x440c8 bytes
    //
    _c21(sdk::unknown_ptr) extended_func_replace;
    
    // [ExtFileObject]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79bb0, 0x440c8 bytes
    //
    _c22(sdk::unknown_ptr) file_object;
    
    // [ExtNotificationPost]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ae0, 0x440c8 bytes
    //
    _c23(sdk::unknown_ptr) notification_post;
    
    // [ExtNotificationPre]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ad0, 0x440c8 bytes
    //
    _c24(sdk::unknown_ptr) notification_pre;
    
    // [ExtNotificationReplace]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ac8, 0x440c8 bytes
    //
    _c25(sdk::unknown_ptr) notification_replace;
    
    // [ExtRefCount]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ab4, 0x440c8 bytes
    //
    _c26(sdk::unknown_ptr) ref_count;
    
    // [ExtSendMiniportData]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b98, 0x440c8 bytes
    //
    _c27(sdk::unknown_ptr) send_miniport_data;
    
    // [ExtSendStorportData]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79bd0, 0x440c8 bytes
    //
    _c28(sdk::unknown_ptr) send_storport_data;
    
    // [ExtUnitIoctlPost]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79bb8, 0x440c8 bytes
    //
    _c29(sdk::unknown_ptr) unit_ioctl_post;
    
    // [ExtUnitIoctlPre]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79be0, 0x440c8 bytes
    //
    _c30(sdk::unknown_ptr) unit_ioctl_pre;
    
    // [ExtUnitIoctlReplace]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79be8, 0x440c8 bytes
    //
    _c31(sdk::unknown_ptr) unit_ioctl_replace;
    
    // [ext_ms_win_ntos_ksigningpolicy_l1_1_0_CiQueryLoadLegacyDisplayDriversExt]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd8b0, 0x8dc0 bytes
    //
    _c32(sdk::unknown_ptr) ms_win_ntos_ksigningpolicy_l1_1_0_ci_query_load_legacy_display_drivers_ext;
    
    // [ext_ms_win_ntos_ksigningpolicy_l1_1_0_SeCodeIntegrityCacheExt]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll .text:0xd8b0, 0x8dc0 bytes
    //
    _c33(sdk::unknown_ptr) ms_win_ntos_ksigningpolicy_l1_1_0_se_code_integrity_cache_ext;
    
    // [ext_ms_win_ci_xbox_l1_1_0_XciInitialize]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xd8b0, 0x8dc0 bytes
    // ci.dll .text:0x19a30, 0x13a78 bytes
    // ci.dll .text:0x198d0, 0x13a78 bytes
    // ci.dll .text:0x199b0, 0x13a78 bytes
    //
    _c34(sdk::unknown_ptr) ms_win_ci_xbox_l1_1_0_xci_initialize;
    
    // [ext_ms_win_ci_xbox_l1_1_0_XciQueryInformation]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xd8b0, 0x8dc0 bytes
    // ci.dll .text:0x19a30, 0x13a78 bytes
    // ci.dll .text:0x198d0, 0x13a78 bytes
    // ci.dll .text:0x199b0, 0x13a78 bytes
    //
    _c35(sdk::unknown_ptr) ms_win_ci_xbox_l1_1_0_xci_query_information;
    
    // [ext_ms_win_ci_xbox_l1_1_0_XciSupported]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xd8c0, 0x8dc0 bytes
    // ci.dll .text:0x19a40, 0x13a78 bytes
    // ci.dll .text:0x198e0, 0x13a78 bytes
    // ci.dll .text:0x199c0, 0x13a78 bytes
    //
    _c36(sdk::unknown_ptr) ms_win_ci_xbox_l1_1_0_xci_supported;
    
    // [ext_ms_win_ci_xbox_l1_1_0_XciValidateImageData]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xd8b0, 0x8dc0 bytes
    // ci.dll .text:0x19a30, 0x13a78 bytes
    // ci.dll .text:0x198d0, 0x13a78 bytes
    // ci.dll .text:0x199b0, 0x13a78 bytes
    //
    _c37(sdk::unknown_ptr) ms_win_ci_xbox_l1_1_0_xci_validate_image_data;
    
    // [ext_ms_win_ci_xbox_l1_1_0_XciValidateImageHeader]
    // Ldr = [ci.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0xd8b0, 0x8dc0 bytes
    // ci.dll .text:0x19a30, 0x13a78 bytes
    // ci.dll .text:0x198d0, 0x13a78 bytes
    // ci.dll .text:0x199b0, 0x13a78 bytes
    //
    _c38(sdk::unknown_ptr) ms_win_ci_xbox_l1_1_0_xci_validate_image_header;
};
#include "magic/api.end.hpp"
