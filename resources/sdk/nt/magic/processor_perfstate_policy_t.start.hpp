#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_PERFSTATE_POLICY.Revision", revision, 0x0, 0x20, true, 0xf5063e6a2c567069)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PROCESSOR_PERFSTATE_POLICY.MaxThrottle", max_throttle, 0x20, 0x8, true, 0x182989dd37daee48)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PROCESSOR_PERFSTATE_POLICY.MinThrottle", min_throttle, 0x28, 0x8, true, 0xa1c3090f6de82f0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PROCESSOR_PERFSTATE_POLICY.BusyAdjThreshold", busy_adj_threshold, 0x30, 0x8, true, 0x191b199ad19d1a67)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PROCESSOR_PERFSTATE_POLICY.Flags.AsUCHAR", as_uchar, 0x0, 0x8, true, 0x49616d99bd2ac3e4)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PROCESSOR_PERFSTATE_POLICY.Flags.NoDomainAccounting", no_domain_accounting, 0x0, 0x1, true, 0x59c486a6974e783f, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "PROCESSOR_PERFSTATE_POLICY.Flags.IncreasePolicy", increase_policy, 0x1, 0x2, true, 0x13716b732ac7aac3, 2, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "PROCESSOR_PERFSTATE_POLICY.Flags.DecreasePolicy", decrease_policy, 0x3, 0x2, true, 0xfaafd9caa57def9d, 2, uint8_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "PROCESSOR_PERFSTATE_POLICY.Flags", flags, 0x38, 0x8, true, 0xa5afc55e503fe50)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_PERFSTATE_POLICY.TimeCheck", time_check, 0x40, 0x20, true, 0xaa4c6866eaaab43)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_PERFSTATE_POLICY.IncreaseTime", increase_time, 0x60, 0x20, true, 0x48992a32e8fada5a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_PERFSTATE_POLICY.DecreaseTime", decrease_time, 0x80, 0x20, true, 0xfd0d2b14b54f023d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_PERFSTATE_POLICY.IncreasePercent", increase_percent, 0xa0, 0x20, true, 0xa428dee332c76b20)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PROCESSOR_PERFSTATE_POLICY.DecreasePercent", decrease_percent, 0xc0, 0x20, true, 0x6df681b901de6879)
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
#endif