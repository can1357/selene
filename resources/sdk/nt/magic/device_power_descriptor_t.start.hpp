#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_POWER_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xe39cccd79da1c244)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_POWER_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x13b083e5dac696)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_POWER_DESCRIPTOR.DeviceAttentionSupported", device_attention_supported, 0x40, 0x8, true, 0xf09f8ba0881eee9f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_POWER_DESCRIPTOR.AsynchronousNotificationSupported", asynchronous_notification_supported, 0x48, 0x8, true, 0x6de5ef2f8d4d98c8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_POWER_DESCRIPTOR.IdlePowerManagementEnabled", idle_power_management_enabled, 0x50, 0x8, true, 0xb96c3fae5f056c32)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_POWER_DESCRIPTOR.D3ColdEnabled", d3_cold_enabled, 0x58, 0x8, true, 0x92798286402b23fb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_POWER_DESCRIPTOR.D3ColdSupported", d3_cold_supported, 0x60, 0x8, true, 0xdcdd9b2be7a4e425)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_POWER_DESCRIPTOR.NoVerifyDuringIdlePower", no_verify_during_idle_power, 0x68, 0x8, true, 0x180dc97e5cc18c8e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_POWER_DESCRIPTOR.IdleTimeoutInMS", idle_timeout_in_ms, 0x80, 0x20, true, 0xdce16b7fa22e2379)
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
#endif