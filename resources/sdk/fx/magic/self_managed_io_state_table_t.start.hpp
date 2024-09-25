#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_self_managed_io_state_entry_function_t ), "FxSelfManagedIoStateTable.StateFunc", state_func, 0x0, 0x40, true, 0xf74aaec73aa41823)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct fx::self_managed_io_target_state_t*), "FxSelfManagedIoStateTable.TargetStates", target_states, 0x40, 0x40, true, 0x6af02c4de463bf79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxSelfManagedIoStateTable.TargetStatesCount", target_states_count, 0x80, 0x20, true, 0x809006b274f2c6d7)
#else
#define _m00
#define _m01
#define _m02
#endif