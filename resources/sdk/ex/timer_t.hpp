#pragma once
#include <sdkgen/support_library.hpp>

namespace ex
{
    // [struct _EX_TIMER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_t
    {             
                  
        SDK_MAGIC_PROPERTIES( "_EX_TIMER.$", 0x0, true, 0x7a99bba8046774b3 );
        SDK_FIXED_SIZE( timer_t, 0x0 );
    };            
};
SDK_VERIFY( struct ex::timer_t, 0x0 );
