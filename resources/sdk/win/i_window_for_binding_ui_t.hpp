#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWindowForBindingUI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_window_for_binding_ui_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IWindowForBindingUI.$", 0x8, true, 0xb76b90ad47b769de );
        SDK_FIXED_SIZE( i_window_for_binding_ui_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_window_for_binding_ui_t, 0x8 );
