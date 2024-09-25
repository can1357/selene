#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_7.PowerState", power_state, 0x0, 0x0, false, 0x182615af07525bf3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_7.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0xc3f01e9616945455)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_7.DeviceObject", device_object, 0x0, 0x0, false, 0xb36dbfdc0e2efc1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_7.Device", device, 0x0, 0x0, false, 0xb055f8148e6830a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_7.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0x4ce44c4d4ab52f0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif