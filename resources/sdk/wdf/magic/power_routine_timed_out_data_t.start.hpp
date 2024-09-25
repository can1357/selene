#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA.PowerState", power_state, 0x0, 0x20, true, 0x4055bcfe464d4931)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA.PowerPolicyState", power_policy_state, 0x20, 0x20, true, 0x1c0454977c0f69e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA.DeviceObject", device_object, 0x40, 0x40, true, 0x2c04d14a07478637)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA.Device", device, 0x80, 0x40, true, 0x17cabacd2c3138db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_WDF_POWER_ROUTINE_TIMED_OUT_DATA.TimedOutThread", timed_out_thread, 0xc0, 0x40, true, 0x32dc086c5498ca8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif