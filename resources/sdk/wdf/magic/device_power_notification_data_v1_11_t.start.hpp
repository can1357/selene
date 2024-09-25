#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Type", type, 0x0, 0x0, false, 0xfb817571ef9630af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x9f872d8173ab074e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x968e74db107fcdde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.EnterState", enter_state, 0x0, 0x0, false, 0x9c0fdba06bbc25e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x4129cc16bea34b99)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xf525852e12300cfd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xd62c3a4473012905)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x345c3113ca3cedfd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xf7e040130682c0c9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_11.Data", data, 0x0, 0x0, false, 0x1176eeca41a55dcd)
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