#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ActivateOnHost]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class activate_on_host_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "ActivateOnHost.$", 0x1, true, 0xc3a6c5abbb0636e0 );
        SDK_FIXED_SIZE( activate_on_host_t, 0x1 );
    };                      
};
SDK_VERIFY( class win::activate_on_host_t, 0x1 );
