#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_object_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IOleObject.$", 0x8, true, 0x93b7c0caecca9223 );
        SDK_FIXED_SIZE( i_ole_object_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_ole_object_t, 0x8 );
