#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Type", type, 0x0, 0x0, false, 0xf4b3fb183ea7c37e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xe7996707fa9ec826)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x7b5bb5a875aeefeb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.EnterState", enter_state, 0x0, 0x0, false, 0xc059390800df8497)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x861cdb48a9cb5aef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x1c0481a5cf2e3d5f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xbcc6e37cb40ece84)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xdf8899c22c157fe6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x20b28569770fea5e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_5.Data", data, 0x0, 0x0, false, 0xe865f477189573f)
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