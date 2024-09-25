#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _NDR64_EXPRESSION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ndr64_expression_type_t : int32_t
    {                                           
        maxcount =    0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        actualcount = 0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offset =      0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iid =         0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        switchis =    0x4,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
