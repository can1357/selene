#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFSTRING__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfstring_t
    {                 
                      
        SDK_NONVOL_PROPERTIES( "WDFSTRING__.$", 0x4, true, 0x5f9a9ef95219d0e9 );
        SDK_FIXED_SIZE( wdfstring_t, 0x4 );
    };                
};
SDK_VERIFY( struct wdf::wdfstring_t, 0x4 );
