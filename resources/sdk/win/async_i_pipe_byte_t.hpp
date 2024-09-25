#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIPipeByte]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_pipe_byte_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "AsyncIPipeByte.$", 0x8, true, 0x55d63ed3467bf74b );
        SDK_FIXED_SIZE( async_i_pipe_byte_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::async_i_pipe_byte_t, 0x8 );
