#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAsyncInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_async_info_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IAsyncInfo.$", 0x8, true, 0x40c51731d32623e );
        SDK_FIXED_SIZE( i_async_info_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_async_info_t, 0x8 );
