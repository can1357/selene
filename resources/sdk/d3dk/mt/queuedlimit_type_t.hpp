#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_QUEUEDLIMIT_TYPE]
    //  WDK 10
    //
    enum class queuedlimit_type_t : int32_t
    {                                      
        set_queuedlimit_present = 0x1,       // WDK 10
        get_queuedlimit_present = 0x2,       // WDK 10
    };                                     
};
