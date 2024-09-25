#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Type", type, 0x0, 0x20, true, 0x490c9fc90c326405)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.EnterState.CurrentState", current_state, 0x0, 0x20, true, 0x10d956c655e68b78)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.EnterState.NewState", new_state, 0x20, 0x20, true, 0xdf6fcb29cab34365)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.EnterState", enter_state, 0x0, 0x40, true, 0xe0a126e730961793)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.PostProcessState.CurrentState", current_state, 0x0, 0x20, true, 0xef01414248a5b3f8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.PostProcessState", post_process_state, 0x0, 0x20, true, 0xd6c279a70d810337)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.LeaveState.CurrentState", current_state, 0x0, 0x20, true, 0xf3ea5b0b62664d5f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.LeaveState.NewState", new_state, 0x20, 0x20, true, 0xf3f9856d8489e6fb)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data.LeaveState", leave_state, 0x0, 0x40, true, 0xe899fe5e5b6e4cce)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA.Data", data, 0x20, 0x40, true, 0xda8c22ba689d9013)
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