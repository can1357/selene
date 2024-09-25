#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CONSTRAINT.PerfContext", perf_context, 0x40, 0x40, true, 0x50050dea5d1ffb86)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.PlatformCap", platform_cap, 0xc0, 0x20, true, 0xe520f8b1799e1d82)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.ThermalCap", thermal_cap, 0xe0, 0x20, true, 0x4d76ef665f6f9dd4)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.LimitReasons", limit_reasons, 0x100, 0x20, true, 0x6b8349bbd3048b5a)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CONSTRAINT.PlatformCapStartTime", platform_cap_start_time, 0x140, 0x40, true, 0x20e950125ecdd594)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.ProcCap", proc_cap, 0x180, 0x20, true, 0x947fe6235bdf0847)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.ProcFloor", proc_floor, 0x1a0, 0x20, true, 0xd190bcff234b0303)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.TargetPercent", target_percent, 0x1c0, 0x20, true, 0x3d8c2b573251d3eb)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.PreviousFrequency", previous_frequency, 0x360, 0x20, true, 0x5f193835dfed0d6e)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.PreviousPercent", previous_percent, 0x380, 0x20, true, 0x649ca98ead428648)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.LatestFrequencyPercent", latest_frequency_percent, 0x3a0, 0x20, true, 0xa5ecd3728de3df3c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CONSTRAINT.Force", force, 0x3e0, 0x8, true, 0xce643f62e6af4fb2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_context_t*), "_PROC_PERF_CONSTRAINT.CheckContext", check_context, 0x0, 0x40, true, 0xb12644a89bc9b125)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::processor_presence_t), "_PROC_PERF_CONSTRAINT.Presence", presence, 0x80, 0x20, true, 0xa415d98f3d7fda66)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.ProcessorId", processor_id, 0xa0, 0x20, true, 0xc158b9de4588caa3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CONSTRAINT.EngageResponsivenessOverrides", engage_responsiveness_overrides, 0x1e0, 0x8, true, 0x308e401f77c5011f)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CONSTRAINT.ResponsivenessChangeCount", responsiveness_change_count, 0x1e8, 0x8, true, 0x15cc34d0d4fc221f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct perf::control_state_selection_t), "_PROC_PERF_CONSTRAINT.Selection", selection, 0x200, 0x40, true, 0x215ac3caaa4e8730)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.DomainSelectionGeneration", domain_selection_generation, 0x340, 0x20, true, 0x2a2b16655c0eb623)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.LatestPerformancePercent", latest_performance_percent, 0x3c0, 0x20, true, 0x55ae5b09c309efa7)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CONSTRAINT.UseQosUpdateLock", use_qos_update_lock, 0x3e8, 0x8, true, 0x40c642bdee2cefa)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CONSTRAINT.QosUpdateLock", qos_update_lock, 0x400, 0x40, true, 0xc5f6ee6297d6a00c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprcb_t*), "_PROC_PERF_CONSTRAINT.Prcb", prcb, 0x0, 0x0, false, 0xea67c4c0126bd01c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.SelectedPercent", selected_percent, 0x0, 0x0, false, 0x2fffe44a2416786f)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.SelectedFrequency", selected_frequency, 0x0, 0x0, false, 0x6ae3c0395ccfdb8a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CONSTRAINT.SelectedState", selected_state, 0x0, 0x0, false, 0x24dc471dd111f5)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.IncreasePerfCheckCount", increase_perf_check_count, 0x0, 0x0, false, 0xcda3207daf01b8fb)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CONSTRAINT.DecreasePerfCheckCount", decrease_perf_check_count, 0x0, 0x0, false, 0x5bc3e66352a3ef24)
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
#endif