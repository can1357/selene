#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SAVEMEMORYFORHOTUPDATEFLAGS.CancelHotUpdate", cancel_hot_update, 0x0, 0x1, true, 0x30ad6cadc8b53ef4, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SAVEMEMORYFORHOTUPDATEFLAGS.Value", value, 0x0, 0x20, true, 0xac39fe0264b8031d)
#else
#define _m00
#define _m01
#endif