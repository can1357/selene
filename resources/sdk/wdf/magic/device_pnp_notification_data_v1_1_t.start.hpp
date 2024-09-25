#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Type", type, 0x0, 0x0, false, 0x713774fdae326ea5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x6cf92839423c2112)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xd95535e55a82822c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.EnterState", enter_state, 0x0, 0x0, false, 0xd76f46b200e12165)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x677781869d59d95c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x55cef46cd69dd73)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x11d576861b8f1f47)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xc5eb2d4980380344)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x8d3abe710ade12ba)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_1.Data", data, 0x0, 0x0, false, 0xf078e923b559e2fc)
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