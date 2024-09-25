#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_PROXIMITY_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rm_proximity_class_t : int32_t
    {                                        
        none =      0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        distant =   0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        immediate = 0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =     0x3,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
