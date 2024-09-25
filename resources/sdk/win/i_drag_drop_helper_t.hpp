#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDragDropHelper]
    // => Windows 10 v1607
    //
    struct i_drag_drop_helper_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IDragDropHelper.$", 0x0, false, 0xb714acc71a5d75b4 );
        SDK_FIXED_SIZE( i_drag_drop_helper_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_drag_drop_helper_t, 0x8 );
