#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_WAIT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wait_t
    {            
                 
        SDK_MAGIC_PROPERTIES( "_TP_WAIT.$", 0x0, true, 0xd00ed55b9d9fb50c );
        SDK_FIXED_SIZE( wait_t, 0x0 );
    };           
};
SDK_VERIFY( struct tp::wait_t, 0x0 );
