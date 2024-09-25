#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HPEN__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hpen_t
    {            
                 
        SDK_NONVOL_PROPERTIES( "HPEN__.$", 0x4, true, 0xef0d1a68fd6f37f8 );
        SDK_FIXED_SIZE( hpen_t, 0x4 );
    };           
};
SDK_VERIFY( struct win::hpen_t, 0x4 );
