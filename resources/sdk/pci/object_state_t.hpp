#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_OBJECT_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_state_t : int32_t 
    {                                   
        not_started =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =                0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deleted =                0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =                0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removed =       0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronized_operation = 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_object_state =       0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
