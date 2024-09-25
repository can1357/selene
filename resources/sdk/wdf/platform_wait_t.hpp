#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class WdfPlatformWait]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class platform_wait_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "WdfPlatformWait.$", 0x1, true, 0x6c50bbe67f4bc4e7 );
        SDK_FIXED_SIZE( platform_wait_t, 0x1 );
    };                   
};
SDK_VERIFY( class wdf::platform_wait_t, 0x1 );
