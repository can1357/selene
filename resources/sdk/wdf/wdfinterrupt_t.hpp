#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFINTERRUPT__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfinterrupt_t
    {                    
                         
        SDK_NONVOL_PROPERTIES( "WDFINTERRUPT__.$", 0x4, true, 0xd3d868ccc1737374 );
        SDK_FIXED_SIZE( wdfinterrupt_t, 0x4 );
    };                   
};
SDK_VERIFY( struct wdf::wdfinterrupt_t, 0x4 );
