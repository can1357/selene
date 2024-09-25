#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INTERRUPT_TARGET_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interrupt_target_type_t : int32_t
    {                                           
        invalid =            0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_including_self = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_excluding_self = 0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        self_only =          0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical =           0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical_flat =       0x5,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical_clustered =  0x6,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remap_index =        0x7,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hypervisor =         0x8,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
