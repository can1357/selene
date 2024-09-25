#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HLSURF__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hlsurf_t
    {              
                   
        SDK_NONVOL_PROPERTIES( "HLSURF__.$", 0x4, true, 0x6642e4764f0c2046 );
        SDK_FIXED_SIZE( hlsurf_t, 0x4 );
    };             
};
SDK_VERIFY( struct win::hlsurf_t, 0x4 );
