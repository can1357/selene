#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum _FX_IO_QUEUE_SET_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_queue_set_state_t : int32_t   
    {                                           
        set_accept_requests =     0x80000001,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear_accept_requests =   0x80000002,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_dispatch_requests =   0x80000004,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear_dispatch_requests = 0x80000008,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_shutdown =            0x80010000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear_shutdown =          0x80020000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
