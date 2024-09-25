#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Type", type, 0x0, 0x0, false, 0xced9043df791a478)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x661d4b81c3a6fc46)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xa4a32237a9eea601)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.EnterState", enter_state, 0x0, 0x0, false, 0xd7f8ed6870389288)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x2f225c741d7dbae3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x6db6183c5ffe74a5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xa0a63fef6a9bddcc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x42646dc7dfd53419)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x59fa422828d2b124)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_11.Data", data, 0x0, 0x0, false, 0x8be981816cb2eca0)
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