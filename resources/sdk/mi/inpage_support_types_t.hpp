#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_INPAGE_SUPPORT_TYPES]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class inpage_support_types_t : int32_t
    {                                          
        expanded = 0x0,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        regular =  0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =  0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};