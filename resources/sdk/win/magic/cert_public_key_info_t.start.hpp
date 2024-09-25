#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CERT_PUBLIC_KEY_INFO.Algorithm", algorithm, 0x0, 0xc0, true, 0x87d5bd853ba7745a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_PUBLIC_KEY_INFO.PublicKey", public_key, 0xc0, 0xc0, true, 0x1597e279a7ffc62c)
#else
#define _m00
#define _m01
#endif