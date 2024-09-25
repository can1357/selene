#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Type", type, 0x0, 0x0, false, 0xca4f1a48d5155b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xb775b4487b409c8e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x627d43c5f0936447)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.EnterState", enter_state, 0x0, 0x0, false, 0x8654bbbad5c840a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xd03c9d2999d3b46d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x53ab6be46a57269a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xee28bf8fc6a0204f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x1759bf82e28f5cb6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xf668ec80ad24de3b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_13.Data", data, 0x0, 0x0, false, 0x78469c3342a2b595)
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