#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wake_interrupt_state_entry_function_t ), "FxWakeInterruptStateTable.StateFunc", state_func, 0x0, 0x40, true, 0x770eed3af1467f82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct fx::wake_interrupt_target_state_t*), "FxWakeInterruptStateTable.TargetStates", target_states, 0x40, 0x40, true, 0xd3d0a70eaffbe4f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWakeInterruptStateTable.TargetStatesCount", target_states_count, 0x80, 0x20, true, 0x371676a0ee2c643b)
#else
#define _m00
#define _m01
#define _m02
#endif