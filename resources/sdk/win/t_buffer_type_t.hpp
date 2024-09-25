#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum tBufferType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class t_buffer_type_t : int32_t      
    {                                         
        co_server_receive =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        co_client_receive =            0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        co_send =                      0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dg_server_receive =            0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dg_client_receive =            0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dg_send =                      0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alpc_send_message =            0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alpc_send_message_attributes = 0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
