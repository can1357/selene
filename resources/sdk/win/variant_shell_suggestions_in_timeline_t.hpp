#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_ShellSuggestionsInTimeline]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_shell_suggestions_in_timeline_t : uint8_t
    {                                                           
        none =                                          0x0,      // Windows 10 v2004, Windows 10 v20H2
        time_of_day_using_velocity_payload =            0x1,      // Windows 10 v2004, Windows 10 v20H2
        hour_group_time_of_day_using_velocity_payload = 0x2,      // Windows 10 v2004, Windows 10 v20H2
        no_suggestions =                                0x3,      // Windows 10 v2004, Windows 10 v20H2
    };                                                          
};
