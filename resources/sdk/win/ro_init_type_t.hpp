#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum RO_INIT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ro_init_type_t : int32_t
    {                                  
        singlethreaded = 0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multithreaded =  0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
