#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_device_power_requirement_state_entry_function_t ), "FxDevicePwrRequirementStateTable.StateFunc", state_func, 0x0, 0x40, true, 0xdc44af0e34a1b771)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct fx::device_pwr_requirement_target_state_t*), "FxDevicePwrRequirementStateTable.TargetStates", target_states, 0x40, 0x40, true, 0x91ab94b7e2c78f4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDevicePwrRequirementStateTable.TargetStatesCount", target_states_count, 0x80, 0x20, true, 0x5fec9909d75086d1)
#else
#define _m00
#define _m01
#define _m02
#endif