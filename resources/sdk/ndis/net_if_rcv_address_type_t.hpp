#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_IF_RCV_ADDRESS_TYPE]
    //  Windows 10 v1607
    //
    enum class net_if_rcv_address_type_t : int32_t
    {                                             
        other =        0x1,                         // Windows 10 v1607
        _volatile =    0x2,                         // Windows 10 v1607
        non_volatile = 0x3,                         // Windows 10 v1607
    };                                            
};
