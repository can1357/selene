#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SES_DOWNLOAD_MICROCODE_STATE]
    //  WDK 10
    //
    enum class ses_download_microcode_state_t : int32_t
    {                                                  
        none_in_progress =             0x0,              // WDK 10
        in_progress =                  0x1,              // WDK 10
        completed_pending_reset =      0x11,             // WDK 10
        completed_pending_power_on =   0x12,             // WDK 10
        completed_pending_activation = 0x13,             // WDK 10
    };                                                 
};
