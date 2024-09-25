#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Type", type, 0x0, 0x0, false, 0xb35c995ba85b6517)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xa981473bb14d77f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x92a3e2f4ce85d650)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.EnterState", enter_state, 0x0, 0x0, false, 0x6f3329f86366b2d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x519f85c34197e1cf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x7d710c70807a38f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x3fd0f218e8838dd8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x4c5aaa508ff34bff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xc202edb069954f40)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_7.Data", data, 0x0, 0x0, false, 0xf6a07459b982a417)
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