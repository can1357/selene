#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPENDINGTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pendingtype_t : int32_t
    {                                 
        toplevel = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested =   0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
