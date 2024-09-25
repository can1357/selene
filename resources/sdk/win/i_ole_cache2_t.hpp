#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleCache2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_cache2_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IOleCache2.$", 0x8, true, 0x9e080c3f776f94e1 );
        SDK_FIXED_SIZE( i_ole_cache2_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_ole_cache2_t, 0x8 );
