#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct NetworkBehavior]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct network_behavior_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "NetworkBehavior.$", 0x1, true, 0x5625d770cc34ad0e );
        SDK_FIXED_SIZE( network_behavior_t, 0x1 );
    };                       
};
SDK_VERIFY( struct win::network_behavior_t, 0x1 );
