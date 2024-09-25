#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_WWAN_AUTH_AKA_CHALLENGE.Rand", rand, 0x0, 0x80, true, 0xd35a782eec1c18e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_WWAN_AUTH_AKA_CHALLENGE.Autn", autn, 0x80, 0x80, true, 0xfb42de7196b02b20)
#else
#define _m00
#define _m01
#endif