#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBinding]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_binding_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IBinding.$", 0x8, true, 0xb47cc7ccc8d08c92 );
        SDK_FIXED_SIZE( i_binding_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_binding_t, 0x8 );
