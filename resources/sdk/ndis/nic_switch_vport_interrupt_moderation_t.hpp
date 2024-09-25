#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nic_switch_vport_interrupt_moderation_t : int32_t
    {                                                           
        undefined = 0x0,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adaptive =  0x1,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        off =       0x2,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =       0x64,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium =    0xc8,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high =      0x12c,                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
