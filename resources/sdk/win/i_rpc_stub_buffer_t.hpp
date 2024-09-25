#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcStubBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_stub_buffer_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IRpcStubBuffer.$", 0x8, true, 0x52cbd43c93fbdfb1 );
        SDK_FIXED_SIZE( i_rpc_stub_buffer_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_rpc_stub_buffer_t, 0x8 );
