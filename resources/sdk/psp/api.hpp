#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace psp
{
    // [PspAcquirePushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x137648, 0x32828 bytes
    //
    _m00(sdk::unknown_ptr) acquire_push_lock_exclusive;
    
    // [PspAcquirePushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x20f9f4, 0x32828 bytes
    //
    _m01(sdk::unknown_ptr) acquire_push_lock_shared;
    
    // [PspAddProcessToJobChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3f04b0, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) add_process_to_job_chain;
    
    // [PspApplyCoreIsolationPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a496c, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) apply_core_isolation_policy;
    
    // [PspAssignCpuPartitionsToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4ad4, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) assign_cpu_partitions_to_process;
    
    // [PspAttachProcessToSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a827c, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) attach_process_to_syscall_provider;
    
    // [PspBeginServerSiloShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x682b38, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) begin_server_silo_shutdown;
    
    // [PspCaptureSystemServiceInMemoryArgs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a8360, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) capture_system_service_in_memory_args;
    
    // [PspComputeExecutionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3f0734, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) compute_execution_state;
    
    // [PspCopyNodeRelativeMaskToAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb82720, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) copy_node_relative_mask_to_affinity_ex;
    
    // [PspCpuPartitionDirectoryHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6ae00, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) cpu_partition_directory_handle;
    
    // [PspCpuPartitionDirectoryPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8a400, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) cpu_partition_directory_path_string;
    
    // [PspCpuPartitionListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd0f2c0, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) cpu_partition_list_head;
    
    // [PspCpuPartitionMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8a420, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) cpu_partition_mapping;
    
    // [PspCreateThreadNotifyRoutineExCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74af00, 0x32828 bytes
    //
    _m14(sdk::unknown_ptr) create_thread_notify_routine_ex_count;
    
    // [PspDeleteCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4d60, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) delete_cpu_partition;
    
    // [PspDeleteProcessStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4d80, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) delete_process_state_change;
    
    // [PspDeleteThreadStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4de0, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) delete_thread_state_change;
    
    // [PspDereferenceQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6818c8, 0x32828 bytes
    //
    _m18(sdk::unknown_ptr) dereference_quota;
    
    // [PspDereferenceSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x58fc2c, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) dereference_syscall_provider;
    
    // [PspDestroySyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a83c0, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) destroy_syscall_provider;
    
    // [PspDetachProcessFromSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a84d8, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) detach_process_from_syscall_provider;
    
    // [PspEnableProcessOptionalXStateFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a2680, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) enable_process_optional_x_state_features;
    
    // [PspEnsureGuiThreadAndBatchFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a8598, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) ensure_gui_thread_and_batch_flush;
    
    // [PspFreezeTimeBiasAddress32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x302378, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) freeze_time_bias_address32;
    
    // [PspGetNextSyscallProviderProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a85f4, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) get_next_syscall_provider_process;
    
    // [PspGetProcessAffinityForPeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x75c0d4, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) get_process_affinity_for_peb;
    
    // [PspGetRateControlHeaderPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x453cd8, 0x32828 bytes
    //
    _m27(sdk::unknown_ptr) get_rate_control_header_ptr;
    
    // [PspGetRedirectionTrustPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7dc138, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) get_redirection_trust_policy;
    
    // [PspGetThreadPpmPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a1f98, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) get_thread_ppm_policy;
    
    // [PspIdealNodeRandomized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cb20, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) ideal_node_randomized;
    
    // [PspInheritSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x76592c, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) inherit_syscall_provider;
    
    // [PspInitialSystemProcessHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74af80, 0x32828 bytes
    //
    _m32(sdk::unknown_ptr) initial_system_process_handle;
    
    // [PspInitializeCpuPartitionsDefaultSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5aa70, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) initialize_cpu_partitions_default_sd;
    
    // [PspInitializeCpuPartitionsPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb271d8, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) initialize_cpu_partitions_phase0;
    
    // [PspInitializeCpuPartitionsPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb2f000, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) initialize_cpu_partitions_phase1;
    
    // [PspInitializeProcessLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x57ad70, 0x1fe000 bytes
    //
    _m36(sdk::unknown_ptr) initialize_process_lock;
    
    // [PspInitializeQuotaExpansionDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7a2080, 0x32828 bytes
    //
    _m37(sdk::unknown_ptr) initialize_quota_expansion_descriptor;
    
    // [PspInitializeSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x58fc60, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) initialize_syscall_provider;
    
    // [PspInsertSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a86d4, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) insert_syscall_provider;
    
    // [PspInterlockedMaxQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2d3890, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) interlocked_max_quota;
    
    // [PspIsServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd2a58, 0x32828 bytes
    //
    _m41(sdk::unknown_ptr) is_server_silo;
    
    // [PspIumGetProcessorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x686b5c, 0x32828 bytes
    //
    _m42(sdk::unknown_ptr) ium_get_processor_info;
    
    // [PspIumInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x796b00, 0x32828 bytes
    //
    _m43(sdk::unknown_ptr) ium_initialize;
    
    // [PspLockJobListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x684df8, 0x32828 bytes
    //
    _m44(sdk::unknown_ptr) lock_job_list_shared;
    
    // [PspLockJobMemoryLimitsExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x450404, 0x32828 bytes
    //
    _m45(sdk::unknown_ptr) lock_job_memory_limits_exclusive;
    
    // [PspLockProcessThreadListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xb86c8, 0x32828 bytes
    //
    _m46(sdk::unknown_ptr) lock_process_thread_list_shared;
    
    // [PspLockQuotaListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x149f40, 0x32828 bytes
    //
    _m47(sdk::unknown_ptr) lock_quota_list_exclusive;
    
    // [PspLockQuotaListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xca2c4, 0x32828 bytes
    //
    _m48(sdk::unknown_ptr) lock_quota_list_shared;
    
    // [PspLookupSyscallProviderById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x58fcf0, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) lookup_syscall_provider_by_id;
    
    // [PspLookupSyscallProviderByIdNoLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a87ac, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) lookup_syscall_provider_by_id_no_lock;
    
    // [PspNativeSystemDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd53e58, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) native_system_dll;
    
    // [PspNotifyProcessEffectiveIoLimitChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34f18c, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) notify_process_effective_io_limit_changed;
    
    // [PspNotifyThreadCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x707adc, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) notify_thread_creation;
    
    // [PspProcessStateChangeMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8a440, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) process_state_change_mapping;
    
    // [PspProcessStateChangeType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e0c8, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) process_state_change_type;
    
    // [PspQueryComPlusRunUnderWoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4fb8, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) query_com_plus_run_under_wo_w;
    
    // [PspQuerySyscallProviderProcessList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a8830, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) query_syscall_provider_process_list;
    
    // [PspQueueApcSpecialApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x41960c, 0x32828 bytes
    //
    _m58(sdk::unknown_ptr) queue_apc_special_apc;
    
    // [PspReadProcessSecurityDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x57b934, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) read_process_security_domain;
    
    // [PspRecheckThreadOptionalXStateFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x689720, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) recheck_thread_optional_x_state_features;
    
    // [PspReferenceCpuPartitionByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a52f4, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) reference_cpu_partition_by_handle;
    
    // [PspSecureThreadStartup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a55b0, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) secure_thread_startup;
    
    // [PspSelectMachineForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b393c, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) select_machine_for_process;
    
    // [PspServiceDescriptorGroupTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe CFGRO:0xe01d30, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) service_descriptor_group_table;
    
    // [PspSetIoPriorityLimitJobTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a6454, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) set_io_priority_limit_job_tree;
    
    // [PspSetJobIoPriorityLimitPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a64e0, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) set_job_io_priority_limit_pre_callback;
    
    // [PspSetJobPagePriorityLimitPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a67b0, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) set_job_page_priority_limit_pre_callback;
    
    // [PspSetPagePriorityLimitJobTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a6cb0, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) set_page_priority_limit_job_tree;
    
    // [PspSetProcessIoPriorityLimitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a1d60, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) set_process_io_priority_limit_callback;
    
    // [PspSetProcessTimerResolutionPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7dc730, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) set_process_timer_resolution_policy;
    
    // [PspSetRedirectionTrustPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7db4cc, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) set_redirection_trust_policy;
    
    // [PspSiloInitializeIsStateSeparationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a1144, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) silo_initialize_is_state_separation_enabled;
    
    // [PspSyscallProviderOptIn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a88bc, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) syscall_provider_opt_in;
    
    // [PspSyscallProviderRegistrationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd53590, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) syscall_provider_registration_lock;
    
    // [PspSyscallProviderServiceDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x430710, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) syscall_provider_service_dispatch;
    
    // [PspSyscallProviderServiceDispatchGeneric]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a8a68, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) syscall_provider_service_dispatch_generic;
    
    // [PspSyscallProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd51340, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) syscall_providers;
    
    // [PspSyscallProvidersEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd5101e, 0x1fd000 bytes
    //
    _m78(sdk::unknown_ptr) syscall_providers_enabled;
    
    // [PspSystemCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd0f2d0, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) system_cpu_partition;
    
    // [PspSystemCpuPartitionName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8a3f0, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) system_cpu_partition_name;
    
    // [PspThreadStateChangeMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8a410, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) thread_state_change_mapping;
    
    // [PspThreadStateChangeType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e0d0, 0x1fd000 bytes
    //
    _m82(sdk::unknown_ptr) thread_state_change_type;
    
    // [PspTimeZoneStateBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe CACHEALI:0xd49c40, 0x1fd000 bytes
    //
    _m83(sdk::unknown_ptr) time_zone_state_buffer;
    
    // [PspTlsAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82a984, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) tls_alloc;
    
    // [PspTlsContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd0b9b8, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) tls_context;
    
    // [PspTlsDataCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x68b5e0, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) tls_data_cleanup;
    
    // [PspTlsInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb272fc, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) tls_initialize;
    
    // [PspTlsPreAllocatedSlotCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6ae08, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) tls_pre_allocated_slot_count;
    
    // [PspUnlockProcessThreadListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xb8684, 0x32828 bytes
    //
    _m89(sdk::unknown_ptr) unlock_process_thread_list_shared;
    
    // [PspUpdateJobEffectivePriorityLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7cefa4, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) update_job_effective_priority_limits;
    
    // [PspUpdateJobPeakProcessMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x44ff60, 0x32828 bytes
    //
    _m91(sdk::unknown_ptr) update_job_peak_process_memory;
    
    // [PspValidateJobLimitsDuringAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3f0688, 0x32828 bytes
    //
    _m92(sdk::unknown_ptr) validate_job_limits_during_assignment;
    
    // [PspVsmEnclaveRuntimeDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd53e38, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) vsm_enclave_runtime_dll;
    
    // [PspWow64CurrentPeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xa880c, 0x32828 bytes
    //
    _m94(sdk::unknown_ptr) wow64_current_peb;
    
    // [PspWow64SystemDllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a950, 0x32828 bytes
    //
    _m95(sdk::unknown_ptr) wow64_system_dll_data;
    
    // [PspWowX86SystemDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd53e48, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) wow_x86_system_dll;
    
    // [PspApplyWin32kFilterOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670eb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4604, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) apply_win32k_filter_options;
    
    // [PspBeginSiloTeardown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x903548, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x901c38, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) begin_silo_teardown;
    
    // [PspCallEnclaveReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfba20, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba20, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) call_enclave_return;
    
    // [PspDeleteMemoryPartitionContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x905ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9045c8, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) delete_memory_partition_context;
    
    // [PspDeleteObjectAccessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90727c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90599c, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) delete_object_access_state;
    
    // [PspDestroyProcessParameterOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707530, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) destroy_process_parameter_overrides;
    
    // [PspEnableAltSystemCallHandling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x904db8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9034d8, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) enable_alt_system_call_handling;
    
    // [PspEnclaveDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfba28, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba28, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) enclave_dispatch;
    
    // [PspEnclaveDispatchReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb9d8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9d8, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) enclave_dispatch_return;
    
    // [PspEnumProcessesInJobHierarchy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90a0f0, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) enum_processes_in_job_hierarchy;
    
    // [PspFreeUserFiberShadowStackInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x907478, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x905b98, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) free_user_fiber_shadow_stack_internal;
    
    // [PspLockProcessSecurityShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3957d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396830, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) lock_process_security_shared;
    
    // [PspLockProcessSharedUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57bacc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57b8cc, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) lock_process_shared_unsafe;
    
    // [PspLockWorkingSetChangeExclusiveUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57bb14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57b914, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) lock_working_set_change_exclusive_unsafe;
    
    // [PspProcessDynamicEnforcedAddressRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9a2d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c71f4, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) process_dynamic_enforced_address_ranges;
    
    // [PspStorageMakeSlotReadOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x6873d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790788, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) storage_make_slot_read_only;
    
    // [PspUnlockAffinityUpdateExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57bb34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57b944, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) unlock_affinity_update_exclusive;
    
    // [PspUnlockProcessExclusiveUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57ca20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57c830, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) unlock_process_exclusive_unsafe;
    
    // [PspUnlockProcessSecurityShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57bfa8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57bdb8, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) unlock_process_security_shared;
    
    // [PspUnlockProcessSharedUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57bd30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57bb40, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) unlock_process_shared_unsafe;
    
    // [PspUnlockWorkingSetChangeExclusiveUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57bdb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57bbc4, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) unlock_working_set_change_exclusive_unsafe;
    
    // [PspUserFiberStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2cc00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbf8, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) user_fiber_start;
    
    // [PspWriteProcessSecurityDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x308ba4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3380fc, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) write_process_security_domain;
    
    // [PspActivePartitionListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc02a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc043f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02aa0, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) active_partition_list_head;
    
    // [PspActivePartitionListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1de3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37afc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1de94, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) active_partition_list_lock;
    
    // [PspActivityReferenceMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa966a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a3e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95890, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) activity_reference_mapping;
    
    // [PspActivityReferenceObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfba30, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e190, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba30, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) activity_reference_object_type;
    
    // [PspAddPartitionToGlobalList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c54dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dff68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c63ac, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) add_partition_to_global_list;
    
    // [PspAllocateAndQueryProcessNotificationChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65f724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5c7c, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) allocate_and_query_process_notification_channel;
    
    // [PspAllocatePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7adda8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b59c8, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) allocate_partition;
    
    // [PspApplyJobChainLimitsToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c114, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65cbb8, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) apply_job_chain_limits_to_process;
    
    // [PspApplyTimerDelayProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57c0c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f208, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57bed8, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) apply_timer_delay_process;
    
    // [PspAssignSiloSystemRootPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x903460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a04b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901b50, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) assign_silo_system_root_path;
    
    // [PspAttachThreadToUmsCompletionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f23c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b8d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57b6d4, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) attach_thread_to_ums_completion_list;
    
    // [PspBamExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5c8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc48, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5c8, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) bam_extension_host;
    
    // [PspBamHostInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5a00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5b98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5a20, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) bam_host_interface;
    
    // [PspBoostJobIoPriorityCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ec920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674fe0, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) boost_job_io_priority_callback;
    
    // [PspChargeProcessWakeCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b88c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a13d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60eef0, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) charge_process_wake_counter;
    
    // [PspCheckConditionalWakeCharge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67c0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67518c, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) check_conditional_wake_charge;
    
    // [PspCloseActivityReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7187e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x871960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720240, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) close_activity_reference;
    
    // [PspClosePartitionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90a0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908810, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) close_partition_handle;
    
    // [PspCombineSecurityDomains]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x637f84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0d68, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) combine_security_domains;
    
    // [PspControlHwTracingThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9048d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902fc0, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) control_hw_tracing_thread;
    
    // [PspCreateActivityReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x715238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x871824, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71cc78, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) create_activity_reference;
    
    // [PspCreatePartitionSystemProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90a128, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9fa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908848, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) create_partition_system_process;
    
    // [PspCreateThreadNotifyRoutineNonSystemCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c9cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53774, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9d8, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) create_thread_notify_routine_non_system_count;
    
    // [PspCreateUserContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x686268, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70754c, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) create_user_context;
    
    // [PspDamExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb948, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df18, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb948, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) dam_extension_host;
    
    // [PspDecodeMitigationExecuteOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6742c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e76cc, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) decode_mitigation_execute_options;
    
    // [PspDeleteExternalServerSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x903898, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a08b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901f88, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) delete_external_server_silo_state;
    
    // [PspDeletePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90a220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aa0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908940, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) delete_partition;
    
    // [PspDetachSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f324, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676bec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710c98, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) detach_session;
    
    // [PspDetachThreadFromUmsCompletionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f38c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57ba3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57b83c, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) detach_thread_from_ums_completion_list;
    
    // [PspDetectComplusILImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e21c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6666ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d9bcc, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) detect_complus_il_image;
    
    // [PspDisableControlFlowGuardExportSuppression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb6f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd64, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6f0, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) disable_control_flow_guard_export_suppression;
    
    // [PspDisassociateUmsThreadFromPrimary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686c28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90b9f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90a118, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) disassociate_ums_thread_from_primary;
    
    // [PspDoesJobHierarchyPermitUILimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67917c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67705c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec59c, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) does_job_hierarchy_permit_ui_limits;
    
    // [PspDoesJobHierarchyPermitUILimitsCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed160, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) does_job_hierarchy_permit_ui_limits_callback;
    
    // [PspEstimateNewProcessServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61baf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76302c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66b9f0, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) estimate_new_process_server_silo;
    
    // [PspFindThreadForTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683e0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9072a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9059c0, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) find_thread_for_teb;
    
    // [PspFindVsmEnclaveThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8c7518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89232c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c5cf8, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) find_vsm_enclave_thread;
    
    // [PspFreeCurrentThreadUserShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9081f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906918, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) free_current_thread_user_shadow_stack;
    
    // [PspFreeUserFiberShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x907314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a4e18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905a34, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) free_user_fiber_shadow_stack;
    
    // [PspFreezeTimeBiasAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302370, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1df00, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) freeze_time_bias_address;
    
    // [PspGetFreezeState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57b720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ef50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b520, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) get_freeze_state;
    
    // [PspGetJobLimitInformationValidFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f548, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77eff4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26c8, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) get_job_limit_information_valid_flags;
    
    // [PspGetJobLockHierarchyForAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77af68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67498c, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) get_job_lock_hierarchy_for_assignment;
    
    // [PspGetMemoryPartitionContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61bebc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x763140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e3c0, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) get_memory_partition_context;
    
    // [PspGetMemoryPartitionFromJobList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x905fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x676f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904700, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) get_memory_partition_from_job_list;
    
    // [PspGetMemoryPartitionImplicit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6835cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e65a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ee28, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) get_memory_partition_implicit;
    
    // [PspGetNoChildProcessRestrictedPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2964, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec408, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) get_no_child_process_restricted_policy;
    
    // [PspGetProcessParameterOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ca30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dfca8, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) get_process_parameter_overrides;
    
    // [PspGetProcessProtectionRequirementsFromImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e04f0, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) get_process_protection_requirements_from_image;
    
    // [PspGetSystemDllSecureHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa92204, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb82858, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa913e8, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) get_system_dll_secure_handle;
    
    // [PspHardenedMitigationOptionsMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbc20, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e430, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc20, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) hardened_mitigation_options_map;
    
    // [PspHwTraceExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb958, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df28, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb958, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) hw_trace_extension_host;
    
    // [PspHwTraceHostInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5a20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5bd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5a40, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) hw_trace_host_interface;
    
    // [PspIncrementJobChainProcessCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68175c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77bf84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671a64, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) increment_job_chain_process_counts;
    
    // [PspInheritMitigationAuditOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f2df8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fc0cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f65d4, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) inherit_mitigation_audit_options;
    
    // [PspInitPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa429fc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2ed38, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa60bec, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) init_phase1;
    
    // [PspInitializeBackgroundActivityModeratorCallouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5f450, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2eee0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa60f78, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) initialize_background_activity_moderator_callouts;
    
    // [PspInitializeDesktopActivityModeratorCallouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5f4b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2edd8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa60fd8, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) initialize_desktop_activity_moderator_callouts;
    
    // [PspInitializeHwTraceCallouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5f508, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2efa0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61030, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) initialize_hw_trace_callouts;
    
    // [PspInitializeMMCSSCallouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5f568, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2ef40, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61090, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) initialize_mmcss_callouts;
    
    // [PspInitializeNetRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5f678, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f0d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa611a0, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) initialize_net_rate_control;
    
    // [PspInitializeOctagonExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5f5c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2ee30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa610f0, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) initialize_octagon_extension_host;
    
    // [PspInitializeSecExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5f620, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2ee88, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa61148, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) initialize_sec_extension_host;
    
    // [PspInitializeSystemPartitionPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6a90c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb57850, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6a204, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) initialize_system_partition_phase0;
    
    // [PspInvokeCreateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a5c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8570f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7add60, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) invoke_create_callback;
    
    // [PspInvokeTerminateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9088a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7bf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906fc0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) invoke_terminate_callback;
    
    // [PspIsContextAdmin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e92c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f0bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e1aa8, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) is_context_admin;
    
    // [PspIsJobMovable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x906124, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5fb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904844, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) is_job_movable;
    
    // [PspIsParentProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35ab94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306208, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1384, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) is_parent_process;
    
    // [PspIsProcessReadyForRemoteThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21aa40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315374, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) is_process_ready_for_remote_thread;
    
    // [PspIumAllocatePartitionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57d8d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57d6e4, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) ium_allocate_partition_state;
    
    // [PspIumAllocateSecurePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57db5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590c84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57d96c, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) ium_allocate_secure_pool;
    
    // [PspIumFreePartitionPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57ddc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590eac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57dbd0, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) ium_free_partition_pages;
    
    // [PspIumFreePartitionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57ded0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590fbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57dce0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) ium_free_partition_state;
    
    // [PspIumReplenishPartitionPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e158, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57df68, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) ium_replenish_partition_pages;
    
    // [PspIumWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1de80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37b40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dee0, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) ium_work_item;
    
    // [PspIumWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e170, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) ium_worker;
    
    // [PspJobHasChildren]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5cdfa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4aec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce848, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) job_has_children;
    
    // [PspJobIsAppSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57b1cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e998, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57afcc, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) job_is_app_silo;
    
    // [PspLoaderInitRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b030, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb20, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) loader_init_routine;
    
    // [PspLockJobExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6922f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761b58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6125a4, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) lock_job_exclusive;
    
    // [PspLockJobListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44cdd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f67c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x65b228, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) lock_job_list_exclusive;
    
    // [PspLockJobShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69231c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7619a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6125cc, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) lock_job_shared;
    
    // [PspLockProcessListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7f3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d288, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d7568, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) lock_process_list_exclusive;
    
    // [PspLockProcessListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b080, 0x32828 bytes
    // ntoskrnl.exe .text:0x57af80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57ad80, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) lock_process_list_shared;
    
    // [PspLockProcessShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b2ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x3957d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396830, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) lock_process_shared;
    
    // [PspLockThreadSecurityExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f3b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x260524, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x310d94, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) lock_thread_security_exclusive;
    
    // [PspLockThreadSecurityShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4780, 0x32828 bytes
    // ntoskrnl.exe .text:0x57baec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57b8ec, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) lock_thread_security_shared;
    
    // [PspMapSiloSharedDataView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f0a98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75bbac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f9908, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) map_silo_shared_data_view;
    
    // [PspMapView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e3bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5914cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e1cc, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) map_view;
    
    // [PspMarkServerSiloAsTerminating]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x908900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7c58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907020, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) mark_server_silo_as_terminating;
    
    // [PspMmcssExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb950, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df20, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb950, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) mmcss_extension_host;
    
    // [PspMmcssHostInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5a30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5bc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5a50, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) mmcss_host_interface;
    
    // [PspNotifyProcessBackgroundTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89018, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e8a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31476c, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) notify_process_background_transition;
    
    // [PspNullGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980f98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f878, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) null_guid;
    
    // [PspOctExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4310, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16c98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4310, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) oct_extension_host;
    
    // [PspOctHostInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5a38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5b70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5a58, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) oct_host_interface;
    
    // [PspOneDirectionSecurityDomainCombine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x700288, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c668, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) one_direction_security_domain_combine;
    
    // [PspOpenPartitionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b3b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c3f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb6a0, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) open_partition_handle;
    
    // [PspPartitionInfoDetails]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x982840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa676f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981120, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) partition_info_details;
    
    // [PspPartitionMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa966b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a460, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa958d0, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) partition_mapping;
    
    // [PspPicoGetContextThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9094d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907bf0, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) pico_get_context_thread_ex;
    
    // [PspPicoSetContextThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x909500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907c20, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) pico_set_context_thread_ex;
    
    // [PspPrepareEnclaveThreadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b5c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab44c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909ce4, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) prepare_enclave_thread_wait;
    
    // [PspProcessDynamicEHContinuationTargets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x904ea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a2a94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9035c4, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) process_dynamic_eh_continuation_targets;
    
    // [PspProcessUnbindVirtualizedTimers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35ad40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5518, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) process_unbind_virtualized_timers;
    
    // [PspProcessorCallbackNop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) processor_callback_nop;
    
    // [PspQueryHwTracingThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x904900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902ff0, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) query_hw_tracing_thread;
    
    // [PspQuitNextJobProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90639c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a622c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904abc, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) quit_next_job_process;
    
    // [PspReadIFEOMitigationAuditOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f2f68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fbfd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f6744, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) read_ifeo_mitigation_audit_options;
    
    // [PspReadOptionsMapFromIFEO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f2fc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fc034, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f67a0, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) read_options_map_from_ifeo;
    
    // [PspRecordCrashedProcessIntoBlackbox]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x905674, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a355c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903d98, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) record_crashed_process_into_blackbox;
    
    // [PspReleaseEnclaveThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b658, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909d78, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) release_enclave_thread;
    
    // [PspRelinquishUmsThreadSpecialApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90bd30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90a450, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) relinquish_ums_thread_special_apc;
    
    // [PspRemoveEnclaveThreadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b6b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab53c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909dd4, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) remove_enclave_thread_wait;
    
    // [PspRemovePartitionFromGlobalList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e4d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591628, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e30c, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) remove_partition_from_global_list;
    
    // [PspRequestProcessExecutionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6832b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65d38c, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) request_process_execution_state;
    
    // [PspReserveAndCommitUserShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9074f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905c10, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) reserve_and_commit_user_shadow_stack;
    
    // [PspRundownUmsThreadForApcDelivery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686f88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90bd8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90a4ac, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) rundown_ums_thread_for_apc_delivery;
    
    // [PspSecExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4308, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16c90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4308, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) sec_extension_host;
    
    // [PspSecHostInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5a58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5b90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5a78, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) sec_host_interface;
    
    // [PspSelectVsmEnclaveByNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b764, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89234a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909e84, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) select_vsm_enclave_by_number;
    
    // [PspSetEnergyTrackingStateJobTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e88c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77f01c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e1a08, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) set_energy_tracking_state_job_tree;
    
    // [PspSetJobEnergyTrackingStateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70a160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8097b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711bb0, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) set_job_energy_tracking_state_callback;
    
    // [PspSetJobMemoryPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9066dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904dfc, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) set_job_memory_partition;
    
    // [PspSetJobSiloThreadImpersonationPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9069d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9050f4, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) set_job_silo_thread_impersonation_policy;
    
    // [PspSetNoChildProcessRestrictedPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6765b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9828, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) set_no_child_process_restricted_policy;
    
    // [PspSetProcessCacheIsolationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26f0c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3205f0, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) set_process_cache_isolation_callback;
    
    // [PspSetProcessEnergyTrackingStateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65a7a0, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) set_process_energy_tracking_state_callback;
    
    // [PspSetProcessForegroundBackgroundRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6605e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f3550, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) set_process_foreground_background_request;
    
    // [PspSetProcessPpmPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ddf60, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) set_process_ppm_policy;
    
    // [PspSetProcessPriorityByClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x291128, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3323e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336978, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) set_process_priority_by_class;
    
    // [PspSetProcessTimerDelayForKTimers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57c648, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c458, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) set_process_timer_delay_for_k_timers;
    
    // [PspSetProcessTimerDelayForWin32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57c88c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58fa54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c69c, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) set_process_timer_delay_for_win32;
    
    // [PspSetThreadPpmPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x756f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e980, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) set_thread_ppm_policy;
    
    // [PspSetUmsThreadContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68712c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90bf58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90a678, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) set_ums_thread_context;
    
    // [PspSetVmProcessorHostProcessWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x907690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a56b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905db0, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) set_vm_processor_host_process_worker_routine;
    
    // [PspSetupUserFiberShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9076d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a56f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905df0, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) setup_user_fiber_shadow_stack;
    
    // [PspSetupUserShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9077ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a57cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905ecc, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) setup_user_shadow_stack;
    
    // [PspSiloInitializeIsMultiSessionSku]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x904018, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a10e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902708, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) silo_initialize_is_multi_session_sku;
    
    // [PspSiloInitializeSharedUserSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec528, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed7e8, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) silo_initialize_shared_user_session_id;
    
    // [PspSiloInitializeSystemRootBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9040ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1218, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9027dc, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) silo_initialize_system_root_buffer;
    
    // [PspSiloInitializeSystemRootSymlink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x904160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a128c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902850, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) silo_initialize_system_root_symlink;
    
    // [PspSystemDllInitBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b128, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc00, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) system_dll_init_block;
    
    // [PspSystemMitigationAuditOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbb40, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e240, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb40, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) system_mitigation_audit_options;
    
    // [PspSystemMitigationAuditOptionsLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa0ac, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0d8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0ac, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) system_mitigation_audit_options_length;
    
    // [PspSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb750, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddb8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb750, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) system_partition;
    
    // [PspSystemPartitionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbb58, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e338, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb58, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) system_partition_handle;
    
    // [PspSystemRootSymlinkName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f8d8, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) system_root_symlink_name;
    
    // [PspSystemRootTargetPrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64608, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f330, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) system_root_target_prefix;
    
    // [PspTeardownPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90a260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aa0e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908980, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) teardown_partition;
    
    // [PspThreadFromTicket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6127a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a8080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5dffb0, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) thread_from_ticket;
    
    // [PspTimerDelayProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57c950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58fb10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c760, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) timer_delay_process;
    
    // [PspTimerDelayWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57c9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58fb80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c7d0, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) timer_delay_worker_routine;
    
    // [PspTrySetProcessPebThrottlingFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9058c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a38c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903fe0, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) try_set_process_peb_throttling_flags;
    
    // [PspUmsInitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90791c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90603c, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) ums_init_thread;
    
    // [PspUmsInitializeContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683f58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x907a04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x906124, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) ums_initialize_context;
    
    // [PspUmsUnInitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683fb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x907a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x90618c, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) ums_un_init_thread;
    
    // [PspUnlockProcessShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b2a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3950c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396120, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) unlock_process_shared;
    
    // [PspUnlockThreadSecurityExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f408, 0x32828 bytes
    // ntoskrnl.exe .text:0x25c388, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30cea4, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) unlock_thread_security_exclusive;
    
    // [PspUnlockThreadSecurityShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4734, 0x32828 bytes
    // ntoskrnl.exe .text:0x57bd68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57bb78, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) unlock_thread_security_shared;
    
    // [PspUserApcKernelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) user_apc_kernel_routine;
    
    // [PspUserThreadStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af88, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca48, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c980, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) user_thread_start;
    
    // [PspValidateCreateProcessProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66bfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765274, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6deaa0, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) validate_create_process_protection;
    
    // [PspValidateJobAssignmentMemoryPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6810b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77be34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x672144, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) validate_job_assignment_memory_partition;
    
    // [PspValidateJobAssignmentProcessLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6811ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b1e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x672098, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) validate_job_assignment_process_limits;
    
    // [PspValidateJobAssignmentSiloPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67eb3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77bdc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674204, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) validate_job_assignment_silo_policy;
    
    // [PspValidateJobChainLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b178, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67202c, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) validate_job_chain_limits;
    
    // [PspValidateMitigationAuditOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a6438, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856ad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ae548, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) validate_mitigation_audit_options;
    
    // [PspVsmEnclaveHashAllocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b8f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab5ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a014, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) vsm_enclave_hash_allocator;
    
    // [PspVsmEnclaveHashDeallocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) vsm_enclave_hash_deallocator;
    
    // [PspVsmEnclaveRuntimeDllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2ba00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51a60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ba50, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) vsm_enclave_runtime_dll_data;
    
    // [PspVsmLogBugCheckCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5915d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e290, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) vsm_log_bug_check_callback;
    
    // [PspVsmLogCallbackRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1de40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dea0, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) vsm_log_callback_record;
    
    // [PspWow64InitThreadGuestArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x909abc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9081dc, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) wow64_init_thread_guest_arm;
    
    // [PspWow64PickBestNtdll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26c838, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360394, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31e184, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) wow64_pick_best_ntdll;
    
    // [PspWowArm32SystemDllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a9f0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ba50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ba00, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) wow_arm32_system_dll_data;
    
    // [PspWowX86SystemDllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b960, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd519e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b9b0, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) wow_x86_system_dll_data;
    
    // [PspActiveProcessLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac00, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c748, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c748, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) active_process_lock;
    
    // [PspAddAccountingValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453d98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69245c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61596c, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) add_accounting_values;
    
    // [PspAddProcessToWorkingSetChangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684a44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904280, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) add_process_to_working_set_change_list;
    
    // [PspAddSchedulingGroupToJobChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478e2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4fdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x779c44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675df0, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) add_scheduling_group_to_job_chain;
    
    // [PspAdjustKeepAliveCountProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681f8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a2638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903490, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) adjust_keep_alive_count_process;
    
    // [PspAffinityUpdateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1a8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51168, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1a0, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) affinity_update_lock;
    
    // [PspAllocStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6791d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4a8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec5f0, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) alloc_storage;
    
    // [PspAllocateAndQueryNotificationChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44f03c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77cb58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cb4bc, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) allocate_and_query_notification_channel;
    
    // [PspAllocateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f5044, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f082c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f9980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f3680, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) allocate_process;
    
    // [PspAllocateRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478d84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a044, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675ce8, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) allocate_rate_control;
    
    // [PspAllocateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4575d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69f390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x689810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70509c, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) allocate_thread;
    
    // [PspAlwaysTrackIoBoosting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4e8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb74c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de80, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb74c, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) always_track_io_boosting;
    
    // [PspApiSetCopyToSystemSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682a68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903388, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a03c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901a78, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) api_set_copy_to_system_space;
    
    // [PspApplyIFEOPerfOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6752d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a49f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8444, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) apply_ifeo_perf_options;
    
    // [PspApplyJobLimitsToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f0750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c274, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65d3d8, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) apply_job_limits_to_process;
    
    // [PspApplyMitigationOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f6c38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f2434, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fc1c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f59a0, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) apply_mitigation_options;
    
    // [PspApplyWorkingSetLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684b04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905c24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5b18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904344, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) apply_working_set_limits;
    
    // [PspApplyWorkingSetLimitsToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44fc84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x681820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b3ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6718a0, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) apply_working_set_limits_to_process;
    
    // [PspAssignPrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683898, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b324, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e404, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a28a4, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) assign_primary_token;
    
    // [PspAssignProcessQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48c758, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665a34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d89d4, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) assign_process_quota_block;
    
    // [PspAssignProcessToJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d0d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67f1d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x673cec, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) assign_process_to_job;
    
    // [PspAssignProcessToJobList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683bf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90708c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677184, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9057ac, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) assign_process_to_job_list;
    
    // [PspAssociateCompletionPortCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684c84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cdfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6784c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce870, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) associate_completion_port_callback;
    
    // [PspAttachSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710cbc, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) attach_session;
    
    // [PspBindProcessSessionToJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44f9d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68170c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77bb18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671fdc, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) bind_process_session_to_job;
    
    // [PspBootAccessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce598, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54708, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f730, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54708, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) boot_access_token;
    
    // [PspBuildCreateProcessContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x455770, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61f5a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x763d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7075b4, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) build_create_process_context;
    
    // [PspCallJobHierarchyCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453868, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x691d74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761a34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61202c, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) call_job_hierarchy_callbacks;
    
    // [PspCallProcessNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe744, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c3bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70a290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63738c, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) call_process_notify_routines;
    
    // [PspCallThreadNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fea30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70a7f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6378a0, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) call_thread_notify_routines;
    
    // [PspCaptureAndValidateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f1144, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ff6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x766768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b66ec, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) capture_and_validate_unicode_string;
    
    // [PspCaptureCreateInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3eac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x662a38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7631c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e788, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) capture_create_info;
    
    // [PspCaptureProcessParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f1260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63f840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7652d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b5fc0, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) capture_process_parameters;
    
    // [PspCaptureUserProcessParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f0bac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63f8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765f88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6030, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) capture_user_process_parameters;
    
    // [PspCatchCriticalBreak]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6844b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9080b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9067d4, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) catch_critical_break;
    
    // [PspChangeJobMemoryUsageByProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4238b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6370e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b47a0, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) change_job_memory_usage_by_process;
    
    // [PspChangeProcessExecutionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45087c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6826c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b58c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65de34, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) change_process_execution_state;
    
    // [PspChargeJobWakeCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4535a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x691998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761784, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611c50, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) charge_job_wake_counter;
    
    // [PspChargeQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b720, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2caec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2641b0, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) charge_quota;
    
    // [PspCheckForInvalidAccessByProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f1350, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765d2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64ca2c, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) check_for_invalid_access_by_protection;
    
    // [PspCheckJobAccessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684cc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905d8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5cac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9044ac, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) check_job_access_state;
    
    // [PspCidTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab340, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5c0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbe8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5c0, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) cid_table;
    
    // [PspClearProcessThreadCidRefs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46553c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d57c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68baec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x706be0, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) clear_process_thread_cid_refs;
    
    // [PspCompleteHardDereferenceSiloDeferred]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682bdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd2c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cdb60, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) complete_hard_dereference_silo_deferred;
    
    // [PspCompleteServerSiloShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682c2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0598, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901c50, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) complete_server_silo_shutdown;
    
    // [PspCompleteServerSiloShutdownDeferred]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682c78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9035c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a05f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901cb0, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) complete_server_silo_shutdown_deferred;
    
    // [PspComputeQuantum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f70d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f4c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fba24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f34ec, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) compute_quantum;
    
    // [PspComputeQuantumAndPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f7030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fb978, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f3444, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) compute_quantum_and_priority;
    
    // [PspComputeReportWakeFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fa78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5894, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e840c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbbdc, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) compute_report_wake_filter;
    
    // [PspConvertJobToMixed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684d88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905e54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5d74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904574, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) convert_job_to_mixed;
    
    // [PspConvertSiloToServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682df0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9036b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a06e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901da4, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) convert_silo_to_server_silo;
    
    // [PspCopyAndFixupParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46a988, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75bcec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fa2a4, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) copy_and_fixup_parameters;
    
    // [PspCopyUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f10d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63fef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7666f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6678, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) copy_unicode_string;
    
    // [PspCreateObjectHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x466454, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x689778, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f33d0, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) create_object_handle;
    
    // [PspCreatePicoProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685e54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a8ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9075f0, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) create_pico_process;
    
    // [PspCreatePicoThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907840, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) create_pico_thread;
    
    // [PspCreateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49eb3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7afff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b7b80, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) create_process;
    
    // [PspCreateProcessNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ea20, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec3a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bc20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec3a0, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) create_process_notify_routine;
    
    // [PspCreateProcessNotifyRoutineCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aefc, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53778, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9cc, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) create_process_notify_routine_count;
    
    // [PspCreateProcessNotifyRoutineExCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aef8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5377c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9d0, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) create_process_notify_routine_ex_count;
    
    // [PspCreateSecureThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683ce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90713c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a4c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90585c, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) create_secure_thread;
    
    // [PspCreateSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682f2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cdecc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e49a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce76c, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) create_silo;
    
    // [PspCreateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x457288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61f15c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x688aec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x706c80, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) create_thread;
    
    // [PspCreateThreadNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e820, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebfa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0be20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec1a0, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) create_thread_notify_routine;
    
    // [PspCreateThreadNotifyRoutineCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af04, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53770, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9d4, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) create_thread_notify_routine_count;
    
    // [PspCreateUserProcessEcp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f36f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61bf2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x763298, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e1c4, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) create_user_process_ecp;
    
    // [PspCurDirDevicesSkippedForDlls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa220, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa27c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2c4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa27c, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) cur_dir_devices_skipped_for_dlls;
    
    // [PspDefaultQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aea8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c978, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53720, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c978, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) default_quota_block;
    
    // [PspDefaultResourceLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aee0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c998, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53750, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9a0, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) default_resource_limits;
    
    // [PspDefaultResourceNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6edef0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa66330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981020, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) default_resource_names;
    
    // [PspDefaultSiloName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eca80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f8c8, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) default_silo_name;
    
    // [PspDeferredWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683018, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901f50, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) deferred_worker_routine;
    
    // [PspDeleteCreateProcessContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x457100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61efa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f705c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x707394, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) delete_create_process_context;
    
    // [PspDeleteKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95d34, 0x32828 bytes
    // ntoskrnl.exe .text:0x262710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e7f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312d00, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) delete_kernel_stack;
    
    // [PspDeleteServerSiloGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683040, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903924, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902014, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) delete_server_silo_globals;
    
    // [PspDeleteSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68317c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0b5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9021b0, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) delete_silo;
    
    // [PspDeleteSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6831dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec0d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ceaf0, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) delete_silo_context;
    
    // [PspDeleteThreadSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425b60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6938a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68a26c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f18b4, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) delete_thread_security;
    
    // [PspDeleteUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a02b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6751d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e95ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8348, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) delete_user_stack;
    
    // [PspDereferenceQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x428738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c01d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x750140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615158, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) dereference_quota_block;
    
    // [PspDfssConfigValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa590, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa3d0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c4c0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa3d0, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) dfss_config_values;
    
    // [PspDfssConfigurationChangeHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6814fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901290, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) dfss_configuration_change_handler;
    
    // [PspDfssConfigurationKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab488, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb758, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddc0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb758, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) dfss_configuration_key;
    
    // [PspDfssConfigurationNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab400, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6b8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd30, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6b8, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) dfss_configuration_notify;
    
    // [PspDisablePrimaryTokenExchange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x456b84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fff2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c30c, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) disable_primary_token_exchange;
    
    // [PspDispatchWakeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ef2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5778, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77cf0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbac0, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) dispatch_wake_notification;
    
    // [PspEmptyPropertySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c84c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69e064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68b7e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x706ba8, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) empty_property_set;
    
    // [PspEnableProcessTimerVirtualization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571eb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711b70, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) enable_process_timer_virtualization;
    
    // [PspEnableProcessWakeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3b7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce2a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ceb40, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) enable_process_wake_counters;
    
    // [PspEnableTimerVirtualization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3c6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711b90, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) enable_timer_virtualization;
    
    // [PspEnableWakeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1c08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea3e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8fd0, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) enable_wake_counters;
    
    // [PspEnforceLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3feca8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6916bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760f7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615530, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) enforce_limits;
    
    // [PspEnforceLimitsJobPostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4531cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x691ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x612150, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) enforce_limits_job_post_callback;
    
    // [PspEnforceLimitsJobPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45398c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x634440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x689870, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) enforce_limits_job_pre_callback;
    
    // [PspEnforceLimitsProcessCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453ee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6915f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616120, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) enforce_limits_process_callback;
    
    // [PspEnforcementSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a144, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b150, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51130, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b150, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) enforcement_sequence_number;
    
    // [PspEnumJobsAndProcessesInJobHierarchy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452f80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x691b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611e28, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) enum_jobs_and_processes_in_job_hierarchy;
    
    // [PspEnumerateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53cbcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d9b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7662d0, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) enumerate_callback;
    
    // [PspEstablishDfssHierarchy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53cc14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905ec8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9045e8, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) establish_dfss_hierarchy;
    
    // [PspEstablishJobHierarchy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44f3ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x681258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b7fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671b28, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) establish_job_hierarchy;
    
    // [PspEvaluateAndNotifyEmptyJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ffe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x682190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65d900, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) evaluate_and_notify_empty_job;
    
    // [PspExecuteJobFreezeThawCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x262170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x332360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d9670, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) execute_job_freeze_thaw_callback;
    
    // [PspExitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701c14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7697b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x662824, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) exit_process;
    
    // [PspExitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4656a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69e494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68ae28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x705fa0, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) exit_thread;
    
    // [PspExpandLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20eea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b42c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ec30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b22c, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) expand_limit;
    
    // [PspExpandQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7780, 0x32828 bytes
    // ntoskrnl.exe .text:0x25ee48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300c5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f348, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) expand_quota;
    
    // [PspFindPropertySetEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfee14, 0x32828 bytes
    // ntoskrnl.exe .text:0x2406a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34cfd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2edc38, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) find_property_set_entry;
    
    // [PspFixedQuantums]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec184, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63f2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ed54, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) fixed_quantums;
    
    // [PspFoldProcessAccountingIntoJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44fe44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x682924, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7018, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65e094, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) fold_process_accounting_into_job;
    
    // [PspForegroundQuantum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae50, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c87c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5360c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c87c, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) foreground_quantum;
    
    // [PspFreeRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f59d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x779ff8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675c98, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) free_rate_control;
    
    // [PspFreeStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x687164, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90bf98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab6d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a6b8, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) free_storage;
    
    // [PspFreezeJobTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ec28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f553c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77d014, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cb884, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) freeze_job_tree;
    
    // [PspFreezeProcessWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6845b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a75f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9069b0, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) freeze_process_worker;
    
    // [PspGetBaseTrapFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa21c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x287dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f2a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32ed40, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) get_base_trap_frame;
    
    // [PspGetContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x466a98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68db7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x686c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f1a4c, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) get_context;
    
    // [PspGetContextThreadInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x466e2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68df48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x687b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f1e18, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) get_context_thread_internal;
    
    // [PspGetEffectiveNoWakeCharge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x692344, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6125f4, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) get_effective_no_wake_charge;
    
    // [PspGetHostSiloStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f08c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b188, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e954, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57af88, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) get_host_silo_storage;
    
    // [PspGetJobAssignmentDisposition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d008, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ea48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ae44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674818, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) get_job_assignment_disposition;
    
    // [PspGetJobLockHierarchyForDeletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ce18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f623c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a6fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675080, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) get_job_lock_hierarchy_for_deletion;
    
    // [PspGetJobMemoryUsageNotificationViolations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453e34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x692518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x762014, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615bdc, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) get_job_memory_usage_notification_violations;
    
    // [PspGetJobProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8200, 0x32828 bytes
    // ntoskrnl.exe .text:0x240584, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ced4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2edb14, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) get_job_property;
    
    // [PspGetJobSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x85f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x200084, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344b04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200084, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) get_job_silo;
    
    // [PspGetNextChildJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6918dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7616c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x612b08, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) get_next_child_job;
    
    // [PspGetNextJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fed90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6917c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761074, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615630, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) get_next_job;
    
    // [PspGetNextJobProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef1e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6658e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674d80, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) get_next_job_process;
    
    // [PspGetNextMonitor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685a8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908878, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906f98, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) get_next_monitor;
    
    // [PspGetNextSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x691670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6154e4, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) get_next_silo;
    
    // [PspGetPicoProcessContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ec4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8097d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711bd0, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) get_pico_process_context;
    
    // [PspGetPicoThreadContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ecc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8097e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711be0, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) get_pico_thread_context;
    
    // [PspGetPreviousProcessThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4252a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e8b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76d8cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709220, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) get_previous_process_thread;
    
    // [PspGetProcessInJobHierarchyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684dc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9060f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904810, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) get_process_in_job_hierarchy_callback;
    
    // [PspGetProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfed78, 0x32828 bytes
    // ntoskrnl.exe .text:0x2405ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34cf3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2edb7c, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) get_property;
    
    // [PspGetRateControlSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5ab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675d7c, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) get_rate_control_size;
    
    // [PspGetServerSiloStatePointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f094, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b198, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e964, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57af98, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) get_server_silo_state_pointer;
    
    // [PspGetSetContextInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x467560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68d330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6866c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f1200, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) get_set_context_internal;
    
    // [PspGetSetContextSpecialApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1634d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd500, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) get_set_context_special_apc;
    
    // [PspGetStandardHandleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e9b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677054, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea444, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) get_standard_handle_list;
    
    // [PspGetStorageArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678a88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7937b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebec8, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) get_storage_array;
    
    // [PspGetStorageArrayIfPossible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137698, 0x32828 bytes
    // ntoskrnl.exe .text:0x217298, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2edecc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203478, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) get_storage_array_if_possible;
    
    // [PspGlobalFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad6c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53554, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7bc, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) global_flags;
    
    // [PspHandleTableWalker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10aba4, 0x32828 bytes
    // ntoskrnl.exe .text:0x57ba70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58efb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b870, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) handle_table_walker;
    
    // [PspHardDereferenceSiloWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f4f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x20096c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30601c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20096c, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) hard_dereference_silo_worker;
    
    // [PspHardenMitigationOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49efdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f5dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc964, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2b9c, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) harden_mitigation_options;
    
    // [PspHashKeyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48ca00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665d18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c963c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8cb8, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) hash_key_value;
    
    // [PspHostSiloGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3bf500, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd23540, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd489c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd23540, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) host_silo_globals;
    
    // [PspIdentityBasedJobBreakaway]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683a38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8f8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce904, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) identity_based_job_breakaway;
    
    // [PspImplicitAssignProcessToJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44fa20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e35c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6715dc, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) implicit_assign_process_to_job;
    
    // [PspInheritMitigationOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f6924, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f230c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fb818, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f645c, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) inherit_mitigation_options;
    
    // [PspInheritQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66feb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0e64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e36a4, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) inherit_quota;
    
    // [PspInitPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x782b78, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa39c94, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb28d14, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3a144, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) init_phase0;
    
    // [PspInitPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1688, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa67aec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb53c50, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa670dc, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) init_phase2;
    
    // [PspInitPhase3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9af8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42988, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60d6c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa700dc, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) init_phase3;
    
    // [PspInitializeFullProcessImageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4853e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f9774, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d056c, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) initialize_full_process_image_name;
    
    // [PspInitializeJobStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7a8c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6eba4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5e274, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e15c, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) initialize_job_structures;
    
    // [PspInitializeProcessSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f7118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f305c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fba6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f6838, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) initialize_process_security;
    
    // [PspInitializeProtectedProcessParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a17bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x858fd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ae658, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) initialize_protected_process_parameters;
    
    // [PspInitializeQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56cec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0364, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86730c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b7ef4, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) initialize_quota_block;
    
    // [PspInitializeServerSiloDeferred]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68321c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0ba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902210, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) initialize_server_silo_deferred;
    
    // [PspInitializeSiloStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x782944, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa38c8c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27cb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3913c, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) initialize_silo_structures;
    
    // [PspInitializeSystemDlls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a18fc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa67c3c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb53da4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6722c, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) initialize_system_dlls;
    
    // [PspInitializeThunkContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x456c58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68ea08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6862d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f28d8, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) initialize_thunk_context;
    
    // [PspInsertExpansionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x148aa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c6804, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e2744, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c76d4, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) insert_expansion_entry;
    
    // [PspInsertProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f8380, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7655a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f2cc, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) insert_process;
    
    // [PspInsertProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd0aec, 0x32828 bytes
    // ntoskrnl.exe .text:0x240230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ca48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed7c0, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) insert_property;
    
    // [PspInsertThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x465cd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68ec84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x688e54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f2b54, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) insert_thread;
    
    // [PspIoMiniPacketCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e34f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2e30, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) io_mini_packet_callback_routine;
    
    // [PspIoRateControlInfoIsAnySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79458, 0x32828 bytes
    // ntoskrnl.exe .text:0x200648, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x336824, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200648, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) io_rate_control_info_is_any_set;
    
    // [PspIoRateEntryActivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f9a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ccfc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cd860, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) io_rate_entry_activate;
    
    // [PspIoRateEntryDeactivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41fb40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd0c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x782ce8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cd968, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) io_rate_entry_deactivate;
    
    // [PspIoRateEntryInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44cc08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f65d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a6a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b708, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) io_rate_entry_initialize;
    
    // [PspIoRateEntryIoControlReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7933c, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a5a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3351e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db464, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) io_rate_entry_io_control_reference;
    
    // [PspIoRateEntryVolumeCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f6e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x52aec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52acd0, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) io_rate_entry_volume_compare;
    
    // [PspIoRateEntryVolumeDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f6fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x57c2a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c0b0, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) io_rate_entry_volume_delete;
    
    // [PspIsDfssEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5423c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7858f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85fe48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78f690, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) is_dfss_enabled;
    
    // [PspIsProcessInJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67e0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c844, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674c90, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) is_process_in_job;
    
    // [PspIsSetJobIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f5ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7801c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675204, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) is_set_job_io_attribution;
    
    // [PspIsSetJobIoAttributionJobPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eaa20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb7c0, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) is_set_job_io_attribution_job_pre_callback;
    
    // [PspIsSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5422a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678af8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793824, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebf38, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) is_silo_context;
    
    // [PspIsSiloInServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f568, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e97c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57afb0, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) is_silo_in_server_silo;
    
    // [PspIsSiloInSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683274, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67583c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2c2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8b5c, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) is_silo_in_silo;
    
    // [PspIumAllocatePhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20ff98, 0x32828 bytes
    // ntoskrnl.exe .text:0x57da34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57d844, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) ium_allocate_physical_pages;
    
    // [PspIumFreeMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa280, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2d8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c330, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2d8, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) ium_free_mapping;
    
    // [PspIumFreeMappingLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302368, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1de70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37b60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1de98, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) ium_free_mapping_lock;
    
    // [PspIumFreePhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2100b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x57dfac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5910b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57ddbc, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) ium_free_physical_pages;
    
    // [PspIumGetPhysicalPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686a98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909d0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90842c, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) ium_get_physical_page;
    
    // [PspIumGetSystemData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ed4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909e48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9d98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908568, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) ium_get_system_data;
    
    // [PspIumLogBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa288, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa1e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c228, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa1e0, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) ium_log_buffer;
    
    // [PspIumVerifyParentSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686b7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909e84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9dd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9085a4, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) ium_verify_parent_sd;
    
    // [PspJobAssignmentLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a280, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b228, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b228, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) job_assignment_lock;
    
    // [PspJobClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x708a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77d260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e09a0, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) job_close;
    
    // [PspJobCycleTimeNotificationDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f720, 0x32828 bytes
    // ntoskrnl.exe .text:0x357610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x308110, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) job_cycle_time_notification_dpc_routine;
    
    // [PspJobDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x946fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x358700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32ed00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d96f0, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) job_delete;
    
    // [PspJobDeleteStorageArrays]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c868, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f6850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67515c, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) job_delete_storage_arrays;
    
    // [PspJobInfoAlign]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee5b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa670a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981700, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) job_info_align;
    
    // [PspJobInfoLengths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee500, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa66fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9817c0, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) job_info_lengths;
    
    // [PspJobIoRateControlDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f67ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a0e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6750f8, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) job_io_rate_control_disable;
    
    // [PspJobIoRateQueryHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f760, 0x32828 bytes
    // ntoskrnl.exe .text:0x21c378, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20ae48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e12b0, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) job_io_rate_query_history;
    
    // [PspJobIoRateVolumeEntryInsert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f810, 0x32828 bytes
    // ntoskrnl.exe .text:0x57c2cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f498, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c0dc, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) job_io_rate_volume_entry_insert;
    
    // [PspJobIoRateVolumeEntryReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f8bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x57c404, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c214, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) job_io_rate_volume_entry_reference;
    
    // [PspJobIoRateVolumeEntryRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f954, 0x32828 bytes
    // ntoskrnl.exe .text:0x57c520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f6e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57c330, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) job_io_rate_volume_entry_remove;
    
    // [PspJobIoRateVolumeEntryRemoveAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94684, 0x32828 bytes
    // ntoskrnl.exe .text:0x358a44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32ebf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d9a34, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) job_io_rate_volume_entry_remove_all;
    
    // [PspJobList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a328, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b358, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51350, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b358, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) job_list;
    
    // [PspJobListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a190, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b198, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51160, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b190, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) job_list_lock;
    
    // [PspJobMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1ec0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa966c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a450, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa958c0, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) job_mapping;
    
    // [PspJobNoWakeChargeLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa158, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa10c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c144, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa10c, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) job_no_wake_charge_limit;
    
    // [PspJobNotificationItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302460, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dfc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e000, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) job_notification_item;
    
    // [PspJobNotificationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302448, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dfe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dff8, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) job_notification_list;
    
    // [PspJobNotificationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497e24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6770c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6db0d0, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) job_notification_worker;
    
    // [PspJobSchedulingClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ef50, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) job_scheduling_classes;
    
    // [PspJobTimeLimitsCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5da0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f0f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc097b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f138, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) job_time_limits_count;
    
    // [PspJobTimeLimitsRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302440, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1df60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dfe8, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) job_time_limits_request;
    
    // [PspJobTimeLimitsWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48aff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x668110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x762260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6db330, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) job_time_limits_work;
    
    // [PspJobTimeLimitsWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1df80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dfc0, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) job_time_limits_work_item;
    
    // [PspJobTimeLimitsWorkItemFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302410, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1df68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dfe0, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) job_time_limits_work_item_flags;
    
    // [PspKernelRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4b98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04628, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc066f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04668, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) kernel_ranges;
    
    // [PspLargePageDLLKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eca60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980f78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f858, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) large_page_dll_key_name;
    
    // [PspLastUpdateAffinityMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9960, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d930, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11390, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) last_update_affinity_mask;
    
    // [PspLazyInitializeStorageExpansion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6871cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90c008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab748, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a728, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) lazy_initialize_storage_expansion;
    
    // [PspLegoNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a288, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51270, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2c0, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) lego_notify_routine;
    
    // [PspLimitViolationRateControlToleranceLimitField]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f508, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e713c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2688, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) limit_violation_rate_control_tolerance_limit_field;
    
    // [PspLoadImageNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e620, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec1a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c020, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebfa0, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) load_image_notify_routine;
    
    // [PspLoadImageNotifyRoutineCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af08, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5376c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9dc, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) load_image_notify_routine_count;
    
    // [PspLocateInPEManifest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46b32c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1b0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75c100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fa81c, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) locate_in_pe_manifest;
    
    // [PspLocateSystemDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55238c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77baf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x817b4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780808, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) locate_system_dll;
    
    // [PspLockJobAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44cfc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77af3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f070, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) lock_job_assignment;
    
    // [PspLockJobChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4500b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77bec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ef8c, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) lock_job_chain;
    
    // [PspLockJobConditionally]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45085c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x682600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65dd70, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) lock_job_conditionally;
    
    // [PspLockJobMemoryLimitsShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453e80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69256c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x762068, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615c30, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) lock_job_memory_limits_shared;
    
    // [PspLockJobsAndProcessExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d3dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67e9c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b038, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67490c, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) lock_jobs_and_process_exclusive;
    
    // [PspLockProcessExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c1dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x209a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38202c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337f50, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) lock_process_exclusive;
    
    // [PspLockQuotaExpansion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7888, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300d28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f620, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) lock_quota_expansion;
    
    // [PspLockRootJobExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44f34c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f54d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ef8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cb81c, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) lock_root_job_exclusive;
    
    // [PspLockRootJobFromProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452e8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x682630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5aa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65dda0, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) lock_root_job_from_process;
    
    // [PspLockRootJobShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453808, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6923f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7619cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6126a4, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) lock_root_job_shared;
    
    // [PspLockUnlockProcessExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7897c, 0x32828 bytes
    // ntoskrnl.exe .text:0x262d04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3132f4, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) lock_unlock_process_exclusive;
    
    // [PspLogAuditTerminateRemoteProcessEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49faf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677138, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e68fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea528, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) log_audit_terminate_remote_process_event;
    
    // [PspLookupProcessQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48c914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665c1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8bbc, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) lookup_process_quota_block;
    
    // [PspMapSystemDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46a670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ec9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c0ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64cb90, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) map_system_dll;
    
    // [PspMapThreadCreationFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45759c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61f4dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x688a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x707000, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) map_thread_creation_flags;
    
    // [PspMaximumWorkingSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a290, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51280, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2d0, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) maximum_working_set;
    
    // [PspMemReserveMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1eb0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa966f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a430, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa958e0, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) mem_reserve_mapping;
    
    // [PspMemoryReserveObjectNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c22d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96a70, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a510, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95c60, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) memory_reserve_object_names;
    
    // [PspMemoryReserveObjectSizes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a4a8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b380, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51390, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b380, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) memory_reserve_object_sizes;
    
    // [PspMemoryReserveObjectTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6e0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaf8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1f0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaf8, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) memory_reserve_object_types;
    
    // [PspMinimumWorkingSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a298, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51278, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2c8, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) minimum_working_set;
    
    // [PspModifyAncestorBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684e54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90616c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5ffc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90488c, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) modify_ancestor_bits;
    
    // [PspNativeSystemDllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a9a0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b9b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b960, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) native_system_dll_data;
    
    // [PspNetRateControlDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684e88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9061a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6034, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9048c4, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) net_rate_control_dispatch;
    
    // [PspNetRateControlExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302450, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dfa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e020, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) net_rate_control_extension_host;
    
    // [PspNoWakeChargeReferencedProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a198, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51158, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b198, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) no_wake_charge_referenced_process;
    
    // [PspNotificationLimitRateControlToleranceField]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70783c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ed34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x661bac, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) notification_limit_rate_control_tolerance_field;
    
    // [PspNotificationLimitRateControlToleranceIntervalField]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452d90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x707814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ed5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x661b84, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) notification_limit_rate_control_tolerance_interval_field;
    
    // [PspNotificationPacketCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46be9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66cba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e61d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0100, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) notification_packet_callback;
    
    // [PspNotifyEmptyJobsInJobChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ff98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x682144, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d95b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65d8b4, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) notify_empty_jobs_in_job_chain;
    
    // [PspNotifyEnableMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab30, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53440, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6a0, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) notify_enable_mask;
    
    // [PspNotifyServerSiloCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685ab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9089ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7d04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9070cc, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) notify_server_silo_creation;
    
    // [PspNotifyServerSiloTermination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685b8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908ab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7e0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9071d4, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) notify_server_silo_termination;
    
    // [PspOutSwapSharedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425e4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b44, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175ec, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b48, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) out_swap_shared_pages;
    
    // [PspPackagedAppClaim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980fb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f8a8, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) packaged_app_claim;
    
    // [PspPathVarString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1ce0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64648, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f350, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) path_var_string;
    
    // [PspPerfOptionsKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eca70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980f88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f868, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) perf_options_key_name;
    
    // [PspPicoProviderRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302398, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dec8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37b80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1df20, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) pico_provider_ranges;
    
    // [PspPicoProviderRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3023a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37ba0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1df40, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) pico_provider_routines;
    
    // [PspPicoRegistrationDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302390, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37b78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1df18, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) pico_registration_disabled;
    
    // [PspPrepareSystemDllInitBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469a84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f07f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f9668, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) prepare_system_dll_init_block;
    
    // [PspPriorityClassRank]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec18c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x98047c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63fc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ed5c, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) priority_class_rank;
    
    // [PspPriorityTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed558, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981b38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980418, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) priority_table;
    
    // [PspProcessClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4246f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6514b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b4620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4e00, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) process_close;
    
    // [PspProcessDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f95cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x704c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x766ca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65f840, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) process_delete;
    
    // [PspProcessMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1ea0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa966e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a3c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa958a0, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) process_mapping;
    
    // [PspProcessNodeAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a200, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1f0, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) process_node_assignment;
    
    // [PspProcessOpen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f1380, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c8e0, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) process_open;
    
    // [PspProcessRundownCacheWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302540, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e0e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37d40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e120, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) process_rundown_cache_work_item;
    
    // [PspProcessRundownWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302560, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37d80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e100, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) process_rundown_work_item;
    
    // [PspProcessRundownWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68461c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906a20, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) process_rundown_worker;
    
    // [PspProcessRundownWorkerSingle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3b00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9083b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906ad0, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) process_rundown_worker_single;
    
    // [PspProcessSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302520, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e120, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37d60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e140, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) process_sequence_number;
    
    // [PspPropagateHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f369c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61c328, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76554c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e16c, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) propagate_handle;
    
    // [PspProtectedRuntimeData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecad0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f8e8, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) protected_runtime_data;
    
    // [PspQueryDescriptorThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) query_descriptor_thread;
    
    // [PspQueryForwardersEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x785868, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85fdc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78f608, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) query_forwarders_enabled;
    
    // [PspQueryJobHierarchyAccountingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4501a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6912ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75fc88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f081c, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) query_job_hierarchy_accounting_information;
    
    // [PspQueryJobHierarchyInterferenceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684ec4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9061f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904910, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) query_job_hierarchy_interference_count;
    
    // [PspQueryJobHierarchyProcessIdList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48ef28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663dd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5f1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7534, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) query_job_hierarchy_process_id_list;
    
    // [PspQueryJobIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x637034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7802ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675b8c, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) query_job_io_attribution;
    
    // [PspQueryLastCallThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905164, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a3040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903888, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) query_last_call_thread;
    
    // [PspQueryLdtInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) query_ldt_information;
    
    // [PspQueryPooledQuotaLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682138, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905244, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a3120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903968, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) query_pooled_quota_limits;
    
    // [PspQueryProcessAccountingInformationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4504ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x690300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x762160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef830, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) query_process_accounting_information_callback;
    
    // [PspQueryProcessIdListCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4938a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b6f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de2d0, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) query_process_id_list_callback;
    
    // [PspQueryProcessInterferenceCountCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684fa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9062d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9049f0, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) query_process_interference_count_callback;
    
    // [PspQueryQuotaLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x454074, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60edc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b2d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5da7e8, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) query_quota_limits;
    
    // [PspQueryRateControlHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453a8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63454c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684cd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68997c, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) query_rate_control_history;
    
    // [PspQueryWorkingSetWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6822b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9053ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a32cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903b10, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) query_working_set_watch;
    
    // [PspQueueDeferredWorkAndWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683290, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903c24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0cdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902314, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) queue_deferred_work_and_wait;
    
    // [PspQuotaBlockTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad48, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c848, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c848, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) quota_block_table;
    
    // [PspQuotaDatabaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b120, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53950, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbf0, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) quota_database_key;
    
    // [PspQuotaExpansionDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3024a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e000, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37cc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e040, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) quota_expansion_descriptors;
    
    // [PspQuotaKeyNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f520, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) quota_key_names;
    
    // [PspQuotaLimitOffsets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed618, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9804d0, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) quota_limit_offsets;
    
    // [PspRateControlLimitFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453d7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6901d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x661c2c, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) rate_control_limit_flag;
    
    // [PspReadDfssConfigurationValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20ead4, 0x32828 bytes
    // ntoskrnl.exe .text:0x57afa8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e774, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57ada8, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) read_dfss_configuration_values;
    
    // [PspReadIFEOMitigationOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f6fd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f2ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fbf50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f66bc, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) read_ifeo_mitigation_options;
    
    // [PspReadIFEONodeOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e2e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x666780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3464, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9ca0, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) read_ifeo_node_options;
    
    // [PspReadIFEOPerfOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e334, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6667d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a506c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9cf8, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) read_ifeo_perf_options;
    
    // [PspReadUserQuotaLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48ca2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665d4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8cec, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) read_user_quota_limits;
    
    // [PspReaper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95bc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x283680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2feb20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32a520, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) reaper;
    
    // [PspReferenceCidTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1fc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x612890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a7e90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e00a0, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) reference_cid_table_entry;
    
    // [PspReferenceSystemDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46a804, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ecb60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c2b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64e250, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) reference_system_dll;
    
    // [PspReferenceTokenForNewProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3e34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61bb64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7630b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66e704, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) reference_token_for_new_process;
    
    // [PspRegisterResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146c14, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c3f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dc7b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4ce4, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) register_resource;
    
    // [PspReleaseReturnedQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20ef0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b4a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ecac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b2a8, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) release_returned_quota;
    
    // [PspRemoveCpuRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478cc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x779f98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675c38, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) remove_cpu_rate_control;
    
    // [PspRemoveIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675b00, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) remove_io_attribution;
    
    // [PspRemoveProcessFromJobChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x450570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68233c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75ff84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65daac, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) remove_process_from_job_chain;
    
    // [PspRemoveProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd0a3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x240098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34cb2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed628, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) remove_property;
    
    // [PspRemoveQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6818d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904574, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1b88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902c64, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) remove_quota_block;
    
    // [PspRemoveRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685058, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90641c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a62ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904b3c, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) remove_rate_control;
    
    // [PspRequestDeferredJobNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94fb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35764c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2042bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30814c, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) request_deferred_job_notification;
    
    // [PspResourceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6f0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb20, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e200, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb20, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) resource_flags;
    
    // [PspReturnQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf0240, 0x32828 bytes
    // ntoskrnl.exe .text:0x2cb630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d1650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24c650, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) return_quota;
    
    // [PspReturnResourceQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc76fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x25edc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300bdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f2c8, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) return_resource_quota;
    
    // [PspRevertContainerImpersonation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeba20, 0x32828 bytes
    // ntoskrnl.exe .text:0x303570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29aca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d9f0, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) revert_container_impersonation;
    
    // [PspRundownNeededCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a14c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b14c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51128, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b148, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) rundown_needed_count;
    
    // [PspRundownNeededCountCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a148, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b148, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5112c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b14c, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) rundown_needed_count_cache;
    
    // [PspRundownProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3a80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90841c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a777c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906b3c, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) rundown_process;
    
    // [PspRundownProcessCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1a0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b188, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51150, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b188, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) rundown_process_cache;
    
    // [PspRundownSingleProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f15a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x681e24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73f000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65d4d8, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) rundown_single_process;
    
    // [PspSafeReferenceQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48cb88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665ee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c980c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8e84, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) safe_reference_quota_block;
    
    // [PspSanitizeResourceLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567124, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8858, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b01d8, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) sanitize_resource_limits;
    
    // [PspScheduleEnforcementWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x423cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x637450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x762108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b4b10, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) schedule_enforcement_worker;
    
    // [PspSehValidationPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa224, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa280, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2c0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa280, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) seh_validation_policy;
    
    // [PspSelectNodeForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x491140, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b248, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73d844, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ddfa8, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) select_node_for_process;
    
    // [PspSendJobNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x48b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x26424c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378fe8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31445c, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) send_job_notification;
    
    // [PspSendNoWakeChargeLimitNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6850dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9064b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6344, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904bd4, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) send_no_wake_charge_limit_notification;
    
    // [PspSendProcessNotificationToJobChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44fb98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x682278, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d59e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65d9e8, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) send_process_notification_to_job_chain;
    
    // [PspSendReliableJobNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46d540, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667fbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d96e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6db1dc, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) send_reliable_job_notification;
    
    // [PspSendWakeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ef98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f57ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77cf80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbb34, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) send_wake_notification;
    
    // [PspSetAffinityLimitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a63f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904c80, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) set_affinity_limit_callback;
    
    // [PspSetBackgroundJobTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c5a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77caa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5e40, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) set_background_job_tree;
    
    // [PspSetContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4664c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68cefc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x687020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f0dcc, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) set_context;
    
    // [PspSetContextState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x687678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90c364, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9abb68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90aa84, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) set_context_state;
    
    // [PspSetContextThreadInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4668f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68e850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x687900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f2720, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) set_context_thread_internal;
    
    // [PspSetCpuRateControlJobPostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef020, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675460, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) set_cpu_rate_control_job_post_callback;
    
    // [PspSetCpuRateControlJobPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1c90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eaf70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec350, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) set_cpu_rate_control_job_pre_callback;
    
    // [PspSetCreateProcessNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5663dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7774f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8259d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7878d8, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) set_create_process_notify_routine;
    
    // [PspSetCreateThreadNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777454, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825934, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787834, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) set_create_thread_notify_routine;
    
    // [PspSetEffectiveJobLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492a20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d64b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc714, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) set_effective_job_limits;
    
    // [PspSetEffectiveLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492cd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66976c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6728, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc9ec, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) set_effective_limit;
    
    // [PspSetEffectiveRateControlJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6851a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904cb8, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) set_effective_rate_control_job;
    
    // [PspSetJobBackgroundCountCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0504, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cef50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9ce0, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) set_job_background_count_callback;
    
    // [PspSetJobFreezeCountCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x528c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26dd20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x333310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31f5c0, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) set_job_freeze_count_callback;
    
    // [PspSetJobIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f3c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636ca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ed84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675264, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) set_job_io_attribution;
    
    // [PspSetJobIoAttributionJobPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1dac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea210, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) set_job_io_attribution_job_pre_callback;
    
    // [PspSetJobIoAttributionProcessCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1d90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea970, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) set_job_io_attribution_process_callback;
    
    // [PspSetJobIoRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f1d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ccd78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cd618, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) set_job_io_rate_control;
    
    // [PspSetJobIoRateControlForVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6851c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9065c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6504, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904ce4, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) set_job_io_rate_control_for_volume;
    
    // [PspSetJobLimitsJobPostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea270, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) set_job_limits_job_post_callback;
    
    // [PspSetJobLimitsJobPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4929f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc6e0, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) set_job_limits_job_pre_callback;
    
    // [PspSetJobLimitsProcessCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec8a0, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) set_job_limits_process_callback;
    
    // [PspSetJobNotificationCountCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a339c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6772d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea820, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) set_job_notification_count_callback;
    
    // [PspSetJobRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6852d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a67cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904f70, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) set_job_rate_control;
    
    // [PspSetJobTimeLimitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685458, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a69a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905140, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) set_job_time_limit_callback;
    
    // [PspSetLdtInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) set_ldt_information;
    
    // [PspSetLdtSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) set_ldt_size;
    
    // [PspSetMinimalProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68639c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a83d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786f3c, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) set_minimal_process_name;
    
    // [PspSetNetRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a69e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905184, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) set_net_rate_control;
    
    // [PspSetPicoThreadDescriptorBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20fa5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57cd90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58fd80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57cba0, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) set_pico_thread_descriptor_base;
    
    // [PspSetProcessAffinitySafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68252c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a3638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903e84, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) set_process_affinity_safe;
    
    // [PspSetProcessAffinityUpdateMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d3b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7603b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a3790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767e00, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) set_process_affinity_update_mode;
    
    // [PspSetProcessBackgroundCountCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a1d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd0f0, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) set_process_background_count_callback;
    
    // [PspSetProcessDefaultHardErrorMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41e9d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6eb210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x770128, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699b20, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) set_process_default_hard_error_mode;
    
    // [PspSetProcessFreezeStateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c3c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x265cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x333390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315dd0, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) set_process_freeze_state_callback;
    
    // [PspSetProcessIoHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) set_process_io_handlers;
    
    // [PspSetProcessPriorityClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41ebc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c6a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6df6f4, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) set_process_priority_class;
    
    // [PspSetProcessSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef3e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6659e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e98d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675d9c, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) set_process_scheduling_group;
    
    // [PspSetProcessShortName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4855a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cb28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7808, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0744, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) set_process_short_name;
    
    // [PspSetQuotaLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41ed08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70858c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1dbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d2c44, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) set_quota_limits;
    
    // [PspSetRateControlJobPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685720, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905440, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) set_rate_control_job_pre_callback;
    
    // [PspSetRateControlProcessCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905480, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) set_rate_control_process_callback;
    
    // [PspSetupReservedUserMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d888, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7db85c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0938, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) setup_reserved_user_mappings;
    
    // [PspSetupUserProcessAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469854, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f05ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f941c, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) setup_user_process_address_space;
    
    // [PspSetupUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x458a54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x699154, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x688958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6389f8, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) setup_user_stack;
    
    // [PspShortTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281770, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x34a60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x40f98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x10598, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) short_time;
    
    // [PspShutdownCsrProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0da8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9023e0, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) shutdown_csr_process;
    
    // [PspShutdownThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b468, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cef8, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) shutdown_thread;
    
    // [PspSiloGetMultiUserTsFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683504, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903ef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0fc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9025e8, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) silo_get_multi_user_ts_from_registry;
    
    // [PspSiloGetSuiteMaskStringFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903f94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a105c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902684, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) silo_get_suite_mask_string_from_registry;
    
    // [PspSiloInitializeSuiteMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683614, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90407c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a11a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90276c, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) silo_initialize_suite_mask;
    
    // [PspSiloInitializeUserSharedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683674, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90428c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a13b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90297c, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) silo_initialize_user_shared_data;
    
    // [PspSiloLoadApiSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6836fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9043b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a14f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902aa4, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) silo_load_api_sets;
    
    // [PspSiloMonitorList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302400, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1df40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dfa0, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) silo_monitor_list;
    
    // [PspSiloMonitorLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3023f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1df50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dfb0, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) silo_monitor_lock;
    
    // [PspSiloStorageNonPagedTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1e70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96690, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a3a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95870, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) silo_storage_non_paged_type_name;
    
    // [PspSiloStoragePagedTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1e80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96680, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a3b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95880, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) silo_storage_paged_type_name;
    
    // [PspSinglePrivCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41f134, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7089a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2234, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d305c, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) single_priv_check;
    
    // [PspSortHandleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571eb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x907900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x676f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906020, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) sort_handle_list;
    
    // [PspStorageAllocSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54742c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7725e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82bf2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dce8, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) storage_alloc_slot;
    
    // [PspStorageBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302330, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1de20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37ad0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1de70, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) storage_bitmap;
    
    // [PspStorageBitmapBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b0e4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53814, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca8c, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) storage_bitmap_bits;
    
    // [PspStorageBitmapLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302340, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1de30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37af0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1de68, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) storage_bitmap_lock;
    
    // [PspStorageEmptyArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x687234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90c074, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab7b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a794, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) storage_empty_array;
    
    // [PspStorageEmptyArrayNonReadonly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210194, 0x32828 bytes
    // ntoskrnl.exe .text:0x200c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37a1c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200c80, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) storage_empty_array_non_readonly;
    
    // [PspStorageExpansionBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302350, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1de10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37ae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1de80, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) storage_expansion_bitmap;
    
    // [PspStorageExpansionBitmapBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b6d0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d148, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53ea8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d148, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) storage_expansion_bitmap_bits;
    
    // [PspStorageFreeSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6872fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90c104, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a824, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) storage_free_slot;
    
    // [PspStorageGetObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210288, 0x32828 bytes
    // ntoskrnl.exe .text:0x2005b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f851c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2005b0, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) storage_get_object;
    
    // [PspStorageInsertObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54216c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6789d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7936c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebe18, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) storage_insert_object;
    
    // [PspStorageRemoveObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x687480, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90c19c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a8bc, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) storage_remove_object;
    
    // [PspStorageReplaceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68757c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90c280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aba64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a9a0, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) storage_replace_object;
    
    // [PspSubtractAccountingValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685764, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906d88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6d88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9054a8, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) subtract_accounting_values;
    
    // [PspSysAppIdClaim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eca90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980fc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f898, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) sys_app_id_claim;
    
    // [PspSystem32String]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1cf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f340, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) system32_string;
    
    // [PspSystemDlls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a120, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b268, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51210, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b268, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) system_dlls;
    
    // [PspSystemDriveString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64618, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f360, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) system_drive_string;
    
    // [PspSystemMitigationOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3c8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9b8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dfa0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9b8, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) system_mitigation_options;
    
    // [PspSystemMitigationOptionsLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa29c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa090, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0b8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa090, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) system_mitigation_options_length;
    
    // [PspSystemNoWakeChargeLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa15c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa108, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c148, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa108, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) system_no_wake_charge_limit;
    
    // [PspSystemQuotaBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x329980, 0x32828 bytes
    // ntoskrnl.exe .data:0xc53880, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6abc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc53840, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) system_quota_block;
    
    // [PspSystemRootString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64628, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f370, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) system_root_string;
    
    // [PspSystemThreadAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a2d0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b318, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd512e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b318, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) system_thread_assignment;
    
    // [PspSystemThreadStartup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x75080, 0x32828 bytes
    // ntoskrnl.exe .text:0x266d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x317dd0, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) system_thread_startup;
    
    // [PspTerminateAllProcessesInJobHierarchy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c9f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0b08, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) terminate_all_processes_in_job_hierarchy;
    
    // [PspTerminateAllThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e895c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76d6a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x708fec, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) terminate_all_threads;
    
    // [PspTerminatePicoProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686438, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a95b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907c50, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) terminate_pico_process;
    
    // [PspTerminateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42408c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76b72c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709644, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) terminate_process;
    
    // [PspTerminateProcessesJobCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef120, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674cc0, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) terminate_processes_job_callback;
    
    // [PspTerminateSiloSubsystemProcesses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6837b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a15c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902b74, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) terminate_silo_subsystem_processes;
    
    // [PspTerminateThreadByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425364, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f45d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709390, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) terminate_thread_by_pointer;
    
    // [PspThreadDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42572c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6934a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68a2d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f14b0, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) thread_delete;
    
    // [PspThreadMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1e90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa966d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a3d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa958b0, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) thread_mapping;
    
    // [PspThreadOpen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f12b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c820, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) thread_open;
    
    // [PspThreadWorkOnBehalfLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302480, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dfe8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37c68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dff0, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) thread_work_on_behalf_lock;
    
    // [PspUniqueJobIdTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a160, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b168, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51138, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b168, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) unique_job_id_table;
    
    // [PspUnlinkJobProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44fc48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x682a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0a14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65e20c, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) unlink_job_process;
    
    // [PspUnlockJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4537c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6922b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76195c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x612560, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) unlock_job;
    
    // [PspUnlockJobAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d3a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6837c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77afd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f020, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) unlock_job_assignment;
    
    // [PspUnlockJobChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x450128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6836a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c04c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ef04, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) unlock_job_chain;
    
    // [PspUnlockJobConditionally]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x450840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x692b0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f0b18, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) unlock_job_conditionally;
    
    // [PspUnlockJobListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44cd98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f6784, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b250, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) unlock_job_list_exclusive;
    
    // [PspUnlockJobListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906e68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x761124, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905588, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) unlock_job_list_shared;
    
    // [PspUnlockJobMemoryLimitsExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x450464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x707864, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ecdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x661bd4, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) unlock_job_memory_limits_exclusive;
    
    // [PspUnlockJobMemoryLimitsShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6924bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x762094, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615b80, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) unlock_job_memory_limits_shared;
    
    // [PspUnlockJobsAndProcessExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d46c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67f158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b0b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674188, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) unlock_jobs_and_process_exclusive;
    
    // [PspUnlockProcessExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa11cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26a638, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31bcc8, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) unlock_process_exclusive;
    
    // [PspUnlockProcessListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3061b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7380, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) unlock_process_list_exclusive;
    
    // [PspUnlockProcessListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b040, 0x32828 bytes
    // ntoskrnl.exe .text:0x292e2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x239b90, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) unlock_process_list_shared;
    
    // [PspUnlockQuotaExpansion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7830, 0x32828 bytes
    // ntoskrnl.exe .text:0x25ef14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f414, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) unlock_quota_expansion;
    
    // [PspUnlockQuotaListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a710, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca61c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e938c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb71c, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) unlock_quota_list_exclusive;
    
    // [PspUnlockQuotaListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca288, 0x32828 bytes
    // ntoskrnl.exe .text:0x262284, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37085c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312978, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) unlock_quota_list_shared;
    
    // [PspUpdateCreateInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3478, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61c120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765344, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66df64, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) update_create_info;
    
    // [PspUpdateSingleProcessAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68265c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a3970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904090, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) update_single_process_affinity;
    
    // [PspUseJobSchedulingClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab13, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c686, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53427, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c686, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) use_job_scheduling_classes;
    
    // [PspUserApcReserveKernelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684858, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8659a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce070, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) user_apc_reserve_kernel_routine;
    
    // [PspUserApcReserveRundownRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684858, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8659a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce070, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) user_apc_reserve_rundown_routine;
    
    // [PspUserThreadStartup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45655c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ff860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64bc40, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) user_thread_startup;
    
    // [PspValidateEnvironmentBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f11c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ffe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7667e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6760, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) validate_environment_block;
    
    // [PspValidateJobAffinityState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49502c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x681048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea12c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e199c, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) validate_job_affinity_state;
    
    // [PspValidateMitigationOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f218, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bc1f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6da9b0, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) validate_mitigation_options;
    
    // [PspValidateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfef88, 0x32828 bytes
    // ntoskrnl.exe .text:0x2401b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c9c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed740, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) validate_thread;
    
    // [PspVariableQuantums]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980528, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63fbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee08, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) variable_quantums;
    
    // [PspWaitForUsermodeExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6846b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9084bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a781c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906bdc, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) wait_for_usermode_exit;
    
    // [PspWaitOnAllProcessesJobCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x906eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9055d0, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) wait_on_all_processes_job_callback;
    
    // [PspWorkOnBehalfEncodingKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aeb0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c980, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53728, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c988, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) work_on_behalf_encoding_key;
    
    // [PspWorkingSetAdjustService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecaa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64db0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f8b8, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) working_set_adjust_service;
    
    // [PspWorkingSetChangeHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fad00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12fa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0b9a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13020, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) working_set_change_head;
    
    // [PspWorkingSetPrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980fd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f888, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) working_set_privileges;
    
    // [PspWow64CopyUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcbd34, 0x32828 bytes
    // ntoskrnl.exe .text:0x26752c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37c338, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31850c, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) wow64_copy_unicode_string;
    
    // [PspWow64GetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x467e5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f3b08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6856e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fc818, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) wow64_get_context_thread;
    
    // [PspWow64GetSharedInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469edc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f0a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x859128, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f98d4, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) wow64_get_shared_information;
    
    // [PspWow64InitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469c68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f33dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cfab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fc0ec, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) wow64_init_thread;
    
    // [PspWow64InitThreadGuestx86]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f35c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cfc68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fc2d8, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) wow64_init_thread_guestx86;
    
    // [PspWow64ReadOrWriteThreadCpuArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x467b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f42a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x685d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fcfb4, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) wow64_read_or_write_thread_cpu_area;
    
    // [PspWow64SetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4681c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f375c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6859ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fc46c, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) wow64_set_context_thread;
    
    // [PspWow64SetupCpuArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4697ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f36c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fc3d4, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) wow64_setup_cpu_area;
    
    // [PspWow64SetupUserProcessAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa60a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3559a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304b1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ac20, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) wow64_setup_user_process_address_space;
    
    // [PspWow64SetupUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x486214, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6679a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cdb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dac48, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) wow64_setup_user_stack;
    
    // [PspWow64ThunkProcessParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb8c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x266fcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37bdd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x317fac, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) wow64_thunk_process_parameters;
    
    // [PspWritePebAffinityInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46a850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1434, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75bf84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d921c, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) write_peb_affinity_info;
    
    // [PspWriteTebIdealProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x456998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ffcec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7077a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c0cc, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) write_teb_ideal_processor;
    
    // [PspWriteTebImpersonationInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c3280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b2a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a9970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x609050, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) write_teb_impersonation_info;
};
#include "magic/api.end.hpp"
