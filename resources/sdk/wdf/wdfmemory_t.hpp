#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFMEMORY__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfmemory_t
    {                 
                      
        SDK_NONVOL_PROPERTIES( "WDFMEMORY__.$", 0x4, true, 0x91124a5028097d74 );
        SDK_FIXED_SIZE( wdfmemory_t, 0x4 );
    };                
};
SDK_VERIFY( struct wdf::wdfmemory_t, 0x4 );
