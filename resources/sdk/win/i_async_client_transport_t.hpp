#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAsyncClientTransport]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_async_client_transport_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IAsyncClientTransport.$", 0x8, true, 0x7a14e9410375995d );
        SDK_FIXED_SIZE( i_async_client_transport_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_async_client_transport_t, 0x8 );
