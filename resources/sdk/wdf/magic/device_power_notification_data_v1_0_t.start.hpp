#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Type", type, 0x0, 0x0, false, 0xdf9a08a9fa5ddb83)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xf32bc764e28fce2c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xc71807530b1ee815)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.EnterState", enter_state, 0x0, 0x0, false, 0x1cb8914339b3c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x81fe47ba823917dd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x9172b28325a6cf94)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x56b5349ef56ced2a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x6e744256b3057770)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xe3761f7e851acbdb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_0.Data", data, 0x0, 0x0, false, 0x8b19bf3e2f7142e2)
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