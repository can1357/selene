#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _EMULATOR_PORT_ACCESS_TYPE]
    //  WDK 10
    //
    enum class emulator_port_access_type_t : int32_t
    {                                               
        uchar =  0x0,                                 // WDK 10
        ushort = 0x1,                                 // WDK 10
        ulong =  0x2,                                 // WDK 10
    };                                              
};
