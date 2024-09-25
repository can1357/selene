#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.Count", count, 0x0, 0x20, true, 0x58f23b87fa8f6661)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.MaxFrequency", max_frequency, 0x20, 0x20, true, 0x5bc185682bcc45b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.CurrentState", current_state, 0x40, 0x20, true, 0xd5929a15ca1800d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.MaxPerfState", max_perf_state, 0x60, 0x20, true, 0x65f096033a32ea45)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.MinPerfState", min_perf_state, 0x80, 0x20, true, 0x6242077785c67371)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.LowestPerfState", lowest_perf_state, 0xa0, 0x20, true, 0xa3952c298b20aa05)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.ThermalConstraint", thermal_constraint, 0xc0, 0x20, true, 0xb3ce824c06413d6d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATES.BusyAdjThreshold", busy_adj_threshold, 0xe0, 0x8, true, 0xd4dda192e54af4fb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATES.PolicyType", policy_type, 0xe8, 0x8, true, 0x44ecbdc811f0a1ff)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATES.Type", type, 0xf0, 0x8, true, 0x14337e1eb72ac892)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.TimerInterval", timer_interval, 0x100, 0x20, true, 0x80b599624ad23a69)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_WMI_PERF_STATES.TargetProcessors", target_processors, 0x140, 0x40, true, 0x27b080370daf1e04)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.PStateHandler", p_state_handler, 0x180, 0x20, true, 0xec7d11625803a443)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.PStateContext", p_state_context, 0x1a0, 0x20, true, 0x875bc075be6de52f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.TStateHandler", t_state_handler, 0x1c0, 0x20, true, 0xda07fe11107a3a8f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.TStateContext", t_state_context, 0x1e0, 0x20, true, 0xd5c4ead09cc7bdd4)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATES.FeedbackHandler", feedback_handler, 0x200, 0x20, true, 0x2eb87cd749deab40)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::wmi_perf_state_t, 1>), "PPM_WMI_PERF_STATES.State", state, 0x280, 0x0, true, 0xcf3fac944a0beef)
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