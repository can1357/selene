#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Type", type, 0x0, 0x0, false, 0x4b21b43a9f351f1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xe91a40eb37d253eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x14b656a616f4d947)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.EnterState", enter_state, 0x0, 0x0, false, 0xbdccbda50d1e1543)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x1b14cea37cbec682)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x788aa96d4274007d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x833ea3e64a8c0171)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x883d6ebe46d3d939)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x708a3244d4ad043a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_15.Data", data, 0x0, 0x0, false, 0xc10e44a8ce424669)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif