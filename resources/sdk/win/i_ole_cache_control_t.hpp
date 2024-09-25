#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleCacheControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_cache_control_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IOleCacheControl.$", 0x8, true, 0x37f35593fea19523 );
        SDK_FIXED_SIZE( i_ole_cache_control_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_ole_cache_control_t, 0x8 );
