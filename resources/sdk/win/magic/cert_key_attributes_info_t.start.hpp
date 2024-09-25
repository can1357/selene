#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_KEY_ATTRIBUTES_INFO.KeyId", key_id, 0x0, 0x80, true, 0x7d75c358ff39c71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_KEY_ATTRIBUTES_INFO.IntendedKeyUsage", intended_key_usage, 0x80, 0xc0, true, 0x3038c18c12d79749)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_private_key_validity_t*), "_CERT_KEY_ATTRIBUTES_INFO.pPrivateKeyUsagePeriod", p_private_key_usage_period, 0x140, 0x40, true, 0xc6076b167d1feafe)
#else
#define _m00
#define _m01
#define _m02
#endif