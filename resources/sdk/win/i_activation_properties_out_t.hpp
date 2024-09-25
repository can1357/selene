#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationPropertiesOut]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_properties_out_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IActivationPropertiesOut.$", 0x8, true, 0x9084105bfc2044e2 );
        SDK_FIXED_SIZE( i_activation_properties_out_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_activation_properties_out_t, 0x8 );
