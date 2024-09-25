#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT.Magic", magic, 0x0, 0x20, true, 0xe72ae90885bbd401)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT.Version", version, 0x20, 0x20, true, 0xa6b739d97546747a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT.pcrAlg", pcr_alg, 0x40, 0x20, true, 0x9e899f0aff12502f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT.cbSignature", cb_signature, 0x60, 0x20, true, 0xcb7edcd70282f95)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT.cbQuote", cb_quote, 0x80, 0x20, true, 0x5e4615bccc6bf774)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT.cbPcrs", cb_pcrs, 0xa0, 0x20, true, 0x1ede5dd7aa69fa22)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif