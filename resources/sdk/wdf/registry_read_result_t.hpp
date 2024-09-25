#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WDF_REGISTRY_READ_RESULT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class registry_read_result_t : int32_t
    {                                          
        present =     0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_present = 0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =     0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
