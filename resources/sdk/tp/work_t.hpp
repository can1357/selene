#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_WORK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_t
    {            
                 
        SDK_MAGIC_PROPERTIES( "_TP_WORK.$", 0x0, true, 0x3d2f889d76ec50d2 );
        SDK_FIXED_SIZE( work_t, 0x0 );
    };           
};
SDK_VERIFY( struct tp::work_t, 0x0 );
