#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_retrieve_aux_info_t.start.hpp"
namespace win
{
    struct filetime_t;
    struct cryptoapi_blob_t;
    struct cryptnet_url_cache_flush_info_t;
    struct cryptnet_url_cache_response_info_t;
    struct cryptnet_url_cache_pre_fetch_info_t;

    // [struct _CRYPT_RETRIEVE_AUX_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_retrieve_aux_info_t                                                          
    {                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                    
        _m00 uint32_t                                         cb_size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::filetime_t*                          p_last_sync_time;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pLastSyncTime
        _m02 uint32_t                                         dw_max_url_retrieval_byte_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwMaxUrlRetrievalByteCount
        _m03 struct win::cryptnet_url_cache_pre_fetch_info_t* p_pre_fetch_info;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pPreFetchInfo
        _m04 struct win::cryptnet_url_cache_flush_info_t*     p_flush_info;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pFlushInfo
        _m05 struct win::cryptnet_url_cache_response_info_t** pp_response_info;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ppResponseInfo
        _m06 wchar_t*                                         pwsz_cache_file_name_prefix;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pwszCacheFileNamePrefix
        _m07 struct win::filetime_t*                          pft_cache_resync;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pftCacheResync
        _m08 int32_t                                          f_proxy_cache_retrieval;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .fProxyCacheRetrieval
        _m09 uint32_t                                         dw_http_status_code;              //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwHttpStatusCode
        _m10 wchar_t**                                        ppwsz_error_response_headers;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ppwszErrorResponseHeaders
        _m11 struct win::cryptoapi_blob_t**                   pp_error_content_blob;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ppErrorContentBlob
                                                                                              
        SDK_MAGIC_PROPERTIES( "_CRYPT_RETRIEVE_AUX_INFO.$", 0x58, true, 0xb78772c8d2c02b91 );                                
        SDK_FIXED_SIZE( crypt_retrieve_aux_info_t, 0x58 );                                    
    };                                                                                        
};
#include "magic/crypt_retrieve_aux_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_retrieve_aux_info_t, 0x58 );
