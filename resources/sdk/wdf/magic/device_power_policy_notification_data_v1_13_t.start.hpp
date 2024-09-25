#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Type", type, 0x0, 0x0, false, 0xf0f75bb5031c381c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x1ce5d6242e0d9862)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xf69940852bd2b99e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.EnterState", enter_state, 0x0, 0x0, false, 0x4f51608295c7ad07)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0xcca7d562a2341efe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x9ae395021511adc1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x40cad2408416dd37)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0xa102c70f96fba9d9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data.LeaveState", leave_state, 0x0, 0x0, false, 0xf20ffc479f7c053)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA_V1_13.Data", data, 0x0, 0x0, false, 0x1326bafc92bf5bdb)
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