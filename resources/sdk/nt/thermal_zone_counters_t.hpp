#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermal_zone_counters_t.start.hpp"
namespace nt
{
    // [struct _THERMAL_ZONE_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_zone_counters_t               
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t temperature;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Temperature
        _m01 uint32_t throttle_limit;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThrottleLimit
        _m02 uint32_t throttle_reasons;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThrottleReasons
                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m03 uint32_t temperature_high_precision;  //{ +0x000c    +0x000c    +0x000c    } | .TemperatureHighPrecision
                                                 
        SDK_MAGIC_PROPERTIES( "_THERMAL_ZONE_COUNTERS.$", 0x10, true, 0xde4a799252b4ef0e );                           
        SDK_DYNAMIC_SIZE( thermal_zone_counters_t );                           
    };                                           
};
#include "magic/thermal_zone_counters_t.end.hpp"
