#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_power_idle_state_entry_function_t ), "FxIdleStateTable.StateFunc", state_func, 0x0, 0x40, true, 0x7a4ed3d9c55e03fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct fx::power_idle_target_state_t*), "FxIdleStateTable.TargetStates", target_states, 0x40, 0x40, true, 0x6df0ce0963bfa281)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIdleStateTable.TargetStatesCount", target_states_count, 0x80, 0x20, true, 0x84c5bae958350ddc)
#else
#define _m00
#define _m01
#define _m02
#endif