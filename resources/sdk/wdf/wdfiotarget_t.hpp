#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFIOTARGET__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfiotarget_t
    {                   
                        
        SDK_NONVOL_PROPERTIES( "WDFIOTARGET__.$", 0x4, true, 0x45956d0a1974983f );
        SDK_FIXED_SIZE( wdfiotarget_t, 0x4 );
    };                  
};
SDK_VERIFY( struct wdf::wdfiotarget_t, 0x4 );
