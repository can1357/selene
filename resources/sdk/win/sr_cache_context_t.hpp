#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct SRCacheContext]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sr_cache_context_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "SRCacheContext.$", 0x0, true, 0x4f195d035a27d33d );
        SDK_FIXED_SIZE( sr_cache_context_t, 0x0 );
    };                       
};
SDK_VERIFY( struct win::sr_cache_context_t, 0x0 );
