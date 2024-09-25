#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HKEY__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hkey_t
    {            
                 
        SDK_NONVOL_PROPERTIES( "HKEY__.$", 0x4, true, 0x2715e1f630ffff90 );
        SDK_FIXED_SIZE( hkey_t, 0x4 );
    };           
};
SDK_VERIFY( struct win::hkey_t, 0x4 );
