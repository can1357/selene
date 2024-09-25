#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Type", type, 0x0, 0x0, false, 0x8b16637f7a142236)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xef07f2f79e48efb9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xbe8318ac294b3cdc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.EnterState", enter_state, 0x0, 0x0, false, 0xb55608b44c4a642a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x3b2487786e4c8da4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xfc9ef2e752cf4147)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x3f9a5b69cf697056)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xfd8928b5b0f16b81)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x65f5a133dd745118)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_1.Data", data, 0x0, 0x0, false, 0x7e3c33cf18bd417c)
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