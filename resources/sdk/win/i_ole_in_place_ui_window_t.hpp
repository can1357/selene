#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleInPlaceUIWindow]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_in_place_ui_window_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IOleInPlaceUIWindow.$", 0x8, true, 0x3b769c4437e32837 );
        SDK_FIXED_SIZE( i_ole_in_place_ui_window_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_ole_in_place_ui_window_t, 0x8 );
