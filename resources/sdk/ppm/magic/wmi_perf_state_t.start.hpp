#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATE.Frequency", frequency, 0x0, 0x20, true, 0x32730cabd74efc2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATE.Power", power, 0x20, 0x20, true, 0x88e8c0e303c2c5ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATE.PercentFrequency", percent_frequency, 0x40, 0x8, true, 0xd958c44555c3e550)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATE.IncreaseLevel", increase_level, 0x48, 0x8, true, 0x3d33d3b633b1e09d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATE.DecreaseLevel", decrease_level, 0x50, 0x8, true, 0xf10002ea65741f58)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_WMI_PERF_STATE.Type", type, 0x58, 0x8, true, 0x33b0bee6c483a2c5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATE.IncreaseTime", increase_time, 0x60, 0x20, true, 0xbc8c5ff2eabe946e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATE.DecreaseTime", decrease_time, 0x80, 0x20, true, 0x921ad83e82b98995)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_WMI_PERF_STATE.Control", control, 0xc0, 0x40, true, 0x21698c2256184494)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_WMI_PERF_STATE.Status", status, 0x100, 0x40, true, 0x71634178a685a735)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_PERF_STATE.HitCount", hit_count, 0x140, 0x20, true, 0x351656d1ef8eb50d)
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
#endif