#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_BACKLIGHT_REDUCTION_GAMMA_RAMP.R", r, 0x0, 0x0, true, 0xb14c4aad92a2c143)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_BACKLIGHT_REDUCTION_GAMMA_RAMP.G", g, 0x1000, 0x0, true, 0xa0cfd605914a5412)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_BACKLIGHT_REDUCTION_GAMMA_RAMP.B", b, 0x2000, 0x0, true, 0x5e0518024c77a0ec)
#else
#define _m00
#define _m01
#define _m02
#endif