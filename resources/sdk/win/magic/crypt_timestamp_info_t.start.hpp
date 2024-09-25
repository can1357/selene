#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xe60cb349697e38c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_TIMESTAMP_INFO.pszTSAPolicyId", psz_tsa_policy_id, 0x40, 0x40, true, 0xfee4310797d0c739)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_TIMESTAMP_INFO.HashAlgorithm", hash_algorithm, 0x80, 0xc0, true, 0x1184251db3ee3ef1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_INFO.HashedMessage", hashed_message, 0x140, 0x80, true, 0x7db2da51b95670bc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_INFO.SerialNumber", serial_number, 0x1c0, 0x80, true, 0x49351c4a46a589b4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRYPT_TIMESTAMP_INFO.ftTime", ft_time, 0x240, 0x40, true, 0x2053f07ef267b9a9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_timestamp_accuracy_t*), "_CRYPT_TIMESTAMP_INFO.pvAccuracy", pv_accuracy, 0x280, 0x40, true, 0x65ec470ed2135058)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRYPT_TIMESTAMP_INFO.fOrdering", f_ordering, 0x2c0, 0x20, true, 0x60b39b73a71b8476)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_INFO.Nonce", nonce, 0x300, 0x80, true, 0x3474b2a8a32bb66b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIMESTAMP_INFO.Tsa", tsa, 0x380, 0x80, true, 0xebfb5a8dc425e1f4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_INFO.cExtension", c_extension, 0x400, 0x20, true, 0x524aa36cb5447edb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CRYPT_TIMESTAMP_INFO.rgExtension", rg_extension, 0x440, 0x40, true, 0xd336a944a597097)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif