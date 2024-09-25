#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "IdlePolicySettings.DxState", dx_state, 0x0, 0x20, true, 0x7c84c31635ebede5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_instance_internal_t*), "IdlePolicySettings.WmiInstance", wmi_instance, 0x40, 0x40, true, 0xcc093f9fc7f4146f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.Enabled", enabled, 0x80, 0x8, true, 0xbfea7849344b6963)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.Overridable", overridable, 0x88, 0x8, true, 0x5545333d1a500209)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.Set", set, 0x90, 0x8, true, 0xeb9ac52a3adffbe0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.Dirty", dirty, 0x98, 0x8, true, 0x2c426907188ffd42)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.WakeFromS0Capable", wake_from_s0_capable, 0xc0, 0x8, true, 0x833eb7628bec489c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.UsbSSCapable", usb_ss_capable, 0xc8, 0x8, true, 0x520161f6de5d3fe9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.UsbSSCapabilityKnown", usb_ss_capability_known, 0xd0, 0x8, true, 0x60e5378b4532f967)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.PowerUpIdleDeviceOnSystemWake", power_up_idle_device_on_system_wake, 0xd8, 0x8, true, 0x78a0aef431277b50)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::idle_timeout_management_t), "IdlePolicySettings.m_TimeoutMgmt", m_timeout_mgmt, 0x100, 0xc0, true, 0xd1d0de6af44d6b72)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.D3ColdCapabilityKnown", d3_cold_capability_known, 0xe0, 0x8, true, 0xc81d4ad70409d1bc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdlePolicySettings.D3ColdSupported", d3_cold_supported, 0xe8, 0x8, true, 0xf0dd4ac1d4ad038f)
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
#endif