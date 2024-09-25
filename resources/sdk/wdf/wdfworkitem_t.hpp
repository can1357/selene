#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFWORKITEM__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfworkitem_t
    {                   
                        
        SDK_NONVOL_PROPERTIES( "WDFWORKITEM__.$", 0x4, true, 0x712b19d0ee5df1f3 );
        SDK_FIXED_SIZE( wdfworkitem_t, 0x4 );
    };                  
};
SDK_VERIFY( struct wdf::wdfworkitem_t, 0x4 );
