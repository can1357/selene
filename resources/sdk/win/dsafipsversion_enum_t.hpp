#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DSAFIPSVERSION_ENUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dsafipsversion_enum_t : int32_t
    {                                         
        fips186_2 = 0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fips186_3 = 0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
