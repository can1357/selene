#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_GATE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gate_state_t : int32_t
    {                                
        fail =  0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pass =  0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queue = 0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
