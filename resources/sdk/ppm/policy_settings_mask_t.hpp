#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/policy_settings_mask_t.start.hpp"
namespace ppm
{
    // [union _PPM_POLICY_SETTINGS_MASK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union policy_settings_mask_t                               
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                     
        _m000 uint64_t value;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m001 uint1_t  perf_decrease_time;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PerfDecreaseTime
        _m002 uint1_t  perf_increase_time;                       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PerfIncreaseTime
        _m003 uint1_t  perf_decrease_policy;                     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PerfDecreasePolicy
        _m004 uint1_t  perf_increase_policy;                     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PerfIncreasePolicy
        _m005 uint1_t  perf_decrease_threshold;                  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PerfDecreaseThreshold
        _m006 uint1_t  perf_increase_threshold;                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PerfIncreaseThreshold
        _m007 uint1_t  perf_min_policy;                          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PerfMinPolicy
        _m008 uint1_t  perf_max_policy;                          //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PerfMaxPolicy
        _m009 uint1_t  perf_time_check;                          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PerfTimeCheck
        _m010 uint1_t  perf_boost_policy;                        //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PerfBoostPolicy
        _m011 uint1_t  perf_boost_mode;                          //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PerfBoostMode
        _m012 uint1_t  allow_throttling;                         //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .AllowThrottling
        _m013 uint1_t  perf_history_count;                       //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PerfHistoryCount
        _m014 uint1_t  parking_perf_state;                       //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .ParkingPerfState
        _m015 uint1_t  latency_hint_perf;                        //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .LatencyHintPerf
        _m016 uint1_t  latency_hint_unpark;                      //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .LatencyHintUnpark
        _m017 uint1_t  core_parking_min_cores;                   //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .CoreParkingMinCores
        _m018 uint1_t  core_parking_max_cores;                   //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .CoreParkingMaxCores
        _m019 uint1_t  core_parking_decrease_policy;             //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .CoreParkingDecreasePolicy
        _m020 uint1_t  core_parking_increase_policy;             //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .CoreParkingIncreasePolicy
        _m021 uint1_t  core_parking_decrease_time;               //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .CoreParkingDecreaseTime
        _m022 uint1_t  core_parking_increase_time;               //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .CoreParkingIncreaseTime
        _m023 uint1_t  core_parking_over_utilization_threshold;  //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .CoreParkingOverUtilizationThreshold
        _m024 uint1_t  core_parking_distribute_utility;          //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .CoreParkingDistributeUtility
        _m025 uint1_t  core_parking_concurrency_threshold;       //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .CoreParkingConcurrencyThreshold
        _m026 uint1_t  core_parking_headroom_threshold;          //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .CoreParkingHeadroomThreshold
        _m027 uint1_t  core_parking_distribution_threshold;      //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .CoreParkingDistributionThreshold
        _m028 uint1_t  idle_allow_scaling;                       //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .IdleAllowScaling
        _m029 uint1_t  idle_disable;                             //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .IdleDisable
        _m030 uint1_t  idle_time_check;                          //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .IdleTimeCheck
        _m031 uint1_t  idle_demote_threshold;                    //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .IdleDemoteThreshold
        _m032 uint1_t  idle_promote_threshold;                   //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .IdlePromoteThreshold
        _m033 uint1_t  hetero_decrease_time;                     //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .HeteroDecreaseTime
        _m034 uint1_t  hetero_increase_time;                     //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .HeteroIncreaseTime
        _m035 uint1_t  hetero_decrease_threshold;                //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .HeteroDecreaseThreshold
        _m036 uint1_t  hetero_increase_threshold;                //{ +0x0004@3  +0x0004@3  +0x0004@3  +0x0004@3  } | .HeteroIncreaseThreshold
        _m037 uint1_t  class0_floor_performance;                 //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .Class0FloorPerformance
        _m038 uint1_t  class1_initial_performance;               //{ +0x0004@5  +0x0004@5  +0x0004@5  +0x0004@5  } | .Class1InitialPerformance
        _m039 uint1_t  energy_perf_preference;                   //{ +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  } | .EnergyPerfPreference
        _m040 uint1_t  autonomous_activity_window;               //{ +0x0004@7  +0x0004@7  +0x0004@7  +0x0004@7  } | .AutonomousActivityWindow
        _m041 uint1_t  autonomous_mode;                          //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .AutonomousMode
        _m042 uint1_t  duty_cycling;                             //{ +0x0004@9  +0x0004@9  +0x0004@9  +0x0004@9  } | .DutyCycling
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                     
        _m043 uint1_t  frequency_cap;                            //{ +0x0004@10 +0x0004@10 +0x0004@10 } | .FrequencyCap
        _m044 uint1_t  thread_policy;                            //{ +0x0004@11 +0x0004@11 +0x0004@11 } | .ThreadPolicy
        _m045 uint1_t  short_thread_policy;                      //{ +0x0004@12 +0x0004@12 +0x0004@12 } | .ShortThreadPolicy
        _m046 uint1_t  idle_state_max;                           //{ +0x0004@13 +0x0004@13 +0x0004@13 } | .IdleStateMax
        _m047 uint1_t  responsiveness_disable_threshold;         //{ +0x0004@14 +0x0004@14 +0x0004@14 } | .ResponsivenessDisableThreshold
        _m048 uint1_t  responsiveness_enable_threshold;          //{ +0x0004@15 +0x0004@15 +0x0004@15 } | .ResponsivenessEnableThreshold
        _m049 uint1_t  responsiveness_disable_time;              //{ +0x0004@16 +0x0004@16 +0x0004@16 } | .ResponsivenessDisableTime
        _m050 uint1_t  responsiveness_enable_time;               //{ +0x0004@17 +0x0004@17 +0x0004@17 } | .ResponsivenessEnableTime
        _m051 uint1_t  responsiveness_epp_ceiling;               //{ +0x0004@18 +0x0004@18 +0x0004@18 } | .ResponsivenessEppCeiling
        _m052 uint1_t  responsiveness_perf_floor;                //{ +0x0004@19 +0x0004@19 +0x0004@19 } | .ResponsivenessPerfFloor
        _m053 uint1_t  soft_park_latency;                        //{ +0x0004@20 +0x0004@20 +0x0004@20 } | .SoftParkLatency
                                                               
        // Windows 11                                          
        //                                                     
        _m054 uint1_t  short_thread_runtime_threshold;           //{ +0x0004@21 } | .ShortThreadRuntimeThreshold
        _m055 uint1_t  short_thread_arch_class_upper_threshold;  //{ +0x0004@22 } | .ShortThreadArchClassUpperThreshold
        _m056 uint1_t  short_thread_arch_class_lower_threshold;  //{ +0x0004@23 } | .ShortThreadArchClassLowerThreshold
        _m057 uint1_t  long_thread_arch_class_upper_threshold;   //{ +0x0004@24 } | .LongThreadArchClassUpperThreshold
        _m058 uint1_t  long_thread_arch_class_lower_threshold;   //{ +0x0004@25 } | .LongThreadArchClassLowerThreshold
        _m059 uint1_t  module_unpark_policy;                     //{ +0x0004@26 } | .ModuleUnparkPolicy
        _m060 uint1_t  complex_unpark_policy;                    //{ +0x0004@27 } | .ComplexUnparkPolicy
        _m061 uint1_t  smt_unpark_policy;                        //{ +0x0004@28 } | .SmtUnparkPolicy
                                                               
        SDK_MAGIC_PROPERTIES( "_PPM_POLICY_SETTINGS_MASK.$", 0x8, true, 0xdd2d54cfc918061e );                                        
        SDK_FIXED_SIZE( policy_settings_mask_t, 0x8 );                                        
    };                                                         
};
#include "magic/policy_settings_mask_t.end.hpp"
SDK_VERIFY( union ppm::policy_settings_mask_t, 0x8 );
