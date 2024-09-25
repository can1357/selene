#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMarshalEnvoy]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_marshal_envoy_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IMarshalEnvoy.$", 0x8, true, 0x2f5abe84d343414a );
        SDK_FIXED_SIZE( i_marshal_envoy_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_marshal_envoy_t, 0x8 );
