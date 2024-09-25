#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_ENCLAVE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class enclave_type_t : int32_t
    {                                  
        none =     0x0,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware = 0x1,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vsm =      0x2,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x3,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
