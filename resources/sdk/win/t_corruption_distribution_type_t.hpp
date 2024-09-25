#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum tCorruptionDistributionType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class t_corruption_distribution_type_t : int32_t
    {                                                    
        localized_distribution =  0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        randomized_distribution = 0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
