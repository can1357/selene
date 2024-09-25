#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct SRCacheManager]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sr_cache_manager_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "SRCacheManager.$", 0x0, true, 0x932fa1e4b772b92a );
        SDK_FIXED_SIZE( sr_cache_manager_t, 0x0 );
    };                       
};
SDK_VERIFY( struct win::sr_cache_manager_t, 0x0 );
