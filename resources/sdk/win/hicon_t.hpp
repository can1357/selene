#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HICON__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hicon_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HICON__.$", 0x4, true, 0xb585526b2d2994ae );
        SDK_FIXED_SIZE( hicon_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::hicon_t, 0x4 );
