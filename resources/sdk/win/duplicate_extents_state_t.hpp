#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _DUPLICATE_EXTENTS_STATE]
    //  Windows 11
    //
    enum class duplicate_extents_state_t : int32_t
    {                                             
        inactive = 0x0,                             // Windows 11
        source =   0x1,                             // Windows 11
        target =   0x2,                             // Windows 11
    };                                            
};
