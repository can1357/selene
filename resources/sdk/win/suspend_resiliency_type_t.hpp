#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SUSPEND_RESILIENCY_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class suspend_resiliency_type_t : int32_t
    {                                             
        local =    0x0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_vm = 0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
