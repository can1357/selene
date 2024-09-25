#pragma once
#include <sdkgen/support_library.hpp>

namespace alpc
{
    // [enum _ALPC_MESSAGE_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class message_information_class_t : int32_t        
    {                                                       
        alpc_message_sid_information =               0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alpc_message_token_modified_id_information = 0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alpc_message_direct_status_information =     0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alpc_message_handle_information =            0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_alpc_message_info_class =                0x4,     // WDK 10
    };                                                      
};
