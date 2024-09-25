#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _crt_argv_mode]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class crt_argv_mode_t : int32_t
    {                                   
        no_arguments =         0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unexpanded_arguments = 0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        expanded_arguments =   0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
