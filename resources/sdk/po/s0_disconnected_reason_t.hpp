#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_S0_DISCONNECTED_REASON]
    //  Windows 11
    //
    enum class s0_disconnected_reason_t : int32_t
    {                                            
        none =              0x0,                   // Windows 11
        non_compliant_nic = 0x1,                   // Windows 11
        setting_policy =    0x2,                   // Windows 11
        enforce_ds_policy = 0x3,                   // Windows 11
        cs_checks_failed =  0x4,                   // Windows 11
        adaptive_cs =       0x5,                   // Windows 11
        opportunistic_ds =  0x5,                   // Windows 11
        maximum =           0x6,                   // Windows 11
    };                                           
};
