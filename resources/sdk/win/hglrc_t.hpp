#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HGLRC__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hglrc_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HGLRC__.$", 0x4, true, 0xde075692071a9d77 );
        SDK_FIXED_SIZE( hglrc_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::hglrc_t, 0x4 );
