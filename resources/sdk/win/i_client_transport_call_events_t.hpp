#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClientTransportCallEvents]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_client_transport_call_events_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IClientTransportCallEvents.$", 0x8, true, 0xe3a6c67c791ad96 );
        SDK_FIXED_SIZE( i_client_transport_call_events_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_client_transport_call_events_t, 0x8 );
