#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CRYPT_TIMESTAMP_PARA.pszTSAPolicyId", psz_tsa_policy_id, 0x0, 0x40, true, 0xf5cb3fd780906b46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRYPT_TIMESTAMP_PARA.fRequestCerts", f_request_certs, 0x40, 0x20, true, 0x1f3f399d8c385caa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_PARA.Nonce", nonce, 0x80, 0x80, true, 0x6af890674fda76d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_PARA.cExtension", c_extension, 0x100, 0x20, true, 0x473a142a115f0c51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CRYPT_TIMESTAMP_PARA.rgExtension", rg_extension, 0x140, 0x40, true, 0x2f717ce860a9b86c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif