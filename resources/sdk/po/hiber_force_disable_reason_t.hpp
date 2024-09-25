#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_HIBER_FORCE_DISABLE_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hiber_force_disable_reason_t : int32_t
    {                                                
        policy =       0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        guarded_host = 0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =          0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
