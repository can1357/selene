#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_MANTISSA_SIGN_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mantissa_sign_enum_t : int32_t
    {                                        
        src =  0x0,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        zero = 0x1,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nan =  0x2,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
