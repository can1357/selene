#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_cache_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IOleCache.$", 0x8, true, 0x12a7daf87420f52 );
        SDK_FIXED_SIZE( i_ole_cache_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_ole_cache_t, 0x8 );
