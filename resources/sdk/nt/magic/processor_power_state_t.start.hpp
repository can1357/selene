#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::idle_states_t*), "_PROCESSOR_POWER_STATE.IdleStates", idle_states, 0x0, 0x40, true, 0xe826a3642344568d)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_idle_accounting_t*), "_PROCESSOR_POWER_STATE.IdleAccounting", idle_accounting, 0x40, 0x40, true, 0xdb27daf00ce655c2)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.IdleTimeLast", idle_time_last, 0x80, 0x40, true, 0xd239bc526adc3dd8)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.IdleTimeTotal", idle_time_total, 0xc0, 0x40, true, 0x286970a1ae696931)
#define _m004 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_PROCESSOR_POWER_STATE.IdleTimeEntry", idle_time_entry, 0x100, 0x40, true, 0xf4589b33d3c6150a, 64, uint64_t)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.IdleTimeExpiration", idle_time_expiration, 0x140, 0x40, true, 0xb79a2814936d030e)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.NonInterruptibleTransition", non_interruptible_transition, 0x180, 0x8, true, 0xacc0918c85df2344)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.PepWokenTransition", pep_woken_transition, 0x188, 0x8, true, 0x115ca2ac66b1b62a)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.HvTargetState", hv_target_state, 0x190, 0x8, true, 0x4e7d7be740e033a6)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.TargetIdleState", target_idle_state, 0x1a0, 0x20, true, 0x35613a71976bb55d)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_idle_policy_t), "_PROCESSOR_POWER_STATE.IdlePolicy", idle_policy, 0x1c0, 0x30, true, 0xf76c84fb65fceea4)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union ppm::idle_synchronization_state_t), "_PROCESSOR_POWER_STATE.Synchronization", synchronization, 0x200, 0x20, true, 0xc087e1ab8a53b982)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_feedback_t), "_PROCESSOR_POWER_STATE.PerfFeedback", perf_feedback, 0x240, 0x80, true, 0xb8b6837862efda25)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::proc_hypervisor_state_t), "_PROCESSOR_POWER_STATE.Hypervisor", hypervisor, 0x6c0, 0x20, true, 0x90a814ac8877b3af)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.LastSysTime", last_sys_time, 0x6e0, 0x20, true, 0xf5ef38bf3df3c57f)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.WmiDispatchPtr", wmi_dispatch_ptr, 0x700, 0x40, true, 0x8c1f8264f78447e9)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PROCESSOR_POWER_STATE.WmiInterfaceEnabled", wmi_interface_enabled, 0x740, 0x20, true, 0x65dacf3018706f96)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::ffh_throttle_state_info_t), "_PROCESSOR_POWER_STATE.FFHThrottleStateInfo", ffh_throttle_state_info, 0x780, 0x0, true, 0x976f36fe37b8d199)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_PROCESSOR_POWER_STATE.PerfActionDpc", perf_action_dpc, 0x880, 0x0, true, 0x76690e09727e2130)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PROCESSOR_POWER_STATE.PerfActionMask", perf_action_mask, 0xa80, 0x20, true, 0x153dcf537023787e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_idle_snap_t), "_PROCESSOR_POWER_STATE.HvIdleCheck", hv_idle_check, 0xac0, 0x80, true, 0x22ae4c82bd6a888b)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::concurrency_accounting_t*), "_PROCESSOR_POWER_STATE.Concurrency", concurrency, 0xd40, 0x40, true, 0x45afda6114a50c8)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.Parked", parked, 0xde0, 0x8, true, 0x1b203509c82fb66f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.SnapTimeLast", snap_time_last, 0xe00, 0x40, true, 0x7cffe495806eec0c)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.EnergyConsumed", energy_consumed, 0xe00, 0x40, true, 0x2e47291e2dac7046)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.ActiveTime", active_time, 0xe40, 0x40, true, 0xfe3df7b580ffab2e)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.TotalTime", total_time, 0xe80, 0x40, true, 0x2858df723312891c)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.SoftParked", soft_parked, 0x198, 0x8, true, 0x22e36a8cd21620d8)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_context_t), "_PROCESSOR_POWER_STATE.CheckContext", check_context, 0xb40, 0x0, true, 0x75e3317b3fef419c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::concurrency_accounting_t*), "_PROCESSOR_POWER_STATE.ClassConcurrency", class_concurrency, 0xd80, 0x40, true, 0x85ea20d08c90488e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.ArchitecturalEfficiencyClass", architectural_efficiency_class, 0xdc0, 0x8, true, 0x13bdddea94aaedee)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.PerformanceSchedulingClass", performance_scheduling_class, 0xdc8, 0x8, true, 0xb46ff00ec607029f)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.EfficiencySchedulingClass", efficiency_scheduling_class, 0xdd0, 0x8, true, 0x5b4ce179fc5507ac)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.LongPriorQosPeriod", long_prior_qos_period, 0xde8, 0x8, true, 0xa2fe8fb242802eca)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_device_t*), "_PROCESSOR_POWER_STATE.FxDevice", fx_device, 0xec0, 0x40, true, 0x7fb84968aed50854)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.LastQosTranstionTsc", last_qos_transtion_tsc, 0xf00, 0x40, true, 0x2bead84395a70f67)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_POWER_STATE.QosTransitionHysteresis", qos_transition_hysteresis, 0xf40, 0x40, true, 0xfb0707429ca88b2d)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::khetero_cpu_qos_t), "_PROCESSOR_POWER_STATE.RequestedQosClass", requested_qos_class, 0xf80, 0x20, true, 0x4cb4a2c9b1a93fdc)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::khetero_cpu_qos_t), "_PROCESSOR_POWER_STATE.ResolvedQosClass", resolved_qos_class, 0xfa0, 0x20, true, 0xb2af7b86e40e309f)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESSOR_POWER_STATE.QosEquivalencyMask", qos_equivalency_mask, 0xfc0, 0x10, true, 0x263c9783667c5dec)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESSOR_POWER_STATE.HwFeedbackTableIndex", hw_feedback_table_index, 0xfd0, 0x10, true, 0xbee74546a9f7aa5)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.HwFeedbackParkHint", hw_feedback_park_hint, 0xfe0, 0x8, true, 0x7ff28da84f84dc6b)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.HeteroCoreType", hetero_core_type, 0xff8, 0x8, true, 0x3e8515e67ae62dd)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.HwFeedbackPerformanceClass", hw_feedback_performance_class, 0xfe8, 0x8, true, 0xe32b93fe379a4b44)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.HwFeedbackEfficiencyClass", hw_feedback_efficiency_class, 0xff0, 0x8, true, 0xe09c7cf93529c06d)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.EfficiencyClass", efficiency_class, 0x0, 0x0, false, 0xae96720c5023f837)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.SchedulingClass", scheduling_class, 0x0, 0x0, false, 0xd8c5a45dc6965fc2)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_t*), "_PROCESSOR_POWER_STATE.PerfCheck", perf_check, 0x0, 0x0, false, 0xa2094ff69eee299e)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_domain_t*), "_PROCESSOR_POWER_STATE.Domain", domain, 0x0, 0x0, false, 0x64e8f17e1dd3f90b)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_constraint_t*), "_PROCESSOR_POWER_STATE.PerfConstraint", perf_constraint, 0x0, 0x0, false, 0xd386837db3fbf68c)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_load_t*), "_PROCESSOR_POWER_STATE.Load", load, 0x0, 0x0, false, 0x58c9ea7ec7c2e27f)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_history_t*), "_PROCESSOR_POWER_STATE.PerfHistory", perf_history, 0x0, 0x0, false, 0xa6624ed75d79723)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.GuaranteedPerformancePercent", guaranteed_performance_percent, 0x0, 0x0, false, 0x3163c09f891f07e0)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.LatestPerformancePercent", latest_performance_percent, 0x0, 0x0, false, 0xcae9a35f2bdf57bf)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.AveragePerformancePercent", average_performance_percent, 0x0, 0x0, false, 0x8dae1d3d245c50f3)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.LatestAffinitizedPercent", latest_affinitized_percent, 0x0, 0x0, false, 0x184b3d558c681348)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.RelativePerformance", relative_performance, 0x0, 0x0, false, 0xcc2e53827a747d18)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.Utility", utility, 0x0, 0x0, false, 0x1137e1f8dbd2d690)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_STATE.AffinitizedUtility", affinitized_utility, 0x0, 0x0, false, 0xd4517e492bf55251)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_PROCESSOR_POWER_STATE.IdleSequenceNumber", idle_sequence_number, 0x0, 0x0, false, 0xbb0d7f4283a21b82)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_PROCESSOR_POWER_STATE.IdleWakeTime", idle_wake_time, 0x0, 0x0, false, 0x516c758359b84950)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.EarlyBootArchitecturalEfficiencyClass", early_boot_architectural_efficiency_class, 0x0, 0x0, false, 0xb5e33064a3be1668)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESSOR_POWER_STATE.HwFeedbackTableOffset", hw_feedback_table_offset, 0x0, 0x0, false, 0x5414acc2c14597da)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::khetro_hwfeedback_type_t*), "_PROCESSOR_POWER_STATE.HwFeedbackClassList", hw_feedback_class_list, 0x0, 0x0, false, 0x83f5dfc997c65c0f)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_cycles_workload_class_t*), "_PROCESSOR_POWER_STATE.EeCyclesWorkloadClassList", ee_cycles_workload_class_list, 0x0, 0x0, false, 0xcb7a6880082c67cf)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_cycles_workload_class_t*), "_PROCESSOR_POWER_STATE.PerfCyclesWorkloadClassList", perf_cycles_workload_class_list, 0x0, 0x0, false, 0xe9d9f78b0a9ac8e)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_STATE.NotUsed", not_used, 0x0, 0x0, false, 0xbff06e1e58b732d2)
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
#endif