#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wmi_perf_state_t.start.hpp"
namespace ppm
{
    // [struct PPM_WMI_PERF_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_perf_state_t             
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t frequency;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Frequency
        _m01 uint32_t power;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Power
        _m02 uint8_t  percent_frequency;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PercentFrequency
        _m03 uint8_t  increase_level;     //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .IncreaseLevel
        _m04 uint8_t  decrease_level;     //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .DecreaseLevel
        _m05 uint8_t  type;               //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .Type
        _m06 uint32_t increase_time;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IncreaseTime
        _m07 uint32_t decrease_time;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DecreaseTime
        _m08 uint64_t control;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Control
        _m09 uint64_t status;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Status
        _m10 uint32_t hit_count;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HitCount
                                        
        SDK_MAGIC_PROPERTIES( "PPM_WMI_PERF_STATE.$", 0x40, true, 0x6429f6b9233cabfb );                  
        SDK_FIXED_SIZE( wmi_perf_state_t, 0x40 );                  
    };                                  
};
#include "magic/wmi_perf_state_t.end.hpp"
SDK_VERIFY( struct ppm::wmi_perf_state_t, 0x40 );
