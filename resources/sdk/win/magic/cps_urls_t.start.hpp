#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CPS_URLS.pszURL", psz_url, 0x0, 0x40, true, 0x4dff503000f314b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t*), "_CPS_URLS.pAlgorithm", p_algorithm, 0x40, 0x40, true, 0xfc4342c6ed96edc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CPS_URLS.pDigest", p_digest, 0x80, 0x40, true, 0x37f81b44d63ce2c8)
#else
#define _m00
#define _m01
#define _m02
#endif