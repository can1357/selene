#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HFONT__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hfont_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HFONT__.$", 0x4, true, 0x960749c27034a4ca );
        SDK_FIXED_SIZE( hfont_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::hfont_t, 0x4 );
