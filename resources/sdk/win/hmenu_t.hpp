#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HMENU__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hmenu_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HMENU__.$", 0x4, true, 0x7f6ac3d5d78728da );
        SDK_FIXED_SIZE( hmenu_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::hmenu_t, 0x4 );
