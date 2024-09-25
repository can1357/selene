#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum DIT_HITTESTATTRIBUTES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dit_hittestattributes_t : int32_t
    {                                           
        none =                   0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mousewheel =             0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //mousebuttondown =      0x2,             // Windows 10 v1607
        mousewheelisincreasing = 0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //valid =                0x3,             // Windows 10 v1607
        mousewheelishorizontal = 0x4,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mousebuttondown =        0x8,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        touchtargeting =         0x10,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nohoverpointer =         0x20,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        barrelbuttondown =       0x40,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        eraserdown =             0x80,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid =                  0xff,            // Windows 10 v2004, Windows 10 v20H2
        controldown =            0x100,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hascapture =             0x200,           // Windows 11
        //valid =                0x3ff,           // Windows 11
    };                                          
};
