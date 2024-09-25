#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PORT_CONTROL_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class port_control_state_t : int32_t
    {                                        
        unknown =      0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        controlled =   0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uncontrolled = 0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
