#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_IO_STATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_status_t : int32_t
    {                               
        ready =   0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        done =    0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
