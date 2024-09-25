#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IProxyManager]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_proxy_manager_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IProxyManager.$", 0x8, true, 0xdff1a4f18f119397 );
        SDK_FIXED_SIZE( i_proxy_manager_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_proxy_manager_t, 0x8 );
