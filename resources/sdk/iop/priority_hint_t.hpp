#pragma once
#include <sdkgen/support_library.hpp>

namespace iop
{
    // [enum _IOP_PRIORITY_HINT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class priority_hint_t : int32_t   
    {                                      
        iop_io_priority_not_set =   0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iop_io_priority_very_low =  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iop_io_priority_low =       0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iop_io_priority_normal =    0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iop_io_priority_high =      0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iop_io_priority_critical =  0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_iop_io_priority_types = 0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
