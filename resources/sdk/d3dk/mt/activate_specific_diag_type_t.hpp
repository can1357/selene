#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE]
    //  WDK 10
    //
    enum class activate_specific_diag_type_t : int32_t
    {                                                 
        extra_ccd_database_info = 0x0,                  // WDK 10
        modes_pruned =            0xf,                  // WDK 10
    };                                                
};
