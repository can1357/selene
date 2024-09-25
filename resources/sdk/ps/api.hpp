#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/peb_t.hpp"
#include "../nt/ejob_t.hpp"
#include "../nt/guid_t.hpp"
#include "wake_reason_t.hpp"
#include "../image/info_t.hpp"
#include "../nt/ethread_t.hpp"
#include "../nt/eprocess_t.hpp"
#include "../nt/client_id_t.hpp"
#include "../nt/eresource_t.hpp"
#include "../nt/pool_type_t.hpp"
#include "../io/priority_hint_t.hpp"
#include "../nt/container_type_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "../nt/serversilo_state_t.hpp"
#include "../nt/object_attributes_t.hpp"
#include "../nt/eserversilo_globals_t.hpp"
#include "../sec/impersonation_level_t.hpp"
#include "../nt/psprocessprioritymode_t.hpp"
#include "../nt/pscreatethreadnotifytype_t.hpp"
#include "../nt/pscreateprocessnotifytype_t.hpp"
#include "../nt/silo_monitor_registration_t.hpp"
#include "../win/process_energy_component_type_num_t.hpp"

namespace nt  { struct container_id_info_t;                          }
namespace nt  { struct kprocess_t;                                   }
namespace nt  { struct kthread_t;                                    }
namespace se  { struct impersonation_state_t;                        }
namespace wdf { struct silo_monitor_t;                               }
namespace win { struct process_mitigation_binary_signature_policy_t; }

#include "magic/api.start.hpp"
namespace ps
{
    struct pico_routines_t;
    union exception_flags_t;
    struct create_notify_info_t;
    struct pico_provider_routines_t;

    // [PsAllocateAffinityToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x385730, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) allocate_affinity_token;
    
    // [PsAssignThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2132dc, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) assign_thread_id;
    
    // [PsBoostThreadOutstandingIoQoS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x20ef68, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) boost_thread_outstanding_io_qo_s;
    
    // [PsCheckProcessFileSigningLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4580, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) check_process_file_signing_level;
    
    // [PsCmVirtualKeySiloContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa21c, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) cm_virtual_key_silo_context_slot;
    
    // [PsCpuPartitionDefaultSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37da0, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) cpu_partition_default_sd;
    
    // [PsCpuPartitionMoveCpus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a4808, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) cpu_partition_move_cpus;
    
    // [PsCpuPartitionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1de38, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) cpu_partition_type;
    
    // [PsCreateCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x828594, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) create_cpu_partition;
    
    // [PsCreatePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86368c, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) create_partition;
    
    // [PsDefaultUILanguageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74acac, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) default_ui_language_id;
    
    // [PsFreeAffinityToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x385a00, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) free_affinity_token;
    
    // [PsGetKeepAliveCountProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x903144, 0x1fe000 bytes
    //
    _m12(sdk::unknown_ptr) get_keep_alive_count_process;
    
    // [PsGetProcessMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b3ac0, 0x1fd000 bytes
    //
    _m13(sdk::function<uint16_t(struct nt::eprocess_t*)>*) get_process_machine;
    
    // [PsGetSupportedProcessorArchitectures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b3ad0, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) get_supported_processor_architectures;
    
    // [PsInitializeBootCpuPartitions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5d000, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) initialize_boot_cpu_partitions;
    
    // [PsInitializeSyscallProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb60e94, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) initialize_syscall_providers;
    
    // [PsIsComponentEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x382690, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) is_component_enabled;
    
    // [PsIsMachineSupportedNoWow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b3a78, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) is_machine_supported_no_wow;
    
    // [PsMultiResumeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x308ae4, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) multi_resume_process;
    
    // [PsMultiResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x308d90, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) multi_resume_thread;
    
    // [PsNtdllExports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e340, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) ntdll_exports;
    
    // [PsProtectedCurrentDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b0a0, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) protected_current_directory;
    
    // [PsProtectedEnvironment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74ae20, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) protected_environment;
    
    // [PsQueryProcessPageFileQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571e90, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) query_process_page_file_quota;
    
    // [PsQuerySyscallProviderInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a7ef0, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) query_syscall_provider_information;
    
    // [PsReferencePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e2e8, 0x1fe000 bytes
    //
    _m26(sdk::unknown_ptr) reference_partition;
    
    // [PsReferencePrimaryTokenWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2cd090, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) reference_primary_token_with_tag;
    
    // [PsRegisterSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a7f50, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) register_syscall_provider;
    
    // [PsRegisterSyscallProviderServiceTableMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x847c44, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) register_syscall_provider_service_table_metadata;
    
    // [PsRevertToUserMultipleGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x58f100, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) revert_to_user_multiple_group_affinity_thread;
    
    // [PsSetSystemMultipleGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x58f120, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) set_system_multiple_group_affinity_thread;
    
    // [PsSyscallProviderDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a8090, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) syscall_provider_dispatch;
    
    // [PsThawMultiProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3757f0, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) thaw_multi_process;
    
    // [PsTlsAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82a950, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) tls_alloc;
    
    // [PsTlsFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a9b60, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) tls_free;
    
    // [PsTlsGetValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x79ea40, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) tls_get_value;
    
    // [PsTlsSetValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b4d30, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) tls_set_value;
    
    // [PsUnregisterSyscallProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9a8240, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) unregister_syscall_provider;
    
    // [PsWow64SharedInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b5e0, 0x32828 bytes
    //
    _m39(sdk::unknown_ptr) wow64_shared_information;
    
    // [PsWowArmSharedInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b5a0, 0x32828 bytes
    //
    _m40(sdk::unknown_ptr) wow_arm_shared_information;
    
    // [PsAltSystemCallDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57cd10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57cb20, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) alt_system_call_dispatch;
    
    // [PsBlockNonCetBinaries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9a1c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7158, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) block_non_cet_binaries;
    
    // [PsIsGuiThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9a2144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903164, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) is_gui_thread;
    
    // [PsIsSystemWideMitigationOptionSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7e827c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec47c, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) is_system_wide_mitigation_option_set;
    
    // [PsNotifyCoreDriversInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa580b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa57f54, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) notify_core_drivers_initialized;
    
    // [PsQueryProcessQuotaCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d2bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da7bc, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) query_process_quota_counters;
    
    // [PsRequestDebugSecureProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x909c88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9083a8, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) request_debug_secure_process;
    
    // [PsWowArm32SharedInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2d580, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d600, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) wow_arm32_shared_information;
    
    // [__ps_89]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa19168, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03168, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18168, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) _89;
    
    // [PsAddProcessEnergyValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29b7c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305058, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23f6a0, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) add_process_energy_values;
    
    // [PsAdjustBasicEnclaveThreadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5916e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e3c4, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) adjust_basic_enclave_thread_list;
    
    // [PsAltSystemCallHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb788, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e0f8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb788, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) alt_system_call_handlers;
    
    // [PsAltSystemCallRegistrationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1deb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37bf8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1df98, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) alt_system_call_registration_lock;
    
    // [PsBoostThreadIoQoS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x358588, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3318bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db77c, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) boost_thread_io_qo_s;
    
    // [PsCallEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90a3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aa230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908ac0, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) call_enclave;
    
    // [PsCreateVsmEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90aa9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aa9b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9091bc, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) create_vsm_enclave;
    
    // [PsDeleteVsmEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90af08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aae38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909628, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) delete_vsm_enclave;
    
    // [PsDereferencePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35b8d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c924, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4730, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) dereference_partition;
    
    // [PsDereferenceVsmEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b054, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892274, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909774, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) dereference_vsm_enclave;
    
    // [PsFreeEnclaveModuleInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e86c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e6a0, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) free_enclave_module_info;
    
    // [PsGetCurrentProcessByThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362990, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) get_current_process_by_thread;
    
    // [PsGetJobLastThrottledIoTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57c020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58f160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57be30, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) get_job_last_throttled_io_time;
    
    // [PsGetNextPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24d01c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x364374, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202c94, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) get_next_partition;
    
    // [PsGetNextPartitionUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24d1a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x364558, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202e28, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) get_next_partition_unsafe;
    
    // [PsGetNextProcessEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0720, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) get_next_process_ex;
    
    // [PsGetParentSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x903150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901840, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) get_parent_silo;
    
    // [PsGetPreviousProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b918, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90a038, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) get_previous_process;
    
    // [PsGetProcessEnclaveModuleInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e8c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59188c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e6fc, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) get_process_enclave_module_info;
    
    // [PsGetProcessSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x269090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a0b0, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) get_process_sequence_number;
    
    // [PsGetProcessStartKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7050, 0x1fe000 bytes
    //
    _m70(sdk::function<uint64_t(struct nt::kprocess_t*)>*) get_process_start_key;
    
    // [PsGetServerSiloActiveConsoleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57b160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e92c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57af60, 0x1fe000 bytes
    //
    _m71(sdk::function<uint32_t(struct nt::ejob_t*)>*) get_server_silo_active_console_id;
    
    // [PsGetSiloContainerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x903180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901870, 0x1fe000 bytes
    //
    _m72(sdk::function<struct nt::guid_t*(struct nt::ejob_t*)>*) get_silo_container_id;
    
    // [PsGetThreadServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x348af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22bc80, 0x1fe000 bytes
    //
    _m73(sdk::function<struct nt::ejob_t*(struct nt::kthread_t*)>*) get_thread_server_silo;
    
    // [PsGetWin32KFilterSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x217140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35eba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2032c0, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) get_win32k_filter_set;
    
    // [PsInitializeVsmEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b104, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9aaf84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909824, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) initialize_vsm_enclave;
    
    // [PsInsertPermanentSiloContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678904, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7935ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebd44, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) insert_permanent_silo_context_ex;
    
    // [PsIntegrityCheckEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54260, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f198, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54260, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) integrity_check_enabled;
    
    // [PsIsJobParentImmutable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674b78, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) is_job_parent_immutable;
    
    // [PsIsProcessAppContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x665724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4ddc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8974, 0x1fe000 bytes
    //
    _m79(sdk::function<uint8_t(struct nt::eprocess_t*)>*) is_process_app_container;
    
    // [PsIsProcessLoggingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2dd310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34bc90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e580, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) is_process_logging_enabled;
    
    // [PsIsProcessPrimaryTokenFrozen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x904670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902d60, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) is_process_primary_token_frozen;
    
    // [PsIsServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27c3f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3321f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d9650, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) is_server_silo;
    
    // [PsIsVsmEnclaveTerminated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b2b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab13c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9099d0, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) is_vsm_enclave_terminated;
    
    // [PsIsWin32KFilterAuditEnabledForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x262150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37d8d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3128d0, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) is_win32k_filter_audit_enabled_for_process;
    
    // [PsIsWin32KFilterEnabledForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x257af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307460, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) is_win32k_filter_enabled_for_process;
    
    // [PsLoadVsmEnclaveData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57ecf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57eb2c, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) load_vsm_enclave_data;
    
    // [PsNoRemoteThreadBeforeProcessInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c9dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53780, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9e4, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) no_remote_thread_before_process_init;
    
    // [PsNotifyWriteToExecutableMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) notify_write_to_executable_memory;
    
    // [PsObjectDirectoryTeardownSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa110, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c14c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa110, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) object_directory_teardown_slot;
    
    // [PsPartitionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb7d0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddc8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7d0, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) partition_type;
    
    // [PsPicoAltSystemCallDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57cd70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57cb80, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) pico_alt_system_call_dispatch;
    
    // [PsQueryActivityModerationUserSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57b5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58edf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b3c0, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) query_activity_moderation_user_settings;
    
    // [PsQuerySectionSignatureInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a9a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce3c0, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) query_section_signature_information;
    
    // [PsQuitNextPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57e4b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x591600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57e2c0, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) quit_next_partition;
    
    // [PsQuitNextProcessThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8104f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed1c0, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) quit_next_process_thread;
    
    // [PsReferencePartitionByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x707c44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78a694, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x661fd4, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) reference_partition_by_handle;
    
    // [PsReferencePartitionSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35b8fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c8f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4758, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) reference_partition_safe;
    
    // [PsReferencePartitionSystemProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x757a38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75f5c8, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) reference_partition_system_process;
    
    // [PsReferenceVsmEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909a68, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) reference_vsm_enclave;
    
    // [PsRegisterAltSystemCallHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x908cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a8cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9073e0, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) register_alt_system_call_handler;
    
    // [PsRundownVsmEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b36c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab1f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909a8c, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) rundown_vsm_enclave;
    
    // [PsSetExeModerationState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57b62c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ee5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b42c, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) set_exe_moderation_state;
    
    // [PsSetLoadImageNotifyRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8256b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7875f0, 0x1fe000 bytes
    //
    _n03(sdk::function<int32_t(sdk::function<void(nt::unicode_view*, void*, struct image::info_t*)>*, uint64_t)>*) set_load_image_notify_routine_ex;
    
    // [PsSetVmProcessorHostProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x906f48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a4828, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x905668, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) set_vm_processor_host_process;
    
    // [PsSystemRootSiloContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa114, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c150, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa114, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) system_root_silo_context_slot;
    
    // [PsTerminateMinimalProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x907edc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9065fc, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) terminate_minimal_process;
    
    // [PsTerminateVsmEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90b3d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ab260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x909af8, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) terminate_vsm_enclave;
    
    // [PsTestProtectedProcessIncompatibility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7005cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765cd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c9d8, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) test_protected_process_incompatibility;
    
    // [PsThawProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe204, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e72f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cf160, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) thaw_process;
    
    // [PsTimerResolutionActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x290854, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b4508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ff9b0, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) timer_resolution_active;
    
    // [PsVmProcessorHostTransitionEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1df58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37ca0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1dfb8, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) vm_processor_host_transition_event;
    
    // [PsWow64GetProcessNtdllType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f0a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75bb90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f98ec, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) wow64_get_process_ntdll_type;
    
    // [PsWow64GetSupportedArchitectures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x64c460, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) wow64_get_supported_architectures;
    
    // [PsWowX86SharedInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2d600, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd541d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d580, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) wow_x86_shared_information;
    
    // [__ps_10]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76302c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1902c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0302c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1802c, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) _10;
    
    // [__ps_11]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763030, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19030, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03030, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18030, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) _11;
    
    // [__ps_12]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763034, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19034, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03034, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18034, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) _12;
    
    // [__ps_13]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763038, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19038, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03038, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18038, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) _13;
    
    // [__ps_14]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76303c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1903c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0303c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1803c, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) _14;
    
    // [__ps_15]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763040, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19040, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03040, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18040, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) _15;
    
    // [__ps_16]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763044, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19044, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03044, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18044, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) _16;
    
    // [__ps_17]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763048, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19048, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03048, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18048, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) _17;
    
    // [__ps_18]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76304c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1904c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0304c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1804c, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) _18;
    
    // [__ps_19]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763050, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19050, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03050, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18050, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) _19;
    
    // [__ps_20]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763054, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19054, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03054, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18054, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) _20;
    
    // [__ps_21]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763058, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19058, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03058, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18058, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) _21;
    
    // [__ps_22]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76305c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1905c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0305c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1805c, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) _22;
    
    // [__ps_23]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763060, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19060, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03060, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18060, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) _23;
    
    // [__ps_24]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763064, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19064, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03064, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18064, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) _24;
    
    // [__ps_25]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763068, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19068, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03068, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18068, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) _25;
    
    // [__ps_26]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76306c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1906c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0306c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1806c, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) _26;
    
    // [__ps_27]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763070, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19070, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03070, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18070, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) _27;
    
    // [__ps_28]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763074, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19074, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03074, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18074, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) _28;
    
    // [__ps_29]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763078, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19078, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03078, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18078, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) _29;
    
    // [__ps_30]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76307c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1907c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0307c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1807c, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) _30;
    
    // [__ps_31]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763080, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19080, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03080, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18080, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) _31;
    
    // [__ps_32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763084, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19084, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03084, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18084, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) _32;
    
    // [__ps_33]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763088, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19088, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03088, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18088, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) _33;
    
    // [__ps_34]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76308c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1908c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0308c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1808c, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) _34;
    
    // [__ps_35]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763090, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19090, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03090, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18090, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) _35;
    
    // [__ps_36]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763094, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19094, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03094, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18094, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) _36;
    
    // [__ps_37]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763098, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19098, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03098, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18098, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) _37;
    
    // [__ps_38]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76309c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1909c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0309c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1809c, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) _38;
    
    // [__ps_39]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630a0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180a0, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) _39;
    
    // [__ps_40]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630a4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030a4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180a4, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) _40;
    
    // [__ps_41]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630a8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180a8, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) _41;
    
    // [__ps_42]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630ac, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030ac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180ac, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) _42;
    
    // [__ps_43]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630b0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180b0, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) _43;
    
    // [__ps_44]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630b4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180b4, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) _44;
    
    // [__ps_45]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630b8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030b8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180b8, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) _45;
    
    // [__ps_46]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190bc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030bc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180bc, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) _46;
    
    // [__ps_47]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630c0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180c0, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) _47;
    
    // [__ps_48]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630c4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190c4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030c4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180c4, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) _48;
    
    // [__ps_49]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630c8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180c8, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) _49;
    
    // [__ps_50]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630cc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190cc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180cc, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) _50;
    
    // [__ps_51]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180d0, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) _51;
    
    // [__ps_52]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630d4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030d4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180d4, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) _52;
    
    // [__ps_53]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030d8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180d8, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) _53;
    
    // [__ps_54]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630dc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190dc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030dc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180dc, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) _54;
    
    // [__ps_55]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180e0, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) _55;
    
    // [__ps_56]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630e4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190e4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030e4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180e4, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) _56;
    
    // [__ps_57]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630e8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180e8, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) _57;
    
    // [__ps_58]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630ec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190ec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030ec, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180ec, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) _58;
    
    // [__ps_59]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630f0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180f0, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) _59;
    
    // [__ps_60]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030f4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180f4, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) _60;
    
    // [__ps_61]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630f8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180f8, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) _61;
    
    // [__ps_62]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7630fc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa190fc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb030fc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa180fc, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) _62;
    
    // [__ps_63]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763100, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19100, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03100, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18100, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) _63;
    
    // [__ps_64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763104, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19104, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03104, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18104, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) _64;
    
    // [__ps_65]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763108, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19108, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03108, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18108, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) _65;
    
    // [__ps_66]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76310c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1910c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0310c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1810c, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) _66;
    
    // [__ps_67]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763110, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19110, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03110, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18110, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) _67;
    
    // [__ps_68]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763114, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19114, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03114, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18114, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) _68;
    
    // [__ps_69]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763118, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19118, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03118, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18118, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) _69;
    
    // [__ps_70]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76311c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1911c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0311c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1811c, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) _70;
    
    // [__ps_71]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763120, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19120, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03120, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18120, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) _71;
    
    // [__ps_72]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763124, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19124, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03124, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18124, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) _72;
    
    // [__ps_73]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763128, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19128, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03128, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18128, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) _73;
    
    // [__ps_74]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76312c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1912c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0312c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1812c, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) _74;
    
    // [__ps_75]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763130, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19130, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03130, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18130, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) _75;
    
    // [__ps_76]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763134, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19134, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03134, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18134, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) _76;
    
    // [__ps_77]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763138, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19138, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03138, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18138, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) _77;
    
    // [__ps_78]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76313c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1913c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0313c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1813c, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) _78;
    
    // [__ps_79]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763140, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19140, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03140, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18140, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) _79;
    
    // [__ps_80]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763144, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19144, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03144, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18144, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) _80;
    
    // [__ps_81]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763148, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19148, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03148, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18148, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) _81;
    
    // [__ps_82]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76314c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1914c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0314c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1814c, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) _82;
    
    // [__ps_83]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763150, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19150, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03150, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18150, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) _83;
    
    // [__ps_84]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763154, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19154, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03154, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18154, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) _84;
    
    // [__ps_85]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763158, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19158, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03158, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18158, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) _85;
    
    // [__ps_86]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x76315c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa1915c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb0315c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa1815c, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) _86;
    
    // [__ps_87]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763160, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19160, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03160, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18160, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) _87;
    
    // [__ps_88]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763164, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19164, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03164, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18164, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) _88;
    
    // [PsAcquireProcessExitSynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f918, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x704bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x665c20, 0x1fe000 bytes
    //
    _n94(sdk::function<int32_t(struct nt::kprocess_t*)>*) acquire_process_exit_synchronization;
    
    // [PsAcquireSiloHardReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f450, 0x32828 bytes
    // ntoskrnl.exe .text:0x2009f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3060a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2009f0, 0x1fe000 bytes
    //
    _n95(sdk::function<int32_t(struct nt::ejob_t*)>*) acquire_silo_hard_reference;
    
    // [PsActiveProcessHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302510, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e0c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37db0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e150, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) active_process_head;
    
    // [PsAllocSiloContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547324, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7724c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82be10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dbc0, 0x1fe000 bytes
    //
    _n97(sdk::function<int32_t(uint64_t, uint32_t*)>*) alloc_silo_context_slot;
    
    // [PsAssignImpersonationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d5dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b2570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80bb50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x608ba0, 0x1fe000 bytes
    //
    _n98(sdk::function<int32_t(struct nt::kthread_t*, void*)>*) assign_impersonation_token;
    
    // [PsAssignProcessToJobObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44cf64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67e8e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x674a00, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) assign_process_to_job_object;
    
    // [PsAttachSiloToCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106300, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34af80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1a30, 0x1fe000 bytes
    //
    _o00(sdk::function<struct nt::ejob_t*(struct nt::ejob_t*)>*) attach_silo_to_current_thread;
    
    // [PsBoostThreadIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4e10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c95a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263840, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) boost_thread_io;
    
    // [PsBoostThreadIoEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e25b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c95c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263860, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) boost_thread_io_ex;
    
    // [PsBootPhaseComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x543910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78551c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85fa74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78f2bc, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) boot_phase_complete;
    
    // [PsCallImageNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3feb60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70a660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637710, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) call_image_notify_routines;
    
    // [PsCaptureExceptionPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x424ff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69e09c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68b744, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x706b08, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) capture_exception_port;
    
    // [PsCaptureUserProcessParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef3d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63f800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b5f80, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) capture_user_process_parameters;
    
    // [PsChangeQuantumTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x535488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76fca8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86311c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777718, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) change_quantum_table;
    
    // [PsChargePoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe87c, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ee60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc5f0, 0x1fe000 bytes
    //
    _o08(sdk::function<void(struct nt::kprocess_t*, enum nt::pool_type_t, uint64_t)>*) charge_pool_quota;
    
    // [PsChargeProcessNonPagedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x19800, 0x32828 bytes
    // ntoskrnl.exe .text:0x345b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22c9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a3090, 0x1fe000 bytes
    //
    _o09(sdk::function<int32_t(struct nt::kprocess_t*, uint64_t)>*) charge_process_non_paged_pool_quota;
    
    // [PsChargeProcessPagedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4752ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x685fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6901d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671560, 0x1fe000 bytes
    //
    _o10(sdk::function<int32_t(struct nt::kprocess_t*, uint64_t)>*) charge_process_paged_pool_quota;
    
    // [PsChargeProcessPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe898, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ee90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300a30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc620, 0x1fe000 bytes
    //
    _o11(sdk::function<int32_t(struct nt::kprocess_t*, enum nt::pool_type_t, uint64_t)>*) charge_process_pool_quota;
    
    // [PsChargeProcessQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaeb88, 0x32828 bytes
    // ntoskrnl.exe .text:0x281958, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ff4b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x328488, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) charge_process_quota;
    
    // [PsChargeProcessWakeCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485718, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e18a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e86a0, 0x1fe000 bytes
    //
    _o13(sdk::function<void*(struct nt::kprocess_t*, uint32_t, enum ps::wake_reason_t, uint64_t)>*) charge_process_wake_counter;
    
    // [PsChargeSharedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x427c7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cbe90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615080, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) charge_shared_pool_quota;
    
    // [PsContinueWaiting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a04d, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b056, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510c3, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b056, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) continue_waiting;
    
    // [PsConvertToGuiThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f3f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce290, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) convert_to_gui_thread;
    
    // [PsCpuFairShareEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab223, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb43f, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da4d, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb43f, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) cpu_fair_share_enabled;
    
    // [PsCreateMinimalProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e8fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8074, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825e58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786bdc, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) create_minimal_process;
    
    // [PsCreateSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5422e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebff0, 0x1fe000 bytes
    //
    _o19(sdk::function<int32_t(struct nt::ejob_t*, uint32_t, enum nt::pool_type_t, sdk::function<void(void*)>*, void**)>*) create_silo_context;
    
    // [PsCreateSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c594, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655040, 0x1fe000 bytes
    //
    _o20(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, struct nt::client_id_t*, sdk::function<void(void*)>*, void*)>*) create_system_thread;
    
    // [PsCreateSystemThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c5d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655090, 0x1fe000 bytes
    //
    _o21(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, void*, struct nt::client_id_t*, sdk::function<void(void*)>*, void*, struct nt::group_affinity_t*, uint32_t*)>*) create_system_thread_ex;
    
    // [PsDefaultLoaderThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af10, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53784, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9e0, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) default_loader_threads;
    
    // [PsDefaultSystemLocaleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab54, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53450, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b0, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) default_system_locale_id;
    
    // [PsDefaultThreadLocaleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad68, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c878, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53608, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c878, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) default_thread_locale_id;
    
    // [PsDereferenceImpersonationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48eb00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6675b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6daae0, 0x1fe000 bytes
    //
    _o25(sdk::function<void(void*)>*) dereference_impersonation_token;
    
    // [PsDereferenceKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec570, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) dereference_kernel_stack;
    
    // [PsDereferencePrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4959b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66caa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c2050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dfd10, 0x1fe000 bytes
    //
    _o27(sdk::function<void(void*)>*) dereference_primary_token;
    
    // [PsDereferenceSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2617b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261190, 0x1fe000 bytes
    //
    _o28(sdk::function<void(void*)>*) dereference_silo_context;
    
    // [PsDetachSiloFromCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1062e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1a10, 0x1fe000 bytes
    //
    _o29(sdk::function<void(struct nt::ejob_t*)>*) detach_silo_from_current_thread;
    
    // [PsDfssGenerationLengthMS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa160, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa118, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c154, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa118, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) dfss_generation_length_ms;
    
    // [PsDfssLongTermFraction1024]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa22c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa270, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2d0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa274, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) dfss_long_term_fraction1024;
    
    // [PsDfssLongTermSharingMS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa230, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa278, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2cc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa270, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) dfss_long_term_sharing_ms;
    
    // [PsDfssShortTermSharingMS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa228, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa274, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2c8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa278, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) dfss_short_term_sharing_ms;
    
    // [PsDisableDiskCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab444, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6f4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd60, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6f4, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) disable_disk_counters;
    
    // [PsDisableImpersonation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475bc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cb6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0940, 0x1fe000 bytes
    //
    _o35(sdk::function<uint8_t(struct nt::kthread_t*, struct se::impersonation_state_t*)>*) disable_impersonation;
    
    // [PsDiskIoAttributionStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e480, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbc40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf838, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaa28, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) disk_io_attribution_start;
    
    // [PsDiskIoAttributionStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e470, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbc50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf828, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaa38, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) disk_io_attribution_stop;
    
    // [PsDispatchIumService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20fac4, 0x32828 bytes
    // ntoskrnl.exe .text:0x57ced4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58fec4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57cce4, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) dispatch_ium_service;
    
    // [PsEmbeddedNTMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af0c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53788, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9e8, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) embedded_nt_mask;
    
    // [PsEncodeThreadWorkOnBehalfTicket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc48b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d9238, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x292d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a2a8, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) encode_thread_work_on_behalf_ticket;
    
    // [PsEnterPriorityRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1400, 0x32828 bytes
    // ntoskrnl.exe .text:0x2431d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef610, 0x1fe000 bytes
    //
    _o41(sdk::function<void()>*) enter_priority_region;
    
    // [PsEnumProcessThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452dd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774b58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835e3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780038, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) enum_process_threads;
    
    // [PsEnumProcesses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f7a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2d44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee9f4, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) enum_processes;
    
    // [PsEstablishWin32Callouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787510, 0x1fe000 bytes
    //
    _o44(sdk::function<void(sdk::function<int32_t(void*, void*, void*)>*)>*) establish_win32_callouts;
    
    // [PsFreeSiloContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68274c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901780, 0x1fe000 bytes
    //
    _o45(sdk::function<int32_t(uint32_t)>*) free_silo_context_slot;
    
    // [PsFreezeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd6e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e746c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771b20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cf2d8, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) freeze_process;
    
    // [PsGetAllocatedFullProcessImageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413d20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70106c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b61c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64fabc, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) get_allocated_full_process_image_name;
    
    // [PsGetAllocatedFullProcessImageNameEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b5e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64fa88, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) get_allocated_full_process_image_name_ex;
    
    // [PsGetBaseIoPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x41680, 0x32828 bytes
    // ntoskrnl.exe .text:0x332a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2af540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27b270, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) get_base_io_priority_thread;
    
    // [PsGetBaseTrapFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20efa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b310, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) get_base_trap_frame;
    
    // [PsGetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684828, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906d90, 0x1fe000 bytes
    //
    _o51(sdk::function<int32_t(struct nt::kthread_t*, nt::context*, char)>*) get_context_thread;
    
    // [PsGetCurrentProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e780, 0x32828 bytes
    // ntoskrnl.exe .text:0x320fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x293500, 0x1fe000 bytes
    //
    _o52(sdk::function<struct nt::eprocess_t*()>*) get_current_process;
    
    // [PsGetCurrentProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4ff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2125b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d43f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ecf0, 0x1fe000 bytes
    //
    _o53(sdk::function<void*()>*) get_current_process_id;
    
    // [PsGetCurrentProcessSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108280, 0x32828 bytes
    // ntoskrnl.exe .text:0x2190b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7070, 0x1fe000 bytes
    //
    _o54(sdk::function<uint32_t()>*) get_current_process_session_id;
    
    // [PsGetCurrentProcessWin32Process]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1520, 0x32828 bytes
    // ntoskrnl.exe .text:0x2409d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee230, 0x1fe000 bytes
    //
    _o55(sdk::function<void*()>*) get_current_process_win32_process;
    
    // [PsGetCurrentProcessWow64Process]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9360, 0x32828 bytes
    // ntoskrnl.exe .text:0x247ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359710, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3150, 0x1fe000 bytes
    //
    _o56(sdk::function<void*()>*) get_current_process_wow64_process;
    
    // [PsGetCurrentServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2dd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2174f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29ac00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2044d0, 0x1fe000 bytes
    //
    _o57(sdk::function<struct nt::ejob_t*()>*) get_current_server_silo;
    
    // [PsGetCurrentServerSiloGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb14c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2df590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d9560, 0x1fe000 bytes
    //
    _o58(sdk::function<struct nt::eserversilo_globals_t*()>*) get_current_server_silo_globals;
    
    // [PsGetCurrentServerSiloName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6827cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901810, 0x1fe000 bytes
    //
    _o59(sdk::function<nt::unicode_view*()>*) get_current_server_silo_name;
    
    // [PsGetCurrentSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ab7b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ca560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206860, 0x1fe000 bytes
    //
    _o60(sdk::function<struct nt::ejob_t*()>*) get_current_silo;
    
    // [PsGetCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e998, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d1e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252e40, 0x1fe000 bytes
    //
    _o61(sdk::function<struct nt::ethread_t*()>*) get_current_thread;
    
    // [PsGetCurrentThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbbf30, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbf50, 0x1fe000 bytes
    //
    _o62(sdk::function<void*()>*) get_current_thread_id;
    
    // [PsGetCurrentThreadPreviousMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd239c, 0x32828 bytes
    // ntoskrnl.exe .text:0x251ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x367860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ffe60, 0x1fe000 bytes
    //
    _o63(sdk::function<char()>*) get_current_thread_previous_mode;
    
    // [PsGetCurrentThreadProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2a70, 0x32828 bytes
    // ntoskrnl.exe .text:0x25db20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36f6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e270, 0x1fe000 bytes
    //
    _o64(sdk::function<struct nt::kprocess_t*()>*) get_current_thread_process;
    
    // [PsGetCurrentThreadProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4ff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2125b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d43f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ecf0, 0x1fe000 bytes
    //
    _o65(sdk::function<void*()>*) get_current_thread_process_id;
    
    // [PsGetCurrentThreadStackBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20efb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ed20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b330, 0x1fe000 bytes
    //
    _o66(sdk::function<void*()>*) get_current_thread_stack_base;
    
    // [PsGetCurrentThreadStackLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20efc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ed40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b350, 0x1fe000 bytes
    //
    _o67(sdk::function<void*()>*) get_current_thread_stack_limit;
    
    // [PsGetCurrentThreadTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb628, 0x32828 bytes
    // ntoskrnl.exe .text:0x216050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33e730, 0x1fe000 bytes
    //
    _o68(sdk::function<void*()>*) get_current_thread_teb;
    
    // [PsGetCurrentThreadWin32Thread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0930, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34efb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eb180, 0x1fe000 bytes
    //
    _o69(sdk::function<void*()>*) get_current_thread_win32_thread;
    
    // [PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa700, 0x32828 bytes
    // ntoskrnl.exe .text:0x23c970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x349c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e9170, 0x1fe000 bytes
    //
    _o70(sdk::function<void*(void**)>*) get_current_thread_win32_thread_and_enter_critical_region;
    
    // [PsGetDefaultWsMaximum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaebac, 0x32828 bytes
    // ntoskrnl.exe .text:0x281948, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe72c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x328478, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) get_default_ws_maximum;
    
    // [PsGetEffectiveContainerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc62f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2560a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3055e0, 0x1fe000 bytes
    //
    _o72(sdk::function<int32_t(enum nt::container_type_t, struct nt::kthread_t*, struct nt::container_id_info_t*)>*) get_effective_container_id;
    
    // [PsGetEffectiveServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8554, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3321c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d95b0, 0x1fe000 bytes
    //
    _o73(sdk::function<struct nt::ejob_t*(struct nt::ejob_t*)>*) get_effective_server_silo;
    
    // [PsGetHostSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _o74(sdk::function<struct nt::ejob_t*()>*) get_host_silo;
    
    // [PsGetIoPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eb70, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c27a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ae390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x226200, 0x1fe000 bytes
    //
    _o75(sdk::function<enum io::priority_hint_t(struct nt::ethread_t*)>*) get_io_priority_thread;
    
    // [PsGetJobEffectiveFreezeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f084, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b568, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ed58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b368, 0x1fe000 bytes
    //
    _o76(sdk::function<uint32_t(struct nt::ejob_t*)>*) get_job_effective_freeze_count;
    
    // [PsGetJobLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5624, 0x32828 bytes
    // ntoskrnl.exe .text:0x271500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323090, 0x1fe000 bytes
    //
    _o77(sdk::function<struct nt::eresource_t*(struct nt::ejob_t*)>*) get_job_lock;
    
    // [PsGetJobProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc81a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x240520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ce70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2edab0, 0x1fe000 bytes
    //
    _o78(sdk::function<void*(struct nt::ejob_t*, uint64_t)>*) get_job_property;
    
    // [PsGetJobServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce194, 0x32828 bytes
    // ntoskrnl.exe .text:0x2017b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3857c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2017b0, 0x1fe000 bytes
    //
    _o79(sdk::function<int32_t(struct nt::ejob_t*, struct nt::ejob_t**)>*) get_job_server_silo;
    
    // [PsGetJobSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20efd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x201750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3855f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201750, 0x1fe000 bytes
    //
    _o80(sdk::function<uint32_t(struct nt::ejob_t*)>*) get_job_session_id;
    
    // [PsGetJobSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f634, 0x32828 bytes
    // ntoskrnl.exe .text:0x200050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200050, 0x1fe000 bytes
    //
    _o81(sdk::function<int32_t(struct nt::ejob_t*, struct nt::ejob_t**)>*) get_job_silo;
    
    // [PsGetJobUIRestrictionsClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd29d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26ec40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3202e0, 0x1fe000 bytes
    //
    _o82(sdk::function<uint32_t(struct nt::ejob_t*)>*) get_job_ui_restrictions_class;
    
    // [PsGetNextProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x424e44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68fec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68eb90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef110, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) get_next_process;
    
    // [PsGetNextProcessThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c3b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6eb2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x770030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699a20, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) get_next_process_thread;
    
    // [PsGetPagePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eb40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aa6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2261c0, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) get_page_priority_thread;
    
    // [PsGetPermanentSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf510, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dd360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e5d0, 0x1fe000 bytes
    //
    _o86(sdk::function<int32_t(struct nt::ejob_t*, uint32_t, void**)>*) get_permanent_silo_context;
    
    // [PsGetProcessCommonJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20efe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3687d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ed70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369b80, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) get_process_common_job;
    
    // [PsGetProcessCreateTimeQuadPart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3a98, 0x32828 bytes
    // ntoskrnl.exe .text:0x255e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35be20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3051d0, 0x1fe000 bytes
    //
    _o88(sdk::function<int64_t(struct nt::kprocess_t*)>*) get_process_create_time_quad_part;
    
    // [PsGetProcessDebugPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce950, 0x32828 bytes
    // ntoskrnl.exe .text:0x269610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x383230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a620, 0x1fe000 bytes
    //
    _o89(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_debug_port;
    
    // [PsGetProcessDeepFreezeStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x424f50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68ffec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76a324, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef23c, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) get_process_deep_freeze_stats;
    
    // [PsGetProcessDxgProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1680, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) get_process_dxg_process;
    
    // [PsGetProcessExitProcessCalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3594, 0x32828 bytes
    // ntoskrnl.exe .text:0x26a180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ae00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b810, 0x1fe000 bytes
    //
    _o92(sdk::function<uint8_t(struct nt::kprocess_t*)>*) get_process_exit_process_called;
    
    // [PsGetProcessExitStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6819a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765410, 0x1fe000 bytes
    //
    _o93(sdk::function<int32_t(struct nt::kprocess_t*)>*) get_process_exit_status;
    
    // [PsGetProcessExitTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49422c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d6d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0780, 0x1fe000 bytes
    //
    _o94(sdk::function<int64_t()>*) get_process_exit_time;
    
    // [PsGetProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a428, 0x32828 bytes
    // ntoskrnl.exe .text:0x2126b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2909a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d44d0, 0x1fe000 bytes
    //
    _o95(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_id;
    
    // [PsGetProcessImageFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc52dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cf90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d690, 0x1fe000 bytes
    //
    _o96(sdk::function<uint8_t*(struct nt::kprocess_t*)>*) get_process_image_file_name;
    
    // [PsGetProcessInheritedFromUniqueProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd09c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d9180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2932c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a1f0, 0x1fe000 bytes
    //
    _o97(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_inherited_from_unique_process_id;
    
    // [PsGetProcessJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc6874, 0x32828 bytes
    // ntoskrnl.exe .text:0x25c650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3765c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d090, 0x1fe000 bytes
    //
    _o98(sdk::function<struct nt::ejob_t*(struct nt::kprocess_t*)>*) get_process_job;
    
    // [PsGetProcessPeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc53f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x259810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e1f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a4d0, 0x1fe000 bytes
    //
    _o99(sdk::function<struct nt::peb_t*(struct nt::kprocess_t*)>*) get_process_peb;
    
    // [PsGetProcessPriorityClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f018, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58edb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b380, 0x1fe000 bytes
    //
    _p00(sdk::function<uint8_t(struct nt::kprocess_t*)>*) get_process_priority_class;
    
    // [PsGetProcessProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf4bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x268980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f8e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319820, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) get_process_protection;
    
    // [PsGetProcessSectionBaseAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x217130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203270, 0x1fe000 bytes
    //
    _p02(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_section_base_address;
    
    // [PsGetProcessSecurityPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0498, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66beb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de980, 0x1fe000 bytes
    //
    _p03(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_security_port;
    
    // [PsGetProcessServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10df0, 0x32828 bytes
    // ntoskrnl.exe .text:0x217580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204560, 0x1fe000 bytes
    //
    _p04(sdk::function<struct nt::ejob_t*(struct nt::kprocess_t*)>*) get_process_server_silo;
    
    // [PsGetProcessSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5fa0, 0x1fe000 bytes
    //
    _p05(sdk::function<uint32_t(struct nt::kprocess_t*)>*) get_process_session_id;
    
    // [PsGetProcessSessionIdEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16a4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x203980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30b420, 0x1fe000 bytes
    //
    _p06(sdk::function<uint32_t(struct nt::kprocess_t*)>*) get_process_session_id_ex;
    
    // [PsGetProcessSignatureLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6dd08, 0x32828 bytes
    // ntoskrnl.exe .text:0x390e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39cff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391ec0, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) get_process_signature_level;
    
    // [PsGetProcessSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f020, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58edc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b390, 0x1fe000 bytes
    //
    _p08(sdk::function<struct nt::ejob_t*(struct nt::kprocess_t*)>*) get_process_silo;
    
    // [PsGetProcessWin32Process]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc2100, 0x32828 bytes
    // ntoskrnl.exe .text:0x256070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e6e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305410, 0x1fe000 bytes
    //
    _p09(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_win32_process;
    
    // [PsGetProcessWin32WindowStation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca314, 0x32828 bytes
    // ntoskrnl.exe .text:0x261830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x379b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311de0, 0x1fe000 bytes
    //
    _p10(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_win32_window_station;
    
    // [PsGetProcessWow64Process]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbbf50, 0x32828 bytes
    // ntoskrnl.exe .text:0x248220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f34b0, 0x1fe000 bytes
    //
    _p11(sdk::function<void*(struct nt::kprocess_t*)>*) get_process_wow64_process;
    
    // [PsGetServerSiloGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8580, 0x32828 bytes
    // ntoskrnl.exe .text:0x2190f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303e14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d70b4, 0x1fe000 bytes
    //
    _p12(sdk::function<struct nt::eserversilo_globals_t*(struct nt::ejob_t*)>*) get_server_silo_globals;
    
    // [PsGetServerSiloServiceSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10995c, 0x32828 bytes
    // ntoskrnl.exe .text:0x202180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5a50, 0x1fe000 bytes
    //
    _p13(sdk::function<uint32_t(struct nt::ejob_t*)>*) get_server_silo_service_session_id;
    
    // [PsGetServerSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfe0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25d158, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a2f4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d8ac, 0x1fe000 bytes
    //
    _p14(sdk::function<enum nt::serversilo_state_t(struct nt::ejob_t*)>*) get_server_silo_state;
    
    // [PsGetSiloBySessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d60a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70ff08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5e74, 0x1fe000 bytes
    //
    _p15(sdk::function<int32_t(uint32_t, struct nt::ejob_t**)>*) get_silo_by_session_id;
    
    // [PsGetSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f4ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x200580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ede50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200580, 0x1fe000 bytes
    //
    _p16(sdk::function<int32_t(struct nt::ejob_t*, uint32_t, void**)>*) get_silo_context;
    
    // [PsGetSiloIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8700d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be460, 0x1fe000 bytes
    //
    _p17(sdk::function<struct nt::guid_t(struct nt::ejob_t*)>*) get_silo_identifier;
    
    // [PsGetSiloMonitorContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3c68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebc00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed480, 0x1fe000 bytes
    //
    _p18(sdk::function<uint32_t(struct wdf::silo_monitor_t*)>*) get_silo_monitor_context_slot;
    
    // [PsGetThreadCreateTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f02c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ede0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b3b0, 0x1fe000 bytes
    //
    _p19(sdk::function<int64_t(struct nt::kthread_t*)>*) get_thread_create_time;
    
    // [PsGetThreadExitStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c3f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6731b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6880, 0x1fe000 bytes
    //
    _p20(sdk::function<int32_t(struct nt::kthread_t*)>*) get_thread_exit_status;
    
    // [PsGetThreadFreezeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1f34, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x383780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ce80, 0x1fe000 bytes
    //
    _p21(sdk::function<uint32_t(struct nt::kthread_t*)>*) get_thread_freeze_count;
    
    // [PsGetThreadHardErrorsAreDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a518, 0x32828 bytes
    // ntoskrnl.exe .text:0x396930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397950, 0x1fe000 bytes
    //
    _p22(sdk::function<uint8_t(struct nt::kthread_t*)>*) get_thread_hard_errors_are_disabled;
    
    // [PsGetThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfebc, 0x32828 bytes
    // ntoskrnl.exe .text:0x255330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304620, 0x1fe000 bytes
    //
    _p23(sdk::function<void*(struct nt::kthread_t*)>*) get_thread_id;
    
    // [PsGetThreadProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc53f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cbd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29abf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a330, 0x1fe000 bytes
    //
    _p24(sdk::function<struct nt::kprocess_t*(struct nt::kthread_t*)>*) get_thread_process;
    
    // [PsGetThreadProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc48b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ae40, 0x1fe000 bytes
    //
    _p25(sdk::function<void*(struct nt::kthread_t*)>*) get_thread_process_id;
    
    // [PsGetThreadProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfeef0, 0x32828 bytes
    // ntoskrnl.exe .text:0x240320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34cc00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed8b0, 0x1fe000 bytes
    //
    _p26(sdk::function<void*(struct nt::kthread_t*, uint64_t, uint32_t)>*) get_thread_property;
    
    // [PsGetThreadSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70a0d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5da7a0, 0x1fe000 bytes
    //
    _p27(sdk::function<uint32_t(struct nt::kthread_t*)>*) get_thread_session_id;
    
    // [PsGetThreadTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5718, 0x32828 bytes
    // ntoskrnl.exe .text:0x356470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20b600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b6f0, 0x1fe000 bytes
    //
    _p28(sdk::function<void*(struct nt::kthread_t*)>*) get_thread_teb;
    
    // [PsGetThreadWin32Thread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3970, 0x32828 bytes
    // ntoskrnl.exe .text:0x243340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353e90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef780, 0x1fe000 bytes
    //
    _p29(sdk::function<void*(struct nt::kthread_t*)>*) get_thread_win32_thread;
    
    // [PsGetVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4888, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b5d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3805e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c950, 0x1fe000 bytes
    //
    _p30(sdk::function<uint8_t(uint32_t*, uint32_t*, uint32_t*, nt::unicode_view*)>*) get_version;
    
    // [PsGetWorkOnBehalfThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeb1a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d9190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x293038, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a200, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) get_work_on_behalf_thread;
    
    // [PsHalImageBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2e8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1daf8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4f0, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) hal_image_base;
    
    // [PsHalImageEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab398, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb638, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcb8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb640, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) hal_image_end;
    
    // [PsIdleProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2a8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1daa8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b8, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) idle_process;
    
    // [PsImpersonateClient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c2e70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b2640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a95c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x608c70, 0x1fe000 bytes
    //
    _p35(sdk::function<int32_t(struct nt::kthread_t*, void*, uint8_t, uint8_t, enum sec::impersonation_level_t)>*) impersonate_client;
    
    // [PsImpersonateContainerOfThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xed360, 0x32828 bytes
    // ntoskrnl.exe .text:0x300f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x297fb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26b3f0, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) impersonate_container_of_thread;
    
    // [PsInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x792e54, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa44c6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2e2b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3f054, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) init_system;
    
    // [PsInitialSystemProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab218, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb420, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da20, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb420, 0x1fe000 bytes
    //
    _p38(struct nt::kprocess_t**) initial_system_process;
    
    // [PsInitializeQuotaSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1f50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68d94, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54378, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6846c, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) initialize_quota_system;
    
    // [PsInsertPermanentSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5420f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b5ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdaf0, 0x1fe000 bytes
    //
    _p40(sdk::function<int32_t(struct nt::ejob_t*, uint32_t, void*)>*) insert_permanent_silo_context;
    
    // [PsInsertSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6827f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb7a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cc040, 0x1fe000 bytes
    //
    _p41(sdk::function<int32_t(struct nt::ejob_t*, uint32_t, void*)>*) insert_silo_context;
    
    // [PsInsertVirtualizedTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc284, 0x32828 bytes
    // ntoskrnl.exe .text:0x2814d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37aebc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304630, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) insert_virtualized_timer;
    
    // [PsInstallUILanguageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab04, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c680, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53420, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c680, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) install_ui_language_id;
    
    // [PsInvertedFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7dc0, 0x32828 bytes
    // ntoskrnl.exe CFGRO:0xe00010, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe00020, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe00010, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) inverted_function_table;
    
    // [PsInvokeWin32Callout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe930, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70a550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637620, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) invoke_win32_callout;
    
    // [PsIoRateControlOverQuotaNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f660, 0x32828 bytes
    // ntoskrnl.exe .text:0x2012c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3366c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2012c8, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) io_rate_control_over_quota_notify;
    
    // [PsIoRateControlReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x792b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a508, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x335148, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db3c8, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) io_rate_control_reference;
    
    // [PsIoRateControlStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2618b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb240, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf848, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9c90, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) io_rate_control_start;
    
    // [PsIoRateControlStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2618a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d3f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3afc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d710, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) io_rate_control_stop;
    
    // [PsIsCurrentThreadInServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91b90, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dda80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfd50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ed10, 0x1fe000 bytes
    //
    _p50(sdk::function<uint8_t()>*) is_current_thread_in_server_silo;
    
    // [PsIsCurrentThreadPrefetching]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6d5b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x208df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6de0, 0x1fe000 bytes
    //
    _p51(sdk::function<uint8_t()>*) is_current_thread_prefetching;
    
    // [PsIsDiskCountersEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x141c7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c5760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e00b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6630, 0x1fe000 bytes
    //
    _p52(sdk::function<uint8_t()>*) is_disk_counters_enabled;
    
    // [PsIsHostSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf61a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d4680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2556f0, 0x1fe000 bytes
    //
    _p53(sdk::function<uint8_t(struct nt::ejob_t*)>*) is_host_silo;
    
    // [PsIsProcessBeingDebugged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6819a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8920e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902d40, 0x1fe000 bytes
    //
    _p54(sdk::function<uint8_t(struct nt::kprocess_t*)>*) is_process_being_debugged;
    
    // [PsIsProcessCommitRelinquished]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6819b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e98c0, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) is_process_commit_relinquished;
    
    // [PsIsProcessInAppSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68286c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9031a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901890, 0x1fe000 bytes
    //
    _p56(sdk::function<uint8_t(struct nt::kprocess_t*)>*) is_process_in_app_silo;
    
    // [PsIsProcessInSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2e2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x217538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29ac5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204518, 0x1fe000 bytes
    //
    _p57(sdk::function<uint8_t(struct nt::kprocess_t*, struct nt::ejob_t*)>*) is_process_in_silo;
    
    // [PsIsProtectedProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x217230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ea0e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203410, 0x1fe000 bytes
    //
    _p58(sdk::function<uint32_t(struct nt::kprocess_t*)>*) is_protected_process;
    
    // [PsIsProtectedProcessLight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7910, 0x1fe000 bytes
    //
    _p59(sdk::function<uint32_t(struct nt::kprocess_t*)>*) is_protected_process_light;
    
    // [PsIsServiceSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e777c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec218, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) is_service_session;
    
    // [PsIsSystemProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x959b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x341d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f55e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5180, 0x1fe000 bytes
    //
    _p61(sdk::function<uint8_t(struct nt::kprocess_t*)>*) is_system_process;
    
    // [PsIsSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x253920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3683c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303760, 0x1fe000 bytes
    //
    _p62(sdk::function<uint8_t(struct nt::kthread_t*)>*) is_system_thread;
    
    // [PsIsThreadImpersonating]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53b538, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7502c0, 0x1fe000 bytes
    //
    _p63(sdk::function<uint8_t(struct nt::kthread_t*)>*) is_thread_impersonating;
    
    // [PsIsThreadInSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2db0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2174b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344b88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204498, 0x1fe000 bytes
    //
    _p64(sdk::function<uint8_t(struct nt::kthread_t*, struct nt::ejob_t*)>*) is_thread_in_silo;
    
    // [PsIsThreadTerminating]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95968, 0x32828 bytes
    // ntoskrnl.exe .text:0x35ab10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1300, 0x1fe000 bytes
    //
    _p65(sdk::function<uint8_t(struct nt::kthread_t*)>*) is_thread_terminating;
    
    // [PsIsWin32KFilterAuditEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f034, 0x32828 bytes
    // ntoskrnl.exe .text:0x262120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37d8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3128a0, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) is_win32k_filter_audit_enabled;
    
    // [PsIsWin32KFilterEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfa9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x257ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x368ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307430, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) is_win32k_filter_enabled;
    
    // [PsIumEnableOnDemandDebugWithResponse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68697c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909b54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9c58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908274, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) ium_enable_on_demand_debug_with_response;
    
    // [PsIumGetOnDemandDebugChallenge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686a04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909be8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908308, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) ium_get_on_demand_debug_challenge;
    
    // [PsIumResumeAfterHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1301ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x3896ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x590944, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a20c, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) ium_resume_after_hibernate;
    
    // [PsJobType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab320, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb568, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db90, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb568, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) job_type;
    
    // [PsKernelRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3d60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc01610, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02570, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc01610, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) kernel_range_list;
    
    // [PsLeavePriorityRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0950, 0x32828 bytes
    // ntoskrnl.exe .text:0x2409f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34bbd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee250, 0x1fe000 bytes
    //
    _p73(sdk::function<void()>*) leave_priority_region;
    
    // [PsLoadedModuleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308140, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a310, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc133d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a2b0, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) loaded_module_list;
    
    // [PsLoadedModuleResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x307cc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a2a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a240, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) loaded_module_resource;
    
    // [PsLoadedModuleSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be1c0, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd221c0, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd481c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd221c0, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) loaded_module_spin_lock;
    
    // [PsLocateSystemDlls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552310, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77ba6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x817ac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780780, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) locate_system_dlls;
    
    // [PsLookupProcessByProcessId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1e20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6126f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ca2f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5dff00, 0x1fe000 bytes
    //
    _p78(sdk::function<int32_t(void*, struct nt::kprocess_t**)>*) lookup_process_by_process_id;
    
    // [PsLookupProcessThreadByCid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4872f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60efa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7af5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ced20, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) lookup_process_thread_by_cid;
    
    // [PsLookupThreadByThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1f10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6124c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a7dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5dfcd0, 0x1fe000 bytes
    //
    _p80(sdk::function<int32_t(void*, struct nt::kthread_t**)>*) lookup_thread_by_thread_id;
    
    // [PsMachineUILanguageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab10, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c684, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53424, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c684, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) machine_ui_language_id;
    
    // [PsMakeSiloContextPermanent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682894, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c8070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a01a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c8910, 0x1fe000 bytes
    //
    _p82(sdk::function<int32_t(struct nt::ejob_t*, uint32_t)>*) make_silo_context_permanent;
    
    // [PsMapSystemDlls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46a5a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ecba8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76bfd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64caa4, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) map_system_dlls;
    
    // [psMUITest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b0e8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53920, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbb8, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) mui_test;
    
    // [PsNextSecurityDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7d30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc112f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bea8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11368, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) next_security_domain;
    
    // [PsNtosImageBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2b8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb470, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da68, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb470, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) ntos_image_base;
    
    // [PsNtosImageEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab390, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb640, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc50, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb638, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) ntos_image_end;
    
    // [PsObjectDirectorySiloContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa040, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa044, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c064, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa044, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) object_directory_silo_context_slot;
    
    // [PsOpenProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d0b30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6abe40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c9d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x602330, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) open_process;
    
    // [PsOpenThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a841c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x612e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7af200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e1344, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) open_thread;
    
    // [PsPicoSystemCallDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685c38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908b8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a8b6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9072ac, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) pico_system_call_dispatch;
    
    // [PsPicoWalkUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685c5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908bbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a8b9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9072dc, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) pico_walk_user_stack;
    
    // [PsPrioritySeparation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab378, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5d8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc44, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5d8, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) priority_separation;
    
    // [PsProcessType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab210, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb410, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da18, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb410, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) process_type;
    
    // [PsProvGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e2b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xdf08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xee38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcf88, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) prov_guid;
    
    // [PsProvTraceLoggingGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260a20, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xdef8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13438, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcf78, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) prov_trace_logging_guid;
    
    // [PsQueryCpuQuotaInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a9e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca904, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea0a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb9d4, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) query_cpu_quota_information;
    
    // [PsQueryCurrentApiSetSchema]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x420990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73de10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd7cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x745a50, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) query_current_api_set_schema;
    
    // [PsQueryFullProcessImageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4846f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60cf74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3e44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d937c, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) query_full_process_image_name;
    
    // [PsQueryJobMemoryUsageByProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905a58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5948, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904178, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) query_job_memory_usage_by_process;
    
    // [PsQueryProcessAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4a38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0350, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) query_process_attributes;
    
    // [PsQueryProcessAttributesByToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4a90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x614fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e03b0, 0x1fe000 bytes
    //
    _q02(sdk::function<void(void*, uint8_t*, uint8_t*)>*) query_process_attributes_by_token;
    
    // [PsQueryProcessCommandLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1814, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ef70, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) query_process_command_line;
    
    // [PsQueryProcessEnergyValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4585a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b8cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75ecd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60f320, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) query_process_energy_values;
    
    // [PsQueryProcessExceptionFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6819c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902d80, 0x1fe000 bytes
    //
    _q05(sdk::function<int32_t(struct nt::kprocess_t*, uint32_t, union ps::exception_flags_t*)>*) query_process_exception_flags;
    
    // [PsQueryProcessSignatureMitigationPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681c94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6755d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e88b0, 0x1fe000 bytes
    //
    _q06(sdk::function<void(struct nt::kprocess_t*, struct win::process_mitigation_binary_signature_policy_t*)>*) query_process_signature_mitigation_policy;
    
    // [PsQueryRuntimeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x612aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70e5a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5db8e0, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) query_runtime_process;
    
    // [PsQueryStatisticsProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b3d60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x692840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68d580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616440, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) query_statistics_process;
    
    // [PsQuerySystemDllInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x453f4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70025c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3cd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c63c, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) query_system_dll_info;
    
    // [PsQueryThreadStartAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9dc14, 0x32828 bytes
    // ntoskrnl.exe .text:0x215ff8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ef64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33e6e4, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) query_thread_start_address;
    
    // [PsQueryThreadTerminationPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1218, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c7384, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6384, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) query_thread_termination_port;
    
    // [PsQueryTotalCycleTimeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473ab8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903180, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) query_total_cycle_time_process;
    
    // [PsQuitNextProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d53c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8104f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed1c0, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) quit_next_process;
    
    // [PsRawPrioritySeparation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce140, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54160, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f174, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54160, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) raw_priority_separation;
    
    // [PsReaperListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302580, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37dc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e0e0, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) reaper_list_head;
    
    // [PsReaperWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3025a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e0a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37de0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e0c0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) reaper_work_item;
    
    // [PsReferenceEffectiveToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2be0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b2ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ac870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6094f0, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) reference_effective_token;
    
    // [PsReferenceImpersonationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471d50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8050, 0x1fe000 bytes
    //
    _q18(sdk::function<void*(struct nt::kthread_t*, uint8_t*, uint8_t*, enum sec::impersonation_level_t*)>*) reference_impersonation_token;
    
    // [PsReferenceImpersonationTokenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dae40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ebc30, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) reference_impersonation_token_ex;
    
    // [PsReferenceKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3b64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed180, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) reference_kernel_stack;
    
    // [PsReferencePrimaryToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cc8c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c2030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e1230, 0x1fe000 bytes
    //
    _q21(sdk::function<void*(struct nt::kprocess_t*)>*) reference_primary_token;
    
    // [PsReferenceProcessFilePointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4134cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7006a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fea40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64e2a0, 0x1fe000 bytes
    //
    _q22(sdk::function<int32_t(struct nt::kprocess_t*, void**)>*) reference_process_file_pointer;
    
    // [PsReferenceSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd411c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b0e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3837c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c760, 0x1fe000 bytes
    //
    _q23(sdk::function<void(void*)>*) reference_silo_context;
    
    // [PsRegisterPicoProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685d50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a8dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9074d0, 0x1fe000 bytes
    //
    _q24(sdk::function<int32_t(struct ps::pico_provider_routines_t*, struct ps::pico_routines_t*)>*) register_pico_provider;
    
    // [PsRegisterSiloMonitor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54732c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7724e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82be30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dbe0, 0x1fe000 bytes
    //
    _q25(sdk::function<int32_t(struct nt::silo_monitor_registration_t*, struct wdf::silo_monitor_t**)>*) register_silo_monitor;
    
    // [PsReleaseProcessExitSynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479b90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6577b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbeb0, 0x1fe000 bytes
    //
    _q26(sdk::function<void(struct nt::kprocess_t*)>*) release_process_exit_synchronization;
    
    // [PsReleaseProcessWakeCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452f2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ecd50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b310, 0x1fe000 bytes
    //
    _q27(sdk::function<void(void*, uint64_t)>*) release_process_wake_counter;
    
    // [PsReleaseSiloHardReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f4cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x200940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200940, 0x1fe000 bytes
    //
    _q28(sdk::function<void(struct nt::ejob_t*)>*) release_silo_hard_reference;
    
    // [PsRemoveCreateThreadNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68647c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907ca0, 0x1fe000 bytes
    //
    _q29(sdk::function<int32_t(sdk::function<void(void*, void*, uint8_t)>*)>*) remove_create_thread_notify_routine;
    
    // [PsRemoveLoadImageNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x909670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a96f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x907d90, 0x1fe000 bytes
    //
    _q30(sdk::function<int32_t(sdk::function<void(nt::unicode_view*, void*, struct image::info_t*)>*)>*) remove_load_image_notify_routine;
    
    // [PsRemoveSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6828b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9031d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a01d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9018c0, 0x1fe000 bytes
    //
    _q31(sdk::function<int32_t(struct nt::ejob_t*, uint32_t, void**)>*) remove_silo_context;
    
    // [PsRemoveVirtualizedTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc99c, 0x32828 bytes
    // ntoskrnl.exe .text:0x23de70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37305c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee3d0, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) remove_virtualized_timer;
    
    // [PsReplaceSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6828d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9018f0, 0x1fe000 bytes
    //
    _q33(sdk::function<int32_t(struct nt::ejob_t*, uint32_t, void*, void**)>*) replace_silo_context;
    
    // [PsReportProcessMemoryLimitViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68499c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905ab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a59a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9041d4, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) report_process_memory_limit_violation;
    
    // [PsRestoreImpersonation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x474680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cb800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0a70, 0x1fe000 bytes
    //
    _q35(sdk::function<void(struct nt::kthread_t*, struct se::impersonation_state_t*)>*) restore_impersonation;
    
    // [PsResumeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e1c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8aa0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) resume_process;
    
    // [PsResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x454018, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f4c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9a70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x708ab0, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) resume_thread;
    
    // [PsReturnPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7ff4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2511f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3007c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ff2b0, 0x1fe000 bytes
    //
    _q38(sdk::function<void(struct nt::kprocess_t*, enum nt::pool_type_t, uint64_t)>*) return_pool_quota;
    
    // [PsReturnProcessNonPagedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x180f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x336250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a2b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2799d0, 0x1fe000 bytes
    //
    _q39(sdk::function<void(struct nt::kprocess_t*, uint64_t)>*) return_process_non_paged_pool_quota;
    
    // [PsReturnProcessPageFileQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40460c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e18ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6aea08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62ee2c, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) return_process_page_file_quota;
    
    // [PsReturnProcessPagedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x177ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x336280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x279990, 0x1fe000 bytes
    //
    _q41(sdk::function<void(struct nt::kprocess_t*, uint64_t)>*) return_process_paged_pool_quota;
    
    // [PsReturnProcessQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x681c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35c100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303624, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4f98, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) return_process_quota;
    
    // [PsReturnSharedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4286f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c018c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7500f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61510c, 0x1fe000 bytes
    //
    _q43(sdk::function<void(void*, uint64_t, uint64_t)>*) return_shared_pool_quota;
    
    // [PsRevertThreadToSelf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x905a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a5920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x904150, 0x1fe000 bytes
    //
    _q44(sdk::function<void(struct nt::kthread_t*)>*) revert_thread_to_self;
    
    // [PsRevertToSelf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683888, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6731e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ca20, 0x1fe000 bytes
    //
    _q45(sdk::function<void()>*) revert_to_self;
    
    // [PsRevertToUserPagePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6ee44, 0x32828 bytes
    // ntoskrnl.exe .text:0x27b23c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c381c, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) revert_to_user_page_priority_thread;
    
    // [PsRootSiloInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903254, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901944, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) root_silo_information;
    
    // [PsSecureSystemProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3f8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb590, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dba8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb590, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) secure_system_process;
    
    // [PsSetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x908690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a79e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906db0, 0x1fe000 bytes
    //
    _q49(sdk::function<int32_t(struct nt::kthread_t*, nt::context*, char)>*) set_context_thread;
    
    // [PsSetCpuQuotaInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20ec78, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b1f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e9c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57aff8, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) set_cpu_quota_information;
    
    // [PsSetCreateProcessNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5663c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8257f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787710, 0x1fe000 bytes
    //
    _q51(sdk::function<int32_t(sdk::function<void(void*, void*, uint8_t)>*, uint8_t)>*) set_create_process_notify_routine;
    
    // [PsSetCreateProcessNotifyRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5663b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8257d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787560, 0x1fe000 bytes
    //
    _q52(sdk::function<int32_t(sdk::function<void(struct nt::kprocess_t*, void*, struct ps::create_notify_info_t*)>*, uint8_t)>*) set_create_process_notify_routine_ex;
    
    // [PsSetCreateProcessNotifyRoutineEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56638c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7771e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7875c0, 0x1fe000 bytes
    //
    _q53(sdk::function<int32_t(enum nt::pscreateprocessnotifytype_t, void*, uint8_t)>*) set_create_process_notify_routine_ex2;
    
    // [PsSetCreateThreadNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d81c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7771a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825690, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787580, 0x1fe000 bytes
    //
    _q54(sdk::function<int32_t(sdk::function<void(void*, void*, uint8_t)>*)>*) set_create_thread_notify_routine;
    
    // [PsSetCreateThreadNotifyRoutineEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x686654, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x776fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7873c0, 0x1fe000 bytes
    //
    _q55(sdk::function<int32_t(enum nt::pscreatethreadnotifytype_t, void*)>*) set_create_thread_notify_routine_ex;
    
    // [PsSetCurrentThreadPrefetching]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x401ea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60d5b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78b880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639a20, 0x1fe000 bytes
    //
    _q56(sdk::function<uint8_t(uint8_t)>*) set_current_thread_prefetching;
    
    // [PsSetIoPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77c88, 0x32828 bytes
    // ntoskrnl.exe .text:0x35190c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f454, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234a9c, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) set_io_priority_thread;
    
    // [PsSetJobProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f050, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58eed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b4a0, 0x1fe000 bytes
    //
    _q58(sdk::function<int32_t(struct nt::ejob_t*, uint64_t, void*)>*) set_job_property;
    
    // [PsSetLegoNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6840f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x907bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9062d0, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) set_lego_notify_routine;
    
    // [PsSetLoadImageNotifyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56dd68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7771c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7875a0, 0x1fe000 bytes
    //
    _q60(sdk::function<int32_t(sdk::function<void(nt::unicode_view*, void*, struct image::info_t*)>*)>*) set_load_image_notify_routine;
    
    // [PsSetPagePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77c34, 0x32828 bytes
    // ntoskrnl.exe .text:0x351c04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3364ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234d94, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) set_page_priority_thread;
    
    // [PsSetProcessDxgProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e3ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6755c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e88a0, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) set_process_dxg_process;
    
    // [PsSetProcessFaultInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3250, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a2160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d980, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) set_process_fault_information;
    
    // [PsSetProcessHandleTracingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904b18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a23b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903238, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) set_process_handle_tracing_information;
    
    // [PsSetProcessPriorityByClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41eb1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6605b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f3650, 0x1fe000 bytes
    //
    _q65(sdk::function<void(struct nt::kprocess_t*, enum nt::psprocessprioritymode_t)>*) set_process_priority_by_class;
    
    // [PsSetProcessPriorityClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f0a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ef40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b510, 0x1fe000 bytes
    //
    _q66(sdk::function<void(struct nt::kprocess_t*, uint8_t)>*) set_process_priority_class;
    
    // [PsSetProcessSecurityPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681b94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9048b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a1f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x902fa0, 0x1fe000 bytes
    //
    _q67(sdk::function<int32_t(struct nt::kprocess_t*, void*)>*) set_process_security_port;
    
    // [PsSetProcessTelemetryAppState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42540c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x702450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x769a64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x663060, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) set_process_telemetry_app_state;
    
    // [PsSetProcessWin32Process]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4255f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6626b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5f20, 0x1fe000 bytes
    //
    _q69(sdk::function<int32_t(struct nt::kprocess_t*, void*, void*)>*) set_process_win32_process;
    
    // [PsSetProcessWindowStation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea200, 0x1fe000 bytes
    //
    _q70(sdk::function<void(struct nt::kprocess_t*, void*)>*) set_process_window_station;
    
    // [PsSetSystemPagePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6f0f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x27b1e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x206ff4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c37c4, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) set_system_page_priority_thread;
    
    // [PsSetThreadHardErrorsAreDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149c04, 0x32828 bytes
    // ntoskrnl.exe .text:0x396780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3977a0, 0x1fe000 bytes
    //
    _q72(sdk::function<void(struct nt::kthread_t*, uint8_t)>*) set_thread_hard_errors_are_disabled;
    
    // [PsSetThreadProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd09fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x240170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed700, 0x1fe000 bytes
    //
    _q73(sdk::function<int32_t(struct nt::kthread_t*, uint64_t, void*)>*) set_thread_property;
    
    // [PsSetThreadWin32Thread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492044, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66bbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de6b0, 0x1fe000 bytes
    //
    _q74(sdk::function<void(struct nt::kthread_t*, void*, void*)>*) set_thread_win32_thread;
    
    // [PsShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x684100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x907bc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a6f34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9062e4, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) shutdown_system;
    
    // [PsSiloContextNonPagedType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302488, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e078, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37d30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e0b0, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) silo_context_non_paged_type;
    
    // [PsSiloContextPagedType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302490, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e070, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37d38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e0b8, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) silo_context_paged_type;
    
    // [PsStartSiloMonitor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x541ec4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a5aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7adbb0, 0x1fe000 bytes
    //
    _q78(sdk::function<int32_t(struct wdf::silo_monitor_t*)>*) start_silo_monitor;
    
    // [PsSuspendProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6868dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9099f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a9a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x908110, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) suspend_process;
    
    // [PsSuspendThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x423df4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5890, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) suspend_thread;
    
    // [PsSwapImpersonationToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478a00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x615cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cb964, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e1100, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) swap_impersonation_token;
    
    // [PsSwapProcessWorkingSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a2418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9032a0, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) swap_process_working_set;
    
    // [PsSynchronizeWithThreadInsertion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681ba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904918, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a2008, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x903008, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) synchronize_with_thread_insertion;
    
    // [PsTerminateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f1d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6728fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3d48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e603c, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) terminate_process;
    
    // [PsTerminateServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682a48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x903360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a03a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901a50, 0x1fe000 bytes
    //
    _q85(sdk::function<void(struct nt::ejob_t*, int32_t)>*) terminate_server_silo;
    
    // [PsTerminateSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a04bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x771630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9ee0, 0x1fe000 bytes
    //
    _q86(sdk::function<int32_t(int32_t)>*) terminate_system_thread;
    
    // [PsThreadType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab230, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb440, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da40, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb440, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) thread_type;
    
    // [PsTransferProcessQuotaToSharedQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1246a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x389454, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58ebf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389f74, 0x1fe000 bytes
    //
    _q88(sdk::function<void*(struct nt::eprocess_t*, uint64_t, uint64_t)>*) transfer_process_quota_to_shared_quota;
    
    // [PsTrustletGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa0c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12a48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0da38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12ab8, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) trustlet_generic_mapping;
    
    // [PsUILanguageComitted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acb4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53558, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7c0, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) ui_language_comitted;
    
    // [PsUnregisterSiloMonitor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x685914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9086b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a7a00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x906dd0, 0x1fe000 bytes
    //
    _q91(sdk::function<void(struct wdf::silo_monitor_t*)>*) unregister_silo_monitor;
    
    // [PsUpdateActiveProcessAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681e40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x904c84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a251c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9033a4, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) update_active_process_affinity;
    
    // [PsUpdateComponentPower]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf9c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27ce40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x304df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4050, 0x1fe000 bytes
    //
    _q93(sdk::function<void(struct nt::kprocess_t*, enum win::process_energy_component_type_num_t, uint64_t)>*) update_component_power;
    
    // [PsUpdateDiskCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc02c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2563b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3058f0, 0x1fe000 bytes
    //
    _q94(sdk::function<void(struct nt::kprocess_t*, uint64_t, uint64_t, uint32_t, uint32_t, uint32_t)>*) update_disk_counters;
    
    // [PsWaitForAllProcesses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6843d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x907fc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a732c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9066e8, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) wait_for_all_processes;
    
    // [PsWatchEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x35918c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d6e, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5ca, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c380, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) watch_enabled;
    
    // [PsWatchWorkingSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f0ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x57b740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57b540, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) watch_working_set;
    
    // [PsWin32CallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302388, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1deb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37b68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1df08, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) win32_call_back;
    
    // [PsWin32CalloutsEstablished]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a044, 0x32828 bytes
    // ntoskrnl.exe .data:0xc5428c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70948, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5424c, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) win32_callouts_established;
    
    // [PsWin32NullCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302380, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1dea8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37b70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1df10, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) win32_null_call_back;
    
    // [PsWow64GetProcessMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469c50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68e7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x687de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f26c0, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) wow64_get_process_machine;
    
    // [PsWow64IsMachineSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469ec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c5f0, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) wow64_is_machine_supported;
    
    // [PsWrapApcWow64Thread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f5f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x57ccc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58fbe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57cad0, 0x1fe000 bytes
    //
    _r03(sdk::function<int32_t(void**, void**)>*) wrap_apc_wow64_thread;
    
    // [psSetupDstSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7aa6c, 0x13864 bytes
    // win32kfull.sys .text:0xc240, 0x1596d bytes
    // win32kfull.sys .text:0x63ad8, 0x1659e bytes
    // win32kfull.sys .text:0xc5f0, 0x1596d bytes
    //
    _r04(sdk::unknown_ptr) setup_dst_surface;
    
    // [psSetupTransparentSrcSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x76ae0, 0x13864 bytes
    // win32kfull.sys .text:0x124e8, 0x1596d bytes
    // win32kfull.sys .text:0xeef8, 0x1659e bytes
    // win32kfull.sys .text:0x12898, 0x1596d bytes
    //
    _r05(sdk::unknown_ptr) setup_transparent_src_surface;
    
    // [psTcb]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11d5e0, 0x1eb80 bytes
    // win32kbase.sys .data:0x255320, 0x243e0 bytes
    // win32kbase.sys .data:0x2a8900, 0x27ef0 bytes
    // win32kbase.sys .data:0x252330, 0x243e0 bytes
    //
    _r06(sdk::unknown_ptr) tcb;
};
#include "magic/api.end.hpp"
