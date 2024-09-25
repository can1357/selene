#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_STANDARDALLOCATIONTYPE]
    //  WDK 10
    //
    enum class standardallocationtype_t : int32_t           
    {                                                       
        d3dkmt_standardallocationtype_existingheap = 0x1,     // WDK 10
    };                                                      
};
