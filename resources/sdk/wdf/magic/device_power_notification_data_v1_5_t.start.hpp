#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Type", type, 0x0, 0x0, false, 0xb368f0a3ae8e7e6c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x377a7cb2c7fef918)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x41d30c4f3c2cf5c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.EnterState", enter_state, 0x0, 0x0, false, 0xdb3cda9efd30ad75)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x58b2ed92eaa5131c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x94da686d6901fcdc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x1270c46bb014d319)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x65f21a8c073bfe78)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x52cbe93b66065890)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_5.Data", data, 0x0, 0x0, false, 0x62cca367c16c3711)
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