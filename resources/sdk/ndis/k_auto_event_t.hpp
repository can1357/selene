#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [class KAutoEvent]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_auto_event_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "KAutoEvent.$", 0x18, true, 0x83e28cb3bd427201 );
        SDK_FIXED_SIZE( k_auto_event_t, 0x18 );
    };                  
};
SDK_VERIFY( class ndis::k_auto_event_t, 0x18 );
