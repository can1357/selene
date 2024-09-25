#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_D3DDDI_GAMMA_RAMP_RGB256x3x16.Red", red, 0x0, 0x0, true, 0xb15118e2e5f40161)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_D3DDDI_GAMMA_RAMP_RGB256x3x16.Green", green, 0x1000, 0x0, true, 0x9d9c2316b53dcae6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_D3DDDI_GAMMA_RAMP_RGB256x3x16.Blue", blue, 0x2000, 0x0, true, 0x984ab5fcb33bccf7)
#else
#define _m00
#define _m01
#define _m02
#endif