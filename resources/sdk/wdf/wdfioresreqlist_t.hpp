#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFIORESREQLIST__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfioresreqlist_t
    {                       
                            
        SDK_NONVOL_PROPERTIES( "WDFIORESREQLIST__.$", 0x4, true, 0xc28f869ec2c22bda );
        SDK_FIXED_SIZE( wdfioresreqlist_t, 0x4 );
    };                      
};
SDK_VERIFY( struct wdf::wdfioresreqlist_t, 0x4 );
