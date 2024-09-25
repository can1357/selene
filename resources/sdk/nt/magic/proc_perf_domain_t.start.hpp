#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PROC_PERF_DOMAIN.Link", link, 0x0, 0x80, true, 0xfbef73a777cce9a9)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::kprcb_t*, struct nt::proc_perf_check_context_t*>), "_PROC_PERF_DOMAIN.Master", master, 0x80, 0x40, true, 0xfc35a345f484fb40)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_PROC_PERF_DOMAIN.Members", members, 0xc0, 0x40, true, 0xbfb44ff5e9df3951)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.ProcessorCount", processor_count, 0x640, 0x20, true, 0x94f07eca65bf12d4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.EfficiencyClass", efficiency_class, 0x660, 0x8, true, 0x60cb99769535dabd)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.NominalPerformanceClass", nominal_performance_class, 0x668, 0x8, true, 0xda935bcf36e11ee6)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.HighestPerformanceClass", highest_performance_class, 0x670, 0x8, true, 0x1d39684416cd8a8)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_constraint_t*), "_PROC_PERF_DOMAIN.Processors", processors, 0x6c0, 0x40, true, 0x375448470a30e967)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t*)>*), "_PROC_PERF_DOMAIN.GetFFHThrottleState", get_ffh_throttle_state, 0x700, 0x40, true, 0xbdf2f621f6dfed2e)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint32_t)>*), "_PROC_PERF_DOMAIN.TimeWindowHandler", time_window_handler, 0x740, 0x40, true, 0xf1408173c0033ad8)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint32_t)>*), "_PROC_PERF_DOMAIN.BoostPolicyHandler", boost_policy_handler, 0x780, 0x40, true, 0x3caf4f9e755a4375)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint32_t)>*), "_PROC_PERF_DOMAIN.BoostModeHandler", boost_mode_handler, 0x7c0, 0x40, true, 0x3da69ce4755953c5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint32_t)>*), "_PROC_PERF_DOMAIN.AutonomousActivityWindowHandler", autonomous_activity_window_handler, 0x800, 0x40, true, 0xad1ecc55ea39b487)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint32_t)>*), "_PROC_PERF_DOMAIN.AutonomousModeHandler", autonomous_mode_handler, 0x840, 0x40, true, 0x4b0586aaaac9242c)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t)>*), "_PROC_PERF_DOMAIN.ReinitializeHandler", reinitialize_handler, 0x880, 0x40, true, 0x5b45bec277164e78)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint32_t(uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint64_t*)>*, sdk::function<uint32_t(uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint64_t*)>*>), "_PROC_PERF_DOMAIN.PerfSelectionHandler", perf_selection_handler, 0x8c0, 0x40, true, 0x997218ce6bb55129)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(uint64_t, uint64_t, uint32_t, uint32_t, uint32_t, uint8_t, uint8_t, uint8_t)>*, sdk::function<void(uint64_t, struct perf::control_state_selection_t*, uint8_t, uint8_t)>*>), "_PROC_PERF_DOMAIN.PerfControlHandler", perf_control_handler, 0x900, 0x40, true, 0x9720325d59401566)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.MaxFrequency", max_frequency, 0x9c0, 0x20, true, 0x7d6c920905051afc)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.NominalFrequency", nominal_frequency, 0x9e0, 0x20, true, 0xa175722eebf1b6e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.MaxPercent", max_percent, 0xa00, 0x20, true, 0x4e84ad278da3658e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.MinPerfPercent", min_perf_percent, 0xa20, 0x20, true, 0x1f53c2687d668c9a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.MinThrottlePercent", min_throttle_percent, 0xa40, 0x20, true, 0xdd6ace3aff88b3a7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_DOMAIN.MinimumRelativePerformance", minimum_relative_performance, 0xa80, 0x40, true, 0xd950b6ada1b9513)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_DOMAIN.NominalRelativePerformance", nominal_relative_performance, 0xac0, 0x40, true, 0xdc7a87bda93c49dc)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.Coordination", coordination, 0xb08, 0x8, true, 0x6da137c4f49617d3)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.HardPlatformCap", hard_platform_cap, 0xb10, 0x8, true, 0x82966b48c2d2eb2a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.AffinitizeControl", affinitize_control, 0xb18, 0x8, true, 0x4e2cb8aada5184d6)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.EfficientThrottle", efficient_throttle, 0xb20, 0x8, true, 0x5a7b1e03bdc70d21)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.AutonomousMode", autonomous_mode, 0xb38, 0x8, true, 0xf48651f008f907e4)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.ProvideGuidance", provide_guidance, 0xb40, 0x8, true, 0xac9ae934f121a1c1)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.DesiredPercent", desired_percent, 0xb60, 0x20, true, 0x680b1bb0e85f3868)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.GuaranteedPercent", guaranteed_percent, 0xb80, 0x20, true, 0x85f23530ea707988)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_DOMAIN.PerfChangeTime", perf_change_time, 0x1780, 0x40, true, 0x885324374a5a8aa0)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.PerfChangeIntervalCount", perf_change_interval_count, 0x17c0, 0x20, true, 0xa82e8c2362b1afd8)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.Force", force, 0x17e0, 0x8, true, 0x336994cc1c2ea39f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_DOMAIN.DomainContext", domain_context, 0x600, 0x40, true, 0xb74ff0edbaaf5698)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::processor_presence_t), "_PROC_PERF_DOMAIN.Presence", presence, 0x680, 0x20, true, 0x3262dd6b4a7db656)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, struct perf::control_state_selection_t*, uint8_t, uint8_t)>*), "_PROC_PERF_DOMAIN.PerfControlHandlerHidden", perf_control_handler_hidden, 0x940, 0x40, true, 0xd5e647fb0ca58f3f)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, struct perf::control_state_selection_t*, uint8_t, uint8_t)>*), "_PROC_PERF_DOMAIN.DomainPerfControlHandler", domain_perf_control_handler, 0x980, 0x40, true, 0x882d80fd5183da41)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.AdvertizedMaximumFrequency", advertized_maximum_frequency, 0xa60, 0x20, true, 0xb98a3fe9e24e1871)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.NominalRelativePerformancePercent", nominal_relative_performance_percent, 0xb00, 0x8, true, 0x7c6adda9f7e6298f)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.AllowSchedulerDirectedPerfStates", allow_scheduler_directed_perf_states, 0xb28, 0x8, true, 0x52458eb0a8d47e2f)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.InitiateAllProcessors", initiate_all_processors, 0xb30, 0x8, true, 0x5dac1c01f8f1009d)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.EngageResponsivenessOverrides", engage_responsiveness_overrides, 0xba0, 0x8, true, 0x64e93ab59f2fd3ed)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::proc_perf_qos_class_policy_t, 5>), "_PROC_PERF_DOMAIN.QosPolicies", qos_policies, 0xbc0, 0x60, true, 0x5d925147aad8ed48)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_PROC_PERF_DOMAIN.QosDisableReasons", qos_disable_reasons, 0x1020, 0xa0, true, 0xaaa31cf6006d5820)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 5>), "_PROC_PERF_DOMAIN.QosEquivalencyMasks", qos_equivalency_masks, 0x10c0, 0x50, true, 0x8bfae7258c37f126)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.QosSupported", qos_supported, 0x1110, 0x8, true, 0x54b5e5df4e75be6a)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_PROC_PERF_DOMAIN.SelectionGeneration", selection_generation, 0x1120, 0x20, true, 0xb5436716cf463635)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct perf::control_state_selection_t, 5>), "_PROC_PERF_DOMAIN.QosSelection", qos_selection, 0x1140, 0x40, true, 0xe7d11372c1d07ec4)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.Update", update, 0x17e8, 0x8, true, 0x854ac930628954c9)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.Apply", apply, 0x17f0, 0x8, true, 0x42284ffc92ad0a7b)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint32_t)>*), "_PROC_PERF_DOMAIN.EnergyPerfPreferenceHandler", energy_perf_preference_handler, 0x0, 0x0, false, 0xd7a3d8077872bd69)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.SelectedPercent", selected_percent, 0x0, 0x0, false, 0x92b19499a9b8650a)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.SelectedFrequency", selected_frequency, 0x0, 0x0, false, 0x605a8a9f7afe0ff5)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.MaxPolicyPercent", max_policy_percent, 0x0, 0x0, false, 0x98127899a2b341d)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.MinPolicyPercent", min_policy_percent, 0x0, 0x0, false, 0x9e10d4972a1b87df)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.ConstrainedMaxPercent", constrained_max_percent, 0x0, 0x0, false, 0xf32b11b5c8bbddf8)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.ConstrainedMinPercent", constrained_min_percent, 0x0, 0x0, false, 0xe6b01a04ba5506f6)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.TolerancePercent", tolerance_percent, 0x0, 0x0, false, 0x344f750fcddee911)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_DOMAIN.SelectedState", selected_state, 0x0, 0x0, false, 0x372551b23d9aceeb)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint64_t, uint8_t)>*), "_PROC_PERF_DOMAIN.PerfUpdateHwDebugData", perf_update_hw_debug_data, 0x0, 0x0, false, 0xc3295e258013f8a7)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t()>*), "_PROC_PERF_DOMAIN.PerfQueryProcMeasurementCapabilities", perf_query_proc_measurement_capabilities, 0x0, 0x0, false, 0x442357989569253c)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, void*, uint32_t)>*), "_PROC_PERF_DOMAIN.PerfQueryProcMeasurementValues", perf_query_proc_measurement_values, 0x0, 0x0, false, 0xa376af70e791dc09)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.Id", id, 0x0, 0x0, false, 0xfac6bafddfbc279c)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.AllowVmPerfSelection", allow_vm_perf_selection, 0x0, 0x0, false, 0x28ec3c3222fa31d4)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.VmFrequencyStepMhz", vm_frequency_step_mhz, 0x0, 0x0, false, 0x40ef7837e6672716)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.VmHighestFrequencyMhz", vm_highest_frequency_mhz, 0x0, 0x0, false, 0x5f0e7073e5a086ab)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.VmNominalFrequencyMhz", vm_nominal_frequency_mhz, 0x0, 0x0, false, 0xf54622c7f6539220)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_DOMAIN.VmLowestFrequencyMhz", vm_lowest_frequency_mhz, 0x0, 0x0, false, 0x910f37c10f32e34d)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_DOMAIN.AutonomousCapability", autonomous_capability, 0x0, 0x0, false, 0xccc965788224fce8)
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
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#endif