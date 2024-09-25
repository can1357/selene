#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_17.PowerState", power_state, 0x0, 0x0, false, 0xb3fab18f88b03dde)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_17.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0xd38437c6fa84bb3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_17.DeviceObject", device_object, 0x0, 0x0, false, 0xdf40604f6b6385e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_17.Device", device, 0x0, 0x0, false, 0xf9da8f72c353acb4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_17.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0xb20221cfeed19e25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif