#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermal_telemetry_tracker_t.start.hpp"
namespace pop
{
    // [struct _POP_THERMAL_TELEMETRY_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_telemetry_tracker_t                         
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                     
        _m00 uint8_t                  accounting_disabled;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AccountingDisabled
        _m01 uint64_t                 last_passive_update_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastPassiveUpdateTime
        _m02 sdk::array<uint64_t, 21> total_passive_time;        //{ +0x0010    +0x0018    +0x0018    +0x0018    } | .TotalPassiveTime
        _m03 sdk::array<uint64_t, 21> passive_time_snap;         //{ +0x00b8    +0x00c0    +0x00c0    +0x00c0    } | .PassiveTimeSnap
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                     
        _m04 uint8_t                  active_levels;             //{ +0x0001    +0x0001    +0x0001    } | .ActiveLevels
        _m05 uint64_t                 last_active_update_time;   //{ +0x0010    +0x0010    +0x0010    } | .LastActiveUpdateTime
        _m06 sdk::array<uint64_t, 10> total_active_time;         //{ +0x0168    +0x0168    +0x0168    } | .TotalActiveTime
        _m07 sdk::array<uint64_t, 10> active_time_snap;          //{ +0x01b8    +0x01b8    +0x01b8    } | .ActiveTimeSnap
        _m08 uint64_t                 total_time;                //{ +0x0208    +0x0208    +0x0208    } | .TotalTime
        _m09 uint64_t                 total_time_snap;           //{ +0x0210    +0x0210    +0x0210    } | .TotalTimeSnap
                                                               
        SDK_MAGIC_PROPERTIES( "_POP_THERMAL_TELEMETRY_TRACKER.$", 0x218, true, 0xd764881c8d88b5f4 );                         
        SDK_DYNAMIC_SIZE( thermal_telemetry_tracker_t );                         
    };                                                         
};
#include "magic/thermal_telemetry_tracker_t.end.hpp"
