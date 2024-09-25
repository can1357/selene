#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HBRUSH__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hbrush_t
    {              
                   
        SDK_NONVOL_PROPERTIES( "HBRUSH__.$", 0x4, true, 0x9190bb2762b3a873 );
        SDK_FIXED_SIZE( hbrush_t, 0x4 );
    };             
};
SDK_VERIFY( struct win::hbrush_t, 0x4 );
