#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2.Version", version, 0x0, 0x20, true, 0xbe4e4d04a6042255)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2.Flags", flags, 0x20, 0x20, true, 0x2a88ed88f0a213eb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2.NtPassword", nt_password, 0x40, 0x80, true, 0x64b9c9e3462c84da)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::msv1_0_credential_key_t), "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2.CredentialKey", credential_key, 0xc0, 0xa0, true, 0x783f38f150168d38)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif