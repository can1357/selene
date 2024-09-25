#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermal_information_ex_t.start.hpp"
namespace nt
{
    // [struct _THERMAL_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_information_ex_t                                   
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                            
        _m00 uint32_t                 thermal_stamp;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThermalStamp
        _m01 uint32_t                 thermal_constant1;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThermalConstant1
        _m02 uint32_t                 thermal_constant2;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThermalConstant2
        _m03 uint32_t                 sampling_period;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SamplingPeriod
        _m04 uint32_t                 current_temperature;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentTemperature
        _m05 uint32_t                 passive_trip_point;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PassiveTripPoint
        _m06 uint32_t                 thermal_standby_trip_point;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ThermalStandbyTripPoint
        _m07 uint32_t                 critical_trip_point;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CriticalTripPoint
        _m08 uint8_t                  active_trip_point_count;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ActiveTripPointCount
        _m09 sdk::array<uint32_t, 10> active_trip_point;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ActiveTripPoint
        _m10 uint32_t                 s4_transition_trip_point;         //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .S4TransitionTripPoint
        _m11 uint32_t                 minimum_throttle;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MinimumThrottle
        _m12 uint32_t                 over_throttle_threshold;          //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .OverThrottleThreshold
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                            
        _m13 uint8_t                  passive_cooling_devices_present;  //{ +0x0021    +0x0021    +0x0021    } | .PassiveCoolingDevicesPresent
        _m14 uint32_t                 polling_period;                   //{ +0x0058    +0x0058    +0x0058    } | .PollingPeriod
                                                                      
        SDK_MAGIC_PROPERTIES( "_THERMAL_INFORMATION_EX.$", 0x5c, true, 0xbeb7955e63c7b27d );                                
        SDK_DYNAMIC_SIZE( thermal_information_ex_t );                                
    };                                                                
};
#include "magic/thermal_information_ex_t.end.hpp"
