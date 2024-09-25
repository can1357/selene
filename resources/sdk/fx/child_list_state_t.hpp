#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxChildListState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_state_t : int32_t
    {                                      
        unlocked =                 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        locked_for_enum =          0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        locked_for_parent_remove = 0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
