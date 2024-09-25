#if !IN_PARSER
#define _m000 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.IdleBasedOnMonitorDim", idle_based_on_monitor_dim, 0xc0, 0x1, true, 0xf6e882e563e5c625, 1, uint32_t)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.DisableIdleOnNoOpenHandles", disable_idle_on_no_open_handles, 0xc1, 0x1, true, 0x2c6c6b32fd75b4c3, 1, uint32_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.IdleEnabledInRegistry", idle_enabled_in_registry, 0xc2, 0x1, true, 0xba5916ca09c74eec, 1, uint32_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.IdleEnabledInWmi", idle_enabled_in_wmi, 0xc3, 0x1, true, 0xaa3f74293c2ef882, 1, uint32_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_HID_RT_POWER_DATA.EpmEnabledInRegistry", epm_enabled_in_registry, 0xc4, 0x2, true, 0xca13879a5cb4b49a, 0, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.EpmEnabledUseMonitor", epm_enabled_use_monitor, 0xc6, 0x1, true, 0xf5e2698603d3a653, 1, uint32_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.MonitorOff", monitor_off, 0xc7, 0x1, true, 0x297d2c3508215be7, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.SystemInCS", system_in_cs, 0xc8, 0x1, true, 0x639cba724d0f5488, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.PdoInStableState", pdo_in_stable_state, 0xc9, 0x1, true, 0x816684769a6ea11, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.MonitorDim", monitor_dim, 0xca, 0x1, true, 0x1234c19229481722, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.IdleAttempted", idle_attempted, 0xcb, 0x1, true, 0x4ed7d4dbadccf303, 1, uint32_t)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeout", default_idle_timeout, 0x0, 0x20, true, 0x574dec0b3bbd8834)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutForConnectedStandby", default_idle_timeout_for_connected_standby, 0x20, 0x20, true, 0xbfd4caf06c890b07)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutForNoHandles", default_idle_timeout_for_no_handles, 0x40, 0x20, true, 0x44903f7c2044460c)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutForNoHandlesInitial", default_idle_timeout_for_no_handles_initial, 0x60, 0x20, true, 0xcdf14415b426b007)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutForMonitorDim", default_idle_timeout_for_monitor_dim, 0x80, 0x20, true, 0x55b56fe73fd90433)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.PdoIdleTimeoutOverride", pdo_idle_timeout_override, 0xa0, 0x20, true, 0x5a96973fbed0fc71)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.SuppressInputInCS", suppress_input_in_cs, 0xcc, 0x1, true, 0x68fc24bb160f5242, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_DATA.DisablePingPongRetriesOnDeviceConfigError", disable_ping_pong_retries_on_device_config_error, 0xcd, 0x1, true, 0x723d39ac151d63cc, 1, uint32_t)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.ClientInputSuppressionRequestsNeeded", client_input_suppression_requests_needed, 0xe0, 0x20, true, 0x41bbe0f884ed7681)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_HID_RT_POWER_DATA.SystemInputSuppressionSupport", system_input_suppression_support, 0x100, 0x20, true, 0xed1122fc0e022ddd, 32, uint32_t)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum po::input_suppression_state_t), "_HID_RT_POWER_DATA.SystemInputSuppressionState", system_input_suppression_state, 0x120, 0x20, true, 0x9ef1f5cbd60025bf)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutInMsec", default_idle_timeout_in_msec, 0x0, 0x0, false, 0xd528e11a5704082c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutInMsecForConnectedStandby", default_idle_timeout_in_msec_for_connected_standby, 0x0, 0x0, false, 0xad641f0170d98498)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutInMsecForNoHandles", default_idle_timeout_in_msec_for_no_handles, 0x0, 0x0, false, 0x100537c3059551d9)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutInMsecForNoHandlesInitial", default_idle_timeout_in_msec_for_no_handles_initial, 0x0, 0x0, false, 0xfd5e4e3ffad13057)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutInMsecForMonitorDim", default_idle_timeout_in_msec_for_monitor_dim, 0x0, 0x0, false, 0x2388271618451b14)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.DefaultIdleTimeoutInMsecForWakeScreenOnInput", default_idle_timeout_in_msec_for_wake_screen_on_input, 0x0, 0x0, false, 0xe0979f8853a68be3)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_DATA.PdoIdleTimeoutInMsecOverride", pdo_idle_timeout_in_msec_override, 0x0, 0x0, false, 0x24c90eaf8726a55a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::wake_screen_on_input_support_t), "_HID_RT_POWER_DATA.WakeScreenOnInputSupport", wake_screen_on_input_support, 0x0, 0x0, false, 0x101324b6b4f59f10)
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
#endif