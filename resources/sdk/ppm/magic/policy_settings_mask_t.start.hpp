#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_POLICY_SETTINGS_MASK.Value", value, 0x0, 0x40, true, 0x5e7c038bd5d5dc5)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfDecreaseTime", perf_decrease_time, 0x0, 0x1, true, 0x8e809547358705c8, 1, uint32_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfIncreaseTime", perf_increase_time, 0x1, 0x1, true, 0xfe7fbb275deff1b2, 1, uint32_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfDecreasePolicy", perf_decrease_policy, 0x2, 0x1, true, 0x789221d53fbaa593, 1, uint32_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfIncreasePolicy", perf_increase_policy, 0x3, 0x1, true, 0xef4762e3cb96220b, 1, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfDecreaseThreshold", perf_decrease_threshold, 0x4, 0x1, true, 0xd3a0edb41275d2c5, 1, uint32_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfIncreaseThreshold", perf_increase_threshold, 0x5, 0x1, true, 0x43f0623a10b87f4f, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfMinPolicy", perf_min_policy, 0x6, 0x1, true, 0xd60ab9ceb7f32a65, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfMaxPolicy", perf_max_policy, 0x7, 0x1, true, 0x19e3cbd87b1d9f36, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfTimeCheck", perf_time_check, 0x8, 0x1, true, 0x571dfaf37a08fcc5, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfBoostPolicy", perf_boost_policy, 0x9, 0x1, true, 0x90ff0155bfcc2e51, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfBoostMode", perf_boost_mode, 0xa, 0x1, true, 0xdc80e0be6c741aaa, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.AllowThrottling", allow_throttling, 0xb, 0x1, true, 0x5174fbd26089d5cd, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.PerfHistoryCount", perf_history_count, 0xc, 0x1, true, 0x40589a7795c52fc8, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ParkingPerfState", parking_perf_state, 0xd, 0x1, true, 0xe21192394edb7dac, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.LatencyHintPerf", latency_hint_perf, 0xe, 0x1, true, 0x962c0d61cbcf6b2, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.LatencyHintUnpark", latency_hint_unpark, 0xf, 0x1, true, 0xc7c08313d1b06698, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingMinCores", core_parking_min_cores, 0x10, 0x1, true, 0xe02aa23b83542859, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingMaxCores", core_parking_max_cores, 0x11, 0x1, true, 0x34bf7c53b5c13fe4, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingDecreasePolicy", core_parking_decrease_policy, 0x12, 0x1, true, 0xb37d25c9f5828188, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingIncreasePolicy", core_parking_increase_policy, 0x13, 0x1, true, 0x66515f6b99039362, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingDecreaseTime", core_parking_decrease_time, 0x14, 0x1, true, 0xbb569ca8f56d0415, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingIncreaseTime", core_parking_increase_time, 0x15, 0x1, true, 0x3432af48c4cf36f5, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingOverUtilizationThreshold", core_parking_over_utilization_threshold, 0x16, 0x1, true, 0x265eaaa6ef9c9406, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingDistributeUtility", core_parking_distribute_utility, 0x17, 0x1, true, 0x6fde46a51882b4df, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingConcurrencyThreshold", core_parking_concurrency_threshold, 0x18, 0x1, true, 0xa78fee48a48cb9f7, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingHeadroomThreshold", core_parking_headroom_threshold, 0x19, 0x1, true, 0x7fbd440e2a302d19, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.CoreParkingDistributionThreshold", core_parking_distribution_threshold, 0x1a, 0x1, true, 0x9efb221dd386028, 1, uint32_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.IdleAllowScaling", idle_allow_scaling, 0x1b, 0x1, true, 0x57da859aef076fde, 1, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.IdleDisable", idle_disable, 0x1c, 0x1, true, 0xdcfd9436d367e3b5, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.IdleTimeCheck", idle_time_check, 0x1d, 0x1, true, 0xba9022dd9ab8e03e, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.IdleDemoteThreshold", idle_demote_threshold, 0x1e, 0x1, true, 0x318731c90470bb2d, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.IdlePromoteThreshold", idle_promote_threshold, 0x1f, 0x1, true, 0xd58cf3ad3d3896b6, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.HeteroDecreaseTime", hetero_decrease_time, 0x20, 0x1, true, 0xa689369b94bb7e19, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.HeteroIncreaseTime", hetero_increase_time, 0x21, 0x1, true, 0x7c8700b3fd019ab0, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.HeteroDecreaseThreshold", hetero_decrease_threshold, 0x22, 0x1, true, 0x53c559c66664fa4d, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.HeteroIncreaseThreshold", hetero_increase_threshold, 0x23, 0x1, true, 0x6a1fbb91339f3cb2, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.Class0FloorPerformance", class0_floor_performance, 0x24, 0x1, true, 0x1ea4e2584e7a38bc, 1, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.Class1InitialPerformance", class1_initial_performance, 0x25, 0x1, true, 0x7dc0c678b30dca9b, 1, uint32_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.EnergyPerfPreference", energy_perf_preference, 0x26, 0x1, true, 0x3c8379dd07c3a1b0, 1, uint32_t)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.AutonomousActivityWindow", autonomous_activity_window, 0x27, 0x1, true, 0xc30f2a4cdec702d8, 1, uint32_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.AutonomousMode", autonomous_mode, 0x28, 0x1, true, 0x6bfb483c5a01d686, 1, uint32_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.DutyCycling", duty_cycling, 0x29, 0x1, true, 0xbdea45a9ac5cf461, 1, uint32_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.FrequencyCap", frequency_cap, 0x2a, 0x1, true, 0xc7a71f24594e33bc, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ThreadPolicy", thread_policy, 0x2b, 0x1, true, 0x5c5bda6a7e4a7a6e, 1, uint32_t)
#define _m045 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ShortThreadPolicy", short_thread_policy, 0x2c, 0x1, true, 0x551e47069108a8ef, 1, uint32_t)
#define _m046 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.IdleStateMax", idle_state_max, 0x2d, 0x1, true, 0x3aff257b3cf92cf7, 1, uint32_t)
#define _m047 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ResponsivenessDisableThreshold", responsiveness_disable_threshold, 0x2e, 0x1, true, 0x7a568dd51bc1143f, 1, uint32_t)
#define _m048 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ResponsivenessEnableThreshold", responsiveness_enable_threshold, 0x2f, 0x1, true, 0xb370f9d015f5d732, 1, uint32_t)
#define _m049 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ResponsivenessDisableTime", responsiveness_disable_time, 0x30, 0x1, true, 0x9b60f509f40a796a, 1, uint32_t)
#define _m050 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ResponsivenessEnableTime", responsiveness_enable_time, 0x31, 0x1, true, 0x4c013d6fe1b641ba, 1, uint32_t)
#define _m051 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ResponsivenessEppCeiling", responsiveness_epp_ceiling, 0x32, 0x1, true, 0x9e384136798d7ecd, 1, uint32_t)
#define _m052 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ResponsivenessPerfFloor", responsiveness_perf_floor, 0x33, 0x1, true, 0x41eb9e79a012bcb1, 1, uint32_t)
#define _m053 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.SoftParkLatency", soft_park_latency, 0x34, 0x1, true, 0x5167b2385b037ae1, 1, uint32_t)
#define _m054 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ShortThreadRuntimeThreshold", short_thread_runtime_threshold, 0x0, 0x0, false, 0xe3ead074b1a38682, 1, uint32_t)
#define _m055 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ShortThreadArchClassUpperThreshold", short_thread_arch_class_upper_threshold, 0x0, 0x0, false, 0xb35cb1614fa8c0b8, 1, uint32_t)
#define _m056 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ShortThreadArchClassLowerThreshold", short_thread_arch_class_lower_threshold, 0x0, 0x0, false, 0x1b5c402c83945c24, 1, uint32_t)
#define _m057 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.LongThreadArchClassUpperThreshold", long_thread_arch_class_upper_threshold, 0x0, 0x0, false, 0xf35bcbece913eacf, 1, uint32_t)
#define _m058 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.LongThreadArchClassLowerThreshold", long_thread_arch_class_lower_threshold, 0x0, 0x0, false, 0x1b56d87e2cfd6bb2, 1, uint32_t)
#define _m059 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ModuleUnparkPolicy", module_unpark_policy, 0x0, 0x0, false, 0xaec2f4a49b090b3c, 1, uint32_t)
#define _m060 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.ComplexUnparkPolicy", complex_unpark_policy, 0x0, 0x0, false, 0x63813c6c753ce736, 1, uint32_t)
#define _m061 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_POLICY_SETTINGS_MASK.SmtUnparkPolicy", smt_unpark_policy, 0x0, 0x0, false, 0x61cd47480e0763fc, 1, uint32_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#endif