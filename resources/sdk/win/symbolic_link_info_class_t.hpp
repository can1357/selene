#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYMBOLIC_LINK_INFO_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class symbolic_link_info_class_t : int32_t
    {                                              
        global_information = 0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        access_mask =        0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
