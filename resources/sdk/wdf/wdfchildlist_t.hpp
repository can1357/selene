#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFCHILDLIST__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfchildlist_t
    {                    
                         
        SDK_NONVOL_PROPERTIES( "WDFCHILDLIST__.$", 0x4, true, 0x63b797a517be96ff );
        SDK_FIXED_SIZE( wdfchildlist_t, 0x4 );
    };                   
};
SDK_VERIFY( struct wdf::wdfchildlist_t, 0x4 );
