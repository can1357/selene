#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_power_state_entry_function_t ), "POWER_STATE_TABLE.StateFunc", state_func, 0x0, 0x40, true, 0x517901168a1e163c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::event_target_state_t), "POWER_STATE_TABLE.FirstTargetState", first_target_state, 0x40, 0x40, true, 0xb0f2707165c2f71e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct power::event_target_state_t*), "POWER_STATE_TABLE.OtherTargetStates", other_target_states, 0x80, 0x40, true, 0xa105de438dcd9c12)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::power_state_info_t), "POWER_STATE_TABLE.StateInfo", state_info, 0xc0, 0x20, true, 0x5a3fbcd8c042fab5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif