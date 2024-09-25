#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFREQUEST__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfrequest_t
    {                  
                       
        SDK_NONVOL_PROPERTIES( "WDFREQUEST__.$", 0x4, true, 0xab41824fe8f160f2 );
        SDK_FIXED_SIZE( wdfrequest_t, 0x4 );
    };                 
};
SDK_VERIFY( struct wdf::wdfrequest_t, 0x4 );
