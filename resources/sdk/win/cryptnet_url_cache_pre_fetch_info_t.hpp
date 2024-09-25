#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/cryptnet_url_cache_pre_fetch_info_t.start.hpp"
namespace win
{
    // [struct _CRYPTNET_URL_CACHE_PRE_FETCH_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cryptnet_url_cache_pre_fetch_info_t       
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint32_t               cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t               dw_object_type;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwObjectType
        _m02 uint32_t               dw_error;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwError
        _m03 uint32_t               dw_reserved;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwReserved
        _m04 struct win::filetime_t this_update_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThisUpdateTime
        _m05 struct win::filetime_t next_update_time;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NextUpdateTime
        _m06 struct win::filetime_t publish_time;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PublishTime
                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.$", 0x28, true, 0x124a826748071f72 );                 
        SDK_FIXED_SIZE( cryptnet_url_cache_pre_fetch_info_t, 0x28 );                 
    };                                               
};
#include "magic/cryptnet_url_cache_pre_fetch_info_t.end.hpp"
SDK_VERIFY( struct win::cryptnet_url_cache_pre_fetch_info_t, 0x28 );
