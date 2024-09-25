#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagGLOBALOPT_UNMARSHALING_POLICY_VALUES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class globalopt_unmarshaling_policy_values_t : int32_t
    {                                                          
        normal = 0x0,                                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        strong = 0x1,                                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hybrid = 0x2,                                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
