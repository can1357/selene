#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.Size", size, 0x0, 0x0, false, 0xc7856a774bbae372)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.EvtDeviceArmWakeFromS0", evt_device_arm_wake_from_s0, 0x0, 0x0, false, 0x6827ce68d119b20e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.EvtDeviceDisarmWakeFromS0", evt_device_disarm_wake_from_s0, 0x0, 0x0, false, 0x3575a5f3d507137)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.EvtDeviceWakeFromS0Triggered", evt_device_wake_from_s0_triggered, 0x0, 0x0, false, 0x92f165a8bd9da8c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.EvtDeviceArmWakeFromSx", evt_device_arm_wake_from_sx, 0x0, 0x0, false, 0x425de26f5be0d5e4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.EvtDeviceDisarmWakeFromSx", evt_device_disarm_wake_from_sx, 0x0, 0x0, false, 0x49876f3e1cc9da76)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.EvtDeviceWakeFromSxTriggered", evt_device_wake_from_sx_triggered, 0x0, 0x0, false, 0xc4f702a9e842d9d6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_arm_wake_from_sx_with_reason_t ), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_7.EvtDeviceArmWakeFromSxWithReason", evt_device_arm_wake_from_sx_with_reason, 0x0, 0x0, false, 0xf55e344dff4de1d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif