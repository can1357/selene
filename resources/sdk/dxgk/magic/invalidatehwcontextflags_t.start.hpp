#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_INVALIDATEHWCONTEXTFLAGS.CollateralDamage", collateral_damage, 0x0, 0x1, true, 0x6ab8760146608026, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_INVALIDATEHWCONTEXTFLAGS.Value", value, 0x0, 0x20, true, 0x94470c5d8b846e42)
#else
#define _m00
#define _m01
#endif