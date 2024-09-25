#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServerTransportCallEvents]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_server_transport_call_events_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IServerTransportCallEvents.$", 0x8, true, 0x550a66b8a374a7b9 );
        SDK_FIXED_SIZE( i_server_transport_call_events_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_server_transport_call_events_t, 0x8 );
