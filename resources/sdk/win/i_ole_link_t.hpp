#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleLink]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_link_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IOleLink.$", 0x8, true, 0xe343cd697c745a8d );
        SDK_FIXED_SIZE( i_ole_link_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_ole_link_t, 0x8 );
