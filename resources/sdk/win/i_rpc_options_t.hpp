#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcOptions]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_options_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IRpcOptions.$", 0x8, true, 0x55b1139b879f5be8 );
        SDK_FIXED_SIZE( i_rpc_options_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_rpc_options_t, 0x8 );
