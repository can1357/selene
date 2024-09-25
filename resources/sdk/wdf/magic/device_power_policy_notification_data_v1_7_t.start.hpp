#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Type", type, 0x0, 0x0, false, 0x48a65aa698c2a390)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x901293fc4f3ceb72)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xbf45968a794974a6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.EnterState", enter_state, 0x0, 0x0, false, 0xa5634361471e4d3d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xd86c04eb575f5acc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x573680b12ba315ce)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xd7aa9ae585cf04d6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xb1a834ea909d8007)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xe08f74657bb1bf6b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_7.Data", data, 0x0, 0x0, false, 0xf1c574fd0b29422b)
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