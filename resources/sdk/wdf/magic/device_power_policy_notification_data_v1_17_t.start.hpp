#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Type", type, 0x0, 0x0, false, 0x650a6c02e84bfe21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x60f33e81bb68d76a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xebe3b5b241ee3487)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.EnterState", enter_state, 0x0, 0x0, false, 0xea7e3a37c5b22fc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x9819eefa783a1214)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xc7a80efd283ebe35)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x5fbcb873b1bea004)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x521578517b44a4d8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x10f20ad713261ffd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_17.Data", data, 0x0, 0x0, false, 0x41e990c1d3de92d)
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