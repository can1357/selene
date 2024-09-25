#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_PrelaunchEdgeOnFrameExit]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_prelaunch_edge_on_frame_exit_t : uint8_t
    {                                                          
        none =                                 0x0,              // Windows 10 v2004, Windows 10 v20H2
        disable_prelaunch_edge_on_frame_exit = 0x1,              // Windows 10 v2004, Windows 10 v20H2
        enable_prelaunch_edge_on_frame_exit =  0x2,              // Windows 10 v2004, Windows 10 v20H2
    };                                                         
};
