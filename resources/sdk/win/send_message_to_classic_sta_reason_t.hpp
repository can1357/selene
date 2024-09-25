#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SendMessageToClassicSTAReason]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class send_message_to_classic_sta_reason_t : uint32_t
    {                                                         
        input_sync_call =            0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        to_dde_server =              0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        to_enable_main_thread_host = 0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
