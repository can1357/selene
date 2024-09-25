#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Type", type, 0x0, 0x0, false, 0xd35c5058910fc0b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x155682e82af32562)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x284f23d769a16385)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.EnterState", enter_state, 0x0, 0x0, false, 0x6f21220200b3f2f3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x82c431c783122b7c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x4f595d1d80d7c0f8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x4a983e6628f90f6a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xeb1835fecb68f9c6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x1e6b4b175a6d42bf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_11.Data", data, 0x0, 0x0, false, 0xac493dc47c5ee080)
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