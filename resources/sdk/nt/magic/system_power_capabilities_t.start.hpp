#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.PowerButtonPresent", power_button_present, 0x0, 0x8, true, 0x7918cbdde24a2cd5)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.SleepButtonPresent", sleep_button_present, 0x8, 0x8, true, 0x45d2755839608ed1)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.LidPresent", lid_present, 0x10, 0x8, true, 0xdcd9f69f1163d62f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.SystemS1", system_s1, 0x18, 0x8, true, 0x7f0f18cded5123ee)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.SystemS2", system_s2, 0x20, 0x8, true, 0xfc3479ebd68877af)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.SystemS3", system_s3, 0x28, 0x8, true, 0x14d3747a0cceb19b)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.SystemS4", system_s4, 0x30, 0x8, true, 0xcc8c7e71cdfbd3a1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.SystemS5", system_s5, 0x38, 0x8, true, 0x41f2aefcb8350109)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.HiberFilePresent", hiber_file_present, 0x40, 0x8, true, 0xf38745d06eab6e39)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.FullWake", full_wake, 0x48, 0x8, true, 0xbd51b43c1c130ac1)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.VideoDimPresent", video_dim_present, 0x50, 0x8, true, 0x5632b998872ea88b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.ApmPresent", apm_present, 0x58, 0x8, true, 0x6058ee2d7edec1a7)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.UpsPresent", ups_present, 0x60, 0x8, true, 0x19332b6bad402052)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.ThermalControl", thermal_control, 0x68, 0x8, true, 0xddfccf56c02a0e1b)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.ProcessorThrottle", processor_throttle, 0x70, 0x8, true, 0xdac51d1f78f5f9b5)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.ProcessorMinThrottle", processor_min_throttle, 0x78, 0x8, true, 0x828563cea5deab80)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.ProcessorMaxThrottle", processor_max_throttle, 0x80, 0x8, true, 0x4ead765106ec5f3)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.FastSystemS4", fast_system_s4, 0x88, 0x8, true, 0xabf0e4cfd959b298)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.Hiberboot", hiberboot, 0x90, 0x8, true, 0x7326d298ce510e6c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.WakeAlarmPresent", wake_alarm_present, 0x98, 0x8, true, 0x6632ec53c129b7bd)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.AoAc", ao_ac, 0xa0, 0x8, true, 0xb2dd0f98e757b395)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.DiskSpinDown", disk_spin_down, 0xa8, 0x8, true, 0xe230295ece59cce1)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.HiberFileType", hiber_file_type, 0xb0, 0x8, true, 0x95d83c9d4e0a65b3)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.AoAcConnectivitySupported", ao_ac_connectivity_supported, 0xb8, 0x8, true, 0x4800e4af08395dca)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.SystemBatteriesPresent", system_batteries_present, 0xf0, 0x8, true, 0x3394f3af7c43fe33)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_CAPABILITIES.BatteriesAreShortTerm", batteries_are_short_term, 0xf8, 0x8, true, 0x54b08a8a7fd0b9a1)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::battery_reporting_scale_t, 3>), "SYSTEM_POWER_CAPABILITIES.BatteryScale", battery_scale, 0x100, 0xc0, true, 0x738107552d1167e2)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "SYSTEM_POWER_CAPABILITIES.AcOnLineWake", ac_on_line_wake, 0x1c0, 0x20, true, 0xd7be76b3f79eddb1)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "SYSTEM_POWER_CAPABILITIES.SoftLidWake", soft_lid_wake, 0x1e0, 0x20, true, 0xc996fbf4fd2fa4d7)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "SYSTEM_POWER_CAPABILITIES.RtcWake", rtc_wake, 0x200, 0x20, true, 0x4feca848c51209ef)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "SYSTEM_POWER_CAPABILITIES.MinDeviceWakeState", min_device_wake_state, 0x220, 0x20, true, 0xad458f74821926fa)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "SYSTEM_POWER_CAPABILITIES.DefaultLowLatencyWake", default_low_latency_wake, 0x240, 0x20, true, 0x7d5e5f2be7e02c99)
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
#endif