#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_SUBVAD_LISTS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class subvad_lists_t : int32_t
    {                                  
        any =              0x0,          // Windows 10 v1607
        peb_teb_any =      0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        below2gb =         0x1,          // Windows 10 v1607
        //maximum =        0x1,          // Windows 11
        peb_teb_below4gb = 0x1,          // Windows 10 v2004, Windows 10 v20H2
        below4gb =         0x2,          // Windows 10 v1607
        maximum =          0x2,          // Windows 10 v2004, Windows 10 v20H2
        //maximum =        0x3,          // Windows 10 v1607
    };                                 
};
