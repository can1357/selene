#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL.PowerLevel", power_level, 0x0, 0x20, true, 0x29b47bf00e354a70)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL.EffectivePowerLevel", effective_power_level, 0x20, 0x20, true, 0xdd562e219785dcbd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::trackedworkload_state_flags_t), "_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL.Flags", flags, 0x40, 0x20, true, 0xfe58b43206ba0663)
#else
#define _m00
#define _m01
#define _m02
#endif