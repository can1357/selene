#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFDPC__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfdpc_t
    {              
                   
        SDK_NONVOL_PROPERTIES( "WDFDPC__.$", 0x4, true, 0xcd4a22f26333715 );
        SDK_FIXED_SIZE( wdfdpc_t, 0x4 );
    };             
};
SDK_VERIFY( struct wdf::wdfdpc_t, 0x4 );
