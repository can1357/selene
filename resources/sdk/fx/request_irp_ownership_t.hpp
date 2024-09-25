#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestIrpOwnership]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_irp_ownership_t : int32_t
    {                                           
        owns_irp =         0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        does_not_own_irp = 0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
