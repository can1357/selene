#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO.CertSignHashCNGAlgPropData", cert_sign_hash_cng_alg_prop_data, 0x0, 0x80, true, 0x1bebccac2fe2ad81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO.CertIssuerPubKeyBitLengthPropData", cert_issuer_pub_key_bit_length_prop_data, 0x80, 0x80, true, 0x97f66d98c7defdec)
#else
#define _m00
#define _m01
#endif