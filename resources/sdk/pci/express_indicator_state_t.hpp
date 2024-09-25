#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_INDICATOR_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_indicator_state_t : int32_t
    {                                             
        on =    0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        blink = 0x2,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        off =   0x3,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
