#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFFILEOBJECT__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdffileobject_t
    {                     
                          
        SDK_NONVOL_PROPERTIES( "WDFFILEOBJECT__.$", 0x4, true, 0xc3fc448bdc5c41b5 );
        SDK_FIXED_SIZE( wdffileobject_t, 0x4 );
    };                    
};
SDK_VERIFY( struct wdf::wdffileobject_t, 0x4 );
