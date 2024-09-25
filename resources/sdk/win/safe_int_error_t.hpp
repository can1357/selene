#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SafeIntError]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class safe_int_error_t : int32_t
    {                                    
        no_error =            0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arithmetic_overflow = 0x1,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        divide_by_zero =      0x2,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
