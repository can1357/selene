#pragma once
#include <sdkgen/support_library.hpp>

namespace alpc
{
    // [enum _ALPC_PORT_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class port_information_class_t : int32_t                     
    {                                                                 
        basic_information =                                    0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        port_information =                                     0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        associate_completion_port_information =                0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        connected_sid_information =                            0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_information =                                   0x4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        message_zone_information =                             0x5,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        register_completion_list_information =                 0x6,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unregister_completion_list_information =               0x7,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adjust_completion_list_concurrency_count_information = 0x8,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        register_callback_information =                        0x9,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completion_list_rundown_information =                  0xa,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_for_port_references =                             0xb,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_session_information =                           0xc,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                
};
