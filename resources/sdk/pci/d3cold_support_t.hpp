#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_D3COLD_SUPPORT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class d3cold_support_t : int32_t
    {                                    
        uninitialized =        0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_in_registry = 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =             0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =              0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
