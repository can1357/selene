#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxChildListModificationState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_modification_state_t : int32_t
    {                                                   
        unspecified =       0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        insert =            0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove =            0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_notify =     0x3,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clone =             0x4,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        needs_pnp_removal = 0x5,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
