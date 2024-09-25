#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_L0s_EXIT_LATENCY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_l0s_exit_latency_t : int32_t
    {                                              
        l0s_below64ns =   0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_64ns_128ns =  0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_128ns_256ns = 0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_256ns_512ns = 0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_512ns_1us =   0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_1us_2us =     0x5,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_2us_4us =     0x6,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_above4us =    0x7,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
