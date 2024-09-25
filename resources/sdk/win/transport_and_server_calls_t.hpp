#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct TransportAndServerCalls]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct transport_and_server_calls_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "TransportAndServerCalls.$", 0x10, true, 0x2e43026c39a486cd );
        SDK_FIXED_SIZE( transport_and_server_calls_t, 0x10 );
    };                                 
};
SDK_VERIFY( struct win::transport_and_server_calls_t, 0x10 );
