#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPipeByte]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_pipe_byte_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IPipeByte.$", 0x8, true, 0x83c104b000c003a1 );
        SDK_FIXED_SIZE( i_pipe_byte_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_pipe_byte_t, 0x8 );
