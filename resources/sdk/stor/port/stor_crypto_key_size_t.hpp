#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_CRYPTO_KEY_SIZE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_crypto_key_size_t : int32_t
    {                                          
        size_unknown = 0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        size128_bits = 0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        size192_bits = 0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        size256_bits = 0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        size512_bits = 0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        size_max =     0x5,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
