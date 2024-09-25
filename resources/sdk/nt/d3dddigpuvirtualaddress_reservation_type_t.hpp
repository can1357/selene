#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE]
    //  WDK 10
    //
    enum class d3dddigpuvirtualaddress_reservation_type_t : int32_t
    {                                                              
        no_access = 0x0,                                             // WDK 10
        zero =      0x1,                                             // WDK 10
        no_commit = 0x2,                                             // WDK 10
    };                                                             
};
