#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IObjContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_obj_context_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IObjContext.$", 0x8, true, 0xa29eaa5f7106f478 );
        SDK_FIXED_SIZE( i_obj_context_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_obj_context_t, 0x8 );
