#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETPOINTERPOSITIONFLAGS.Visible", visible, 0x0, 0x1, true, 0x7086153ece3b0d57, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETPOINTERPOSITIONFLAGS.Procedural", procedural, 0x1, 0x1, true, 0xfd298cdd9070748b, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SETPOINTERPOSITIONFLAGS.Value", value, 0x0, 0x20, true, 0x137d8c97b6e9bc2a)
#else
#define _m00
#define _m01
#define _m02
#endif