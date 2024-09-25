#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NIC_ACTIVE_STATE]
    //  Windows 10 v1607
    //
    enum class nic_active_state_t : int32_t
    {                                      
        active =     0x0,                    // Windows 10 v1607
        suspending = 0x1,                    // Windows 10 v1607
        quiet =      0x2,                    // Windows 10 v1607
        resuming =   0x3,                    // Windows 10 v1607
        error =      0x4,                    // Windows 10 v1607
    };                                     
};
