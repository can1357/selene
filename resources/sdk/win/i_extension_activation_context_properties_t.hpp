#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IExtensionActivationContextProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_extension_activation_context_properties_t
    {                                                 
                                                      
        SDK_MAGIC_PROPERTIES( "IExtensionActivationContextProperties.$", 0x8, true, 0x54460a5fcfb6eb38 );
        SDK_FIXED_SIZE( i_extension_activation_context_properties_t, 0x8 );
    };                                                
};
SDK_VERIFY( struct win::i_extension_activation_context_properties_t, 0x8 );
