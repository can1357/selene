#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFWMIINSTANCE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfwmiinstance_t
    {                      
                           
        SDK_NONVOL_PROPERTIES( "WDFWMIINSTANCE__.$", 0x4, true, 0xbdbe0e8975d1318c );
        SDK_FIXED_SIZE( wdfwmiinstance_t, 0x4 );
    };                     
};
SDK_VERIFY( struct wdf::wdfwmiinstance_t, 0x4 );
