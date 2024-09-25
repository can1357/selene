#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_container_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IOleContainer.$", 0x8, true, 0x279663ca0e25bb15 );
        SDK_FIXED_SIZE( i_ole_container_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_ole_container_t, 0x8 );
