#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _LOCK_OPERATION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class lock_operation_t : int32_t
    {                                    
        read_access =   0x0,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        write_access =  0x1,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modify_access = 0x2,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
