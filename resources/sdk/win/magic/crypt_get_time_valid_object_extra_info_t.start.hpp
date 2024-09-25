#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xde987573891372c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.iDeltaCrlIndicator", i_delta_crl_indicator, 0x20, 0x20, true, 0x96f9915c7671ceac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.pftCacheResync", pft_cache_resync, 0x40, 0x40, true, 0x2b652232d744ed51)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.pLastSyncTime", p_last_sync_time, 0x80, 0x40, true, 0xa4440f9dcb917f28)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.pMaxAgeTime", p_max_age_time, 0xc0, 0x40, true, 0xc8652d0e7711904c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_revocation_chain_para_t*), "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.pChainPara", p_chain_para, 0x100, 0x40, true, 0xd1c99a5a3f96ea46)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.pDeltaCrlIndicator", p_delta_crl_indicator, 0x140, 0x40, true, 0x81a94dfe09e151b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif