#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFTIMER__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdftimer_t
    {                
                     
        SDK_NONVOL_PROPERTIES( "WDFTIMER__.$", 0x4, true, 0xf0b1dedf8217ca54 );
        SDK_FIXED_SIZE( wdftimer_t, 0x4 );
    };               
};
SDK_VERIFY( struct wdf::wdftimer_t, 0x4 );
