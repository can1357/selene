#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagACTIVATION_STAGE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activation_stage_t : int32_t
    {                                      
        client_context_stage = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_machine_stage = 0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_machine_stage = 0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_process_stage = 0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_context_stage = 0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
