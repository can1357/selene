#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIPipeDouble]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_pipe_double_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "AsyncIPipeDouble.$", 0x8, true, 0x7eb248559f0459ca );
        SDK_FIXED_SIZE( async_i_pipe_double_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::async_i_pipe_double_t, 0x8 );
