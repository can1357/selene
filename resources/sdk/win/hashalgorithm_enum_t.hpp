#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum HASHALGORITHM_ENUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hashalgorithm_enum_t : int32_t
    {                                        
        sha1 =   0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sha256 = 0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sha512 = 0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
