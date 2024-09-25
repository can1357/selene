#pragma once
#include <sdkgen/support_library.hpp>
#include "../scheduling_priority_band_t.hpp"

#include "magic/setcontextschedulingproperties_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES]
    // => WDK 10 (NV)
    //
    struct setcontextschedulingproperties_t                                     
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 void*                                 h_context;                     //{ +0x0000    } | .hContext
        _m01 enum dxgk::scheduling_priority_band_t priority_band;                 //{ +0x0008    } | .priorityBand
        _m02 int32_t                               realtime_band_priority_level;  //{ +0x000c    } | .realtimeBandPriorityLevel
        _m03 int32_t                               in_process_priority;           //{ +0x0010    } | .inProcessPriority
        _m04 uint64_t                              quantum;                       //{ +0x0018    } | .quantum
        _m05 uint64_t                              grace_period_same_priority;    //{ +0x0020    } | .gracePeriodSamePriority
        _m06 uint64_t                              grace_period_lower_priority;   //{ +0x0028    } | .gracePeriodLowerPriority
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES.$", 0x0, false, 0x20e821d081546105 );                             
        SDK_FIXED_SIZE( setcontextschedulingproperties_t, 0x30 );                             
    };                                                                          
};
#include "magic/setcontextschedulingproperties_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setcontextschedulingproperties_t, 0x30 );
