#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.SelectedCount", selected_count, 0x0, 0x40, true, 0x4a4fc75c483b96e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.VetoCount", veto_count, 0x40, 0x40, true, 0x63a5eeaeb4caf962)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.PreVetoCount", pre_veto_count, 0x80, 0x40, true, 0x60545614a7b8e09e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.WrongProcessorCount", wrong_processor_count, 0xc0, 0x40, true, 0x1b10081b11f2da57)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.LatencyCount", latency_count, 0x100, 0x40, true, 0x279cd96f5370e4c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.IdleDurationCount", idle_duration_count, 0x140, 0x40, true, 0x90b7c15314729baa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.DeviceDependencyCount", device_dependency_count, 0x180, 0x40, true, 0x2a2799323c60c4c9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.ProcessorDependencyCount", processor_dependency_count, 0x1c0, 0x40, true, 0xa6f3fdb66366beeb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.PlatformOnlyCount", platform_only_count, 0x200, 0x40, true, 0x4e3c768af54509e2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.InterruptibleCount", interruptible_count, 0x240, 0x40, true, 0x7e9099087368e828)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.LegacyOverrideCount", legacy_override_count, 0x280, 0x40, true, 0xb5f3ffdd7bf9b531)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.CstateCheckCount", cstate_check_count, 0x2c0, 0x40, true, 0x4ae7824953c781d9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.NoCStateCount", no_c_state_count, 0x300, 0x40, true, 0x8c084e3fa20c96dd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.CoordinatedDependencyCount", coordinated_dependency_count, 0x340, 0x40, true, 0x1440c43073262db0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::veto_accounting_t*), "_PPM_SELECTION_STATISTICS.PreVetoAccounting", pre_veto_accounting, 0x3c0, 0x40, true, 0xa44227a4f57bd08d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.NotClockOwnerCount", not_clock_owner_count, 0x380, 0x40, true, 0x26945b7645a60a48)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_SELECTION_STATISTICS.DependencyIdleDurationCount", dependency_idle_duration_count, 0x0, 0x0, false, 0x2565d6f59b6fc8b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif