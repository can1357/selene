#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICacheRefresh]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_cache_refresh_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "ICacheRefresh.$", 0x8, true, 0x6b70fd14563fef71 );
        SDK_FIXED_SIZE( i_cache_refresh_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_cache_refresh_t, 0x8 );
