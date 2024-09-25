#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class WdfPlatformSemaphore]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class platform_semaphore_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "WdfPlatformSemaphore.$", 0x1, true, 0xcaed6ee6a32d72f1 );
        SDK_FIXED_SIZE( platform_semaphore_t, 0x1 );
    };                        
};
SDK_VERIFY( class wdf::platform_semaphore_t, 0x1 );
