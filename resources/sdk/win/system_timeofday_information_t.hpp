#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_timeofday_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_TIMEOFDAY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_timeofday_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  boot_time;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BootTime
        _m01 int64_t  current_time;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentTime
        _m02 int64_t  time_zone_bias;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeZoneBias
        _m03 uint32_t time_zone_id;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TimeZoneId
        _m04 uint64_t boot_time_bias;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BootTimeBias
        _m05 uint64_t sleep_time_bias;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SleepTimeBias
                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_TIMEOFDAY_INFORMATION.$", 0x30, true, 0x3b74befd98b83cd9 );                
        SDK_FIXED_SIZE( system_timeofday_information_t, 0x30 );                
    };                                   
};
#include "magic/system_timeofday_information_t.end.hpp"
SDK_VERIFY( struct win::system_timeofday_information_t, 0x30 );
