#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HRSRC__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hrsrc_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HRSRC__.$", 0x4, true, 0x441022227e5170c3 );
        SDK_FIXED_SIZE( hrsrc_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::hrsrc_t, 0x4 );
