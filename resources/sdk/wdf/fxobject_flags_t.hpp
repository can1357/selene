#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum FXOBJECT_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fxobject_flags_t : int32_t
    {                                    
        passive_callbacks =    0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nodeleteddi =          0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deletecalled =         0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        committed =            0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        passive_dispose =      0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_dispose_thread = 0x20,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_debug =            0x80,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        early_disposed_ext =   0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_state =          0x200,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_cleanup =          0x400,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispose_override =     0x800,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
