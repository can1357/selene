#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_call_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IRpcCall.$", 0x8, true, 0xc6786f718cbf9e2b );
        SDK_FIXED_SIZE( i_rpc_call_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_rpc_call_t, 0x8 );
