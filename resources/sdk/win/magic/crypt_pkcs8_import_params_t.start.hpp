#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_PKCS8_IMPORT_PARAMS.PrivateKey", private_key, 0x0, 0x80, true, 0x74792edc5409613c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcrypt_resolve_hcryptprov_func_t ), "_CRYPT_PKCS8_IMPORT_PARAMS.pResolvehCryptProvFunc", p_resolveh_crypt_prov_func, 0x80, 0x40, true, 0xebf0d7df121deb08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_PKCS8_IMPORT_PARAMS.pVoidResolveFunc", p_void_resolve_func, 0xc0, 0x40, true, 0xcaac47247391bc7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcrypt_decrypt_private_key_func_t ), "_CRYPT_PKCS8_IMPORT_PARAMS.pDecryptPrivateKeyFunc", p_decrypt_private_key_func, 0x100, 0x40, true, 0xcd1a4318eb416b3c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_PKCS8_IMPORT_PARAMS.pVoidDecryptFunc", p_void_decrypt_func, 0x140, 0x40, true, 0x3317ba88dbcb7475)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif