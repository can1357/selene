#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SQM_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sqm_type_t : int32_t
    {                              
        none =    0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dword =   0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string =  0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dword64 = 0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
