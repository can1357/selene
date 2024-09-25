#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_POLICY.Revision", revision, 0x0, 0x20, true, 0xc9f18ef56ed5bdae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_POWER_POLICY.DynamicThrottle", dynamic_throttle, 0x20, 0x8, true, 0xfbf54214dde5aa8f)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESSOR_POWER_POLICY.DisableCStates", disable_c_states, 0x40, 0x1, true, 0xefd8ed551e9a6ff6, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_POWER_POLICY.PolicyCount", policy_count, 0x60, 0x20, true, 0x2459281aa0b32b5c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::processor_power_policy_info_t, 3>), "_PROCESSOR_POWER_POLICY.Policy", policy, 0x80, 0xe0, true, 0xae28f15b9b566965)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif