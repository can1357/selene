#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 2>), "_float_val._Sh", sh, 0x0, 0x20, true, 0x57390b6056c82fb0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float), "_float_val._Val", val, 0x0, 0x20, true, 0x9e2663b5cedba8d3)
#else
#define _m00
#define _m01
#endif