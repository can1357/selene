#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_0.Size", size, 0x0, 0x0, false, 0xa3f3e61910c76d5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_0.EvtDeviceArmWakeFromS0", evt_device_arm_wake_from_s0, 0x0, 0x0, false, 0x7eea4d246bb36180)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_0.EvtDeviceDisarmWakeFromS0", evt_device_disarm_wake_from_s0, 0x0, 0x0, false, 0x6e1a1aec04986b77)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_0.EvtDeviceWakeFromS0Triggered", evt_device_wake_from_s0_triggered, 0x0, 0x0, false, 0xefa5436173534573)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_0.EvtDeviceArmWakeFromSx", evt_device_arm_wake_from_sx, 0x0, 0x0, false, 0x94b1c266bb6ea374)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_0.EvtDeviceDisarmWakeFromSx", evt_device_disarm_wake_from_sx, 0x0, 0x0, false, 0x1f8b19842a628e3a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_0.EvtDeviceWakeFromSxTriggered", evt_device_wake_from_sx_triggered, 0x0, 0x0, false, 0x4f87c33e1c6b946f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif