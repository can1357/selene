#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_OUTPUTDUPL_METADATATYPE]
    //  WDK 10
    //
    enum class outputdupl_metadatatype_t : int32_t
    {                                             
        dirty_rects = 0x0,                          // WDK 10
        move_rects =  0x1,                          // WDK 10
    };                                            
};
