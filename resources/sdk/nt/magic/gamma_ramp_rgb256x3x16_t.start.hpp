#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_GAMMA_RAMP_RGB256x3x16.Red", red, 0x0, 0x0, true, 0xd8b8f2bf5376e1db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_GAMMA_RAMP_RGB256x3x16.Green", green, 0x1000, 0x0, true, 0xa25c04d630d6d7b2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_GAMMA_RAMP_RGB256x3x16.Blue", blue, 0x2000, 0x0, true, 0x7fcfdc5d534d06fc)
#else
#define _m00
#define _m01
#define _m02
#endif