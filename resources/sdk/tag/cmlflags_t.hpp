#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCMLFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cmlflags_t : int32_t           
    {                                         
        quitreceived =                0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clearedqueue =                0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        checkedtoken =                0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        droppedinput =                0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        newinput =                    0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reported_dropped_keyboard =   0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reported_dropped_mouse =      0x40,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reported_dropped_queue_sync = 0x80,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
