#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class WdfPlatformLock]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class platform_lock_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "WdfPlatformLock.$", 0x1, true, 0x40de9265b5b774a9 );
        SDK_FIXED_SIZE( platform_lock_t, 0x1 );
    };                   
};
SDK_VERIFY( class wdf::platform_lock_t, 0x1 );
