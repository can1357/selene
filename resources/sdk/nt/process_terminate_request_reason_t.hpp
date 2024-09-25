#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PROCESS_TERMINATE_REQUEST_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_terminate_request_reason_t : int32_t
    {                                                      
        request_reason_none =              0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        commit_fail =                      0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        write_to_execute_memory =          0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        attached_write_to_execute_memory = 0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_reason_max =               0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
