#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcProxyBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_proxy_buffer_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IRpcProxyBuffer.$", 0x8, true, 0x538e71453e928ba7 );
        SDK_FIXED_SIZE( i_rpc_proxy_buffer_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_rpc_proxy_buffer_t, 0x8 );
