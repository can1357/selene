#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPersist]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_persist_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IPersist.$", 0x8, true, 0x4cf786f584d5b075 );
        SDK_FIXED_SIZE( i_persist_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_persist_t, 0x8 );
