#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRYPT_PKCS8_EXPORT_PARAMS.hCryptProv", h_crypt_prov, 0x0, 0x40, true, 0x1d00454c658c9f99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PKCS8_EXPORT_PARAMS.dwKeySpec", dw_key_spec, 0x40, 0x20, true, 0xf1885091a8c85c51)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_PKCS8_EXPORT_PARAMS.pszPrivateKeyObjId", psz_private_key_obj_id, 0x80, 0x40, true, 0x286ed3bb28982baf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcrypt_encrypt_private_key_func_t ), "_CRYPT_PKCS8_EXPORT_PARAMS.pEncryptPrivateKeyFunc", p_encrypt_private_key_func, 0xc0, 0x40, true, 0xeca461868796d8cf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_PKCS8_EXPORT_PARAMS.pVoidEncryptFunc", p_void_encrypt_func, 0x100, 0x40, true, 0xaa50f994ad0c698b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif