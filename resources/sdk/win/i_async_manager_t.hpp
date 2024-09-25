#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAsyncManager]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_async_manager_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IAsyncManager.$", 0x8, true, 0xb88b7248475c8436 );
        SDK_FIXED_SIZE( i_async_manager_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_async_manager_t, 0x8 );
