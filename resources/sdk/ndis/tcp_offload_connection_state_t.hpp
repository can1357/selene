#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum TCP_OFFLOAD_CONNECTION_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class tcp_offload_connection_state_t : int32_t
    {                                                  
        closed =      0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        listen =      0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        syn_sent =    0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        syn_rcvd =    0x3,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        established = 0x4,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fin_wait1 =   0x5,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fin_wait2 =   0x6,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        close_wait =  0x7,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        closing =     0x8,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_ack =    0x9,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        time_wait =   0xa,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_state =   0xb,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
