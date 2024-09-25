#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum tCorruptionSizeType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class t_corruption_size_type_t : int32_t
    {                                            
        fixed_size =  0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        random_size = 0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
