#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTIMER2_COLLECTION_INDEX]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ktimer2_collection_index_t : int32_t
    {                                              
        min =          0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_wake =      0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hr =           0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //finite =     0x2,                          // Windows 10 v1607
        node1 =        0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pseudo_hr =    0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        finite =       0x3,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //ir =         0x3,                          // Windows 10 v1607
        ir =           0x4,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =        0x4,                          // Windows 10 v1607
        max =          0x5,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_inserted = 0x10,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //invalid =    0x14,                         // Windows 10 v1607
        invalid =      0x15,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional =     0x20,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
