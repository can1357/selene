#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxObjectState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_state_t : int32_t                 
    {                                                   
        invalid =                                0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        created =                                0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disposed =                               0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disposing_early =                        0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disposing_dispose_children =             0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        defered_disposing =                      0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        defered_deleting =                       0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_for_early_dispose =              0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_for_parent_delete_and_disposed = 0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deleted_disposing =                      0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deleted_and_disposed =                   0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        defered_destroy =                        0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        destroyed =                              0xc,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                                0xd,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
