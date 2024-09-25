#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Type", type, 0x0, 0x0, false, 0x64d6bd73d5b2e94a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xaf5ca5cb3193cd1b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xcdd10ecae70dd502)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.EnterState", enter_state, 0x0, 0x0, false, 0x21a164835c1ad99a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xdb444bd5b222873f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xf15014e48aac9c34)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x1fe147c14c9d07bf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x709f587a39ab7cdc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x71f1e5ef6fce9923)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_1.Data", data, 0x0, 0x0, false, 0x53afb485f5ead651)
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