#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_REQUEST.dwVersion", dw_version, 0x0, 0x20, true, 0x8e79cff366b98348)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_TIMESTAMP_REQUEST.HashAlgorithm", hash_algorithm, 0x40, 0xc0, true, 0x67137e207d3a245e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_REQUEST.HashedMessage", hashed_message, 0x100, 0x80, true, 0xa694add1b5de5870)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_TIMESTAMP_REQUEST.pszTSAPolicyId", psz_tsa_policy_id, 0x180, 0x40, true, 0xa515e1ae309b6740)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_REQUEST.Nonce", nonce, 0x1c0, 0x80, true, 0xe9437f02749e01c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRYPT_TIMESTAMP_REQUEST.fCertReq", f_cert_req, 0x240, 0x20, true, 0xdf2d2654ea228c00)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_REQUEST.cExtension", c_extension, 0x260, 0x20, true, 0xe5792d773d86f161)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CRYPT_TIMESTAMP_REQUEST.rgExtension", rg_extension, 0x280, 0x40, true, 0xc893e017df448721)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif