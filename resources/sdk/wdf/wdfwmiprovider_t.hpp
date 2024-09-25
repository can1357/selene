#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFWMIPROVIDER__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfwmiprovider_t
    {                      
                           
        SDK_NONVOL_PROPERTIES( "WDFWMIPROVIDER__.$", 0x4, true, 0x5dbe635065069da9 );
        SDK_FIXED_SIZE( wdfwmiprovider_t, 0x4 );
    };                     
};
SDK_VERIFY( struct wdf::wdfwmiprovider_t, 0x4 );
