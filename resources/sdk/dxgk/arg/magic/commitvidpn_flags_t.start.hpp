#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_COMMITVIDPN_FLAGS.PathPowerTransition", path_power_transition, 0x0, 0x1, true, 0x5141f2f68b9cc8ed, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_COMMITVIDPN_FLAGS.PathPoweredOff", path_powered_off, 0x1, 0x1, true, 0xd537d39975522ac, 1, uint32_t)
#else
#define _m00
#define _m01
#endif