#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCALLSTATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callstate_t : int32_t 
    {                                
        data_not_available = 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_in_call =        0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
