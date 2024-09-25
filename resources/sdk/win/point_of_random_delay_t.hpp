#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PointOfRandomDelay]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class point_of_random_delay_t : uint32_t                                                             
    {                                                                                                         
        none =                                                                                         0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        winrt_async_channel_abort_pending_calls_enum_callback =                                        0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        standard_marshaler_after_deciding_to_run_down_but_before_disconnecting =                       0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown_oid_after_getting_standard_marshaler_but_before_attempting_to_disconnect_for_rundown = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                                                        
};
