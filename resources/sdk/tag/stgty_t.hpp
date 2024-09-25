#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSTGTY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stgty_t : int32_t
    {                           
        storage =   0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stream =    0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lockbytes = 0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        property =  0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                          
};
