#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ASTAWaitWindowMessageDispatch]
    //  Windows 10 v1607
    //
    enum class asta_wait_window_message_dispatch_t : uint32_t
    {                                                        
        external_caller_dispatches_window_messages = 0x0,      // Windows 10 v1607
        wait_dispatches_all_window_messages =        0x1,      // Windows 10 v1607
        wait_dispatches_limited_window_messages =    0x2,      // Windows 10 v1607
    };                                                       
};
