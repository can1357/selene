#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_idle_machine_t), "FxPowerPolicyOwnerSettings.m_PowerIdleMachine", m_power_idle_machine, 0x0, 0x40, true, 0x8475f97809b9b6ea)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pox_interface_t), "FxPowerPolicyOwnerSettings.m_PoxInterface", m_pox_interface, 0x940, 0x0, true, 0xe9bdc216ea3262ed)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_arm_wake_from_s0_t), "FxPowerPolicyOwnerSettings.m_DeviceArmWakeFromS0", m_device_arm_wake_from_s0, 0xb40, 0x40, true, 0x372a641a907365f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_arm_wake_from_sx_t), "FxPowerPolicyOwnerSettings.m_DeviceArmWakeFromSx", m_device_arm_wake_from_sx, 0xc80, 0xc0, true, 0x7c746e5539bba320)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_disarm_wake_from_s0_t), "FxPowerPolicyOwnerSettings.m_DeviceDisarmWakeFromS0", m_device_disarm_wake_from_s0, 0xe40, 0x40, true, 0xd0220c8759fee0ff)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_disarm_wake_from_sx_t), "FxPowerPolicyOwnerSettings.m_DeviceDisarmWakeFromSx", m_device_disarm_wake_from_sx, 0xf80, 0x40, true, 0x3e56f687e3313cf7)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_wake_from_s0_triggered_t), "FxPowerPolicyOwnerSettings.m_DeviceWakeFromS0Triggered", m_device_wake_from_s0_triggered, 0x10c0, 0x40, true, 0xde73676d6f5b9d54)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_wake_from_sx_triggered_t), "FxPowerPolicyOwnerSettings.m_DeviceWakeFromSxTriggered", m_device_wake_from_sx_triggered, 0x1200, 0x40, true, 0xfe50df49a165a204)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::usb_idle_info_t*), "FxPowerPolicyOwnerSettings.m_UsbIdle", m_usb_idle, 0x1340, 0x40, true, 0xf84707ca1840c6fe)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerPolicyOwnerSettings.m_PkgPnp", m_pkg_pnp, 0x1380, 0x40, true, 0xaaea86aeb1be7a4e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wake_policy_settings_t), "FxPowerPolicyOwnerSettings.m_WakeSettings", m_wake_settings, 0x13c0, 0x0, true, 0x334c5533aa75b31)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::idle_policy_settings_t), "FxPowerPolicyOwnerSettings.m_IdleSettings", m_idle_settings, 0x14c0, 0xc0, true, 0x9891dba8712e8c91)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerPolicyOwnerSettings.m_SystemToDeviceStateMap", m_system_to_device_state_map, 0x1b00, 0x20, true, 0xbff2b91239d119de)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerPolicyOwnerSettings.m_ChildrenPoweredOnCount", m_children_powered_on_count, 0x1b20, 0x20, true, 0x549b7cd7bab30553)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPowerPolicyOwnerSettings.m_ChildrenArmedCount", m_children_armed_count, 0x1b40, 0x20, true, 0xed3b3188d3a05218)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPowerPolicyOwnerSettings.m_WaitWakeStatus", m_wait_wake_status, 0x1b60, 0x20, true, 0x73afe13c3f31f94f)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_IdealDxStateForSx", m_ideal_dx_state_for_sx, 0x1b80, 0x8, true, 0xf847824343dcb06c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_RequestedPowerUpIrp", m_requested_power_up_irp, 0x1b88, 0x8, true, 0xdbf60ddedb644ed9)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_RequestedPowerDownIrp", m_requested_power_down_irp, 0x1b90, 0x8, true, 0x67fee8e3db26c432)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_RequestedWaitWakeIrp", m_requested_wait_wake_irp, 0x1b98, 0x8, true, 0x8c2276920c05cf24)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_WakeCompletionEventDropped", m_wake_completion_event_dropped, 0x1ba0, 0x8, true, 0x64a7a904c8878014)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_PowerFailed", m_power_failed, 0x1ba8, 0x8, true, 0x8c1d60a7af97eb5b)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_CanSaveState", m_can_save_state, 0x1bb0, 0x8, true, 0x38da3bbb11cfa25f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_ChildrenCanPowerUp", m_children_can_power_up, 0x1bb8, 0x8, true, 0x2fd0529d8923f8d)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyOwnerSettings.m_SystemWakeSource", m_system_wake_source, 0x1bc0, 0x8, true, 0x1600e5cd8ad4d1eb)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::callback_object_t*), "FxPowerPolicyOwnerSettings.m_PowerCallbackObject", m_power_callback_object, 0x1c00, 0x40, true, 0x56bdc855bfb0d0be)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxPowerPolicyOwnerSettings.m_PowerCallbackRegistration", m_power_callback_registration, 0x1c40, 0x40, true, 0x9200abef318adb93)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPowerPolicyOwnerSettings.m_WaitWakeCancelCompletionOwnership", m_wait_wake_cancel_completion_ownership, 0x1c80, 0x20, true, 0x6ce1ffaee705d24a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_power_irp_tracker_t), "FxPowerPolicyOwnerSettings.m_DevicePowerIrpTracker", m_device_power_irp_tracker, 0x1680, 0x80, true, 0x237cf530f85d8318)
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
#endif