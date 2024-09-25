#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_factory_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IActivationFactory.$", 0x8, true, 0x2c363a9c34d71de5 );
        SDK_FIXED_SIZE( i_activation_factory_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_activation_factory_t, 0x8 );
