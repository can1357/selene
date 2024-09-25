#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcHelper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_helper_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IRpcHelper.$", 0x8, true, 0x807d7118ce35693b );
        SDK_FIXED_SIZE( i_rpc_helper_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_rpc_helper_t, 0x8 );
