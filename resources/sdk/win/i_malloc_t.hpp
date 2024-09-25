#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMalloc]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_malloc_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "IMalloc.$", 0x8, true, 0x8a079afb2650302e );
        SDK_FIXED_SIZE( i_malloc_t, 0x8 );
    };               
};
SDK_VERIFY( struct win::i_malloc_t, 0x8 );
