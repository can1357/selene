#pragma once
#include <sdkgen/support_library.hpp>

namespace rtlp
{
    // [enum _RTLP_HP_ADDRESS_SPACE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hp_address_space_type_t : int32_t
    {                                           
        user =          0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel =        0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        session =       0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        secure =        0x3,                      // Windows 11
        secure_kernel = 0x3,                      // Windows 10 v2004, Windows 10 v20H2
        type_max =      0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
