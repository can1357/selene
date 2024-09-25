#pragma once
#include <sdkgen/support_library.hpp>
#include "kaffinity_ex_t.hpp"
#include "processor_presence_t.hpp"
#include "proc_perf_qos_class_policy_t.hpp"
#include "../perf/control_state_selection_t.hpp"

#include "magic/proc_perf_domain_t.start.hpp"
namespace nt
{
    struct kprcb_t;
    struct proc_perf_constraint_t;
    struct proc_perf_check_context_t;

    // [struct _PROC_PERF_DOMAIN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_domain_t                                                                   
    {                                                                                           
        using master_t =                             sdk::variant<struct nt::kprcb_t*, struct nt::proc_perf_check_context_t*>;                                         
        using perf_selection_handler_t =             sdk::variant<sdk::function<uint32_t(uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint64_t*)>*, sdk::function<uint32_t(uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint64_t*)>*>;                                         
        using perf_control_handler_t =               sdk::variant<sdk::function<void(uint64_t, uint64_t, uint32_t, uint32_t, uint32_t, uint8_t, uint8_t, uint8_t)>*, sdk::function<void(uint64_t, struct perf::control_state_selection_t*, uint8_t, uint8_t)>*>;                                         
        using perf_control_handler_hidden_t =        sdk::function<void(uint64_t, struct perf::control_state_selection_t*, uint8_t, uint8_t)>*;                                         
        using domain_perf_control_handler_t =        sdk::function<void(uint64_t, struct perf::control_state_selection_t*, uint8_t, uint8_t)>*;                                         
        using qos_policies_t =                       sdk::array<struct nt::proc_perf_qos_class_policy_t, 5>;                                         
        using qos_selection_t =                      sdk::array<struct perf::control_state_selection_t, 5>;                                         
        using perf_update_hw_debug_data_t =          sdk::function<void(uint64_t, uint64_t, uint8_t)>*;                                         
        using perf_query_proc_measurement_values_t = sdk::function<int32_t(uint32_t, uint32_t*, void*, uint32_t)>*;                                         
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                      
        _m000 nt::list_entry_t                         link;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m001 master_t                                 master;                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Master
        _m002 struct nt::kaffinity_ex_t                members;                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Members
        _m003 uint32_t                                 processor_count;                           //{ +0x00c0    +0x00c8    +0x0128    +0x00c8    } | .ProcessorCount
        _m004 uint8_t                                  efficiency_class;                          //{ +0x00c4    +0x00cc    +0x012c    +0x00cc    } | .EfficiencyClass
        _m005 uint8_t                                  nominal_performance_class;                 //{ +0x00c5    +0x00cd    +0x012d    +0x00cd    } | .NominalPerformanceClass
        _m006 uint8_t                                  highest_performance_class;                 //{ +0x00c6    +0x00ce    +0x012e    +0x00ce    } | .HighestPerformanceClass
        _m007 struct nt::proc_perf_constraint_t*       processors;                                //{ +0x00c8    +0x00d8    +0x0138    +0x00d8    } | .Processors
        _m008 sdk::function<void(uint64_t*)>*          get_ffh_throttle_state;                    //{ +0x00d0    +0x00e0    +0x0140    +0x00e0    } | .GetFFHThrottleState
        _m009 sdk::function<void(uint64_t, uint32_t)>* time_window_handler;                       //{ +0x00d8    +0x00e8    +0x0148    +0x00e8    } | .TimeWindowHandler
        _m010 sdk::function<void(uint64_t, uint32_t)>* boost_policy_handler;                      //{ +0x00e0    +0x00f0    +0x0150    +0x00f0    } | .BoostPolicyHandler
        _m011 sdk::function<void(uint64_t, uint32_t)>* boost_mode_handler;                        //{ +0x00e8    +0x00f8    +0x0158    +0x00f8    } | .BoostModeHandler
        _m012 sdk::function<void(uint64_t, uint32_t)>* autonomous_activity_window_handler;        //{ +0x00f8    +0x0100    +0x0160    +0x0100    } | .AutonomousActivityWindowHandler
        _m013 sdk::function<void(uint64_t, uint32_t)>* autonomous_mode_handler;                   //{ +0x0100    +0x0108    +0x0168    +0x0108    } | .AutonomousModeHandler
        _m014 sdk::function<void(uint64_t)>*           reinitialize_handler;                      //{ +0x0108    +0x0110    +0x0170    +0x0110    } | .ReinitializeHandler
        _m015 perf_selection_handler_t                 perf_selection_handler;                    //{ +0x0110    +0x0118    +0x0178    +0x0118    } | .PerfSelectionHandler
        _m016 perf_control_handler_t                   perf_control_handler;                      //{ +0x0118    +0x0120    +0x0180    +0x0120    } | .PerfControlHandler
        _m017 uint32_t                                 max_frequency;                             //{ +0x0120    +0x0138    +0x01b4    +0x0138    } | .MaxFrequency
        _m018 uint32_t                                 nominal_frequency;                         //{ +0x0124    +0x013c    +0x01b8    +0x013c    } | .NominalFrequency
        _m019 uint32_t                                 max_percent;                               //{ +0x0128    +0x0140    +0x01bc    +0x0140    } | .MaxPercent
        _m020 uint32_t                                 min_perf_percent;                          //{ +0x012c    +0x0144    +0x01c0    +0x0144    } | .MinPerfPercent
        _m021 uint32_t                                 min_throttle_percent;                      //{ +0x0130    +0x0148    +0x01c4    +0x0148    } | .MinThrottlePercent
        _m022 uint64_t                                 minimum_relative_performance;              //{ +0x0138    +0x0150    +0x01d0    +0x0150    } | .MinimumRelativePerformance
        _m023 uint64_t                                 nominal_relative_performance;              //{ +0x0140    +0x0158    +0x01d8    +0x0158    } | .NominalRelativePerformance
        _m024 uint8_t                                  coordination;                              //{ +0x0148    +0x0161    +0x01e1    +0x0161    } | .Coordination
        _m025 uint8_t                                  hard_platform_cap;                         //{ +0x0149    +0x0162    +0x01e2    +0x0162    } | .HardPlatformCap
        _m026 uint8_t                                  affinitize_control;                        //{ +0x014a    +0x0163    +0x01e3    +0x0163    } | .AffinitizeControl
        _m027 uint8_t                                  efficient_throttle;                        //{ +0x014b    +0x0164    +0x01e4    +0x0164    } | .EfficientThrottle
        _m028 uint8_t                                  autonomous_mode;                           //{ +0x014c    +0x0167    +0x01f8    +0x0167    } | .AutonomousMode
        _m029 uint8_t                                  provide_guidance;                          //{ +0x018d    +0x0168    +0x01fa    +0x0168    } | .ProvideGuidance
        _m030 uint32_t                                 desired_percent;                           //{ +0x0158    +0x016c    +0x01fc    +0x016c    } | .DesiredPercent
        _m031 uint32_t                                 guaranteed_percent;                        //{ +0x016c    +0x0170    +0x0200    +0x0170    } | .GuaranteedPercent
        _m032 uint64_t                                 perf_change_time;                          //{ +0x0180    +0x02f0    +0x0418    +0x02f0    } | .PerfChangeTime
        _m033 uint32_t                                 perf_change_interval_count;                //{ +0x0188    +0x02f8    +0x0420    +0x02f8    } | .PerfChangeIntervalCount
        _m034 uint8_t                                  force;                                     //{ +0x018c    +0x02fc    +0x0424    +0x02fc    } | .Force
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                      
        _m035 uint64_t                                 domain_context;                            //{ +0x00c0    +0x0120    +0x00c0    } | .DomainContext
        _m036 enum nt::processor_presence_t            presence;                                  //{ +0x00d0    +0x0130    +0x00d0    } | .Presence
        _m037 perf_control_handler_hidden_t            perf_control_handler_hidden;               //{ +0x0128    +0x0188    +0x0128    } | .PerfControlHandlerHidden
        _m038 domain_perf_control_handler_t            domain_perf_control_handler;               //{ +0x0130    +0x0190    +0x0130    } | .DomainPerfControlHandler
        _m039 uint32_t                                 advertized_maximum_frequency;              //{ +0x014c    +0x01c8    +0x014c    } | .AdvertizedMaximumFrequency
        _m040 uint8_t                                  nominal_relative_performance_percent;      //{ +0x0160    +0x01e0    +0x0160    } | .NominalRelativePerformancePercent
        _m041 uint8_t                                  allow_scheduler_directed_perf_states;      //{ +0x0165    +0x01e5    +0x0165    } | .AllowSchedulerDirectedPerfStates
        _m042 uint8_t                                  initiate_all_processors;                   //{ +0x0166    +0x01e6    +0x0166    } | .InitiateAllProcessors
        _m043 uint8_t                                  engage_responsiveness_overrides;           //{ +0x0174    +0x0204    +0x0174    } | .EngageResponsivenessOverrides
        _m044 qos_policies_t                           qos_policies;                              //{ +0x0178    +0x0208    +0x0178    } | .QosPolicies
        _m045 sdk::array<uint32_t, 5>                  qos_disable_reasons;                       //{ +0x0204    +0x02cc    +0x0204    } | .QosDisableReasons
        _m046 sdk::array<uint16_t, 5>                  qos_equivalency_masks;                     //{ +0x0218    +0x02e8    +0x0218    } | .QosEquivalencyMasks
        _m047 uint8_t                                  qos_supported;                             //{ +0x0222    +0x02f6    +0x0222    } | .QosSupported
        _m048 volatile uint32_t                        selection_generation;                      //{ +0x0224    +0x02f8    +0x0224    } | .SelectionGeneration
        _m049 qos_selection_t                          qos_selection;                             //{ +0x0228    +0x0300    +0x0228    } | .QosSelection
        _m050 uint8_t                                  update;                                    //{ +0x02fd    +0x0425    +0x02fd    } | .Update
        _m051 uint8_t                                  apply;                                     //{ +0x02fe    +0x0426    +0x02fe    } | .Apply
                                                                                                
        // Windows 10 v1607                                                                     
        //                                                                                      
        _m052 sdk::function<void(uint64_t, uint32_t)>* energy_perf_preference_handler;            //{ +0x00f0    } | .EnergyPerfPreferenceHandler
        _m053 uint32_t                                 selected_percent;                          //{ +0x0150    } | .SelectedPercent
        _m054 uint32_t                                 selected_frequency;                        //{ +0x0154    } | .SelectedFrequency
        _m055 uint32_t                                 max_policy_percent;                        //{ +0x015c    } | .MaxPolicyPercent
        _m056 uint32_t                                 min_policy_percent;                        //{ +0x0160    } | .MinPolicyPercent
        _m057 uint32_t                                 constrained_max_percent;                   //{ +0x0164    } | .ConstrainedMaxPercent
        _m058 uint32_t                                 constrained_min_percent;                   //{ +0x0168    } | .ConstrainedMinPercent
        _m059 uint32_t                                 tolerance_percent;                         //{ +0x0170    } | .TolerancePercent
        _m060 uint64_t                                 selected_state;                            //{ +0x0178    } | .SelectedState
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m061 perf_update_hw_debug_data_t              perf_update_hw_debug_data;                 //{ +0x0198    } | .PerfUpdateHwDebugData
        _m062 sdk::function<uint32_t()>*               perf_query_proc_measurement_capabilities;  //{ +0x01a0    } | .PerfQueryProcMeasurementCapabilities
        _m063 perf_query_proc_measurement_values_t     perf_query_proc_measurement_values;        //{ +0x01a8    } | .PerfQueryProcMeasurementValues
        _m064 uint32_t                                 id;                                        //{ +0x01b0    } | .Id
        _m065 uint8_t                                  allow_vm_perf_selection;                   //{ +0x01e7    } | .AllowVmPerfSelection
        _m066 uint32_t                                 vm_frequency_step_mhz;                     //{ +0x01e8    } | .VmFrequencyStepMhz
        _m067 uint32_t                                 vm_highest_frequency_mhz;                  //{ +0x01ec    } | .VmHighestFrequencyMhz
        _m068 uint32_t                                 vm_nominal_frequency_mhz;                  //{ +0x01f0    } | .VmNominalFrequencyMhz
        _m069 uint32_t                                 vm_lowest_frequency_mhz;                   //{ +0x01f4    } | .VmLowestFrequencyMhz
        _m070 uint8_t                                  autonomous_capability;                     //{ +0x01f9    } | .AutonomousCapability
                                                                                                
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_DOMAIN.$", 0x300, true, 0xfec51154462f9879 );                                         
        SDK_DYNAMIC_SIZE( proc_perf_domain_t );                                                 
    };                                                                                          
};
#include "magic/proc_perf_domain_t.end.hpp"
