#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.Size", size, 0x0, 0x20, true, 0x90522292aba449b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreArmWakeFromS0", evt_cx_device_pre_arm_wake_from_s0, 0x40, 0x40, true, 0x30e13fecca8aabf4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreArmWakeFromS0FailedCleanup", evt_cx_device_pre_arm_wake_from_s0_failed_cleanup, 0x80, 0x40, true, 0x767797dd5926c29e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePostArmWakeFromS0", evt_cx_device_post_arm_wake_from_s0, 0xc0, 0x40, true, 0xaf5dacbbbcd14680)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreDisarmWakeFromS0", evt_cx_device_pre_disarm_wake_from_s0, 0x100, 0x40, true, 0xcf4d6fa7aa651d59)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePostDisarmWakeFromS0", evt_cx_device_post_disarm_wake_from_s0, 0x140, 0x40, true, 0xadc06c0e91cf12fe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreWakeFromS0Triggered", evt_cx_device_pre_wake_from_s0_triggered, 0x180, 0x40, true, 0x3fefe8d6f1cffb2c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePostWakeFromS0Triggered", evt_cx_device_post_wake_from_s0_triggered, 0x1c0, 0x40, true, 0xac92602e28013948)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreArmWakeFromSx", evt_cx_device_pre_arm_wake_from_sx, 0x200, 0x40, true, 0x30bf2d4bad25c342)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreArmWakeFromSxFailedCleanup", evt_cx_device_pre_arm_wake_from_sx_failed_cleanup, 0x240, 0x40, true, 0xbc99b2d8b0700d4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePostArmWakeFromSx", evt_cx_device_post_arm_wake_from_sx, 0x280, 0x40, true, 0xfca1f0c1ab7a2d6b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreArmWakeFromSxWithReason", evt_cx_device_pre_arm_wake_from_sx_with_reason, 0x2c0, 0x40, true, 0xe7477eddf9b1b6f9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t ), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup", evt_cx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup, 0x300, 0x40, true, 0x7b0d5bbbf30318ac)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePostArmWakeFromSxWithReason", evt_cx_device_post_arm_wake_from_sx_with_reason, 0x340, 0x40, true, 0x21c8c736f2e2abd4)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreDisarmWakeFromSx", evt_cx_device_pre_disarm_wake_from_sx, 0x380, 0x40, true, 0xd9f29448c3f02fd2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePostDisarmWakeFromSx", evt_cx_device_post_disarm_wake_from_sx, 0x3c0, 0x40, true, 0xd67810c9bb6892c8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePreWakeFromSxTriggered", evt_cx_device_pre_wake_from_sx_triggered, 0x400, 0x40, true, 0x88a4701aec69f29c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.EvtCxDevicePostWakeFromSxTriggered", evt_cx_device_post_wake_from_sx_triggered, 0x440, 0x40, true, 0x504859685369d82e)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif