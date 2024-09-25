#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFKEY__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfkey_t
    {              
                   
        SDK_NONVOL_PROPERTIES( "WDFKEY__.$", 0x4, true, 0x67d584a9ab59c17f );
        SDK_FIXED_SIZE( wdfkey_t, 0x4 );
    };             
};
SDK_VERIFY( struct wdf::wdfkey_t, 0x4 );
