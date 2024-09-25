#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMarshal2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_marshal2_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IMarshal2.$", 0x8, true, 0x99ad938d50004e8a );
        SDK_FIXED_SIZE( i_marshal2_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_marshal2_t, 0x8 );
