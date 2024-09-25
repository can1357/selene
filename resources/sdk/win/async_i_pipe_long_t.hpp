#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIPipeLong]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_pipe_long_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "AsyncIPipeLong.$", 0x8, true, 0x467787cb09eb07e7 );
        SDK_FIXED_SIZE( async_i_pipe_long_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::async_i_pipe_long_t, 0x8 );
