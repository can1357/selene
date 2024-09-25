#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Type", type, 0x0, 0x0, false, 0xf2d98ae467d086df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xfd3fd4ef3b1b136b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xc7497927d198d3ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.EnterState", enter_state, 0x0, 0x0, false, 0x2f2c5ed2db5f155)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xce808e4dff75cafd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x5e84075a4d163afc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xf694020bb6970253)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xec39733c6da1eb69)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xcd033d9cfaf797ff)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_0.Data", data, 0x0, 0x0, false, 0x9645f8aee0e2d486)
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