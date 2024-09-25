#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class WdfPlatformSecurity]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class platform_security_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "WdfPlatformSecurity.$", 0x1, true, 0xdc7eace3e1a43144 );
        SDK_FIXED_SIZE( platform_security_t, 0x1 );
    };                       
};
SDK_VERIFY( class wdf::platform_security_t, 0x1 );
