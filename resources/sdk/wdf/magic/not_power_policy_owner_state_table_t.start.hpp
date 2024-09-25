#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "NOT_POWER_POLICY_OWNER_STATE_TABLE.CurrentTargetState", current_target_state, 0x0, 0x20, true, 0xded9dcca1c3528c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum wdf::device_power_policy_state_t(class fx::pkg_pnp_t*)>*), "NOT_POWER_POLICY_OWNER_STATE_TABLE.StateFunc", state_func, 0x40, 0x40, true, 0xfc22e9c2cd001024)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct power::policy_event_target_state_t*), "NOT_POWER_POLICY_OWNER_STATE_TABLE.TargetStates", target_states, 0x80, 0x40, true, 0x9655e13652e6dea1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NOT_POWER_POLICY_OWNER_STATE_TABLE.TargetStatesCount", target_states_count, 0xc0, 0x8, true, 0x8c0d9835e4ba3453)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NOT_POWER_POLICY_OWNER_STATE_TABLE.QueueOpen", queue_open, 0xc8, 0x8, true, 0x68f2a1faaba8bd0f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif