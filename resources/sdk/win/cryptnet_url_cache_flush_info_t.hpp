#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/cryptnet_url_cache_flush_info_t.start.hpp"
namespace win
{
    // [struct _CRYPTNET_URL_CACHE_FLUSH_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cryptnet_url_cache_flush_info_t            
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               cb_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t               dw_exempt_seconds;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwExemptSeconds
        _m02 struct win::filetime_t expire_time;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExpireTime
                                                      
        SDK_MAGIC_PROPERTIES( "_CRYPTNET_URL_CACHE_FLUSH_INFO.$", 0x10, true, 0xdc47df8a8ae7e4fd );                  
        SDK_FIXED_SIZE( cryptnet_url_cache_flush_info_t, 0x10 );                  
    };                                                
};
#include "magic/cryptnet_url_cache_flush_info_t.end.hpp"
SDK_VERIFY( struct win::cryptnet_url_cache_flush_info_t, 0x10 );
