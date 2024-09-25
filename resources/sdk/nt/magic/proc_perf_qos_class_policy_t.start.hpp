#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_QOS_CLASS_POLICY.MaxPolicyPercent", max_policy_percent, 0x0, 0x20, true, 0x6430969af4704ea3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_QOS_CLASS_POLICY.MaxEquivalentFrequencyPercent", max_equivalent_frequency_percent, 0x20, 0x20, true, 0x2beccca420819ad5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_QOS_CLASS_POLICY.MinPolicyPercent", min_policy_percent, 0x40, 0x20, true, 0x6da43e60fa4a6635)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_QOS_CLASS_POLICY.AutonomousActivityWindow", autonomous_activity_window, 0x60, 0x20, true, 0x18a740eae7d59489)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_QOS_CLASS_POLICY.EnergyPerfPreference", energy_perf_preference, 0x80, 0x20, true, 0x3e1d3b7fbf60ff47)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_QOS_CLASS_POLICY.ProvideGuidance", provide_guidance, 0xa0, 0x8, true, 0x7e43990331587daa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_QOS_CLASS_POLICY.AllowThrottling", allow_throttling, 0xa8, 0x8, true, 0x4053536b7f71ba88)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_QOS_CLASS_POLICY.PerfBoostMode", perf_boost_mode, 0xb0, 0x8, true, 0xe0fb91da16d25ada)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_QOS_CLASS_POLICY.LatencyHintPerf", latency_hint_perf, 0xb8, 0x8, true, 0x2bc958a346e429c2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_QOS_CLASS_POLICY.TrackDesiredCrossClass", track_desired_cross_class, 0xc0, 0x8, true, 0xf02df840acd8fc43)
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
#endif