#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HHOOK__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hhook_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HHOOK__.$", 0x4, true, 0x5f1c0b750bb9ea66 );
        SDK_FIXED_SIZE( hhook_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::hhook_t, 0x4 );
