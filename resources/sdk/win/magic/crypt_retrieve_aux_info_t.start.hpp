#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_RETRIEVE_AUX_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x511b94d136fa24bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CRYPT_RETRIEVE_AUX_INFO.pLastSyncTime", p_last_sync_time, 0x40, 0x40, true, 0x54c03cc7a947684b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_RETRIEVE_AUX_INFO.dwMaxUrlRetrievalByteCount", dw_max_url_retrieval_byte_count, 0x80, 0x20, true, 0xd9384e4928e29d71)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptnet_url_cache_pre_fetch_info_t*), "_CRYPT_RETRIEVE_AUX_INFO.pPreFetchInfo", p_pre_fetch_info, 0xc0, 0x40, true, 0x208ba6d7ca57e729)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptnet_url_cache_flush_info_t*), "_CRYPT_RETRIEVE_AUX_INFO.pFlushInfo", p_flush_info, 0x100, 0x40, true, 0x8eeec68dbeeeca8b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptnet_url_cache_response_info_t**), "_CRYPT_RETRIEVE_AUX_INFO.ppResponseInfo", pp_response_info, 0x140, 0x40, true, 0xc4bc1aedf880aa43)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_RETRIEVE_AUX_INFO.pwszCacheFileNamePrefix", pwsz_cache_file_name_prefix, 0x180, 0x40, true, 0xd6296d3b5bc0fd32)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CRYPT_RETRIEVE_AUX_INFO.pftCacheResync", pft_cache_resync, 0x1c0, 0x40, true, 0x24798695d6fbe465)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRYPT_RETRIEVE_AUX_INFO.fProxyCacheRetrieval", f_proxy_cache_retrieval, 0x200, 0x20, true, 0x6fcf9d3b25349310)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_RETRIEVE_AUX_INFO.dwHttpStatusCode", dw_http_status_code, 0x220, 0x20, true, 0x14505e204e0030cc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_RETRIEVE_AUX_INFO.ppwszErrorResponseHeaders", ppwsz_error_response_headers, 0x240, 0x40, true, 0xda04eac1e4da90e2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t**), "_CRYPT_RETRIEVE_AUX_INFO.ppErrorContentBlob", pp_error_content_blob, 0x280, 0x40, true, 0xc36d5be7aabc0873)
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