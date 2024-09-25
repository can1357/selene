#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_KEY_USAGE_RESTRICTION_INFO.cCertPolicyId", c_cert_policy_id, 0x0, 0x20, true, 0x5b158c74af5b8ad0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_policy_id_t*), "_CERT_KEY_USAGE_RESTRICTION_INFO.rgCertPolicyId", rg_cert_policy_id, 0x40, 0x40, true, 0x9b1432206fcde70d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_KEY_USAGE_RESTRICTION_INFO.RestrictedKeyUsage", restricted_key_usage, 0x80, 0xc0, true, 0x68bd9b07444ccff6)
#else
#define _m00
#define _m01
#define _m02
#endif