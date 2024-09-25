#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.RenderSupported", render_supported, 0x0, 0x1, true, 0x29226c79a9e21be9, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.DisplaySupported", display_supported, 0x1, 0x1, true, 0x88b46e9bff9ed9ff, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.SoftwareDevice", software_device, 0x2, 0x1, true, 0xc63b1fe5f0b3fc8a, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.PostDevice", post_device, 0x3, 0x1, true, 0x33396d8180f0e168, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.HybridDiscrete", hybrid_discrete, 0x4, 0x1, true, 0x2a7da6b5ce2b3a79, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.HybridIntegrated", hybrid_integrated, 0x5, 0x1, true, 0x772f440a628a6e2b, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.IndirectDisplayDevice", indirect_display_device, 0x6, 0x1, true, 0xb597c116129b3456, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.Paravirtualized", paravirtualized, 0x7, 0x1, true, 0x8ea4762500211cdc, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.ACGSupported", acg_supported, 0x8, 0x1, true, 0x5aaccfc134e9c502, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.SupportSetTimingsFromVidPn", support_set_timings_from_vid_pn, 0x9, 0x1, true, 0x606fb0d121178d71, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.Detachable", detachable, 0xa, 0x1, true, 0xffa6deba068e69ec, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.ComputeOnly", compute_only, 0xb, 0x1, true, 0x7f97f2bed7b24719, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ADAPTERTYPE.Prototype", prototype, 0xc, 0x1, true, 0x5434236276bf9834, 1, uint32_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTERTYPE.Value", value, 0x0, 0x20, true, 0xe9f31e0bc79f75d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif