#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class WdfPlatform]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class platform_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "WdfPlatform.$", 0x5, true, 0xc868f8576840f43c );
        SDK_FIXED_SIZE( platform_t, 0x5 );
    };              
};
SDK_VERIFY( class wdf::platform_t, 0x5 );
