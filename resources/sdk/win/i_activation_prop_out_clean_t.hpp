#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationPropOutClean]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_prop_out_clean_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IActivationPropOutClean.$", 0x8, true, 0xf285b0fb3846f81c );
        SDK_FIXED_SIZE( i_activation_prop_out_clean_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_activation_prop_out_clean_t, 0x8 );
