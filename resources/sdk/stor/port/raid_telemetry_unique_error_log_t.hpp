#pragma once
#include <sdkgen/support_library.hpp>
#include "raid_telemetry_error_entry_t.hpp"

#include "magic/raid_telemetry_unique_error_log_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_TELEMETRY_UNIQUE_ERROR_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_telemetry_unique_error_log_t
    {                                       
        using unique_errors_t = sdk::array<struct stor::port::raid_telemetry_error_entry_t, 5>;              
                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                  
        _m00 unique_errors_t  unique_errors;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueErrors
                                            
        SDK_MAGIC_PROPERTIES( "_RAID_TELEMETRY_UNIQUE_ERROR_LOG.$", 0x190, true, 0xfef43dddba9285db );              
        SDK_DYNAMIC_SIZE( raid_telemetry_unique_error_log_t );              
    };                                      
};
#include "magic/raid_telemetry_unique_error_log_t.end.hpp"
