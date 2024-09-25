#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL.Version", version, 0x0, 0x20, true, 0x43b5d36768b18170)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL.Flags", flags, 0x20, 0x20, true, 0xa7bc92fe6207081c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::msv1_0_credential_key_t), "_MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL.CredentialKey", credential_key, 0x40, 0xa0, true, 0xac6e437374c49827)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_credential_key_type_t), "_MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL.CredentialKeyType", credential_key_type, 0xe0, 0x20, true, 0x5ae60ec6e1e41cf0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL.EncryptedCredsSize", encrypted_creds_size, 0x100, 0x20, true, 0x4fa7c86d39aaf533)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL.EncryptedCreds", encrypted_creds, 0x120, 0x8, true, 0xde7d6967040d37f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif