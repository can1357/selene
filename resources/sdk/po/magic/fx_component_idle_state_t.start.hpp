#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_COMPONENT_IDLE_STATE.TransitionLatency", transition_latency, 0x0, 0x40, true, 0x7f9c5f17fde06a9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_COMPONENT_IDLE_STATE.ResidencyRequirement", residency_requirement, 0x40, 0x40, true, 0xfc4d5bc18ca139e5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_IDLE_STATE.NominalPower", nominal_power, 0x80, 0x20, true, 0x2f8f297cd6cff9f2)
#else
#define _m00
#define _m01
#define _m02
#endif