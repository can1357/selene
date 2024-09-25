#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_SetNumberOfDaysDisplayedInTimeline]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_set_number_of_days_displayed_in_timeline_t : uint8_t
    {                                                                      
        none =                 0x0,                                          // Windows 10 v2004, Windows 10 v20H2
        use_velocity_payload = 0x1,                                          // Windows 10 v2004, Windows 10 v20H2
    };                                                                     
};
