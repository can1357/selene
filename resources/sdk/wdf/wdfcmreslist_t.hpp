#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFCMRESLIST__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfcmreslist_t
    {                    
                         
        SDK_NONVOL_PROPERTIES( "WDFCMRESLIST__.$", 0x4, true, 0x37219a405fd00d7c );
        SDK_FIXED_SIZE( wdfcmreslist_t, 0x4 );
    };                   
};
SDK_VERIFY( struct wdf::wdfcmreslist_t, 0x4 );
