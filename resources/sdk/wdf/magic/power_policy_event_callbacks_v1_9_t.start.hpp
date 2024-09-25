#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.Size", size, 0x0, 0x0, false, 0x54d307ae3385f3ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.EvtDeviceArmWakeFromS0", evt_device_arm_wake_from_s0, 0x0, 0x0, false, 0xb2fbd10e063d69ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.EvtDeviceDisarmWakeFromS0", evt_device_disarm_wake_from_s0, 0x0, 0x0, false, 0x62ac03d9ac5b835d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.EvtDeviceWakeFromS0Triggered", evt_device_wake_from_s0_triggered, 0x0, 0x0, false, 0x3dbaa0cb166eda12)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.EvtDeviceArmWakeFromSx", evt_device_arm_wake_from_sx, 0x0, 0x0, false, 0x37bac6e66c305c28)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.EvtDeviceDisarmWakeFromSx", evt_device_disarm_wake_from_sx, 0x0, 0x0, false, 0x94c46a1fa105e84b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.EvtDeviceWakeFromSxTriggered", evt_device_wake_from_sx_triggered, 0x0, 0x0, false, 0x27ea0a3d014fa283)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_arm_wake_from_sx_with_reason_t ), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_9.EvtDeviceArmWakeFromSxWithReason", evt_device_arm_wake_from_sx_with_reason, 0x0, 0x0, false, 0x97fbc1ff8249d665)
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