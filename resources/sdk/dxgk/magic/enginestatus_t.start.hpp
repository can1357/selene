#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ENGINESTATUS.Responsive", responsive, 0x0, 0x1, true, 0xe3c7d154fda4d651, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ENGINESTATUS.Value", value, 0x0, 0x20, true, 0x9a9ee3df687f248f)
#else
#define _m00
#define _m01
#endif