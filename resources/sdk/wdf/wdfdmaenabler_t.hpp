#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFDMAENABLER__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfdmaenabler_t
    {                     
                          
        SDK_NONVOL_PROPERTIES( "WDFDMAENABLER__.$", 0x4, true, 0x5b16d6941d743fa2 );
        SDK_FIXED_SIZE( wdfdmaenabler_t, 0x4 );
    };                    
};
SDK_VERIFY( struct wdf::wdfdmaenabler_t, 0x4 );
