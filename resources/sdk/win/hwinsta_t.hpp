#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HWINSTA__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hwinsta_t
    {               
                    
        SDK_NONVOL_PROPERTIES( "HWINSTA__.$", 0x4, true, 0x9e988a5a676297db );
        SDK_FIXED_SIZE( hwinsta_t, 0x4 );
    };              
};
SDK_VERIFY( struct win::hwinsta_t, 0x4 );
