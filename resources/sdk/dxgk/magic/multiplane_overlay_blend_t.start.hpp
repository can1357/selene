#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANE_OVERLAY_BLEND.AlphaBlend", alpha_blend, 0x0, 0x1, true, 0xd65c917a19c5c583, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_BLEND.Value", value, 0x0, 0x20, true, 0x1ab35a97d6ed52cd)
#else
#define _m00
#define _m01
#endif