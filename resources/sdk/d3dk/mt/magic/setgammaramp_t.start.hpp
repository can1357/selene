#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETGAMMARAMP.hDevice", h_device, 0x0, 0x20, true, 0x3c82b20334201a7b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETGAMMARAMP.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x1b5f9ea7924fa6a2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::gammaramp_type_t), "_D3DKMT_SETGAMMARAMP.Type", type, 0x40, 0x20, true, 0xee6747fd91c2b359)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::gamma_ramp_rgb256x3x16_t*), "_D3DKMT_SETGAMMARAMP.pGammaRampRgb256x3x16", p_gamma_ramp_rgb256x3x16, 0x80, 0x40, true, 0x3fdcfb7e1ecfc6a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::gamma_ramp_dxgi_1_t*), "_D3DKMT_SETGAMMARAMP.pGammaRampDXGI1", p_gamma_ramp_dxgi1, 0x80, 0x40, true, 0x575626c93c8e70a8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETGAMMARAMP.Size", size, 0xc0, 0x20, true, 0x2f8ecd812744dda5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif