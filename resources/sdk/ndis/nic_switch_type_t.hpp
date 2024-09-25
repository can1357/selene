#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NIC_SWITCH_TYPE]
    //  Windows 10 v1607
    //
    enum class nic_switch_type_t : int32_t
    {                                     
        unspecified = 0x0,                  // Windows 10 v1607
        external =    0x1,                  // Windows 10 v1607
        max =         0x2,                  // Windows 10 v1607
    };                                    
};
