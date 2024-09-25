#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class WdfPlatformEvent]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class platform_event_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "WdfPlatformEvent.$", 0x1, true, 0xc7420b58abc55aab );
        SDK_FIXED_SIZE( platform_event_t, 0x1 );
    };                    
};
SDK_VERIFY( class wdf::platform_event_t, 0x1 );
