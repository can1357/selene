#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMallocSpy]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_malloc_spy_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IMallocSpy.$", 0x8, true, 0x37345306bc74f5a0 );
        SDK_FIXED_SIZE( i_malloc_spy_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_malloc_spy_t, 0x8 );
