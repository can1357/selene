#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_get_time_valid_object_extra_info_t.start.hpp"
namespace win
{
    struct filetime_t;
    struct cryptoapi_blob_t;
    struct cert_revocation_chain_para_t;

    // [struct _CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_get_time_valid_object_extra_info_t                          
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 uint32_t                                  cb_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t                                   i_delta_crl_indicator;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iDeltaCrlIndicator
        _m02 struct win::filetime_t*                   pft_cache_resync;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pftCacheResync
        _m03 struct win::filetime_t*                   p_last_sync_time;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pLastSyncTime
        _m04 struct win::filetime_t*                   p_max_age_time;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pMaxAgeTime
        _m05 struct win::cert_revocation_chain_para_t* p_chain_para;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pChainPara
        _m06 struct win::cryptoapi_blob_t*             p_delta_crl_indicator;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pDeltaCrlIndicator
                                                                             
        SDK_MAGIC_PROPERTIES( "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO.$", 0x30, true, 0x113249b0d9d51432 );                      
        SDK_FIXED_SIZE( crypt_get_time_valid_object_extra_info_t, 0x30 );                      
    };                                                                       
};
#include "magic/crypt_get_time_valid_object_extra_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_get_time_valid_object_extra_info_t, 0x30 );
