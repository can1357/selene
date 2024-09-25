#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3.Version", version, 0x0, 0x20, true, 0x13591570404f506a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3.Flags", flags, 0x20, 0x20, true, 0x2e7d577d2f1b5653)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_credential_key_type_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3.CredentialKeyType", credential_key_type, 0x40, 0x20, true, 0x31f972ba22bd9036)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3.NtPassword", nt_password, 0x60, 0x80, true, 0xb3d6278e2f213b8f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::msv1_0_credential_key_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3.CredentialKey", credential_key, 0xe0, 0xa0, true, 0x2ee7a39ed635c28d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3.ShaPassword", sha_password, 0x180, 0xa0, true, 0x66b08bc0520ca6e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif