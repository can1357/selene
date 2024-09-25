#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Type", type, 0x0, 0x0, false, 0x1a4ab30d4db91456)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xe5f0ad3aec4ef92)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xab2862d33f0a9da6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.EnterState", enter_state, 0x0, 0x0, false, 0xc2698006c8539650)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xb406274e051919fd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xd3ec05b33d80d80a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x15c232f5220a368)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xe5f1201ebd40254c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x983b4cea5a5da0e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_17.Data", data, 0x0, 0x0, false, 0x6b02fcd00c03ac0a)
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