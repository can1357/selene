#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _DUMP_IO_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dump_io_mode_t : int32_t
    {                                  
        unknown =      0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronous =  0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        asynchronous = 0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        poll =         0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait =         0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =          0x5,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
