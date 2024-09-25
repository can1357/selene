#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationContextInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_context_info_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IActivationContextInfo.$", 0x8, true, 0xe11e7e8ce5abb5c );
        SDK_FIXED_SIZE( i_activation_context_info_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_activation_context_info_t, 0x8 );
