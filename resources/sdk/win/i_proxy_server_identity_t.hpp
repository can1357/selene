#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IProxyServerIdentity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_proxy_server_identity_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IProxyServerIdentity.$", 0x8, true, 0x978da5d45bdce569 );
        SDK_FIXED_SIZE( i_proxy_server_identity_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_proxy_server_identity_t, 0x8 );
