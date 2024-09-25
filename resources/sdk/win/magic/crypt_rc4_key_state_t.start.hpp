#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CRYPT_RC4_KEY_STATE.Key", key, 0x0, 0x80, true, 0x652c49dea104f424)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_CRYPT_RC4_KEY_STATE.SBox", s_box, 0x80, 0x0, true, 0x4cd098021249ecc7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CRYPT_RC4_KEY_STATE.i", i, 0x880, 0x8, true, 0x20a8688be63a8435)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CRYPT_RC4_KEY_STATE.j", j, 0x888, 0x8, true, 0x5e66c2eb4a2c3139)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif