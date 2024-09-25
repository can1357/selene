#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HDESK__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hdesk_t
    {             
                  
        SDK_NONVOL_PROPERTIES( "HDESK__.$", 0x4, true, 0x7539a2b50ff907fc );
        SDK_FIXED_SIZE( hdesk_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::hdesk_t, 0x4 );
