#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_0.PowerState", power_state, 0x0, 0x0, false, 0x575553897c89ac98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_0.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0x435fb0a2bc1bcae0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_0.DeviceObject", device_object, 0x0, 0x0, false, 0x2935c1329571f2cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_0.Device", device, 0x0, 0x0, false, 0x73b5a641d1067df5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_0.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0xdd4df8bce3115d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif