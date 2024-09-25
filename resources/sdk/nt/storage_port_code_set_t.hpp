#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_PORT_CODE_SET]
    //  WDK 10
    //
    enum class storage_port_code_set_t : int32_t
    {                                           
        reserved =  0x0,                          // WDK 10
        storport =  0x1,                          // WDK 10
        scs_iport = 0x2,                          // WDK 10
        spaceport = 0x3,                          // WDK 10
        at_aport =  0x4,                          // WDK 10
        us_bport =  0x5,                          // WDK 10
        sbp2port =  0x6,                          // WDK 10
        s_dport =   0x7,                          // WDK 10
    };                                          
};
