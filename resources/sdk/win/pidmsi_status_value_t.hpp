#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PIDMSI_STATUS_VALUE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pidmsi_status_value_t : int32_t
    {                                         
        normal =     0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _new =       0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prelim =     0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        draft =      0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inprogress = 0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        edit =       0x5,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        review =     0x6,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        proof =      0x7,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        final =      0x8,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =      0x7fff,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
