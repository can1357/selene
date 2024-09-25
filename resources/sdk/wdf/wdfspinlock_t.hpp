#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFSPINLOCK__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfspinlock_t
    {                   
                        
        SDK_NONVOL_PROPERTIES( "WDFSPINLOCK__.$", 0x4, true, 0xedc387b9ddd71ec9 );
        SDK_FIXED_SIZE( wdfspinlock_t, 0x4 );
    };                  
};
SDK_VERIFY( struct wdf::wdfspinlock_t, 0x4 );
