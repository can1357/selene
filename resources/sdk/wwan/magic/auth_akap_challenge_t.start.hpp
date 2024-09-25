#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_WWAN_AUTH_AKAP_CHALLENGE.Rand", rand, 0x0, 0x80, true, 0x6c32ad55d823163a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_WWAN_AUTH_AKAP_CHALLENGE.Autn", autn, 0x80, 0x80, true, 0x2bec74dd6c3f10e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_WWAN_AUTH_AKAP_CHALLENGE.NetworkName", network_name, 0x100, 0x0, true, 0x73ac0c0c503fa6ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_AUTH_AKAP_CHALLENGE.NetworkNameLength", network_name_length, 0x900, 0x20, true, 0x5438d0df914f8943)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif