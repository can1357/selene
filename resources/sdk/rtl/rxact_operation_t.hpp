#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_RXACT_OPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rxact_operation_t : int32_t
    {                                     
        _delete =       0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_value =     0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        del_attribute = 0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_attribute = 0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
