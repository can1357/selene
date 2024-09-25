#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_STATEMENT.Magic", magic, 0x0, 0x20, true, 0xdae97028e79d2a14)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_STATEMENT.Version", version, 0x20, 0x20, true, 0x5db7708ad1e05714)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_STATEMENT.cbSignature", cb_signature, 0x40, 0x20, true, 0xa7757e73fb9006f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_STATEMENT.cbReport", cb_report, 0x60, 0x20, true, 0x82101dfb96784348)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_STATEMENT.cbAttributes", cb_attributes, 0x80, 0x20, true, 0x4d6733ce7de9374)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif