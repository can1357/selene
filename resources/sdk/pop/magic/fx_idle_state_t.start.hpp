#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_IDLE_STATE.TransitionLatency", transition_latency, 0x0, 0x40, true, 0x10301798c4947a32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_IDLE_STATE.ResidencyRequirement", residency_requirement, 0x40, 0x40, true, 0x1a3f7e8059a5bab6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_IDLE_STATE.NominalPower", nominal_power, 0x80, 0x20, true, 0x35edea157eca6c64)
#else
#define _m00
#define _m01
#define _m02
#endif