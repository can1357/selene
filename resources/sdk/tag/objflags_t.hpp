#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOBJFLAGS]
    //  Windows 10 v1607
    //
    enum class objflags_t : int32_t
    {                              
        link =       0x1,            // Windows 10 v1607
        document =   0x2,            // Windows 10 v1607
        convert =    0x4,            // Windows 10 v1607
        cacheempty = 0x8,            // Windows 10 v1607
    };                             
};
