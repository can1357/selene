#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationPropertiesIn]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_properties_in_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "IActivationPropertiesIn.$", 0x8, true, 0xb1608516a2f1dfc8 );
        SDK_FIXED_SIZE( i_activation_properties_in_t, 0x8 );
    };                                 
};
SDK_VERIFY( struct win::i_activation_properties_in_t, 0x8 );
