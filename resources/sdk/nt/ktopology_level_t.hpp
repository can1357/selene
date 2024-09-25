#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTOPOLOGY_LEVEL]
    //  Windows 11
    //
    enum class ktopology_level_t : int32_t
    {                                     
        processor = 0x0,                    // Windows 11
        core =      0x1,                    // Windows 11
        module =    0x2,                    // Windows 11
        die =       0x3,                    // Windows 11
        package =   0x4,                    // Windows 11
        count =     0x5,                    // Windows 11
    };                                    
};
