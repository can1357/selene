#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFQUEUE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfqueue_t
    {                
                     
        SDK_NONVOL_PROPERTIES( "WDFQUEUE__.$", 0x4, true, 0xca91a766a7f5764d );
        SDK_FIXED_SIZE( wdfqueue_t, 0x4 );
    };               
};
SDK_VERIFY( struct wdf::wdfqueue_t, 0x4 );
