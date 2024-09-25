#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_11.PowerState", power_state, 0x0, 0x0, false, 0xa69b318a1fde9967)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_11.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0x571a6c1a106212fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_11.DeviceObject", device_object, 0x0, 0x0, false, 0xb538ba317636eb86)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_11.Device", device, 0x0, 0x0, false, 0xdea506c538d4e84f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_11.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0xb6e62cb837a78330)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif