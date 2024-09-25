#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISurrogate]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_surrogate_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "ISurrogate.$", 0x8, true, 0xed1e11e58aba6f9a );
        SDK_FIXED_SIZE( i_surrogate_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_surrogate_t, 0x8 );
