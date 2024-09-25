#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_WWAN_AUTH_SIM_CHALLENGE.Rand1", rand1, 0x0, 0x80, true, 0xa74e5316b4a18393)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_WWAN_AUTH_SIM_CHALLENGE.Rand2", rand2, 0x80, 0x80, true, 0x11640d426abfc9a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_WWAN_AUTH_SIM_CHALLENGE.Rand3", rand3, 0x100, 0x80, true, 0x84b5ebabb1f64949)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_AUTH_SIM_CHALLENGE.n", n, 0x180, 0x20, true, 0x6a7f86bf0838ac65)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif