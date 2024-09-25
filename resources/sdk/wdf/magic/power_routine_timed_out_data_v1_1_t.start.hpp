#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_1.PowerState", power_state, 0x0, 0x0, false, 0xf9907dada9af3c08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_1.PowerPolicyState", power_policy_state, 0x0, 0x0, false, 0x851ff00b0ee02ea5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_1.DeviceObject", device_object, 0x0, 0x0, false, 0x3bbf9fde0cef9c1e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_1.Device", device, 0x0, 0x0, false, 0xef6af7d2c2bfb4e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_1.TimedOutThread", timed_out_thread, 0x0, 0x0, false, 0x40b021495c9e5d98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif