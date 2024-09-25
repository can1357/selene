#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT.Identity", identity, 0x0, 0x1, true, 0xe50bf942d8713667, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT.Centered", centered, 0x1, 0x1, true, 0x5745a3635c9f83d0, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT.Stretched", stretched, 0x2, 0x1, true, 0x8e688fbb8dbe0c5c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT.AspectRatioCenteredMax", aspect_ratio_centered_max, 0x3, 0x1, true, 0x9c5bf595d868d254, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT.Custom", custom, 0x4, 0x1, true, 0x8f4ba270f320dd12, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif