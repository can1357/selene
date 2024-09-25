#pragma once
#include <sdkgen/support_library.hpp>
#include "kthread_t.hpp"
#include "client_id_t.hpp"
#include "ksemaphore_t.hpp"
#include "klock_entry_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "single_list_entry_t.hpp"
#include "../ps/property_set_t.hpp"
#include "../ps/client_security_context_t.hpp"

#include "magic/ethread_t.start.hpp"
namespace nt
{
    struct ejob_t;
    struct guid_t;
    struct ethread_t;
    struct device_object_t;
    struct termination_port_t;
    struct thread_energy_values_t;

    // [struct _ETHREAD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ethread_t                                                                           
    {                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                     
        _m000 struct nt::kthread_t                    tcb;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tcb
        _m001 int64_t                                 create_time;                               //{ +0x05e0    +0x0430    +0x0480    +0x0430    } | .CreateTime
        _m002 int64_t                                 exit_time;                                 //{ +0x05e8    +0x0438    +0x0488    +0x0438    } | .ExitTime
        _m003 nt::list_entry_t                        keyed_wait_chain;                          //{ +0x05e8    +0x0438    +0x0488    +0x0438    } | .KeyedWaitChain
        _m004 nt::list_entry_t                        post_block_list;                           //{ +0x0600    +0x0448    +0x0498    +0x0448    } | .PostBlockList
        _m005 void*                                   forward_link_shadow;                       //{ +0x0600    +0x0448    +0x0498    +0x0448    } | .ForwardLinkShadow
        _m006 void*                                   start_address;                             //{ +0x0608    +0x0450    +0x04a0    +0x0450    } | .StartAddress
        _m007 struct nt::termination_port_t*          termination_port;                          //{ +0x0610    +0x0458    +0x04a8    +0x0458    } | .TerminationPort
        _m008 struct nt::ethread_t*                   reaper_link;                               //{ +0x0610    +0x0458    +0x04a8    +0x0458    } | .ReaperLink
        _m009 void*                                   keyed_wait_value;                          //{ +0x0610    +0x0458    +0x04a8    +0x0458    } | .KeyedWaitValue
        _m010 uint64_t                                active_timer_list_lock;                    //{ +0x0618    +0x0460    +0x04b0    +0x0460    } | .ActiveTimerListLock
        _m011 nt::list_entry_t                        active_timer_list_head;                    //{ +0x0620    +0x0468    +0x04b8    +0x0468    } | .ActiveTimerListHead
        _m012 struct nt::client_id_t                  cid;                                       //{ +0x0630    +0x0478    +0x04c8    +0x0478    } | .Cid
        _m013 struct nt::ksemaphore_t                 keyed_wait_semaphore;                      //{ +0x0640    +0x0488    +0x04d8    +0x0488    } | .KeyedWaitSemaphore
        _m014 struct nt::ksemaphore_t                 alpc_wait_semaphore;                       //{ +0x0640    +0x0488    +0x04d8    +0x0488    } | .AlpcWaitSemaphore
        _m015 union ps::client_security_context_t     client_security;                           //{ +0x0660    +0x04a8    +0x04f8    +0x04a8    } | .ClientSecurity
        _m016 nt::list_entry_t                        irp_list;                                  //{ +0x0668    +0x04b0    +0x0500    +0x04b0    } | .IrpList
        _m017 uint64_t                                top_level_irp;                             //{ +0x0678    +0x04c0    +0x0510    +0x04c0    } | .TopLevelIrp
        _m018 struct nt::device_object_t*             device_to_verify;                          //{ +0x0680    +0x04c8    +0x0518    +0x04c8    } | .DeviceToVerify
        _m019 void*                                   win32_start_address;                       //{ +0x0688    +0x04d0    +0x0520    +0x04d0    } | .Win32StartAddress
        _m020 void*                                   charge_only_session;                       //{ +0x05f8    +0x04d8    +0x0528    +0x04d8    } | .ChargeOnlySession
        _m021 void*                                   legacy_power_object;                       //{ +0x0690    +0x04e0    +0x0530    +0x04e0    } | .LegacyPowerObject
        _m022 nt::list_entry_t                        thread_list_entry;                         //{ +0x0698    +0x04e8    +0x0538    +0x04e8    } | .ThreadListEntry
        _m023 struct ex::rundown_ref_t                rundown_protect;                           //{ +0x06a8    +0x04f8    +0x0548    +0x04f8    } | .RundownProtect
        _m024 struct ex::push_lock_t                  thread_lock;                               //{ +0x06b0    +0x0500    +0x0550    +0x0500    } | .ThreadLock
        _m025 uint32_t                                read_cluster_size;                         //{ +0x06b8    +0x0508    +0x0558    +0x0508    } | .ReadClusterSize
        _m026 volatile int32_t                        mm_lock_ordering;                          //{ +0x06bc    +0x050c    +0x055c    +0x050c    } | .MmLockOrdering
        _m027 uint32_t                                cross_thread_flags;                        //{ +0x06c0    +0x0510    +0x0560    +0x0510    } | .CrossThreadFlags
        _m028 uint1_t                                 terminated;                                //{ +0x06c0@0  +0x0510@0  +0x0560@0  +0x0510@0  } | .Terminated
        _m029 uint1_t                                 thread_inserted;                           //{ +0x06c0@1  +0x0510@1  +0x0560@1  +0x0510@1  } | .ThreadInserted
        _m030 uint1_t                                 hide_from_debugger;                        //{ +0x06c0@2  +0x0510@2  +0x0560@2  +0x0510@2  } | .HideFromDebugger
        _m031 uint1_t                                 active_impersonation_info;                 //{ +0x06c0@3  +0x0510@3  +0x0560@3  +0x0510@3  } | .ActiveImpersonationInfo
        _m032 uint1_t                                 hard_errors_are_disabled;                  //{ +0x06c0@4  +0x0510@4  +0x0560@4  +0x0510@4  } | .HardErrorsAreDisabled
        _m033 uint1_t                                 break_on_termination;                      //{ +0x06c0@5  +0x0510@5  +0x0560@5  +0x0510@5  } | .BreakOnTermination
        _m034 uint1_t                                 skip_creation_msg;                         //{ +0x06c0@6  +0x0510@6  +0x0560@6  +0x0510@6  } | .SkipCreationMsg
        _m035 uint1_t                                 skip_termination_msg;                      //{ +0x06c0@7  +0x0510@7  +0x0560@7  +0x0510@7  } | .SkipTerminationMsg
        _m036 uint1_t                                 copy_token_on_open;                        //{ +0x06c0@8  +0x0510@8  +0x0560@8  +0x0510@8  } | .CopyTokenOnOpen
        _m037 uint3_t                                 thread_io_priority;                        //{ +0x06c0@9  +0x0510@9  +0x0560@9  +0x0510@9  } | .ThreadIoPriority
        _m038 uint3_t                                 thread_page_priority;                      //{ +0x06c0@12 +0x0510@12 +0x0560@12 +0x0510@12 } | .ThreadPagePriority
        _m039 uint1_t                                 rundown_fail;                              //{ +0x06c0@15 +0x0510@15 +0x0560@15 +0x0510@15 } | .RundownFail
        _m040 uint1_t                                 ums_force_queue_termination;               //{ +0x06c0@16 +0x0510@16 +0x0560@16 +0x0510@16 } | .UmsForceQueueTermination
        _m041 uint1_t                                 indirect_cpu_sets;                         //{ +0x06c0@17 +0x0510@17 +0x0560@17 +0x0510@17 } | .IndirectCpuSets
        _m042 uint1_t                                 disable_dynamic_code_opt_out;              //{ +0x06c0@18 +0x0510@18 +0x0560@18 +0x0510@18 } | .DisableDynamicCodeOptOut
        _m043 uint1_t                                 explicit_case_sensitivity;                 //{ +0x06c0@19 +0x0510@19 +0x0560@19 +0x0510@19 } | .ExplicitCaseSensitivity
        _m044 varuint_t                               reserved_cross_thread_flags;               //{ +0x06c0@20 +0x0510@24 +0x0560@24 +0x0510@24 } | .ReservedCrossThreadFlags
        _m045 uint32_t                                same_thread_passive_flags;                 //{ +0x06c4    +0x0514    +0x0564    +0x0514    } | .SameThreadPassiveFlags
        _m046 uint1_t                                 active_ex_worker;                          //{ +0x06c4@0  +0x0514@0  +0x0564@0  +0x0514@0  } | .ActiveExWorker
        _m047 uint1_t                                 memory_maker;                              //{ +0x06c4@1  +0x0514@1  +0x0564@1  +0x0514@1  } | .MemoryMaker
        _m048 uint2_t                                 store_lock_thread;                         //{ +0x06c4@2  +0x0514@2  +0x0564@2  +0x0514@2  } | .StoreLockThread
        _m049 uint1_t                                 cloned_thread;                             //{ +0x06c4@4  +0x0514@4  +0x0564@4  +0x0514@4  } | .ClonedThread
        _m050 uint1_t                                 keyed_event_in_use;                        //{ +0x06c4@5  +0x0514@5  +0x0564@5  +0x0514@5  } | .KeyedEventInUse
        _m051 uint1_t                                 self_terminate;                            //{ +0x06c4@6  +0x0514@6  +0x0564@6  +0x0514@6  } | .SelfTerminate
        _m052 uint1_t                                 respect_io_priority;                       //{ +0x06c4@7  +0x0514@7  +0x0564@7  +0x0514@7  } | .RespectIoPriority
        _m053 uint1_t                                 active_page_lists;                         //{ +0x06c4@8  +0x0514@8  +0x0564@8  +0x0514@8  } | .ActivePageLists
        _m054 varuint_t                               reserved_same_thread_passive_flags;        //{ +0x06c4@9  +0x0514@12 +0x0564@13 +0x0514@12 } | .ReservedSameThreadPassiveFlags
        _m055 uint32_t                                same_thread_apc_flags;                     //{ +0x06c8    +0x0518    +0x0568    +0x0518    } | .SameThreadApcFlags
        _m056 uint1_t                                 owns_process_address_space_exclusive;      //{ +0x06c8@0  +0x0518@0  +0x0568@0  +0x0518@0  } | .OwnsProcessAddressSpaceExclusive
        _m057 uint1_t                                 owns_process_address_space_shared;         //{ +0x06c8@1  +0x0518@1  +0x0568@1  +0x0518@1  } | .OwnsProcessAddressSpaceShared
        _m058 uint1_t                                 hard_fault_behavior;                       //{ +0x06c8@2  +0x0518@2  +0x0568@2  +0x0518@2  } | .HardFaultBehavior
        _m059 uint1_t                                 start_address_invalid;                     //{ +0x06c8@3  +0x0518@3  +0x0568@3  +0x0518@3  } | .StartAddressInvalid
        _m060 uint1_t                                 etw_callout_active;                        //{ +0x06c8@4  +0x0518@4  +0x0568@4  +0x0518@4  } | .EtwCalloutActive
        _m061 uint1_t                                 suppress_symbol_load;                      //{ +0x06c8@5  +0x0518@5  +0x0568@5  +0x0518@5  } | .SuppressSymbolLoad
        _m062 uint1_t                                 prefetching;                               //{ +0x06c8@6  +0x0518@6  +0x0568@6  +0x0518@6  } | .Prefetching
        _m063 uint1_t                                 owns_vad_exclusive;                        //{ +0x06c8@7  +0x0518@7  +0x0568@7  +0x0518@7  } | .OwnsVadExclusive
        _m064 uint1_t                                 system_page_priority_active;               //{ +0x06c9@0  +0x0519@0  +0x0569@0  +0x0519@0  } | .SystemPagePriorityActive
        _m065 uint3_t                                 system_page_priority;                      //{ +0x06c9@1  +0x0519@1  +0x0569@1  +0x0519@1  } | .SystemPagePriority
        _m066 uint8_t                                 cache_manager_active;                      //{ +0x06cc    +0x051c    +0x056c    +0x051c    } | .CacheManagerActive
        _m067 uint8_t                                 disable_page_fault_clustering;             //{ +0x06cd    +0x051d    +0x056d    +0x051d    } | .DisablePageFaultClustering
        _m068 uint8_t                                 active_fault_count;                        //{ +0x06ce    +0x051e    +0x056e    +0x051e    } | .ActiveFaultCount
        _m069 uint8_t                                 lock_order_state;                          //{ +0x06cf    +0x051f    +0x056f    +0x051f    } | .LockOrderState
        _m070 uint64_t                                alpc_message_id;                           //{ +0x06d0    +0x0528    +0x0578    +0x0528    } | .AlpcMessageId
        _m071 void*                                   alpc_message;                              //{ +0x06d8    +0x0530    +0x0580    +0x0530    } | .AlpcMessage
        _m072 uint32_t                                alpc_receive_attribute_set;                //{ +0x06d8    +0x0530    +0x0580    +0x0530    } | .AlpcReceiveAttributeSet
        _m073 nt::list_entry_t                        alpc_wait_list_entry;                      //{ +0x06e0    +0x0538    +0x0588    +0x0538    } | .AlpcWaitListEntry
        _m074 int32_t                                 exit_status;                               //{ +0x06f0    +0x0548    +0x0598    +0x0548    } | .ExitStatus
        _m075 uint32_t                                cache_manager_count;                       //{ +0x06f4    +0x054c    +0x059c    +0x054c    } | .CacheManagerCount
        _m076 uint32_t                                io_boost_count;                            //{ +0x06f8    +0x0550    +0x05a0    +0x0550    } | .IoBoostCount
        _m077 uint32_t                                io_qo_s_boost_count;                       //{ +0x06fc    +0x0554    +0x05a4    +0x0554    } | .IoQoSBoostCount
        _m078 uint32_t                                io_qo_s_throttle_count;                    //{ +0x0700    +0x0558    +0x05a8    +0x0558    } | .IoQoSThrottleCount
        _m079 uint32_t                                kernel_stack_reference;                    //{ +0x0760    +0x055c    +0x05ac    +0x055c    } | .KernelStackReference
        _m080 nt::list_entry_t                        boost_list;                                //{ +0x0708    +0x0560    +0x05b0    +0x0560    } | .BoostList
        _m081 nt::list_entry_t                        deboost_list;                              //{ +0x0718    +0x0570    +0x05c0    +0x0570    } | .DeboostList
        _m082 uint64_t                                boost_list_lock;                           //{ +0x0728    +0x0580    +0x05d0    +0x0580    } | .BoostListLock
        _m083 uint64_t                                irp_list_lock;                             //{ +0x0730    +0x0588    +0x05d8    +0x0588    } | .IrpListLock
        _m084 void*                                   reserved_for_synch_tracking;               //{ +0x0738    +0x0590    +0x05e0    +0x0590    } | .ReservedForSynchTracking
        _m085 struct nt::single_list_entry_t          cm_callback_list_head;                     //{ +0x0740    +0x0598    +0x05e8    +0x0598    } | .CmCallbackListHead
        _m086 const struct nt::guid_t*                activity_id;                               //{ +0x0748    +0x05a0    +0x05f0    +0x05a0    } | .ActivityId
        _m087 struct nt::single_list_entry_t          se_learning_mode_list_head;                //{ +0x0750    +0x05a8    +0x05f8    +0x05a8    } | .SeLearningModeListHead
        _m088 void*                                   verifier_context;                          //{ +0x0758    +0x05b0    +0x0600    +0x05b0    } | .VerifierContext
        _m089 void*                                   adjusted_client_token;                     //{ +0x0768    +0x05b8    +0x0608    +0x05b8    } | .AdjustedClientToken
        _m090 void*                                   work_on_behalf_thread;                     //{ +0x0770    +0x05c0    +0x0610    +0x05c0    } | .WorkOnBehalfThread
        _m091 struct ps::property_set_t               property_set;                              //{ +0x0778    +0x05c8    +0x0618    +0x05c8    } | .PropertySet
        _m092 void*                                   pico_context;                              //{ +0x0790    +0x05e0    +0x0630    +0x05e0    } | .PicoContext
        _m093 uint64_t                                user_fs_base;                              //{ +0x0798    +0x05e8    +0x0638    +0x05e8    } | .UserFsBase
        _m094 uint64_t                                user_gs_base;                              //{ +0x07a0    +0x05f0    +0x0640    +0x05f0    } | .UserGsBase
        _m095 struct nt::thread_energy_values_t*      energy_values;                             //{ +0x07a8    +0x05f8    +0x0648    +0x05f8    } | .EnergyValues
        _m096 uint64_t                                selected_cpu_sets;                         //{ +0x07b8    +0x0600    +0x0650    +0x0600    } | .SelectedCpuSets
        _m097 uint64_t*                               selected_cpu_sets_indirect;                //{ +0x07b8    +0x0600    +0x0650    +0x0600    } | .SelectedCpuSetsIndirect
        _m098 struct nt::ejob_t*                      silo;                                      //{ +0x07c0    +0x0608    +0x0658    +0x0608    } | .Silo
        _m099 nt::unicode_view*                       thread_name;                               //{ +0x07c8    +0x0610    +0x0660    +0x0610    } | .ThreadName
        _m100 nt::context*                            set_context_state;                         //{ +0x07d0    +0x0618    +0x0668    +0x0618    } | .SetContextState
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                     
        _m101 uint1_t                                 pico_notify_exit;                          //{ +0x0510@20 +0x0560@20 +0x0510@20 } | .PicoNotifyExit
        _m102 uint1_t                                 dbg_wer_user_report_active;                //{ +0x0510@21 +0x0560@21 +0x0510@21 } | .DbgWerUserReportActive
        _m103 uint1_t                                 forced_self_trim_active;                   //{ +0x0510@22 +0x0560@22 +0x0510@22 } | .ForcedSelfTrimActive
        _m104 uint1_t                                 sampling_coverage;                         //{ +0x0510@23 +0x0560@23 +0x0510@23 } | .SamplingCoverage
        _m105 uint1_t                                 secure_context;                            //{ +0x0514@9  +0x0564@9  +0x0514@9  } | .SecureContext
        _m106 uint1_t                                 zero_page_thread;                          //{ +0x0514@10 +0x0564@10 +0x0514@10 } | .ZeroPageThread
        _m107 uint1_t                                 workload_class;                            //{ +0x0514@11 +0x0564@11 +0x0514@11 } | .WorkloadClass
        _m108 uint1_t                                 allow_user_writes_to_executable_memory;    //{ +0x0519@4  +0x0569@4  +0x0519@4  } | .AllowUserWritesToExecutableMemory
        _m109 uint1_t                                 allow_kernel_writes_to_executable_memory;  //{ +0x0519@5  +0x0569@5  +0x0519@5  } | .AllowKernelWritesToExecutableMemory
        _m110 uint1_t                                 owns_vad_shared;                           //{ +0x0519@6  +0x0569@6  +0x0519@6  } | .OwnsVadShared
        _m111 uint32_t                                performance_count_low_reserved;            //{ +0x0520    +0x0570    +0x0520    } | .PerformanceCountLowReserved
        _m112 int32_t                                 performance_count_high_reserved;           //{ +0x0524    +0x0574    +0x0524    } | .PerformanceCountHighReserved
        _m113 uint32_t                                last_expected_run_time;                    //{ +0x0620    +0x08f0    +0x0620    } | .LastExpectedRunTime
        _m114 uint32_t                                heap_data;                                 //{ +0x0624    +0x0674    +0x0624    } | .HeapData
        _m115 nt::list_entry_t                        owner_entry_list_head;                     //{ +0x0628    +0x0678    +0x0628    } | .OwnerEntryListHead
        _m116 uint64_t                                disowned_owner_entry_list_lock;            //{ +0x0638    +0x0688    +0x0638    } | .DisownedOwnerEntryListLock
        _m117 nt::list_entry_t                        disowned_owner_entry_list_head;            //{ +0x0640    +0x0690    +0x0640    } | .DisownedOwnerEntryListHead
        _m118 sdk::array<struct nt::klock_entry_t, 6> lock_entries;                              //{ +0x0650    +0x06a0    +0x0650    } | .LockEntries
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                         
        //                                                                                     
        _m119 void*                                   cm_dbg_info;                               //{ +0x07b0    +0x0890    +0x0890    } | .CmDbgInfo
                                                                                               
        // Windows 11                                                                          
        //                                                                                     
        _m120 uint1_t                                 generate_dump_on_bad_handle_access;        //{ +0x0564@12 } | .GenerateDumpOnBadHandleAccess
        _m121 uint1_t                                 session_attach_active;                     //{ +0x0569@7  } | .SessionAttachActive
        _m122 uint1_t                                 pasid_msr_valid;                           //{ +0x056a@0  } | .PasidMsrValid
        _m123 uint8_t                                 last_soft_park_election_qos;               //{ +0x0670    } | .LastSoftParkElectionQos
        _m124 uint8_t                                 last_soft_park_election_workload_type;     //{ +0x0671    } | .LastSoftParkElectionWorkloadType
        _m125 uint8_t                                 last_soft_park_election_running_type;      //{ +0x0672    } | .LastSoftParkElectionRunningType
        _m126 void*                                   cm_thread_info;                            //{ +0x08e0    } | .CmThreadInfo
        _m127 void*                                   fls_data;                                  //{ +0x08e8    } | .FlsData
        _m128 uint32_t                                last_soft_park_election_run_time;          //{ +0x08f4    } | .LastSoftParkElectionRunTime
        _m129 uint64_t                                last_soft_park_election_generation;        //{ +0x08f8    } | .LastSoftParkElectionGeneration
                                                                                               
        // Windows 10 v1607                                                                    
        //                                                                                     
        _m130 uint32_t                                ready_time;                                //{ +0x07d8    } | .ReadyTime
                                                                                               
        SDK_MAGIC_PROPERTIES( "_ETHREAD.$", 0x898, true, 0x213afcf54a731272 );                                         
        SDK_DYNAMIC_SIZE( ethread_t );                                                         
    };                                                                                         
};
#include "magic/ethread_t.end.hpp"
