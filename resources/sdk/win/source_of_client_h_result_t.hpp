#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SourceOfClientHResult]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class source_of_client_h_result_t : uint32_t    
    {                                                    
        unknown =                                0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server =                                 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_channel_negotiate_syntax =   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_channel_get_buffer =         0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_channel_send_receive =       0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_channel_send =               0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_channel_receive =            0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_transport_negotiate_syntax = 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_transport_get_buffer =       0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_transport_send_receive =     0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_transport_send =             0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_transport_receive =          0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_sizing =                     0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_marshaling =                 0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_side_unmarshaling =               0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_cancel =                          0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_fault =                           0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_side_access_check =               0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_side_channel_generic =            0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_side_channel_call_control =       0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_complete_client_async =             0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
