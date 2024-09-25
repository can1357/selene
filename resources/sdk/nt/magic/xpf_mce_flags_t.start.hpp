#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_MCE_FLAGS.MCG_CapabilityRW", mcg_capability_rw, 0x0, 0x1, true, 0x4eb7106f57bd5c94, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_MCE_FLAGS.MCG_GlobalControlRW", mcg_global_control_rw, 0x1, 0x1, true, 0x45154ae8f25413e9, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XPF_MCE_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0xa4c89bafa68b21b6)
#else
#define _m00
#define _m01
#define _m02
#endif