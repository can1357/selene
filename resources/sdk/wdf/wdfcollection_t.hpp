#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFCOLLECTION__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfcollection_t
    {                     
                          
        SDK_NONVOL_PROPERTIES( "WDFCOLLECTION__.$", 0x4, true, 0x6faaa64213432b6e );
        SDK_FIXED_SIZE( wdfcollection_t, 0x4 );
    };                    
};
SDK_VERIFY( struct wdf::wdfcollection_t, 0x4 );
