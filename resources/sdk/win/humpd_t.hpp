#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HUMPD__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct humpd_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HUMPD__.$", 0x4, true, 0x6b8d865dd7c6bb0a );
        SDK_FIXED_SIZE( humpd_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::humpd_t, 0x4 );
