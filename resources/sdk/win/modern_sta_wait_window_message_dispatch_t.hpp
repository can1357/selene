#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ModernSTAWaitWindowMessageDispatch]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class modern_sta_wait_window_message_dispatch_t : uint32_t
    {                                                              
        external_caller_dispatches_window_messages = 0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_dispatches_all_window_messages =        0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_dispatches_limited_window_messages =    0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                             
};
