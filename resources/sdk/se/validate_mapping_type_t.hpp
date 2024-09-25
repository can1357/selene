#pragma once
#include <sdkgen/support_library.hpp>

namespace se
{
    // [enum _SE_VALIDATE_MAPPING_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class validate_mapping_type_t : int32_t
    {                                           
        header_only =        0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        entire_image =       0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        entire_image_clean = 0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
