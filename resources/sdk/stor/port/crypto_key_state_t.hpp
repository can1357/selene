#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _CRYPTO_KEY_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class crypto_key_state_t : int32_t
    {                                      
        invalid = 0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending = 0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid =   0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
