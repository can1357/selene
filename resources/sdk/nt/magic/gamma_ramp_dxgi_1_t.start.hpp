#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::gamma_ramp_rgb_t), "_GAMMA_RAMP_DXGI_1.Scale", scale, 0x0, 0x60, true, 0x283c90a919706e84)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::gamma_ramp_rgb_t), "_GAMMA_RAMP_DXGI_1.Offset", offset, 0x60, 0x60, true, 0xccb54d4f6d81919d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::gamma_ramp_rgb_t, 1025>), "_GAMMA_RAMP_DXGI_1.GammaCurve", gamma_curve, 0xc0, 0x60, true, 0x314a5cfcaa1cec1f)
#else
#define _m00
#define _m01
#define _m02
#endif