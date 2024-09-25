#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPipeDouble]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_pipe_double_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IPipeDouble.$", 0x8, true, 0xeef913a4675c1694 );
        SDK_FIXED_SIZE( i_pipe_double_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_pipe_double_t, 0x8 );
