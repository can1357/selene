#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPrivActivationPropertiesOut]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_priv_activation_properties_out_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "IPrivActivationPropertiesOut.$", 0x8, true, 0xad23bcdd08b8b7a5 );
        SDK_FIXED_SIZE( i_priv_activation_properties_out_t, 0x8 );
    };                                       
};
SDK_VERIFY( struct win::i_priv_activation_properties_out_t, 0x8 );
