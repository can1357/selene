#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum NCIFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nciflags_t : int32_t
    {                              
        haveclsid =  0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        haveprogid = 0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
