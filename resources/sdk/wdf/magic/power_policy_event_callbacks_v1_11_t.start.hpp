#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.Size", size, 0x0, 0x0, false, 0xf6332049d7d5339c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.EvtDeviceArmWakeFromS0", evt_device_arm_wake_from_s0, 0x0, 0x0, false, 0xa81f612c310d6d34)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.EvtDeviceDisarmWakeFromS0", evt_device_disarm_wake_from_s0, 0x0, 0x0, false, 0xcf54f9bef911653)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.EvtDeviceWakeFromS0Triggered", evt_device_wake_from_s0_triggered, 0x0, 0x0, false, 0x9dbdbfb6952370cf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.EvtDeviceArmWakeFromSx", evt_device_arm_wake_from_sx, 0x0, 0x0, false, 0x94f40347a3f95068)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.EvtDeviceDisarmWakeFromSx", evt_device_disarm_wake_from_sx, 0x0, 0x0, false, 0xfd2ddcfdbbd4da35)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.EvtDeviceWakeFromSxTriggered", evt_device_wake_from_sx_triggered, 0x0, 0x0, false, 0x2d81ffb4be6a803a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_arm_wake_from_sx_with_reason_t ), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11.EvtDeviceArmWakeFromSxWithReason", evt_device_arm_wake_from_sx_with_reason, 0x0, 0x0, false, 0x357bd4f91ecabc7b)
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