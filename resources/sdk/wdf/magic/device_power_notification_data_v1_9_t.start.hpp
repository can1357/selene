#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Type", type, 0x0, 0x0, false, 0x9f82c991533ab32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0x56545cab7b550ed2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0x1b0f9efedc514db1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.EnterState", enter_state, 0x0, 0x0, false, 0x8fb41e2088ff4100)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x17756129bf921da7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x2b659c04c6d9f3d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x7dad65bccd683304)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x79c07eb8629197a4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x28e8c6e05b4e189b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_9.Data", data, 0x0, 0x0, false, 0xcd78e7676cb8649b)
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