#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ErrorInfoPropagationFlags]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class error_info_propagation_flags_t : int32_t
    {                                                  
        none =         0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        guid =         0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        source =       0x2,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        description =  0x4,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        help_file =    0x8,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        help_context = 0x10,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =          0x1f,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
