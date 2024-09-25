#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Type", type, 0x0, 0x0, false, 0xe75ecb46fac236e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xb92abb59ce89e282)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xb63c00e0c446cf19)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.EnterState", enter_state, 0x0, 0x0, false, 0x801f01cf1c2cea0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x1aded486a095a4f6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x69e7b0ca89524436)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x75128c1e827a2152)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x6937e897fa6e1dc7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x97cf4fe7ab171668)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_5.Data", data, 0x0, 0x0, false, 0x7284c68ba2b0f333)
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