#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HSPRITE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hsprite_t
    {               
                    
        SDK_NONVOL_PROPERTIES( "HSPRITE__.$", 0x4, true, 0x6e2bff9754bc2847 );
        SDK_FIXED_SIZE( hsprite_t, 0x4 );
    };              
};
SDK_VERIFY( struct win::hsprite_t, 0x4 );
