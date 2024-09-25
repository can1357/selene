#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HPALETTE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hpalette_t
    {                
                     
        SDK_NONVOL_PROPERTIES( "HPALETTE__.$", 0x4, true, 0xb05159af0ad68833 );
        SDK_FIXED_SIZE( hpalette_t, 0x4 );
    };               
};
SDK_VERIFY( struct win::hpalette_t, 0x4 );
