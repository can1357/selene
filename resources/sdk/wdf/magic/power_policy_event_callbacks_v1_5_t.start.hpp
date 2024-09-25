#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_5.Size", size, 0x0, 0x20, true, 0x52d7427a1df87fa1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_5.EvtDeviceArmWakeFromS0", evt_device_arm_wake_from_s0, 0x40, 0x40, true, 0x7e94aa32beae6e65)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_5.EvtDeviceDisarmWakeFromS0", evt_device_disarm_wake_from_s0, 0x80, 0x40, true, 0xac0c850c53672bce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_5.EvtDeviceWakeFromS0Triggered", evt_device_wake_from_s0_triggered, 0xc0, 0x40, true, 0xbdc3759b7b330323)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_5.EvtDeviceArmWakeFromSx", evt_device_arm_wake_from_sx, 0x100, 0x40, true, 0x4ab3960b80332d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_5.EvtDeviceDisarmWakeFromSx", evt_device_disarm_wake_from_sx, 0x140, 0x40, true, 0x22ce51809e4a3e32)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_5.EvtDeviceWakeFromSxTriggered", evt_device_wake_from_sx_triggered, 0x180, 0x40, true, 0x6ca8d7e66e40107b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif