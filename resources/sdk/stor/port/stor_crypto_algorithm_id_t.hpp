#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_CRYPTO_ALGORITHM_ID]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_crypto_algorithm_id_t : int32_t
    {                                              
        unknown =          0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        xtsaes =           0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitlocker_aescbc = 0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        aesecb =           0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        essivaescbc =      0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =              0x5,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
