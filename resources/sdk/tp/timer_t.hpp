#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_TIMER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_t
    {             
                  
        SDK_MAGIC_PROPERTIES( "_TP_TIMER.$", 0x0, true, 0xbd03fb8e235f5f06 );
        SDK_FIXED_SIZE( timer_t, 0x0 );
    };            
};
SDK_VERIFY( struct tp::timer_t, 0x0 );
