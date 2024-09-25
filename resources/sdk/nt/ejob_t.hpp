#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "kevent_t.hpp"
#include "eresource_t.hpp"
#include "kaffinity_ex_t.hpp"
#include "../rtl/rb_tree_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "eprocess_values_t.hpp"
#include "work_queue_item_t.hpp"
#include "../wnf/state_name_t.hpp"
#include "../ps/property_set_t.hpp"
#include "jobobject_wake_filter_t.hpp"
#include "process_disk_counters_t.hpp"
#include "../ps/io_control_entry_t.hpp"
#include "../ps/wake_information_t.hpp"
#include "job_rate_control_header_t.hpp"
#include "../ps/job_wake_information_t.hpp"
#include "jobobject_energy_tracking_state_t.hpp"

namespace io  { struct mini_completion_packet_user_t; }
namespace psp { struct storage_t;                     }

#include "magic/ejob_t.start.hpp"
namespace nt
{
    struct ejob_t;
    struct job_access_state_t;
    struct eserversilo_globals_t;
    struct job_cpu_rate_control_t;
    struct job_net_rate_control_t;
    struct process_energy_values_t;
    struct job_notification_information_t;
    struct process_extended_energy_values_t;

    // [struct _EJOB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ejob_t                                                                                     
    {                                                                                                 
        using wake_info_t =     sdk::variant<struct ps::wake_information_t, struct ps::job_wake_information_t>;                                            
        using energy_values_t = sdk::variant<struct nt::process_energy_values_t*, struct nt::process_extended_energy_values_t*>;                                            
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                            
        _m000 struct nt::kevent_t                         event;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
        _m001 nt::list_entry_t                            job_links;                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .JobLinks
        _m002 nt::list_entry_t                            process_list_head;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessListHead
        _m003 struct nt::eresource_t                      job_lock;                                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .JobLock
        _m004 int64_t                                     total_user_time;                              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .TotalUserTime
        _m005 int64_t                                     total_kernel_time;                            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .TotalKernelTime
        _m006 int64_t                                     total_cycle_time;                             //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .TotalCycleTime
        _m007 int64_t                                     this_period_total_user_time;                  //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .ThisPeriodTotalUserTime
        _m008 int64_t                                     this_period_total_kernel_time;                //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .ThisPeriodTotalKernelTime
        _m009 uint64_t                                    total_context_switches;                       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .TotalContextSwitches
        _m010 uint32_t                                    total_page_fault_count;                       //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .TotalPageFaultCount
        _m011 uint32_t                                    total_processes;                              //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .TotalProcesses
        _m012 uint32_t                                    active_processes;                             //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .ActiveProcesses
        _m013 uint32_t                                    total_terminated_processes;                   //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .TotalTerminatedProcesses
        _m014 int64_t                                     per_process_user_time_limit;                  //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .PerProcessUserTimeLimit
        _m015 int64_t                                     per_job_user_time_limit;                      //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .PerJobUserTimeLimit
        _m016 uint64_t                                    minimum_working_set_size;                     //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .MinimumWorkingSetSize
        _m017 uint64_t                                    maximum_working_set_size;                     //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .MaximumWorkingSetSize
        _m018 uint32_t                                    limit_flags;                                  //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .LimitFlags
        _m019 uint32_t                                    active_process_limit;                         //{ +0x0104    +0x0104    +0x0104    +0x0104    } | .ActiveProcessLimit
        _m020 struct nt::kaffinity_ex_t                   affinity;                                     //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .Affinity
        _m021 struct nt::job_access_state_t*              access_state;                                 //{ +0x01b0    +0x01b0    +0x0210    +0x01b0    } | .AccessState
        _m022 void*                                       access_state_quota_reference;                 //{ +0x01b8    +0x01b8    +0x0218    +0x01b8    } | .AccessStateQuotaReference
        _m023 uint32_t                                    ui_restrictions_class;                        //{ +0x01c0    +0x01c0    +0x0220    +0x01c0    } | .UIRestrictionsClass
        _m024 uint32_t                                    end_of_job_time_action;                       //{ +0x01c4    +0x01c4    +0x0224    +0x01c4    } | .EndOfJobTimeAction
        _m025 void*                                       completion_port;                              //{ +0x01c8    +0x01c8    +0x0228    +0x01c8    } | .CompletionPort
        _m026 void*                                       completion_key;                               //{ +0x01d0    +0x01d0    +0x0230    +0x01d0    } | .CompletionKey
        _m027 uint64_t                                    completion_count;                             //{ +0x01d8    +0x01d8    +0x0238    +0x01d8    } | .CompletionCount
        _m028 uint32_t                                    session_id;                                   //{ +0x01e0    +0x01e0    +0x0240    +0x01e0    } | .SessionId
        _m029 uint32_t                                    scheduling_class;                             //{ +0x01e4    +0x01e4    +0x0244    +0x01e4    } | .SchedulingClass
        _m030 uint64_t                                    read_operation_count;                         //{ +0x01e8    +0x01e8    +0x0248    +0x01e8    } | .ReadOperationCount
        _m031 uint64_t                                    write_operation_count;                        //{ +0x01f0    +0x01f0    +0x0250    +0x01f0    } | .WriteOperationCount
        _m032 uint64_t                                    other_operation_count;                        //{ +0x01f8    +0x01f8    +0x0258    +0x01f8    } | .OtherOperationCount
        _m033 uint64_t                                    read_transfer_count;                          //{ +0x0200    +0x0200    +0x0260    +0x0200    } | .ReadTransferCount
        _m034 uint64_t                                    write_transfer_count;                         //{ +0x0208    +0x0208    +0x0268    +0x0208    } | .WriteTransferCount
        _m035 uint64_t                                    other_transfer_count;                         //{ +0x0210    +0x0210    +0x0270    +0x0210    } | .OtherTransferCount
        _m036 struct nt::process_disk_counters_t          disk_io_info;                                 //{ +0x0218    +0x0218    +0x0278    +0x0218    } | .DiskIoInfo
        _m037 uint64_t                                    process_memory_limit;                         //{ +0x0240    +0x0240    +0x02a0    +0x0240    } | .ProcessMemoryLimit
        _m038 uint64_t                                    job_memory_limit;                             //{ +0x0248    +0x0248    +0x02a8    +0x0248    } | .JobMemoryLimit
        _m039 uint64_t                                    job_total_memory_limit;                       //{ +0x0250    +0x0250    +0x02b0    +0x0250    } | .JobTotalMemoryLimit
        _m040 uint64_t                                    peak_process_memory_used;                     //{ +0x0258    +0x0258    +0x02b8    +0x0258    } | .PeakProcessMemoryUsed
        _m041 uint64_t                                    peak_job_memory_used;                         //{ +0x0260    +0x0260    +0x02c0    +0x0260    } | .PeakJobMemoryUsed
        _m042 struct nt::kaffinity_ex_t                   effective_affinity;                           //{ +0x0268    +0x0268    +0x02c8    +0x0268    } | .EffectiveAffinity
        _m043 int64_t                                     effective_per_process_user_time_limit;        //{ +0x0310    +0x0310    +0x03d0    +0x0310    } | .EffectivePerProcessUserTimeLimit
        _m044 uint64_t                                    effective_minimum_working_set_size;           //{ +0x0318    +0x0318    +0x03d8    +0x0318    } | .EffectiveMinimumWorkingSetSize
        _m045 uint64_t                                    effective_maximum_working_set_size;           //{ +0x0320    +0x0320    +0x03e0    +0x0320    } | .EffectiveMaximumWorkingSetSize
        _m046 uint64_t                                    effective_process_memory_limit;               //{ +0x0328    +0x0328    +0x03e8    +0x0328    } | .EffectiveProcessMemoryLimit
        _m047 struct nt::ejob_t*                          effective_process_memory_limit_job;           //{ +0x0330    +0x0330    +0x03f0    +0x0330    } | .EffectiveProcessMemoryLimitJob
        _m048 struct nt::ejob_t*                          effective_per_process_user_time_limit_job;    //{ +0x0338    +0x0338    +0x03f8    +0x0338    } | .EffectivePerProcessUserTimeLimitJob
        _m049 struct nt::ejob_t*                          effective_net_io_rate_limit_job;              //{ +0x0340    +0x0340    +0x0400    +0x0340    } | .EffectiveNetIoRateLimitJob
        _m050 struct nt::ejob_t*                          effective_heap_attribution_job;               //{ +0x0348    +0x0348    +0x0408    +0x0348    } | .EffectiveHeapAttributionJob
        _m051 uint32_t                                    effective_limit_flags;                        //{ +0x0350    +0x0350    +0x0410    +0x0350    } | .EffectiveLimitFlags
        _m052 uint32_t                                    effective_scheduling_class;                   //{ +0x0354    +0x0354    +0x0414    +0x0354    } | .EffectiveSchedulingClass
        _m053 uint32_t                                    effective_freeze_count;                       //{ +0x0358    +0x0358    +0x0418    +0x0358    } | .EffectiveFreezeCount
        _m054 uint32_t                                    effective_background_count;                   //{ +0x035c    +0x035c    +0x041c    +0x035c    } | .EffectiveBackgroundCount
        _m055 uint32_t                                    effective_swap_count;                         //{ +0x0360    +0x0360    +0x0420    +0x0360    } | .EffectiveSwapCount
        _m056 uint32_t                                    effective_notification_limit_count;           //{ +0x0364    +0x0364    +0x0424    +0x0364    } | .EffectiveNotificationLimitCount
        _m057 uint8_t                                     effective_priority_class;                     //{ +0x0368    +0x0368    +0x0438    +0x0368    } | .EffectivePriorityClass
        _m058 uint8_t                                     priority_class;                               //{ +0x0369    +0x0369    +0x0439    +0x0369    } | .PriorityClass
        _m059 uint8_t                                     nesting_depth;                                //{ +0x036a    +0x036a    +0x043a    +0x036a    } | .NestingDepth
        _m060 uint32_t                                    completion_filter;                            //{ +0x036c    +0x036c    +0x043c    +0x036c    } | .CompletionFilter
        _m061 struct wnf::state_name_t                    wake_channel;                                 //{ +0x0370    +0x0370    +0x0440    +0x0370    } | .WakeChannel
        _m062 wake_info_t                                 wake_info;                                    //{ +0x0370    +0x0370    +0x0440    +0x0370    } | .WakeInfo
        _m063 struct nt::jobobject_wake_filter_t          wake_filter;                                  //{ +0x03a8    +0x03b8    +0x0488    +0x03b8    } | .WakeFilter
        _m064 uint32_t                                    low_edge_latch_filter;                        //{ +0x03b0    +0x03c0    +0x0490    +0x03c0    } | .LowEdgeLatchFilter
        _m065 struct nt::ejob_t*                          notification_link;                            //{ +0x03b8    +0x03c8    +0x0498    +0x03c8    } | .NotificationLink
        _m066 uint64_t                                    current_job_memory_used;                      //{ +0x03c0    +0x03d0    +0x04a0    +0x03d0    } | .CurrentJobMemoryUsed
        _m067 struct nt::job_notification_information_t*  notification_info;                            //{ +0x03c8    +0x03d8    +0x04a8    +0x03d8    } | .NotificationInfo
        _m068 void*                                       notification_info_quota_reference;            //{ +0x03d0    +0x03e0    +0x04b0    +0x03e0    } | .NotificationInfoQuotaReference
        _m069 struct io::mini_completion_packet_user_t*   notification_packet;                          //{ +0x03d8    +0x03e8    +0x04b8    +0x03e8    } | .NotificationPacket
        _m070 struct nt::job_cpu_rate_control_t*          cpu_rate_control;                             //{ +0x03e0    +0x03f0    +0x04c0    +0x03f0    } | .CpuRateControl
        _m071 void*                                       effective_scheduling_group;                   //{ +0x03e8    +0x03f8    +0x04c8    +0x03f8    } | .EffectiveSchedulingGroup
        _m072 uint64_t                                    ready_time;                                   //{ +0x03f0    +0x0400    +0x04d0    +0x0400    } | .ReadyTime
        _m073 struct ex::push_lock_t                      memory_limits_lock;                           //{ +0x03f8    +0x0408    +0x04d8    +0x0408    } | .MemoryLimitsLock
        _m074 nt::list_entry_t                            sibling_job_links;                            //{ +0x0400    +0x0410    +0x04e0    +0x0410    } | .SiblingJobLinks
        _m075 nt::list_entry_t                            child_job_list_head;                          //{ +0x0410    +0x0420    +0x04f0    +0x0420    } | .ChildJobListHead
        _m076 struct nt::ejob_t*                          parent_job;                                   //{ +0x0420    +0x0430    +0x0500    +0x0430    } | .ParentJob
        _m077 struct nt::ejob_t volatile*                 root_job;                                     //{ +0x0430    +0x0438    +0x0508    +0x0438    } | .RootJob
        _m078 nt::list_entry_t                            iterator_list_head;                           //{ +0x0438    +0x0440    +0x0510    +0x0440    } | .IteratorListHead
        _m079 uint64_t                                    ancestor_count;                               //{ +0x0448    +0x0450    +0x0520    +0x0450    } | .AncestorCount
        _m080 struct nt::ejob_t**                         ancestors;                                    //{ +0x0450    +0x0458    +0x0528    +0x0458    } | .Ancestors
        _m081 void*                                       session_object;                               //{ +0x0450    +0x0458    +0x0528    +0x0458    } | .SessionObject
        _m082 struct nt::eprocess_values_t                accounting;                                   //{ +0x0470    +0x0460    +0x0530    +0x0460    } | .Accounting
        _m083 uint32_t                                    shadow_active_process_count;                  //{ +0x04c8    +0x04c8    +0x0598    +0x04c8    } | .ShadowActiveProcessCount
        _m084 uint32_t                                    active_auxiliary_process_count;               //{ +0x04cc    +0x04cc    +0x059c    +0x04cc    } | .ActiveAuxiliaryProcessCount
        _m085 uint32_t                                    sequence_number;                              //{ +0x04d0    +0x04d0    +0x05a0    +0x04d0    } | .SequenceNumber
        _m086 uint32_t                                    job_id;                                       //{ +0x04d4    +0x04d4    +0x05a4    +0x04d4    } | .JobId
        _m087 struct nt::guid_t                           container_id;                                 //{ +0x04d8    +0x04d8    +0x05a8    +0x04d8    } | .ContainerId
        _m088 struct nt::eserversilo_globals_t*           server_silo_globals;                          //{ +0x04e8    +0x04f8    +0x05c8    +0x04f8    } | .ServerSiloGlobals
        _m089 struct ps::property_set_t                   property_set;                                 //{ +0x04f0    +0x0500    +0x05d0    +0x0500    } | .PropertySet
        _m090 struct psp::storage_t*                      storage;                                      //{ +0x0508    +0x0518    +0x05e8    +0x0518    } | .Storage
        _m091 struct nt::job_net_rate_control_t*          net_rate_control;                             //{ +0x0510    +0x0520    +0x05f0    +0x0520    } | .NetRateControl
        _m092 uint32_t                                    job_flags;                                    //{ +0x0518    +0x0528    +0x05f8    +0x0528    } | .JobFlags
        _m093 uint1_t                                     close_done;                                   //{ +0x0518@0  +0x0528@0  +0x05f8@0  +0x0528@0  } | .CloseDone
        _m094 uint1_t                                     multi_group;                                  //{ +0x0518@1  +0x0528@1  +0x05f8@1  +0x0528@1  } | .MultiGroup
        _m095 uint1_t                                     outstanding_notification;                     //{ +0x0518@2  +0x0528@2  +0x05f8@2  +0x0528@2  } | .OutstandingNotification
        _m096 uint1_t                                     notification_in_progress;                     //{ +0x0518@3  +0x0528@3  +0x05f8@3  +0x0528@3  } | .NotificationInProgress
        _m097 uint1_t                                     ui_limits;                                    //{ +0x0518@4  +0x0528@4  +0x05f8@4  +0x0528@4  } | .UILimits
        _m098 uint1_t                                     cpu_rate_control_active;                      //{ +0x0518@5  +0x0528@5  +0x05f8@5  +0x0528@5  } | .CpuRateControlActive
        _m099 uint1_t                                     own_cpu_rate_control;                         //{ +0x0518@6  +0x0528@6  +0x05f8@6  +0x0528@6  } | .OwnCpuRateControl
        _m100 uint1_t                                     terminating;                                  //{ +0x0518@7  +0x0528@7  +0x05f8@7  +0x0528@7  } | .Terminating
        _m101 uint1_t                                     working_set_lock;                             //{ +0x0518@8  +0x0528@8  +0x05f8@8  +0x0528@8  } | .WorkingSetLock
        _m102 uint1_t                                     job_frozen;                                   //{ +0x0518@9  +0x0528@9  +0x05f8@9  +0x0528@9  } | .JobFrozen
        _m103 uint1_t                                     background;                                   //{ +0x0518@10 +0x0528@10 +0x05f8@10 +0x0528@10 } | .Background
        _m104 uint1_t                                     wake_notification_allocated;                  //{ +0x0518@11 +0x0528@11 +0x05f8@11 +0x0528@11 } | .WakeNotificationAllocated
        _m105 uint1_t                                     wake_notification_enabled;                    //{ +0x0518@12 +0x0528@12 +0x05f8@12 +0x0528@12 } | .WakeNotificationEnabled
        _m106 uint1_t                                     wake_notification_pending;                    //{ +0x0518@13 +0x0528@13 +0x05f8@13 +0x0528@13 } | .WakeNotificationPending
        _m107 uint1_t                                     limit_notification_required;                  //{ +0x0518@14 +0x0528@14 +0x05f8@14 +0x0528@14 } | .LimitNotificationRequired
        _m108 uint1_t                                     zero_count_notification_required;             //{ +0x0518@15 +0x0528@15 +0x05f8@15 +0x0528@15 } | .ZeroCountNotificationRequired
        _m109 uint1_t                                     cycle_time_notification_required;             //{ +0x0518@16 +0x0528@16 +0x05f8@16 +0x0528@16 } | .CycleTimeNotificationRequired
        _m110 uint1_t                                     cycle_time_notification_pending;              //{ +0x0518@17 +0x0528@17 +0x05f8@17 +0x0528@17 } | .CycleTimeNotificationPending
        _m111 uint1_t                                     timers_virtualized;                           //{ +0x0518@18 +0x0528@18 +0x05f8@18 +0x0528@18 } | .TimersVirtualized
        _m112 uint1_t                                     job_swapped;                                  //{ +0x0518@19 +0x0528@19 +0x05f8@19 +0x0528@19 } | .JobSwapped
        _m113 uint1_t                                     violation_detected;                           //{ +0x0518@20 +0x0528@20 +0x05f8@20 +0x0528@20 } | .ViolationDetected
        _m114 uint1_t                                     empty_job_notified;                           //{ +0x0518@21 +0x0528@21 +0x05f8@21 +0x0528@21 } | .EmptyJobNotified
        _m115 uint1_t                                     no_system_charge;                             //{ +0x0518@22 +0x0528@22 +0x05f8@22 +0x0528@22 } | .NoSystemCharge
        _m116 uint1_t                                     drop_no_wake_charges;                         //{ +0x0518@23 +0x0528@23 +0x05f8@23 +0x0528@23 } | .DropNoWakeCharges
        _m117 uint1_t                                     no_wake_charge_policy_decided;                //{ +0x0518@24 +0x0528@24 +0x05f8@24 +0x0528@24 } | .NoWakeChargePolicyDecided
        _m118 uint1_t                                     net_rate_control_active;                      //{ +0x0518@25 +0x0528@25 +0x05f8@25 +0x0528@25 } | .NetRateControlActive
        _m119 uint1_t                                     own_net_rate_control;                         //{ +0x0518@26 +0x0528@26 +0x05f8@26 +0x0528@26 } | .OwnNetRateControl
        _m120 uint1_t                                     io_rate_control_active;                       //{ +0x0518@27 +0x0528@27 +0x05f8@27 +0x0528@27 } | .IoRateControlActive
        _m121 uint1_t                                     own_io_rate_control;                          //{ +0x0518@28 +0x0528@28 +0x05f8@28 +0x0528@28 } | .OwnIoRateControl
        _m122 uint1_t                                     disallow_new_processes;                       //{ +0x0518@29 +0x0528@29 +0x05f8@29 +0x0528@29 } | .DisallowNewProcesses
        _m123 uint1_t                                     silo;                                         //{ +0x0518@30 +0x0528@30 +0x05f8@30 +0x0528@30 } | .Silo
        _m124 energy_values_t                             energy_values;                                //{ +0x0520    +0x0530    +0x0600    +0x0530    } | .EnergyValues
        _m125 volatile uint64_t                           shared_commit_charge;                         //{ +0x0528    +0x0538    +0x0608    +0x0538    } | .SharedCommitCharge
        _m126 uint32_t                                    disk_io_attribution_user_ref_count;           //{ +0x0538    +0x0540    +0x0610    +0x0540    } | .DiskIoAttributionUserRefCount
        _m127 uint32_t                                    disk_io_attribution_ref_count;                //{ +0x053c    +0x0544    +0x0614    +0x0544    } | .DiskIoAttributionRefCount
        _m128 void*                                       disk_io_attribution_context;                  //{ +0x0540    +0x0548    +0x0618    +0x0548    } | .DiskIoAttributionContext
        _m129 struct nt::ejob_t*                          disk_io_attribution_owner_job;                //{ +0x0540    +0x0548    +0x0618    +0x0548    } | .DiskIoAttributionOwnerJob
        _m130 struct nt::job_rate_control_header_t        io_rate_control_header;                       //{ +0x0548    +0x0550    +0x0620    +0x0550    } | .IoRateControlHeader
        _m131 struct ps::io_control_entry_t               global_io_control;                            //{ +0x0570    +0x0578    +0x0648    +0x0578    } | .GlobalIoControl
        _m132 volatile int32_t                            io_control_state_lock;                        //{ +0x05a8    +0x05b0    +0x0680    +0x05b0    } | .IoControlStateLock
        _m133 struct rtl::rb_tree_t                       volume_io_control_tree;                       //{ +0x05b0    +0x05b8    +0x0688    +0x05b8    } | .VolumeIoControlTree
        _m134 uint64_t                                    io_rate_over_quota_history;                   //{ +0x05c0    +0x05c8    +0x0698    +0x05c8    } | .IoRateOverQuotaHistory
        _m135 uint32_t                                    io_rate_current_generation;                   //{ +0x05c8    +0x05d0    +0x06a0    +0x05d0    } | .IoRateCurrentGeneration
        _m136 uint32_t                                    io_rate_last_query_generation;                //{ +0x05cc    +0x05d4    +0x06a4    +0x05d4    } | .IoRateLastQueryGeneration
        _m137 uint32_t                                    io_rate_generation_length;                    //{ +0x05d0    +0x05d8    +0x06a8    +0x05d8    } | .IoRateGenerationLength
        _m138 uint32_t                                    io_rate_over_quota_notify_sequence_id;        //{ +0x05d4    +0x05dc    +0x06ac    +0x05dc    } | .IoRateOverQuotaNotifySequenceId
        _m139 struct ex::push_lock_t                      io_control_lock;                              //{ +0x05d8    +0x05e8    +0x06b8    +0x05e8    } | .IoControlLock
        _m140 uint64_t                                    silo_hard_reference_count;                    //{ +0x05e0    +0x05f0    +0x06c0    +0x05f0    } | .SiloHardReferenceCount
        _m141 struct nt::work_queue_item_t                rundown_work_item;                            //{ +0x05e8    +0x05f8    +0x06c8    +0x05f8    } | .RundownWorkItem
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                            
        _m142 struct nt::guid_t                           container_telemetry_id;                       //{ +0x04e8    +0x05b8    +0x04e8    } | .ContainerTelemetryId
        _m143 uint1_t                                     container_telemetry_id_set;                   //{ +0x0528@31 +0x05f8@31 +0x0528@31 } | .ContainerTelemetryIdSet
        _m144 uint32_t                                    job_flags2;                                   //{ +0x052c    +0x05fc    +0x052c    } | .JobFlags2
        _m145 uint1_t                                     parent_locked;                                //{ +0x052c@0  +0x05fc@0  +0x052c@0  } | .ParentLocked
        _m146 uint1_t                                     enable_usermode_silo_thread_impersonation;    //{ +0x052c@1  +0x05fc@1  +0x052c@1  } | .EnableUsermodeSiloThreadImpersonation
        _m147 uint1_t                                     disallow_usermode_silo_thread_impersonation;  //{ +0x052c@2  +0x05fc@2  +0x052c@2  } | .DisallowUsermodeSiloThreadImpersonation
        _m148 uint64_t                                    last_throttled_io_time;                       //{ +0x05e0    +0x06b0    +0x05e0    } | .LastThrottledIoTime
        _m149 void*                                       partition_object;                             //{ +0x0618    +0x06e8    +0x0618    } | .PartitionObject
        _m150 struct nt::ejob_t*                          partition_owner_job;                          //{ +0x0620    +0x06f0    +0x0620    } | .PartitionOwnerJob
        _m151 union nt::jobobject_energy_tracking_state_t energy_tracking_state;                        //{ +0x0628    +0x06f8    +0x0628    } | .EnergyTrackingState
        _m152 uint64_t                                    kernel_wait_time;                             //{ +0x0630    +0x0700    +0x0630    } | .KernelWaitTime
        _m153 uint64_t                                    user_wait_time;                               //{ +0x0638    +0x0708    +0x0638    } | .UserWaitTime
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m154 uint32_t                                    effective_io_priority_limit;                  //{ +0x0428    } | .EffectiveIoPriorityLimit
        _m155 uint32_t                                    io_priority_limit;                            //{ +0x042c    } | .IoPriorityLimit
        _m156 uint32_t                                    effective_page_priority_limit;                //{ +0x0430    } | .EffectivePagePriorityLimit
        _m157 uint32_t                                    page_priority_limit;                          //{ +0x0434    } | .PagePriorityLimit
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m158 uint32_t                                    owned_high_edge_filters;                      //{ +0x03b4    } | .OwnedHighEdgeFilters
        _m159 struct nt::ejob_t*                          parent_silo;                                  //{ +0x0428    } | .ParentSilo
        _m160 uint64_t                                    timer_list_lock;                              //{ +0x0458    } | .TimerListLock
        _m161 nt::list_entry_t                            timer_list_head;                              //{ +0x0460    } | .TimerListHead
        _m162 uint32_t                                    effective_high_edge_filters;                  //{ +0x051c    } | .EffectiveHighEdgeFilters
        _m163 struct nt::ejob_t volatile*                 wake_root;                                    //{ +0x0530    } | .WakeRoot
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_EJOB.$", 0x640, true, 0xfb08cdbf44a96109 );                                            
        SDK_DYNAMIC_SIZE( ejob_t );                                                                   
    };                                                                                                
};
#include "magic/ejob_t.end.hpp"
