#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_L1_EXIT_LATENCY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_l1_exit_latency_t : int32_t
    {                                             
        l1_below1us =  0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_1us_2us =   0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_2us_4us =   0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_4us_8us =   0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_8us_16us =  0x4,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_16us_32us = 0x5,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_32us_64us = 0x6,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_above64us = 0x7,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
