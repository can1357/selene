#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleInPlaceActiveObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_in_place_active_object_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "IOleInPlaceActiveObject.$", 0x8, true, 0xb1b2c117b3884352 );
        SDK_FIXED_SIZE( i_ole_in_place_active_object_t, 0x8 );
    };                                   
};
SDK_VERIFY( struct win::i_ole_in_place_active_object_t, 0x8 );
