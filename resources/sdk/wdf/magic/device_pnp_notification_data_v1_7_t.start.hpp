#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Type", type, 0x0, 0x0, false, 0x72a2ca54213c6048)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x36838dff4b7c1d69)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xdabc8fa0dfff98d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.EnterState", enter_state, 0x0, 0x0, false, 0xdaf9802c7b41bf93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xbe20124f69a4c2ca)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xcd04616378a39322)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0xd091cee75a34d819)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x7ae16b981c716d84)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xd5f914a63f20f444)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_7.Data", data, 0x0, 0x0, false, 0x1dacfe10f9c06946)
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