#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::dxgi_rgb_t), "_D3DDDI_GAMMA_RAMP_DXGI_1.Scale", scale, 0x0, 0x60, true, 0x70a4963bbcf52b6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::dxgi_rgb_t), "_D3DDDI_GAMMA_RAMP_DXGI_1.Offset", offset, 0x60, 0x60, true, 0x706573dd2c414dfc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3d::ddi::dxgi_rgb_t, 1025>), "_D3DDDI_GAMMA_RAMP_DXGI_1.GammaCurve", gamma_curve, 0xc0, 0x60, true, 0x7539ad9e9b6de165)
#else
#define _m00
#define _m01
#define _m02
#endif