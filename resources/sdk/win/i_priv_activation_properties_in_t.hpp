#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPrivActivationPropertiesIn]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_priv_activation_properties_in_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IPrivActivationPropertiesIn.$", 0x8, true, 0xd2ee7f66ce1221a3 );
        SDK_FIXED_SIZE( i_priv_activation_properties_in_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_priv_activation_properties_in_t, 0x8 );
