#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum SubmitActionFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class submit_action_flags_t : int32_t
    {                                         
        send =                 0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued =               0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sent =                 0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait =                 0x8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timeout =              0x10,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sync_call_completion = 0x20,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
