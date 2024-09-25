#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_IDLE_STATE.Version", version, 0x0, 0x20, true, 0xe3ef1998306c2b7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_IDLE_STATE.Size", size, 0x20, 0x20, true, 0x3a2e67754cd31197)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_POFX_COMPONENT_IDLE_STATE.TransitionLatency", transition_latency, 0x40, 0x40, true, 0x65935137c8ee7afa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_POFX_COMPONENT_IDLE_STATE.ResidencyRequirement", residency_requirement, 0x80, 0x40, true, 0xa14463d0865a4986)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_IDLE_STATE.NominalPower", nominal_power, 0xc0, 0x20, true, 0xf23cf8a8d505d0a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif