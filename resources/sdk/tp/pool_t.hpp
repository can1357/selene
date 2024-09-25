#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_POOL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_t
    {            
                 
        SDK_MAGIC_PROPERTIES( "_TP_POOL.$", 0x0, true, 0x16012ac10602f2b3 );
        SDK_FIXED_SIZE( pool_t, 0x0 );
    };           
};
SDK_VERIFY( struct tp::pool_t, 0x0 );
