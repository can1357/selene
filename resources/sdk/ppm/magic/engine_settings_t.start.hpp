#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union ppm::policy_settings_mask_t, 2>), "_PPM_ENGINE_SETTINGS.ExplicitSetting", explicit_setting, 0x0, 0x80, true, 0xaf5e69c018fa2245)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.ThrottlingPolicy", throttling_policy, 0x80, 0x8, true, 0x44a7f658e2b5aa36)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.PerfTimeCheck", perf_time_check, 0xa0, 0x20, true, 0x943e9db1d87c1b1d)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfHistoryCount", perf_history_count, 0xc0, 0x10, true, 0x5d46afe7e86fab71)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfMinPolicy", perf_min_policy, 0xd0, 0x10, true, 0xd2c31742431dac3c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfMaxPolicy", perf_max_policy, 0xe0, 0x10, true, 0xd8600481d10d4887)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfDecreaseTime", perf_decrease_time, 0xf0, 0x10, true, 0x4890245da2ac24b0)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfIncreaseTime", perf_increase_time, 0x100, 0x10, true, 0x1eb708edb4d2a92e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfDecreasePolicy", perf_decrease_policy, 0x110, 0x10, true, 0x537839ca526783be)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfIncreasePolicy", perf_increase_policy, 0x120, 0x10, true, 0x61d941d08ee29827)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfDecreaseThreshold", perf_decrease_threshold, 0x130, 0x10, true, 0xde468cb4f2499823)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.PerfIncreaseThreshold", perf_increase_threshold, 0x140, 0x10, true, 0xaddad4701cedee1)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.PerfBoostPolicy", perf_boost_policy, 0x1a0, 0x20, true, 0xf84656461b1c754b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.PerfBoostMode", perf_boost_mode, 0x1c0, 0x20, true, 0xd4d0f60851e00671)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.PerfReductionTolerance", perf_reduction_tolerance, 0x1e0, 0x20, true, 0xd013048373dc3bbf)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint32_t, sdk::array<uint32_t, 2>>), "_PPM_ENGINE_SETTINGS.EnergyPerfPreference", energy_perf_preference, 0x200, 0x40, true, 0xab0db8111cfd3106)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.AutonomousActivityWindow", autonomous_activity_window, 0x240, 0x20, true, 0x64a09e4854a86fa0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.AutonomousPreference", autonomous_preference, 0x260, 0x8, true, 0xa12acce44eeafe60)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.LatencyHintPerf", latency_hint_perf, 0x268, 0x10, true, 0x33306c564243f8f5)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.LatencyHintUnpark", latency_hint_unpark, 0x278, 0x10, true, 0x9212669aa7b41269)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.DutyCycling", duty_cycling, 0x3c0, 0x8, true, 0x886db01b7cbba8ae)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.ParkingPerfState", parking_perf_state, 0x3c8, 0x10, true, 0xd942a99e2ec22b17)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.DistributeUtility", distribute_utility, 0x3d8, 0x8, true, 0xe3d18285d2d5df24)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.CoreParkingOverUtilizationThreshold", core_parking_over_utilization_threshold, 0x3e0, 0x8, true, 0xf31a08eb213edc44)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.CoreParkingConcurrencyThreshold", core_parking_concurrency_threshold, 0x3e8, 0x8, true, 0x96e12832c180ee87)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.CoreParkingHeadroomThreshold", core_parking_headroom_threshold, 0x3f0, 0x8, true, 0x400fee927719d033)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.CoreParkingDistributionThreshold", core_parking_distribution_threshold, 0x3f8, 0x8, true, 0x7d20ba5d00257fa5)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.CoreParkingDecreasePolicy", core_parking_decrease_policy, 0x400, 0x8, true, 0x3cd9ed6e58f7a1a7)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.CoreParkingIncreasePolicy", core_parking_increase_policy, 0x408, 0x8, true, 0x564f90db04dca169)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.CoreParkingDecreaseTime", core_parking_decrease_time, 0x420, 0x20, true, 0xf8e375aa6f10705b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.CoreParkingIncreaseTime", core_parking_increase_time, 0x440, 0x20, true, 0xa6a0ad14e4701641)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.CoreParkingMinCores", core_parking_min_cores, 0x460, 0x10, true, 0x92578caa11dadc37)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.CoreParkingMaxCores", core_parking_max_cores, 0x470, 0x10, true, 0x7654d46177cfa45)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.AllowScaling", allow_scaling, 0x4a0, 0x8, true, 0x2fb3b2eeb775302c)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.IdleDisabled", idle_disabled, 0x4a8, 0x8, true, 0xdeccae5a3264aa23)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.IdleTimeCheck", idle_time_check, 0x4c0, 0x20, true, 0xa36697ef29b2b5cb)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.IdleDemotePercent", idle_demote_percent, 0x4e0, 0x8, true, 0xf6c2e3a547ad7656)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.IdlePromotePercent", idle_promote_percent, 0x4e8, 0x8, true, 0x924a3104d86ac9a1)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.HeteroDecreaseTime", hetero_decrease_time, 0x4f8, 0x8, true, 0xc7b15f62aa1150d1)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.HeteroIncreaseTime", hetero_increase_time, 0x500, 0x8, true, 0x264beba8fe2fe8cb)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint8_t, 640>, sdk::array<sdk::array<uint8_t, 64>, 2>>), "_PPM_ENGINE_SETTINGS.HeteroDecreaseThreshold", hetero_decrease_threshold, 0x508, 0x0, true, 0xf8f25953b3ea96fe)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint8_t, 640>, sdk::array<sdk::array<uint8_t, 64>, 2>>), "_PPM_ENGINE_SETTINGS.HeteroIncreaseThreshold", hetero_increase_threshold, 0x2d08, 0x0, true, 0xdda91a3c5fe094fd)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.Class0FloorPerformance", class0_floor_performance, 0x5508, 0x8, true, 0x4a1f13ff32e0fd2a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.Class1InitialPerformance", class1_initial_performance, 0x5510, 0x8, true, 0xe5f5cf54cc2954bd)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PPM_ENGINE_SETTINGS.PerfFrequencyCap", perf_frequency_cap, 0x160, 0x40, true, 0x43256c4ca2aac9c7)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PPM_ENGINE_SETTINGS.ResponsivenessDisableThreshold", responsiveness_disable_threshold, 0x2a0, 0x40, true, 0x42ff10bdf8fd23f0)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PPM_ENGINE_SETTINGS.ResponsivenessEnableThreshold", responsiveness_enable_threshold, 0x2e0, 0x40, true, 0xc797ed2b6afd95a2)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.ResponsivenessDisableTime", responsiveness_disable_time, 0x320, 0x10, true, 0xa24938476efc1da8)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.ResponsivenessEnableTime", responsiveness_enable_time, 0x330, 0x10, true, 0xb37f767241a8d0e4)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PPM_ENGINE_SETTINGS.ResponsivenessEppCeiling", responsiveness_epp_ceiling, 0x340, 0x40, true, 0xad47e5d0997b359d)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PPM_ENGINE_SETTINGS.ResponsivenessPerfFloor", responsiveness_perf_floor, 0x380, 0x40, true, 0x97e8e2bc5189e24b)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.SoftParkLatency", soft_park_latency, 0x480, 0x20, true, 0xeca57d799e8453b3)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.IdleStateMax", idle_state_max, 0x4f0, 0x8, true, 0x7e4aadab5b4eb039)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::khetero_cpu_policy_t, 2>), "_PPM_ENGINE_SETTINGS.ThreadPolicies", thread_policies, 0x5520, 0x40, true, 0x49f5cdada9ca28ea)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_ENGINE_SETTINGS.ShortThreadRuntimeThreshold", short_thread_runtime_threshold, 0x0, 0x0, false, 0x69a81f527c013192)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.ArchClassLowerThreshold", arch_class_lower_threshold, 0x0, 0x0, false, 0x574c6bca0a74b907)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PPM_ENGINE_SETTINGS.ArchClassUpperThreshold", arch_class_upper_threshold, 0x0, 0x0, false, 0xcf6166a968918bb3)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.ModuleUnparkPolicy", module_unpark_policy, 0x0, 0x0, false, 0xfc65eac031684c1)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.ComplexUnparkPolicy", complex_unpark_policy, 0x0, 0x0, false, 0x66df3833729444f3)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_ENGINE_SETTINGS.SmtUnparkPolicy", smt_unpark_policy, 0x0, 0x0, false, 0xa74783f90014d5e6)
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
#endif