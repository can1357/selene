#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMoniker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_moniker_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IMoniker.$", 0x8, true, 0xc1aa923f652d582b );
        SDK_FIXED_SIZE( i_moniker_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_moniker_t, 0x8 );
