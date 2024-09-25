#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_INTERRUPT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interrupt_type_t : int32_t
    {                                    
        none =       0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        line_based = 0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        msi =        0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        msi_x =      0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
