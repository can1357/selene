#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFLOOKASIDE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdflookaside_t
    {                    
                         
        SDK_NONVOL_PROPERTIES( "WDFLOOKASIDE__.$", 0x4, true, 0xe54940831002d4e6 );
        SDK_FIXED_SIZE( wdflookaside_t, 0x4 );
    };                   
};
SDK_VERIFY( struct wdf::wdflookaside_t, 0x4 );
