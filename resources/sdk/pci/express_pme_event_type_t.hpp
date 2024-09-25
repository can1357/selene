#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum EXPRESS_PME_EVENT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_pme_event_type_t : int32_t
    {                                            
        runtime_event =  0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_up_event = 0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
