#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [struct HSEMAPHORE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hsemaphore_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "HSEMAPHORE__.$", 0x4, true, 0xfa6b629b6d37b064 );
        SDK_FIXED_SIZE( hsemaphore_t, 0x4 );
    };                 
};
SDK_VERIFY( struct kuser::hsemaphore_t, 0x4 );
