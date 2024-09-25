#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_POLICY.Revision", revision, 0x0, 0x20, true, 0x5b542a3d6a1d2914)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::action_policy_t), "_SYSTEM_POWER_POLICY.PowerButton", power_button, 0x20, 0x60, true, 0x7c0b68e568653e9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::action_policy_t), "_SYSTEM_POWER_POLICY.SleepButton", sleep_button, 0x80, 0x60, true, 0xb6d53f6e64f9a2ed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::action_policy_t), "_SYSTEM_POWER_POLICY.LidClose", lid_close, 0xe0, 0x60, true, 0x90049c4f71fd180d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_SYSTEM_POWER_POLICY.LidOpenWake", lid_open_wake, 0x140, 0x20, true, 0x4acd77d353265c31)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::action_policy_t), "_SYSTEM_POWER_POLICY.Idle", idle, 0x180, 0x60, true, 0xd90ccfe5a99abfe7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_POLICY.IdleTimeout", idle_timeout, 0x1e0, 0x20, true, 0xecc635ef6cd109b7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_POLICY.IdleSensitivity", idle_sensitivity, 0x200, 0x8, true, 0xbdc6c25d5a7b57)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_POLICY.DynamicThrottle", dynamic_throttle, 0x208, 0x8, true, 0x541bad33cae097d1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_SYSTEM_POWER_POLICY.MinSleep", min_sleep, 0x220, 0x20, true, 0xf3a1122a1aa98a4b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_SYSTEM_POWER_POLICY.MaxSleep", max_sleep, 0x240, 0x20, true, 0x864d3a580971afab)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_SYSTEM_POWER_POLICY.ReducedLatencySleep", reduced_latency_sleep, 0x260, 0x20, true, 0xdb77535aa6af2c9c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_POLICY.WinLogonFlags", win_logon_flags, 0x280, 0x20, true, 0x6cf1329658d188ec)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_POLICY.DozeS4Timeout", doze_s4_timeout, 0x2c0, 0x20, true, 0x9b94824800fa1313)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_POLICY.BroadcastCapacityResolution", broadcast_capacity_resolution, 0x2e0, 0x20, true, 0xaba23a657f2f71ef)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::system_power_level_t, 4>), "_SYSTEM_POWER_POLICY.DischargePolicy", discharge_policy, 0x300, 0x0, true, 0x88534f90edf417bc)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_POLICY.VideoTimeout", video_timeout, 0x600, 0x20, true, 0x73158ff0a2d4326b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_POLICY.VideoDimDisplay", video_dim_display, 0x620, 0x8, true, 0x3fdde0b2e0fe9c35)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_SYSTEM_POWER_POLICY.VideoReserved", video_reserved, 0x640, 0x60, true, 0xdfa636a243570c07)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_POLICY.SpindownTimeout", spindown_timeout, 0x6a0, 0x20, true, 0x19fdf187e812dae2)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_POLICY.OptimizeForPower", optimize_for_power, 0x6c0, 0x8, true, 0xc85dcbe3bf7c3fb5)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_POLICY.FanThrottleTolerance", fan_throttle_tolerance, 0x6c8, 0x8, true, 0x66e6c21ec8174369)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_POLICY.ForcedThrottle", forced_throttle, 0x6d0, 0x8, true, 0x9f05638c5e97dd99)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_POLICY.MinThrottle", min_throttle, 0x6d8, 0x8, true, 0x66316819d11e83b1)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::action_policy_t), "_SYSTEM_POWER_POLICY.OverThrottled", over_throttled, 0x6e0, 0x60, true, 0xbed5b220516514b4)
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
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif