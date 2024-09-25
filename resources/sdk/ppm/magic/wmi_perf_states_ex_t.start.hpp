#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.Count", count, 0x0, 0x20, true, 0x97478cf70afbd82d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.MaxFrequency", max_frequency, 0x20, 0x20, true, 0x4c55777a0a5832cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.CurrentState", current_state, 0x40, 0x20, true, 0x283885f6851595b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.MaxPerfState", max_perf_state, 0x60, 0x20, true, 0x2057c51a211485c0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.MinPerfState", min_perf_state, 0x80, 0x20, true, 0x83e654f2e98ed3c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.LowestPerfState", lowest_perf_state, 0xa0, 0x20, true, 0x44dd4e6af7eaa585)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.ThermalConstraint", thermal_constraint, 0xc0, 0x20, true, 0x35de05f02812fca6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATES_EX.BusyAdjThreshold", busy_adj_threshold, 0xe0, 0x8, true, 0xba036717a2eb07db)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATES_EX.PolicyType", policy_type, 0xe8, 0x8, true, 0x9181178ae4ea1757)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATES_EX.Type", type, 0xf0, 0x8, true, 0xe46118026cb8919f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.TimerInterval", timer_interval, 0x100, 0x20, true, 0xc4d62e2bca206f69)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "PPM_WMI_PERF_STATES_EX.TargetProcessors", target_processors, 0x140, 0x40, true, 0x825b7c10d7ab5a6f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.PStateHandler", p_state_handler, 0x180, 0x20, true, 0xdece2be463360dbd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.PStateContext", p_state_context, 0x1a0, 0x20, true, 0x1c7016982292eb3b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.TStateHandler", t_state_handler, 0x1c0, 0x20, true, 0x79c912bae7b5866e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.TStateContext", t_state_context, 0x1e0, 0x20, true, 0x76a7bfa9b0ecc27c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES_EX.FeedbackHandler", feedback_handler, 0x200, 0x20, true, 0xa52f8d65b3e333c2)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::wmi_perf_state_t, 1>), "PPM_WMI_PERF_STATES_EX.State", state, 0x280, 0x0, true, 0x27770b960cfe2baf)
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
#define _m17
#endif