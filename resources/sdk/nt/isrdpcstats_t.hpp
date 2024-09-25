#pragma once
#include <sdkgen/support_library.hpp>
#include "isrdpcstats_sequence_t.hpp"

#include "magic/isrdpcstats_t.start.hpp"
namespace nt
{
    // [struct _ISRDPCSTATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct isrdpcstats_t                                      
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 uint64_t                          isr_time;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IsrTime
        _m01 uint64_t                          isr_time_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IsrTimeStart
        _m02 uint64_t                          isr_count;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IsrCount
        _m03 uint64_t                          dpc_time;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DpcTime
        _m04 uint64_t                          dpc_time_start;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DpcTimeStart
        _m05 uint64_t                          dpc_count;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DpcCount
        _m06 uint8_t                           isr_active;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IsrActive
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m07 struct nt::isrdpcstats_sequence_t dpc_watchdog;    //{ +0x0038    +0x0038    +0x0038    } | .DpcWatchdog
                                                              
        SDK_MAGIC_PROPERTIES( "_ISRDPCSTATS.$", 0x60, true, 0x3f87ac04ad70d609 );               
        SDK_DYNAMIC_SIZE( isrdpcstats_t );                    
    };                                                        
};
#include "magic/isrdpcstats_t.end.hpp"
