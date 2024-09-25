#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFDMATRANSACTION__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfdmatransaction_t
    {                         
                              
        SDK_NONVOL_PROPERTIES( "WDFDMATRANSACTION__.$", 0x4, true, 0x5522133760acacad );
        SDK_FIXED_SIZE( wdfdmatransaction_t, 0x4 );
    };                        
};
SDK_VERIFY( struct wdf::wdfdmatransaction_t, 0x4 );
