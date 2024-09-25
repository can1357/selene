#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxIFRValues]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ifr_values_t : int32_t     
    {                                     
        ifr_min_log_pages =    0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifr_avg_log_pages =    0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifr_max_log_pages =    0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifr_max_message_size = 0x100,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifr_min_log_size =     0x1000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifr_avg_log_size =     0x5000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifr_record_signature = 0x524c,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifr_max_log_size =     0x10000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
