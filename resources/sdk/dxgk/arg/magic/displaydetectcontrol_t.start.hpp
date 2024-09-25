#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_DXGKARG_DISPLAYDETECTCONTROL.TargetId", target_id, 0x0, 0x18, true, 0x8130a181c56315ff, 24, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXGKARG_DISPLAYDETECTCONTROL.Type", type, 0x18, 0x4, true, 0x895059982f77d5f5, 4, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_DISPLAYDETECTCONTROL.NonDestructiveOnly", non_destructive_only, 0x1c, 0x1, true, 0xcdf735285c64bd81, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif