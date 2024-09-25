#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class WdfPlatformTimer]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class platform_timer_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "WdfPlatformTimer.$", 0x1, true, 0xda6d829791541a80 );
        SDK_FIXED_SIZE( platform_timer_t, 0x1 );
    };                    
};
SDK_VERIFY( class wdf::platform_timer_t, 0x1 );
