#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PATH_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class path_type_t : int32_t
    {                               
        dos_path = 0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nt_path =  0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
