#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_BUS_POWER_STATES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bus_power_states_t : int32_t
    {                                      
        leaving_s0_armed_dx =      0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leaving_s0_dx =            0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leaving_s0_dx_disarmed =   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leaving_s0_dx_disarming =  0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0d0 =                     0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_disarmed =              0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_dozing =                0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_dozing_armed =          0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_dozing_armed_stirring = 0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_dozing_stirring =       0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_dx =                    0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_off =                   0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_on =                    0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0_stirring =              0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stirring_d0 =              0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stirring_disarmed =        0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sx =                       0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sx_armed =                 0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sx_dozing_stirring =       0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sx_on =                    0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                  0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
