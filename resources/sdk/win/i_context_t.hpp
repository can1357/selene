#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_context_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IContext.$", 0x8, true, 0xf3d8a4f5a353778a );
        SDK_FIXED_SIZE( i_context_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_context_t, 0x8 );
