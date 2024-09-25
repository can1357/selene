#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Type", type, 0x0, 0x20, true, 0xedf19a3410f2f823)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.EnterState.CurrentState", current_state, 0x0, 0x20, true, 0xd377e25f898d1c40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.EnterState.NewState", new_state, 0x20, 0x20, true, 0x41eb25b80a8d5e47)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.EnterState", enter_state, 0x0, 0x40, true, 0xe6080e4fea48062e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.PostProcessState.CurrentState", current_state, 0x0, 0x20, true, 0x49ff2c35f454278a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.PostProcessState", post_process_state, 0x0, 0x20, true, 0x46d6b58f908b5596)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.LeaveState.CurrentState", current_state, 0x0, 0x20, true, 0x7ea5767155248286)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.LeaveState.NewState", new_state, 0x20, 0x20, true, 0xdb89e32b72c88f9c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data.LeaveState", leave_state, 0x0, 0x40, true, 0xedab7ba5139a8df)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA.Data", data, 0x20, 0x40, true, 0x69eca374931df5aa)
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