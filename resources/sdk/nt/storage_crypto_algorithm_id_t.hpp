#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_CRYPTO_ALGORITHM_ID]
    //  WDK 10
    //
    enum class storage_crypto_algorithm_id_t : int32_t
    {                                                 
        unknown =          0x0,                         // WDK 10
        xtsaes =           0x1,                         // WDK 10
        bitlocker_aescbc = 0x2,                         // WDK 10
        aesecb =           0x3,                         // WDK 10
        essivaescbc =      0x4,                         // WDK 10
        max =              0x5,                         // WDK 10
    };                                                
};
