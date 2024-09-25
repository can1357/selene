#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HMONITOR__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hmonitor_t
    {                
                     
        SDK_NONVOL_PROPERTIES( "HMONITOR__.$", 0x4, true, 0xfc841097f3d09f8f );
        SDK_FIXED_SIZE( hmonitor_t, 0x4 );
    };               
};
SDK_VERIFY( struct win::hmonitor_t, 0x4 );
