#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum IRPLOCK]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class irplock_t : int32_t
    {                             
        cancelable =      0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_started =  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_complete = 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completed =       0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
