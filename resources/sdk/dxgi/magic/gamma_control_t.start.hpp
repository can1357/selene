#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::rgb_t), "DXGI_GAMMA_CONTROL.Scale", scale, 0x0, 0x60, true, 0x5cc72d84e7c68e04)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::rgb_t), "DXGI_GAMMA_CONTROL.Offset", offset, 0x60, 0x60, true, 0xdf9455115ee49f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgi::rgb_t, 1025>), "DXGI_GAMMA_CONTROL.GammaCurve", gamma_curve, 0xc0, 0x60, true, 0x8ba30cec6429df9e)
#else
#define _m00
#define _m01
#define _m02
#endif