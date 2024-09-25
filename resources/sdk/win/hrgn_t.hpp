#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HRGN__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hrgn_t
    {            
                 
        SDK_NONVOL_PROPERTIES( "HRGN__.$", 0x4, true, 0x27771500edd32712 );
        SDK_FIXED_SIZE( hrgn_t, 0x4 );
    };           
};
SDK_VERIFY( struct win::hrgn_t, 0x4 );
