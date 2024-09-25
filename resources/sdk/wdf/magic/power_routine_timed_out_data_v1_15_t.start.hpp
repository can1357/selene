#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_15.PowerState", power_state, 0x0, 0x0, false, 0xb3636ce7e9a9f88e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_15.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0x73e97b2827e04925)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_15.DeviceObject", device_object, 0x0, 0x0, false, 0xb431d5d0e245e57a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_15.Device", device, 0x0, 0x0, false, 0x750e49a53d92e880)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_15.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0xbe7497ca841a9ea6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif