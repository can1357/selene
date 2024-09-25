#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Type", type, 0x0, 0x0, false, 0x5d82b0fe3f47d0a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xd8bf5084d45e5ee8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xdf709ea748296c61)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.EnterState", enter_state, 0x0, 0x0, false, 0x231d96c872bd870a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xd94f94faab67ee4f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0xe9e0a5a6450d12c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x1584679cdffd3310)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xf19d16a7940c757c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x83eecc0b82032f48)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_13.Data", data, 0x0, 0x0, false, 0xe92d1881d3637c12)
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