#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Type", type, 0x0, 0x0, false, 0xc68a3233288d6e45)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xb605a3b0f607f9c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x59aca9288c0c74a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.EnterState", enter_state, 0x0, 0x0, false, 0xf82eef9fa3386c44)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x33cf94f537df4212)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x75363d0fcb8cdffe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x48d838819f664771)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xadaf19a559eda305)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xfc76ceb7e19f3c3b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_15.Data", data, 0x0, 0x0, false, 0x31024bd4568e0f8a)
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