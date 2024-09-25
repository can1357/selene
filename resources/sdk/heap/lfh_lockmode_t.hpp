#pragma once
#include <sdkgen/support_library.hpp>

namespace heap
{
    // [enum _HEAP_LFH_LOCKMODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class lfh_lockmode_t : int32_t
    {                                  
        not_held =  0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared =    0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exclusive = 0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
