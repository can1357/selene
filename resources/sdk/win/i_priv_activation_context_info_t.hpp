#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPrivActivationContextInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_priv_activation_context_info_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IPrivActivationContextInfo.$", 0x8, true, 0x5132ab424a6a6a09 );
        SDK_FIXED_SIZE( i_priv_activation_context_info_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_priv_activation_context_info_t, 0x8 );
