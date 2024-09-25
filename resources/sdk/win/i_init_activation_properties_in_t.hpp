#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInitActivationPropertiesIn]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_init_activation_properties_in_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IInitActivationPropertiesIn.$", 0x8, true, 0x108970c31e5cfe69 );
        SDK_FIXED_SIZE( i_init_activation_properties_in_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_init_activation_properties_in_t, 0x8 );
