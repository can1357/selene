#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_POLICY_EVENT_CALLBACKS.Size", size, 0x0, 0x20, true, 0x5197f52ee5377c40)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS.EvtDeviceArmWakeFromS0", evt_device_arm_wake_from_s0, 0x40, 0x40, true, 0x44c48d82a85eb9c7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS.EvtDeviceDisarmWakeFromS0", evt_device_disarm_wake_from_s0, 0x80, 0x40, true, 0x47d0df9d21e98157)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS.EvtDeviceWakeFromS0Triggered", evt_device_wake_from_s0_triggered, 0xc0, 0x40, true, 0x28de4980e6db9ad2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS.EvtDeviceArmWakeFromSx", evt_device_arm_wake_from_sx, 0x100, 0x40, true, 0x50234701e02fc448)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS.EvtDeviceDisarmWakeFromSx", evt_device_disarm_wake_from_sx, 0x140, 0x40, true, 0xfd60047ef322c9b8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_POWER_POLICY_EVENT_CALLBACKS.EvtDeviceWakeFromSxTriggered", evt_device_wake_from_sx_triggered, 0x180, 0x40, true, 0x5ae18f62beaadb37)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_arm_wake_from_sx_with_reason_t ), "_WDF_POWER_POLICY_EVENT_CALLBACKS.EvtDeviceArmWakeFromSxWithReason", evt_device_arm_wake_from_sx_with_reason, 0x1c0, 0x40, true, 0xce444329d9255e25)
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