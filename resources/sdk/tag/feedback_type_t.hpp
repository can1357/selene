#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagFEEDBACK_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feedback_type_t : int32_t     
    {                                        
        touch_contactvisualization = 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen_barrelvisualization =    0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen_tap =                    0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen_doubletap =              0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen_pressandhold =           0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen_righttap =               0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch_tap =                  0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch_doubletap =            0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch_pressandhold =         0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch_righttap =             0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gesture_pressandtap =        0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                        0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
