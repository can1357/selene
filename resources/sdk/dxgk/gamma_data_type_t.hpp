#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_GAMMA_DATA_TYPE]
    //  WDK 10
    //
    enum class gamma_data_type_t : int32_t
    {                                     
        fixed_point = 0x0,                  // WDK 10
        _float =      0x1,                  // WDK 10
    };                                    
};
