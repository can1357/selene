#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum OCCLUSION_BASED_VIEW_STATE_OPTIONS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class occlusion_based_view_state_options_t : int32_t
    {                                                        
        none =              0x0,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restoretomaximize = 0x1,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restoretosnapped =  0x2,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
