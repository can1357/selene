#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Type", type, 0x0, 0x0, false, 0x88029b0f874d59b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x910f6aebaf80589c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x521058aa44f5fa9d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.EnterState", enter_state, 0x0, 0x0, false, 0xfdd410d1da3bb134)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x4d188aed24ed47ec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x455e0b6db18bc2e2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xa8eca86577fef9cb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xec1014930ed6fa9e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x3422e082e739f94f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_15.Data", data, 0x0, 0x0, false, 0xed4e03ae745985bf)
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