#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFWAITLOCK__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfwaitlock_t
    {                   
                        
        SDK_NONVOL_PROPERTIES( "WDFWAITLOCK__.$", 0x4, true, 0x75f11ea5257ef2bb );
        SDK_FIXED_SIZE( wdfwaitlock_t, 0x4 );
    };                  
};
SDK_VERIFY( struct wdf::wdfwaitlock_t, 0x4 );
