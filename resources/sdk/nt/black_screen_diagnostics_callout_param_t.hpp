#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum BlackScreenDiagnosticsCalloutParam]
    //  WDK 10
    //
    enum class black_screen_diagnostics_callout_param_t : int32_t
    {                                                            
        diagnostics_data = 0x1,                                    // WDK 10
        display_recovery = 0x2,                                    // WDK 10
    };                                                           
};
