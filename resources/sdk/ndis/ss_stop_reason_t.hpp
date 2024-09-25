#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_SS_STOP_REASON]
    //  Windows 10 v1607
    //
    enum class ss_stop_reason_t : int32_t  
    {                                      
        ss_reason_unspecified =     0x0,     // Windows 10 v1607
        ss_query_remove =           0x1,     // Windows 10 v1607
        ss_device_remove =          0x2,     // Windows 10 v1607
        ss_device_surprise_remove = 0x3,     // Windows 10 v1607
        ss_query_stop =             0x4,     // Windows 10 v1607
        ss_device_stop =            0x5,     // Windows 10 v1607
        ss_system_power =           0x6,     // Windows 10 v1607
        ss_nic_quiet =              0x7,     // Windows 10 v1607
        ss_pn_p_op =                0x8,     // Windows 10 v1607
        ss_not_started =            0x9,     // Windows 10 v1607
        ss_apply_interface_change = 0xb,     // Windows 10 v1607
        ss_magic_packet =           0xc,     // Windows 10 v1607
        ss_bind_changes =           0xd,     // Windows 10 v1607
        ss_stop_reason_max =        0xf,     // Windows 10 v1607
    };                                     
};
