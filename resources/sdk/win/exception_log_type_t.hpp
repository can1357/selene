#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _EXCEPTION_LOG_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class exception_log_type_t : int32_t
    {                                        
        empty =    0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch = 0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handler =  0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
