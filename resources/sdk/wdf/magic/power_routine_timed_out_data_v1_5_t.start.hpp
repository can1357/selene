#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_5.PowerState", power_state, 0x0, 0x0, false, 0x6a01f659651741ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_5.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0xc85bdd3c1555bf6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_5.DeviceObject", device_object, 0x0, 0x0, false, 0xc4ce1a2102693c8b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_5.Device", device, 0x0, 0x0, false, 0x86c2b00d434801e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_5.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0x1fa7e5b81d6a66dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif