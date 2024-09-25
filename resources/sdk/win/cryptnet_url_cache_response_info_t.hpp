#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/cryptnet_url_cache_response_info_t.start.hpp"
namespace win
{
    // [struct _CRYPTNET_URL_CACHE_RESPONSE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cryptnet_url_cache_response_info_t          
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               cb_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint16_t               w_response_type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wResponseType
        _m02 uint16_t               w_response_flags;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wResponseFlags
        _m03 struct win::filetime_t last_modified_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastModifiedTime
        _m04 uint32_t               dw_max_age;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwMaxAge
        _m05 const wchar_t*         pwsz_e_tag;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pwszETag
        _m06 uint32_t               dw_proxy_id;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwProxyId
                                                       
        SDK_MAGIC_PROPERTIES( "_CRYPTNET_URL_CACHE_RESPONSE_INFO.$", 0x28, true, 0x7dcb55b73f01928b );                   
        SDK_FIXED_SIZE( cryptnet_url_cache_response_info_t, 0x28 );                   
    };                                                 
};
#include "magic/cryptnet_url_cache_response_info_t.end.hpp"
SDK_VERIFY( struct win::cryptnet_url_cache_response_info_t, 0x28 );
