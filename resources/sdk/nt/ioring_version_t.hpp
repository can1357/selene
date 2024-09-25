#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum IORING_VERSION]
    //  Windows 11
    //
    enum class ioring_version_t : int32_t
    {                                    
        version_invalid = 0x0,             // Windows 11
        version_1 =       0x1,             // Windows 11
        version_2 =       0x2,             // Windows 11
        version_3 =       0x12c,           // Windows 11
    };                                   
};
