#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL.Version", version, 0x0, 0x20, true, 0x9196a41d035e3756)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL.EncryptedCredsSize", encrypted_creds_size, 0x20, 0x20, true, 0xba3ae9d4aa54c85a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL.EncryptedCreds", encrypted_creds, 0x40, 0x8, true, 0x30415f1cbf3f517e)
#else
#define _m00
#define _m01
#define _m02
#endif