#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_POWER_RUNTIME_STATE.TransitionLatency", transition_latency, 0x0, 0x40, true, 0xfc2a0a8a27cd295e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_POWER_RUNTIME_STATE.ResidencyRequirement", residency_requirement, 0x40, 0x40, true, 0x7b467dd630289279)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_RUNTIME_STATE.NominalPower", nominal_power, 0x80, 0x20, true, 0xf7c9f65cead756b4)
#else
#define _m00
#define _m01
#define _m02
#endif