#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Type", type, 0x0, 0x20, true, 0x878550d2a6025616)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.EnterState.CurrentState", current_state, 0x0, 0x20, true, 0xe49c28cf0e65838c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.EnterState.NewState", new_state, 0x20, 0x20, true, 0x7fc532501eb0e78b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_enter_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.EnterState", enter_state, 0x0, 0x40, true, 0xbdcefdeac0f8138e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.PostProcessState.CurrentState", current_state, 0x0, 0x20, true, 0xc8cb0b96ed4fca9e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_post_process_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.PostProcessState", post_process_state, 0x0, 0x20, true, 0xd45fe2774dcd9005)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.LeaveState.CurrentState", current_state, 0x0, 0x20, true, 0x1305329daf2a764e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.LeaveState.NewState", new_state, 0x20, 0x20, true, 0x70908b19637add4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_leave_state_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.LeaveState", leave_state, 0x0, 0x40, true, 0x2ac63c25b902216f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data", data, 0x20, 0x40, true, 0x496b91773fe365f8)
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