#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Type", type, 0x0, 0x0, false, 0xb708a244bc9f19d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x7b0bd33330fc4f06)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x2bfac891f9313287)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.EnterState", enter_state, 0x0, 0x0, false, 0xc46e81ddff4d8616)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x324ecfd611301c61)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xf276ff4e93dfb68d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xb9e31dda4eb565e0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x2fc0551ca4259b03)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x331cb56b799513fa)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data", data, 0x0, 0x0, false, 0xeb0cf7822a291f9c)
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