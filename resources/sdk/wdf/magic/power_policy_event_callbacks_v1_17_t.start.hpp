#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.Size", size, 0x0, 0x0, false, 0x342b344457105133)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.EvtDeviceArmWakeFromS0", evt_device_arm_wake_from_s0, 0x0, 0x0, false, 0x41625fed18a51886)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.EvtDeviceDisarmWakeFromS0", evt_device_disarm_wake_from_s0, 0x0, 0x0, false, 0xf90340d051e75e0b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.EvtDeviceWakeFromS0Triggered", evt_device_wake_from_s0_triggered, 0x0, 0x0, false, 0x4fba16573ad4124c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.EvtDeviceArmWakeFromSx", evt_device_arm_wake_from_sx, 0x0, 0x0, false, 0xe3d01b1c09883b6a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.EvtDeviceDisarmWakeFromSx", evt_device_disarm_wake_from_sx, 0x0, 0x0, false, 0xd215a77e40e059bb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.EvtDeviceWakeFromSxTriggered", evt_device_wake_from_sx_triggered, 0x0, 0x0, false, 0x7bdcce5e9e605c58)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_arm_wake_from_sx_with_reason_t ), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_17.EvtDeviceArmWakeFromSxWithReason", evt_device_arm_wake_from_sx_with_reason, 0x0, 0x0, false, 0x9393bd448ca7989c)
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