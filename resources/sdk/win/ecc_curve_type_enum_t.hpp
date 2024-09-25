#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ECC_CURVE_TYPE_ENUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ecc_curve_type_enum_t : int32_t
    {                                         
        short_weierstrass_curve = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        twisted_edwards_curve =   0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        montgomery_curve =        0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
