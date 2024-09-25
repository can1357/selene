#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PATCHFLAGS.Paging", paging, 0x0, 0x1, true, 0xde339e8ca36926a7, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PATCHFLAGS.Present", present, 0x1, 0x1, true, 0x3c433257ecc0c706, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PATCHFLAGS.RedirectedPresent", redirected_present, 0x2, 0x1, true, 0x6d72c3bedfae02a2, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PATCHFLAGS.NullRendering", null_rendering, 0x3, 0x1, true, 0x8dae512e2cc8bba7, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PATCHFLAGS.Value", value, 0x0, 0x20, true, 0x3183329f0541c928)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif