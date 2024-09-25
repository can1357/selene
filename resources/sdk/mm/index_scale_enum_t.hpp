#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_INDEX_SCALE_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class index_scale_enum_t : int32_t
    {                                      
        scale_1 = 0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        scale_2 = 0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        scale_4 = 0x4,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        scale_8 = 0x8,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
