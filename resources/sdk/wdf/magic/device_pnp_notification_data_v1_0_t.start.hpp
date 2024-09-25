#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Type", type, 0x0, 0x0, false, 0x372d4b50403c8bb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x7d4a74c5b2df4b3f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xcbe2fc309d1ab608)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.EnterState", enter_state, 0x0, 0x0, false, 0x99c9f3b04c22f504)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x6eba0f3bd77be0a7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xb7b05d58d9db7361)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x9cf11b3d7fe20b52)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x36de33f3a9d0046a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x21e4b87f3869f7c2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_0.Data", data, 0x0, 0x0, false, 0x40376fb5173b2746)
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