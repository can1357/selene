#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxChildListScanTagStates]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_scan_tag_states_t : int32_t
    {                                                
        undefined = 0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active =    0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancelled = 0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finished =  0x3,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
