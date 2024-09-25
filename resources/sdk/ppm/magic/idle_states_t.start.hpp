#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.InterfaceVersion", interface_version, 0x0, 0x8, true, 0x4ac7c659f5ab287f)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.EstimateIdleDuration", estimate_idle_duration, 0x10, 0x8, true, 0x41eb74bb7f8ea70d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.ExitLatencyTraceEnabled", exit_latency_trace_enabled, 0x18, 0x8, true, 0x4246c32dfb1fc646)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.NonInterruptibleTransition", non_interruptible_transition, 0x20, 0x8, true, 0xbed2688720b2125b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.UnaccountedTransition", unaccounted_transition, 0x28, 0x8, true, 0x94ad457ff3637ee4)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.IdleDurationLimited", idle_duration_limited, 0x30, 0x8, true, 0x3435eed0fc4600a9)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.IdleCheckLimited", idle_check_limited, 0x38, 0x8, true, 0xfd8e212bd14ae093)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.ExitLatencyCountdown", exit_latency_countdown, 0x60, 0x20, true, 0x2b158ece7c0284cb)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.TargetState", target_state, 0x80, 0x20, true, 0x2d9f700cf4a43fbc)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.ActualState", actual_state, 0xa0, 0x20, true, 0x69e24277d95aa965)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.OldState", old_state, 0xc0, 0x20, true, 0xc44d81d0186e41cb)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.OverrideIndex", override_index, 0xe0, 0x20, true, 0xa3ad6457ffe4f5db)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.ProcessorIdleCount", processor_idle_count, 0x100, 0x20, true, 0x1333f80c9dc95d49)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.Type", type, 0x120, 0x20, true, 0xb886143a327941d1)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PPM_IDLE_STATES.ReasonFlags", reason_flags, 0x180, 0x10, true, 0x39f5aa07c16a58e1)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_PPM_IDLE_STATES.InitiateWakeStamp", initiate_wake_stamp, 0x1c0, 0x40, true, 0x42df9e288b30f59e)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PPM_IDLE_STATES.PreviousStatus", previous_status, 0x200, 0x20, true, 0xcd9d93eaf7753c62)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATES.PreviousCancelReason", previous_cancel_reason, 0x220, 0x20, true, 0x78fc52321519e1e1)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_PPM_IDLE_STATES.PrimaryProcessorMask", primary_processor_mask, 0x240, 0x40, true, 0x1ff4d774cc558491)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_PPM_IDLE_STATES.SecondaryProcessorMask", secondary_processor_mask, 0x780, 0x40, true, 0x4be1de82643edfa2)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::processor_idle_prepare_info_t*)>*), "_PPM_IDLE_STATES.IdlePrepare", idle_prepare, 0xcc0, 0x40, true, 0x4d5bf1fc83d6d67d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*), "_PPM_IDLE_STATES.IdlePreExecute", idle_pre_execute, 0xd00, 0x40, true, 0x7bda372a1e6177b7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*, sdk::function<int32_t(void*, uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)>*>), "_PPM_IDLE_STATES.IdleExecute", idle_execute, 0xd40, 0x40, true, 0x32473fa1a396adb3)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, struct nt::processor_idle_constraints_t*)>*), "_PPM_IDLE_STATES.IdlePreselect", idle_preselect, 0xd80, 0x40, true, 0xa024fd40d212bd64)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, uint32_t)>*), "_PPM_IDLE_STATES.IdleTest", idle_test, 0xdc0, 0x40, true, 0x292d75bfc17de07d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t)>*), "_PPM_IDLE_STATES.IdleAvailabilityCheck", idle_availability_check, 0xe00, 0x40, true, 0xbd5c10ecd4773dd7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*), "_PPM_IDLE_STATES.IdleComplete", idle_complete, 0xe40, 0x40, true, 0x32336377661e6d89)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PPM_IDLE_STATES.IdleCancel", idle_cancel, 0xe80, 0x40, true, 0x450a97f5eb0f5455)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_PPM_IDLE_STATES.IdleIsHalted", idle_is_halted, 0xec0, 0x40, true, 0xce903aa9a9b0ab5a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_PPM_IDLE_STATES.IdleInitiateWake", idle_initiate_wake, 0xf00, 0x40, true, 0xca5d8fcb5483261e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_idle_prepare_info_t), "_PPM_IDLE_STATES.PrepareInfo", prepare_info, 0xf40, 0xc0, true, 0x6439868192438c57)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_PPM_IDLE_STATES.DeepIdleSnapshot", deep_idle_snapshot, 0x1200, 0x40, true, 0x6fedc93c987700b4)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::perfinfo_ppm_state_selection_t*), "_PPM_IDLE_STATES.Tracing", tracing, 0x1740, 0x40, true, 0x272defc353c3b54b)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::perfinfo_ppm_state_selection_t*), "_PPM_IDLE_STATES.CoordinatedTracing", coordinated_tracing, 0x1780, 0x40, true, 0x182d9dccf07548c1)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_menu_t), "_PPM_IDLE_STATES.ProcessorMenu", processor_menu, 0x17c0, 0x80, true, 0xac67561b7a9f77a1)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_menu_t), "_PPM_IDLE_STATES.CoordinatedMenu", coordinated_menu, 0x1840, 0x80, true, 0xc946b9776f56bab7)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::coordinated_selection_t), "_PPM_IDLE_STATES.CoordinatedSelection", coordinated_selection, 0x18c0, 0xc0, true, 0x71b4a98d41a29f2)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::idle_state_t, 1>), "_PPM_IDLE_STATES.State", state, 0x1980, 0xc0, true, 0x9c63ed8f1c8eb2e1)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.IdleOverride", idle_override, 0x8, 0x8, true, 0x7f23867a30c21307)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.StrictVetoBias", strict_veto_bias, 0x40, 0x8, true, 0x610972f730bd2ed4)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_IDLE_STATES.LevelId", level_id, 0x140, 0x40, true, 0xf2bb253ca069a321)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATES.ForceIdle", force_idle, 0x0, 0x0, false, 0x11ba0b26824b339a)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_IDLE_STATES.IdleReevaluationDuration", idle_reevaluation_duration, 0x0, 0x0, false, 0x58a0862f55b56cb5)
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
#endif