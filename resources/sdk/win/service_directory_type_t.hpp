#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SERVICE_DIRECTORY_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class service_directory_type_t : int32_t
    {                                            
        persistent_state = 0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_max =         0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
