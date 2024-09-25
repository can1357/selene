#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HBITMAP__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hbitmap_t
    {               
                    
        SDK_NONVOL_PROPERTIES( "HBITMAP__.$", 0x4, true, 0xb5c2497fcfc84a41 );
        SDK_FIXED_SIZE( hbitmap_t, 0x4 );
    };              
};
SDK_VERIFY( struct win::hbitmap_t, 0x4 );
