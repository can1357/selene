#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_unknown_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "AsyncIUnknown.$", 0x8, true, 0x10f9061552b4f149 );
        SDK_FIXED_SIZE( async_i_unknown_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::async_i_unknown_t, 0x8 );
