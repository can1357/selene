#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "proc_feedback_t.hpp"
#include "proc_idle_snap_t.hpp"
#include "khetero_cpu_qos_t.hpp"
#include "proc_idle_policy_t.hpp"
#include "proc_hypervisor_state_t.hpp"
#include "proc_perf_check_context_t.hpp"
#include "../ppm/ffh_throttle_state_info_t.hpp"
#include "../ppm/idle_synchronization_state_t.hpp"

namespace pop { struct fx_device_t;              }
namespace ppm { struct concurrency_accounting_t; }
namespace ppm { struct idle_states_t;            }

#include "magic/processor_power_state_t.start.hpp"
namespace nt
{
    struct proc_perf_load_t;
    struct proc_perf_check_t;
    struct proc_perf_domain_t;
    struct proc_perf_history_t;
    struct proc_idle_accounting_t;
    struct proc_perf_constraint_t;
    struct khetro_hwfeedback_type_t;
    struct processor_cycles_workload_class_t;

    // [struct _PROCESSOR_POWER_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_power_state_t                                                                       
    {                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                               
        _m000 struct ppm::idle_states_t*                       idle_states;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleStates
        _m001 struct nt::proc_idle_accounting_t*               idle_accounting;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IdleAccounting
        _m002 uint64_t                                         idle_time_last;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IdleTimeLast
        _m003 uint64_t                                         idle_time_total;                            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IdleTimeTotal
        _m004 volatile uint64_t                                idle_time_entry;                            //{ +0x0020    +0x0020    +0x0028    +0x0020    } | .IdleTimeEntry
        _m005 uint64_t                                         idle_time_expiration;                       //{ +0x0028    +0x0028    +0x0030    +0x0028    } | .IdleTimeExpiration
        _m006 uint8_t                                          non_interruptible_transition;               //{ +0x0030    +0x0030    +0x0038    +0x0030    } | .NonInterruptibleTransition
        _m007 uint8_t                                          pep_woken_transition;                       //{ +0x0031    +0x0031    +0x0039    +0x0031    } | .PepWokenTransition
        _m008 uint8_t                                          hv_target_state;                            //{ +0x0199    +0x0032    +0x003a    +0x0032    } | .HvTargetState
        _m009 uint32_t                                         target_idle_state;                          //{ +0x0034    +0x0034    +0x003c    +0x0034    } | .TargetIdleState
        _m010 struct nt::proc_idle_policy_t                    idle_policy;                                //{ +0x0038    +0x0038    +0x0040    +0x0038    } | .IdlePolicy
        _m011 volatile union ppm::idle_synchronization_state_t synchronization;                            //{ +0x0040    +0x0040    +0x0048    +0x0040    } | .Synchronization
        _m012 struct nt::proc_feedback_t                       perf_feedback;                              //{ +0x0048    +0x0048    +0x0050    +0x0048    } | .PerfFeedback
        _m013 enum nt::proc_hypervisor_state_t                 hypervisor;                                 //{ +0x00d8    +0x00d8    +0x00e0    +0x00d8    } | .Hypervisor
        _m014 uint32_t                                         last_sys_time;                              //{ +0x00dc    +0x00dc    +0x00e4    +0x00dc    } | .LastSysTime
        _m015 uint64_t                                         wmi_dispatch_ptr;                           //{ +0x00e0    +0x00e0    +0x00e8    +0x00e0    } | .WmiDispatchPtr
        _m016 int32_t                                          wmi_interface_enabled;                      //{ +0x00e8    +0x00e8    +0x00f0    +0x00e8    } | .WmiInterfaceEnabled
        _m017 struct ppm::ffh_throttle_state_info_t            ffh_throttle_state_info;                    //{ +0x00f0    +0x00f0    +0x00f8    +0x00f0    } | .FFHThrottleStateInfo
        _m018 struct nt::kdpc_t                                perf_action_dpc;                            //{ +0x0110    +0x0110    +0x0118    +0x0110    } | .PerfActionDpc
        _m019 volatile int32_t                                 perf_action_mask;                           //{ +0x0150    +0x0150    +0x0158    +0x0150    } | .PerfActionMask
        _m020 struct nt::proc_idle_snap_t                      hv_idle_check;                              //{ +0x0158    +0x0158    +0x0160    +0x0158    } | .HvIdleCheck
        _m021 struct ppm::concurrency_accounting_t*            concurrency;                                //{ +0x0180    +0x01a8    +0x01b8    +0x01a8    } | .Concurrency
        _m022 uint8_t                                          parked;                                     //{ +0x019a    +0x01bc    +0x01cc    +0x01bc    } | .Parked
        _m023 uint64_t                                         snap_time_last;                             //{ +0x01b8    +0x01c0    +0x01d0    +0x01c0    } | .SnapTimeLast
        _m024 uint64_t                                         energy_consumed;                            //{ +0x01b8    +0x01c0    +0x01d0    +0x01c0    } | .EnergyConsumed
        _m025 uint64_t                                         active_time;                                //{ +0x01c0    +0x01c8    +0x01d8    +0x01c8    } | .ActiveTime
        _m026 uint64_t                                         total_time;                                 //{ +0x01c8    +0x01d0    +0x01e0    +0x01d0    } | .TotalTime
                                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                               
        _m027 uint8_t                                          soft_parked;                                //{ +0x0033    +0x003b    +0x0033    } | .SoftParked
        _m028 struct nt::proc_perf_check_context_t             check_context;                              //{ +0x0168    +0x0170    +0x0168    } | .CheckContext
        _m029 struct ppm::concurrency_accounting_t*            class_concurrency;                          //{ +0x01b0    +0x01c0    +0x01b0    } | .ClassConcurrency
        _m030 uint8_t                                          architectural_efficiency_class;             //{ +0x01b8    +0x01c8    +0x01b8    } | .ArchitecturalEfficiencyClass
        _m031 uint8_t                                          performance_scheduling_class;               //{ +0x01b9    +0x01c9    +0x01b9    } | .PerformanceSchedulingClass
        _m032 uint8_t                                          efficiency_scheduling_class;                //{ +0x01ba    +0x01ca    +0x01ba    } | .EfficiencySchedulingClass
        _m033 uint8_t                                          long_prior_qos_period;                      //{ +0x01bd    +0x01cd    +0x01bd    } | .LongPriorQosPeriod
        _m034 struct pop::fx_device_t*                         fx_device;                                  //{ +0x01d8    +0x01e8    +0x01d8    } | .FxDevice
        _m035 uint64_t                                         last_qos_transtion_tsc;                     //{ +0x01e0    +0x01f0    +0x01e0    } | .LastQosTranstionTsc
        _m036 uint64_t                                         qos_transition_hysteresis;                  //{ +0x01e8    +0x01f8    +0x01e8    } | .QosTransitionHysteresis
        _m037 enum nt::khetero_cpu_qos_t                       requested_qos_class;                        //{ +0x01f0    +0x0200    +0x01f0    } | .RequestedQosClass
        _m038 enum nt::khetero_cpu_qos_t                       resolved_qos_class;                         //{ +0x01f4    +0x0204    +0x01f4    } | .ResolvedQosClass
        _m039 uint16_t                                         qos_equivalency_mask;                       //{ +0x01f8    +0x0208    +0x01f8    } | .QosEquivalencyMask
        _m040 uint16_t                                         hw_feedback_table_index;                    //{ +0x01fa    +0x020e    +0x01fa    } | .HwFeedbackTableIndex
        _m041 uint8_t                                          hw_feedback_park_hint;                      //{ +0x01fc    +0x020c    +0x01fc    } | .HwFeedbackParkHint
        _m042 uint8_t                                          hetero_core_type;                           //{ +0x01ff    +0x020d    +0x01ff    } | .HeteroCoreType
                                                                                                         
        // Windows 10 v2004, Windows 10 v20H2                                                            
        //                                                                                               
        _m043 uint8_t                                          hw_feedback_performance_class;              //{ +0x01fd    +0x01fd    } | .HwFeedbackPerformanceClass
        _m044 uint8_t                                          hw_feedback_efficiency_class;               //{ +0x01fe    +0x01fe    } | .HwFeedbackEfficiencyClass
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m045 uint8_t                                          efficiency_class;                           //{ +0x0032    } | .EfficiencyClass
        _m046 uint8_t                                          scheduling_class;                           //{ +0x0033    } | .SchedulingClass
        _m047 struct nt::proc_perf_check_t*                    perf_check;                                 //{ +0x0168    } | .PerfCheck
        _m048 struct nt::proc_perf_domain_t*                   domain;                                     //{ +0x0170    } | .Domain
        _m049 struct nt::proc_perf_constraint_t*               perf_constraint;                            //{ +0x0178    } | .PerfConstraint
        _m050 struct nt::proc_perf_load_t*                     load;                                       //{ +0x0188    } | .Load
        _m051 struct nt::proc_perf_history_t*                  perf_history;                               //{ +0x0190    } | .PerfHistory
        _m052 uint8_t                                          guaranteed_performance_percent;             //{ +0x0198    } | .GuaranteedPerformancePercent
        _m053 uint32_t                                         latest_performance_percent;                 //{ +0x019c    } | .LatestPerformancePercent
        _m054 uint32_t                                         average_performance_percent;                //{ +0x01a0    } | .AveragePerformancePercent
        _m055 uint32_t                                         latest_affinitized_percent;                 //{ +0x01a4    } | .LatestAffinitizedPercent
        _m056 uint32_t                                         relative_performance;                       //{ +0x01a8    } | .RelativePerformance
        _m057 uint32_t                                         utility;                                    //{ +0x01ac    } | .Utility
        _m058 uint32_t                                         affinitized_utility;                        //{ +0x01b0    } | .AffinitizedUtility
                                                                                                         
        // Windows 11                                                                                    
        //                                                                                               
        _m059 volatile uint64_t                                idle_sequence_number;                       //{ +0x0020    } | .IdleSequenceNumber
        _m060 volatile int64_t                                 idle_wake_time;                             //{ +0x0030    } | .IdleWakeTime
        _m061 uint8_t                                          early_boot_architectural_efficiency_class;  //{ +0x01cb    } | .EarlyBootArchitecturalEfficiencyClass
        _m062 uint16_t                                         hw_feedback_table_offset;                   //{ +0x020a    } | .HwFeedbackTableOffset
        _m063 struct nt::khetro_hwfeedback_type_t*             hw_feedback_class_list;                     //{ +0x0210    } | .HwFeedbackClassList
        _m064 struct nt::processor_cycles_workload_class_t*    ee_cycles_workload_class_list;              //{ +0x0218    } | .EeCyclesWorkloadClassList
        _m065 struct nt::processor_cycles_workload_class_t*    perf_cycles_workload_class_list;            //{ +0x0220    } | .PerfCyclesWorkloadClassList
        _m066 uint8_t                                          not_used;                                   //{ +0x0228    } | .NotUsed
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_POWER_STATE.$", 0x200, true, 0xb7d3ea762e40c401 );                                          
        SDK_DYNAMIC_SIZE( processor_power_state_t );                                                     
    };                                                                                                   
};
#include "magic/processor_power_state_t.end.hpp"
