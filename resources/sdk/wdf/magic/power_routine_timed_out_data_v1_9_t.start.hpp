#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_9.PowerState", power_state, 0x0, 0x0, false, 0x34ff44d064f06256)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_9.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0x95b8a037af25ee6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_9.DeviceObject", device_object, 0x0, 0x0, false, 0x6f714a100a411a54)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_9.Device", device, 0x0, 0x0, false, 0xbc5c658399c1e327)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_9.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0x34f5418d1891d1c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif