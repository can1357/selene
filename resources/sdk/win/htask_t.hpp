#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HTASK__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct htask_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HTASK__.$", 0x4, true, 0xc277799a8b0a680d );
        SDK_FIXED_SIZE( htask_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::htask_t, 0x4 );
