#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FINDEX_SEARCH_OPS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class findex_search_ops_t : int32_t
    {                                       
        name_match =           0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        limit_to_directories = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        limit_to_devices =     0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_search_op =        0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
