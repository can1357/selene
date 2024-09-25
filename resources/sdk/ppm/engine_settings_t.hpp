#pragma once
#include <sdkgen/support_library.hpp>
#include "policy_settings_mask_t.hpp"
#include "../nt/khetero_cpu_policy_t.hpp"

#include "magic/engine_settings_t.start.hpp"
namespace ppm
{
    // [struct _PPM_ENGINE_SETTINGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct engine_settings_t                                                                           
    {                                                                                                  
        using hetero_decrease_threshold_t = sdk::variant<sdk::array<uint8_t, 640>, sdk::array<sdk::array<uint8_t, 64>, 2>>;                                        
        using hetero_increase_threshold_t = sdk::variant<sdk::array<uint8_t, 640>, sdk::array<sdk::array<uint8_t, 64>, 2>>;                                        
                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                             
        _m000 sdk::array<union ppm::policy_settings_mask_t, 2> explicit_setting;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExplicitSetting
        _m001 uint8_t                                          throttling_policy;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThrottlingPolicy
        _m002 uint32_t                                         perf_time_check;                          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PerfTimeCheck
        _m003 sdk::array<uint8_t, 2>                           perf_history_count;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PerfHistoryCount
        _m004 sdk::array<uint8_t, 2>                           perf_min_policy;                          //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .PerfMinPolicy
        _m005 sdk::array<uint8_t, 2>                           perf_max_policy;                          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PerfMaxPolicy
        _m006 sdk::array<uint8_t, 2>                           perf_decrease_time;                       //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .PerfDecreaseTime
        _m007 sdk::array<uint8_t, 2>                           perf_increase_time;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PerfIncreaseTime
        _m008 sdk::array<uint8_t, 2>                           perf_decrease_policy;                     //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .PerfDecreasePolicy
        _m009 sdk::array<uint8_t, 2>                           perf_increase_policy;                     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PerfIncreasePolicy
        _m010 sdk::array<uint8_t, 2>                           perf_decrease_threshold;                  //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .PerfDecreaseThreshold
        _m011 sdk::array<uint8_t, 2>                           perf_increase_threshold;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PerfIncreaseThreshold
        _m012 uint32_t                                         perf_boost_policy;                        //{ +0x002c    +0x0034    +0x0034    +0x0034    } | .PerfBoostPolicy
        _m013 uint32_t                                         perf_boost_mode;                          //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .PerfBoostMode
        _m014 uint32_t                                         perf_reduction_tolerance;                 //{ +0x0034    +0x003c    +0x003c    +0x003c    } | .PerfReductionTolerance
        _m015 sdk::variant<uint32_t, sdk::array<uint32_t, 2>>  energy_perf_preference;                   //{ +0x0038    +0x0040    +0x0040    +0x0040    } | .EnergyPerfPreference
        _m016 uint32_t                                         autonomous_activity_window;               //{ +0x003c    +0x0048    +0x0048    +0x0048    } | .AutonomousActivityWindow
        _m017 uint8_t                                          autonomous_preference;                    //{ +0x0040    +0x004c    +0x004c    +0x004c    } | .AutonomousPreference
        _m018 sdk::array<uint8_t, 2>                           latency_hint_perf;                        //{ +0x0041    +0x004d    +0x004d    +0x004d    } | .LatencyHintPerf
        _m019 sdk::array<uint8_t, 2>                           latency_hint_unpark;                      //{ +0x0043    +0x004f    +0x004f    +0x004f    } | .LatencyHintUnpark
        _m020 uint8_t                                          duty_cycling;                             //{ +0x0045    +0x0078    +0x0078    +0x0078    } | .DutyCycling
        _m021 sdk::array<uint8_t, 2>                           parking_perf_state;                       //{ +0x0046    +0x0079    +0x0079    +0x0079    } | .ParkingPerfState
        _m022 uint8_t                                          distribute_utility;                       //{ +0x0048    +0x007b    +0x007b    +0x007b    } | .DistributeUtility
        _m023 uint8_t                                          core_parking_over_utilization_threshold;  //{ +0x0049    +0x007c    +0x007c    +0x007c    } | .CoreParkingOverUtilizationThreshold
        _m024 uint8_t                                          core_parking_concurrency_threshold;       //{ +0x004a    +0x007d    +0x007d    +0x007d    } | .CoreParkingConcurrencyThreshold
        _m025 uint8_t                                          core_parking_headroom_threshold;          //{ +0x004b    +0x007e    +0x007e    +0x007e    } | .CoreParkingHeadroomThreshold
        _m026 uint8_t                                          core_parking_distribution_threshold;      //{ +0x004c    +0x007f    +0x007f    +0x007f    } | .CoreParkingDistributionThreshold
        _m027 uint8_t                                          core_parking_decrease_policy;             //{ +0x004d    +0x0080    +0x0080    +0x0080    } | .CoreParkingDecreasePolicy
        _m028 uint8_t                                          core_parking_increase_policy;             //{ +0x004e    +0x0081    +0x0081    +0x0081    } | .CoreParkingIncreasePolicy
        _m029 uint32_t                                         core_parking_decrease_time;               //{ +0x0050    +0x0084    +0x0084    +0x0084    } | .CoreParkingDecreaseTime
        _m030 uint32_t                                         core_parking_increase_time;               //{ +0x0054    +0x0088    +0x0088    +0x0088    } | .CoreParkingIncreaseTime
        _m031 sdk::array<uint8_t, 2>                           core_parking_min_cores;                   //{ +0x0058    +0x008c    +0x008c    +0x008c    } | .CoreParkingMinCores
        _m032 sdk::array<uint8_t, 2>                           core_parking_max_cores;                   //{ +0x005a    +0x008e    +0x008e    +0x008e    } | .CoreParkingMaxCores
        _m033 uint8_t                                          allow_scaling;                            //{ +0x005c    +0x0094    +0x0094    +0x0094    } | .AllowScaling
        _m034 uint8_t                                          idle_disabled;                            //{ +0x005d    +0x0095    +0x0095    +0x0095    } | .IdleDisabled
        _m035 uint32_t                                         idle_time_check;                          //{ +0x0060    +0x0098    +0x0098    +0x0098    } | .IdleTimeCheck
        _m036 uint8_t                                          idle_demote_percent;                      //{ +0x0064    +0x009c    +0x009c    +0x009c    } | .IdleDemotePercent
        _m037 uint8_t                                          idle_promote_percent;                     //{ +0x0065    +0x009d    +0x009d    +0x009d    } | .IdlePromotePercent
        _m038 uint8_t                                          hetero_decrease_time;                     //{ +0x0066    +0x009f    +0x009f    +0x009f    } | .HeteroDecreaseTime
        _m039 uint8_t                                          hetero_increase_time;                     //{ +0x0067    +0x00a0    +0x00a0    +0x00a0    } | .HeteroIncreaseTime
        _m040 hetero_decrease_threshold_t                      hetero_decrease_threshold;                //{ +0x0068    +0x00a1    +0x00a1    +0x00a1    } | .HeteroDecreaseThreshold
        _m041 hetero_increase_threshold_t                      hetero_increase_threshold;                //{ +0x02e8    +0x05a1    +0x0121    +0x05a1    } | .HeteroIncreaseThreshold
        _m042 uint8_t                                          class0_floor_performance;                 //{ +0x0568    +0x0aa1    +0x01a1    +0x0aa1    } | .Class0FloorPerformance
        _m043 uint8_t                                          class1_initial_performance;               //{ +0x0569    +0x0aa2    +0x01a2    +0x0aa2    } | .Class1InitialPerformance
                                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                             
        _m044 sdk::array<uint32_t, 2>                          perf_frequency_cap;                       //{ +0x002c    +0x002c    +0x002c    } | .PerfFrequencyCap
        _m045 sdk::array<uint32_t, 2>                          responsiveness_disable_threshold;         //{ +0x0054    +0x0054    +0x0054    } | .ResponsivenessDisableThreshold
        _m046 sdk::array<uint32_t, 2>                          responsiveness_enable_threshold;          //{ +0x005c    +0x005c    +0x005c    } | .ResponsivenessEnableThreshold
        _m047 sdk::array<uint8_t, 2>                           responsiveness_disable_time;              //{ +0x0064    +0x0064    +0x0064    } | .ResponsivenessDisableTime
        _m048 sdk::array<uint8_t, 2>                           responsiveness_enable_time;               //{ +0x0066    +0x0066    +0x0066    } | .ResponsivenessEnableTime
        _m049 sdk::array<uint32_t, 2>                          responsiveness_epp_ceiling;               //{ +0x0068    +0x0068    +0x0068    } | .ResponsivenessEppCeiling
        _m050 sdk::array<uint32_t, 2>                          responsiveness_perf_floor;                //{ +0x0070    +0x0070    +0x0070    } | .ResponsivenessPerfFloor
        _m051 uint32_t                                         soft_park_latency;                        //{ +0x0090    +0x0090    +0x0090    } | .SoftParkLatency
        _m052 uint8_t                                          idle_state_max;                           //{ +0x009e    +0x009e    +0x009e    } | .IdleStateMax
        _m053 sdk::array<enum nt::khetero_cpu_policy_t, 2>     thread_policies;                          //{ +0x0aa4    +0x01a8    +0x0aa4    } | .ThreadPolicies
                                                                                                       
        // Windows 11                                                                                  
        //                                                                                             
        _m054 uint32_t                                         short_thread_runtime_threshold;           //{ +0x01a4    } | .ShortThreadRuntimeThreshold
        _m055 sdk::array<uint8_t, 2>                           arch_class_lower_threshold;               //{ +0x01b0    } | .ArchClassLowerThreshold
        _m056 sdk::array<uint8_t, 2>                           arch_class_upper_threshold;               //{ +0x01b2    } | .ArchClassUpperThreshold
        _m057 uint8_t                                          module_unpark_policy;                     //{ +0x01b4    } | .ModuleUnparkPolicy
        _m058 uint8_t                                          complex_unpark_policy;                    //{ +0x01b5    } | .ComplexUnparkPolicy
        _m059 uint8_t                                          smt_unpark_policy;                        //{ +0x01b6    } | .SmtUnparkPolicy
                                                                                                       
        SDK_MAGIC_PROPERTIES( "_PPM_ENGINE_SETTINGS.$", 0xab0, true, 0x32a0549efa946d5a );                                        
        SDK_DYNAMIC_SIZE( engine_settings_t );                                                         
    };                                                                                                 
};
#include "magic/engine_settings_t.end.hpp"
