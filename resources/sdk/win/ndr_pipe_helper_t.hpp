#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class NDR_PIPE_HELPER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_pipe_helper_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "NDR_PIPE_HELPER.$", 0x8, true, 0xc832ef546474b6f2 );
        SDK_FIXED_SIZE( ndr_pipe_helper_t, 0x8 );
    };                     
};
SDK_VERIFY( class win::ndr_pipe_helper_t, 0x8 );
