#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE]
    //  WDK 10
    //
    enum class updategpuvirtualaddress_operation_type_t : int32_t
    {                                                            
        map =         0x0,                                         // WDK 10
        unmap =       0x1,                                         // WDK 10
        copy =        0x2,                                         // WDK 10
        map_protect = 0x3,                                         // WDK 10
    };                                                           
};
