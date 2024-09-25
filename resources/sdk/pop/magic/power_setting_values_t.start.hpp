#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.StructureSize", structure_size, 0x0, 0x20, true, 0x2245eb75874f7d1f)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::system_power_policy_t), "_POP_POWER_SETTING_VALUES.PopPolicy", pop_policy, 0x20, 0x40, true, 0x39896bb159a19c2a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_condition_t), "_POP_POWER_SETTING_VALUES.CurrentAcDcPowerState", current_ac_dc_power_state, 0x760, 0x20, true, 0x3fa397e231f465e1)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.AwayModeEnabled", away_mode_enabled, 0x780, 0x8, true, 0x37c7f63862ab2388)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.AwayModeEngaged", away_mode_engaged, 0x788, 0x8, true, 0xea8cfdb876dfe006)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.AwayModePolicyAllowed", away_mode_policy_allowed, 0x790, 0x8, true, 0x7c9c444f3484eb2e)
#define _m006 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int32_t), "_POP_POWER_SETTING_VALUES.AwayModeIgnoreUserPresent", away_mode_ignore_user_present, 0x7a0, 0x20, true, 0xaac72c91e608d04b, 32, uint32_t)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_POWER_SETTING_VALUES.AwayModeIgnoreAction", away_mode_ignore_action, 0x7c0, 0x20, true, 0xa3a52cc2c356e065)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.DisableFastS4", disable_fast_s4, 0x7e0, 0x8, true, 0x8158d0669c23092a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.DisableStandbyStates", disable_standby_states, 0x7e8, 0x8, true, 0x9fce5e45470a2f92)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.UnattendSleepTimeout", unattend_sleep_timeout, 0x800, 0x20, true, 0x356905b71f01cb10)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_POP_POWER_SETTING_VALUES.DiskIgnoreTime", disk_ignore_time, 0x820, 0x20, true, 0x808fd7cd4a551d02)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_POP_POWER_SETTING_VALUES.DeviceIdlePolicy", device_idle_policy, 0x840, 0x20, true, 0xb8014ff243f767b8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.VideoDimTimeout", video_dim_timeout, 0x860, 0x20, true, 0xf31d13f896e6cb4b)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.VideoNormalBrightness", video_normal_brightness, 0x880, 0x20, true, 0xad7119c793066d40)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.VideoDimBrightness", video_dim_brightness, 0x8a0, 0x20, true, 0xef2798318ba5a3a9)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.AlsOffset", als_offset, 0x8c0, 0x20, true, 0xf8cfc7c170058bed)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.AlsEnabled", als_enabled, 0x8e0, 0x20, true, 0xd4cc62526bd63d4f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.EsBrightness", es_brightness, 0x900, 0x20, true, 0x92282f63f75cf577)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.SwitchShutdownForced", switch_shutdown_forced, 0x920, 0x8, true, 0x96a0214d0c5cddec)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.SystemCoolingPolicy", system_cooling_policy, 0x940, 0x20, true, 0x7df114d80323b88c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.MediaBufferingEngaged", media_buffering_engaged, 0x960, 0x8, true, 0xe852cea6b32d11fe)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.FullscreenVideoPlayback", fullscreen_video_playback, 0x970, 0x8, true, 0xbd9ec2708b81521d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.EsBatteryThreshold", es_battery_threshold, 0x980, 0x20, true, 0xff0a0b627aa62415)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.EsAggressive", es_aggressive, 0x9a0, 0x8, true, 0xe99981d78be96cc0)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.EsUserAwaySetting", es_user_away_setting, 0x9a8, 0x8, true, 0xcd9ad63678e898ef)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.ConnectivityInStandby", connectivity_in_standby, 0x9c0, 0x20, true, 0x4280fb4b2d858615)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.AudioActivity", audio_activity, 0x968, 0x8, true, 0xe165b0289b8ce21f)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.DisconnectedStandbyMode", disconnected_standby_mode, 0x9e0, 0x20, true, 0x9f5a34eec514dd62)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_SETTING_VALUES.UserPresencePredictionEnabled", user_presence_prediction_enabled, 0xa00, 0x20, true, 0xc7accf0048331bff)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.AirplaneModeEnabled", airplane_mode_enabled, 0xa20, 0x8, true, 0x31417a0228dbc6b6)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.BluetoothDeviceCharging", bluetooth_device_charging, 0xa28, 0x8, true, 0x23f43d95a6853689)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.OffloadedAudio", offloaded_audio, 0x0, 0x0, false, 0xc86c1ba81686aaa7)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_SETTING_VALUES.NonOffloadedAudio", non_offloaded_audio, 0x0, 0x0, false, 0x98610715779a88e9)
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
#endif