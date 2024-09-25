#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FUNCTION_TABLE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class function_table_type_t : int32_t
    {                                         
        sorted =         0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsorted =       0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback =       0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_dynamic = 0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
