#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFCOMMONBUFFER__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfcommonbuffer_t
    {                       
                            
        SDK_NONVOL_PROPERTIES( "WDFCOMMONBUFFER__.$", 0x4, true, 0x611296a04f2e7730 );
        SDK_FIXED_SIZE( wdfcommonbuffer_t, 0x4 );
    };                      
};
SDK_VERIFY( struct wdf::wdfcommonbuffer_t, 0x4 );
