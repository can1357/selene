#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ActivationContextFactory]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class activation_context_factory_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "ActivationContextFactory.$", 0x60, true, 0xc3cc2fa79466082a );
        SDK_FIXED_SIZE( activation_context_factory_t, 0x60 );
    };                                
};
SDK_VERIFY( class win::activation_context_factory_t, 0x60 );
