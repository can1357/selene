#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_PRESHAREDKEY_IDENTITY.KeyIdentitySize", key_identity_size, 0x0, 0x10, true, 0xb9970b585f332906)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SEC_PRESHAREDKEY_IDENTITY.KeyIdentity", key_identity, 0x10, 0x8, true, 0xbd5b077b20d259d5)
#else
#define _m00
#define _m01
#endif