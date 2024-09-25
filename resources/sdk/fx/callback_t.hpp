#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [class FxCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class callback_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "FxCallback.$", 0x1, true, 0x5b25b0151e67a4b1 );
        SDK_FIXED_SIZE( callback_t, 0x1 );
    };              
};
SDK_VERIFY( class fx::callback_t, 0x1 );
