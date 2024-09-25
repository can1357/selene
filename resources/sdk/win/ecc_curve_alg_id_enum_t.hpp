#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ECC_CURVE_ALG_ID_ENUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ecc_curve_alg_id_enum_t : int32_t   
    {                                              
        bcrypt_no_curve_generation_alg_id = 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
