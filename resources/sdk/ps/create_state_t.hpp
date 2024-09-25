#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum PS_CREATE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class create_state_t : int32_t 
    {                                   
        initial_state =          0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fail_on_file_open =      0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fail_on_section_create = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fail_exe_format =        0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fail_machine_mismatch =  0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fail_exe_name =          0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        success =                0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_states =         0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
