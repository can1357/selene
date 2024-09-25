#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_CRYPTO_KEY_SIZE]
    //  WDK 10
    //
    enum class storage_crypto_key_size_t : int32_t
    {                                             
        size_unknown = 0x0,                         // WDK 10
        size128_bits = 0x1,                         // WDK 10
        size192_bits = 0x2,                         // WDK 10
        size256_bits = 0x3,                         // WDK 10
        size512_bits = 0x4,                         // WDK 10
    };                                            
};
