#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_13.PowerState", power_state, 0x0, 0x0, false, 0xb226a010dd4e4908)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_13.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0xc2c6bab977643ca4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_13.DeviceObject", device_object, 0x0, 0x0, false, 0x1330f56a3c3e7df9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_13.Device", device, 0x0, 0x0, false, 0x43faba38003265a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_13.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0x8812bf509e5c4fd1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif