#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_RESIDENCY]
    //  WDK 10
    //
    enum class ddi_residency_t : int32_t   
    {                                      
        fully_resident =            0x1,     // WDK 10
        resident_in_shared_memory = 0x2,     // WDK 10
        evicted_to_disk =           0x3,     // WDK 10
    };                                     
};
