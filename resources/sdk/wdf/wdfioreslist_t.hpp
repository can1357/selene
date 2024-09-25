#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFIORESLIST__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfioreslist_t
    {                    
                         
        SDK_NONVOL_PROPERTIES( "WDFIORESLIST__.$", 0x4, true, 0x29858cb11e21c78f );
        SDK_FIXED_SIZE( wdfioreslist_t, 0x4 );
    };                   
};
SDK_VERIFY( struct wdf::wdfioreslist_t, 0x4 );
