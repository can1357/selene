#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT.Magic", magic, 0x0, 0x20, true, 0xbac7fa8eaf71abac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT.Version", version, 0x20, 0x20, true, 0x62b2384c849311de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT.HeaderSize", header_size, 0x40, 0x20, true, 0x6657dd93e671b314)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT.cbCertifyInfo", cb_certify_info, 0x60, 0x20, true, 0xfa7567bb70e4e27e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT.cbSignature", cb_signature, 0x80, 0x20, true, 0x50bd798d8852bed4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT.cbTpmPublic", cb_tpm_public, 0xa0, 0x20, true, 0xec8a5dc1731d2c29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif