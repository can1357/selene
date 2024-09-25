#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CrossContainerBehavior]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cross_container_behavior_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "CrossContainerBehavior.$", 0x1, true, 0xb93387f248486576 );
        SDK_FIXED_SIZE( cross_container_behavior_t, 0x1 );
    };                               
};
SDK_VERIFY( struct win::cross_container_behavior_t, 0x1 );
