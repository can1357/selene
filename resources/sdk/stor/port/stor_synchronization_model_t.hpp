#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_SYNCHRONIZATION_MODEL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_synchronization_model_t : int32_t
    {                                                
        half_duplex = 0x0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full_duplex = 0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
