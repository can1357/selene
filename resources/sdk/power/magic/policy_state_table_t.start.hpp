#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum wdf::device_power_policy_state_t(class fx::pkg_pnp_t*)>*), "POWER_POLICY_STATE_TABLE.StateFunc", state_func, 0x0, 0x40, true, 0xda9344b2808f34d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::policy_event_target_state_t), "POWER_POLICY_STATE_TABLE.FirstTargetState", first_target_state, 0x40, 0x40, true, 0xc8db1e3aa56b0142)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct power::policy_event_target_state_t*), "POWER_POLICY_STATE_TABLE.OtherTargetStates", other_target_states, 0x80, 0x40, true, 0x5cea984cf3ee9288)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pwr_pol_state_info_t), "POWER_POLICY_STATE_TABLE.StateInfo", state_info, 0xc0, 0x20, true, 0xc7969b66dec3def2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif