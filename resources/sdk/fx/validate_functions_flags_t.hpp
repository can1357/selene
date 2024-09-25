#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FX_VALIDATE_FUNCTIONS_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class validate_functions_flags_t : int32_t
    {                                              
        none_specified =                0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_not_allowed =            0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        execution_level_allowed =       0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronization_scope_allowed = 0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attributes_required =           0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_required_flag =          0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_required =               0x18,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
