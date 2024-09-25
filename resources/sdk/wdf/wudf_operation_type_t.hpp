#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WudfOperationType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wudf_operation_type_t : int32_t
    {                                         
        invalid =       0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        init =          0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        host_shutdown = 0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp =           0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cleanup =       0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        close =         0x5,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel =        0x6,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        io =            0x7,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupt =     0x8,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        po_fx =         0x9,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =         0xa,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0xb,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
