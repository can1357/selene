#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFDEVICE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfdevice_t
    {                 
                      
        SDK_NONVOL_PROPERTIES( "WDFDEVICE__.$", 0x4, true, 0x206a59021de30bc3 );
        SDK_FIXED_SIZE( wdfdevice_t, 0x4 );
    };                
};
SDK_VERIFY( struct wdf::wdfdevice_t, 0x4 );
