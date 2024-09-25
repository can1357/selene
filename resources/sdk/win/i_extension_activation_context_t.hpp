#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IExtensionActivationContext]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_extension_activation_context_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IExtensionActivationContext.$", 0x8, true, 0xc30b1c4eed816a0b );
        SDK_FIXED_SIZE( i_extension_activation_context_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_extension_activation_context_t, 0x8 );
