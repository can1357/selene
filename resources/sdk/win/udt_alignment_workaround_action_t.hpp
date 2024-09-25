#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum UDTAlignmentWorkaroundAction]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class udt_alignment_workaround_action_t : int32_t
    {                                                     
        invalid =                    0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noop =                       0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        useolddcom56 =               0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_newdcom56_simplestruct = 0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_newdcom56_normal =       0x4,                   // Windows 10 v1607
    };                                                    
};
