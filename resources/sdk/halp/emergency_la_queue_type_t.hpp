#pragma once
#include <sdkgen/support_library.hpp>

namespace halp
{
    // [enum _HALP_EMERGENCY_LA_QUEUE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class emergency_la_queue_type_t : int32_t
    {                                             
        legacy_la_queue_entry = 0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thin_la_queue_entry =   0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        la_queue_entry_max =    0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
