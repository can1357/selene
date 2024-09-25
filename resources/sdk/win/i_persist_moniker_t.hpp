#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPersistMoniker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_persist_moniker_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IPersistMoniker.$", 0x8, true, 0x1947fe8f8d09e7de );
        SDK_FIXED_SIZE( i_persist_moniker_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_persist_moniker_t, 0x8 );
