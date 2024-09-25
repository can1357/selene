#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_WRITE_TYPES]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class write_types_t : int32_t
    {                                 
        cached =       0x0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_temporal = 0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =      0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
