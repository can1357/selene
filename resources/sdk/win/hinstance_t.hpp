#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HINSTANCE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hinstance_t
    {                 
                      
        SDK_NONVOL_PROPERTIES( "HINSTANCE__.$", 0x4, true, 0x1527a13bf6af6967 );
        SDK_FIXED_SIZE( hinstance_t, 0x4 );
    };                
};
SDK_VERIFY( struct win::hinstance_t, 0x4 );
