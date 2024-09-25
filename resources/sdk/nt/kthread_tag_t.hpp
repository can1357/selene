#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTHREAD_TAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kthread_tag_t : int32_t
    {                                 
        none =            0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        media_buffering = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deadline =        0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =           0x2,          // Windows 10 v1607
        max =             0x3,          // Windows 10 v2004, Windows 10 v20H2
        media_other =     0x3,          // Windows 11
        //max =           0x4,          // Windows 11
    };                                
};
