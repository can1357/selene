#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPipeLong]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_pipe_long_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IPipeLong.$", 0x8, true, 0xd5ba7f17b765c1eb );
        SDK_FIXED_SIZE( i_pipe_long_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_pipe_long_t, 0x8 );
