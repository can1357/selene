#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFDRIVER__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfdriver_t
    {                 
                      
        SDK_NONVOL_PROPERTIES( "WDFDRIVER__.$", 0x4, true, 0x62530f2026468d12 );
        SDK_FIXED_SIZE( wdfdriver_t, 0x4 );
    };                
};
SDK_VERIFY( struct wdf::wdfdriver_t, 0x4 );
