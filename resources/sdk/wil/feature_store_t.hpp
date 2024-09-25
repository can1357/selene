#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_FeatureStore]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_store_t : int32_t
    {                                   
        machine = 0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =    0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =     0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
