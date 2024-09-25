#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationFilter]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_filter_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IActivationFilter.$", 0x8, true, 0x19e679940099257e );
        SDK_FIXED_SIZE( i_activation_filter_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_activation_filter_t, 0x8 );
