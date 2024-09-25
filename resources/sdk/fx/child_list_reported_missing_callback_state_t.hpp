#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxChildListReportedMissingCallbackState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_reported_missing_callback_state_t : uint8_t
    {                                                                
        state_unspecified =   0x0,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        needs_to_be_invoked = 0x1,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoked =             0x2,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                               
};
