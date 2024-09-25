#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermal_information_t.start.hpp"
namespace nt
{
    // [struct _THERMAL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_information_t                              
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                    
        _m00 uint32_t                 thermal_stamp;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThermalStamp
        _m01 uint32_t                 thermal_constant1;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThermalConstant1
        _m02 uint32_t                 thermal_constant2;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThermalConstant2
        _m03 uint64_t                 processors;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Processors
        _m04 uint32_t                 sampling_period;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SamplingPeriod
        _m05 uint32_t                 current_temperature;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CurrentTemperature
        _m06 uint32_t                 passive_trip_point;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PassiveTripPoint
        _m07 uint32_t                 critical_trip_point;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CriticalTripPoint
        _m08 uint8_t                  active_trip_point_count;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ActiveTripPointCount
        _m09 sdk::array<uint32_t, 10> active_trip_point;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ActiveTripPoint
                                                              
        SDK_MAGIC_PROPERTIES( "_THERMAL_INFORMATION.$", 0x58, true, 0x8c9b71c5a0505698 );                        
        SDK_FIXED_SIZE( thermal_information_t, 0x58 );                        
    };                                                        
};
#include "magic/thermal_information_t.end.hpp"
SDK_VERIFY( struct nt::thermal_information_t, 0x58 );
