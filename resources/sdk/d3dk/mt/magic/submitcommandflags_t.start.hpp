#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_SUBMITCOMMANDFLAGS.NullRendering", null_rendering, 0x0, 0x1, true, 0x680163c671a940a8, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_SUBMITCOMMANDFLAGS.PresentRedirected", present_redirected, 0x1, 0x1, true, 0x28a2ae9a288ad15d, 1, uint32_t)
#else
#define _m00
#define _m01
#endif