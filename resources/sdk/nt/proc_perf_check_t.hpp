#pragma once
#include <sdkgen/support_library.hpp>
#include "proc_perf_check_snap_t.hpp"

#include "magic/proc_perf_check_t.start.hpp"
namespace nt
{
    struct proc_perf_check_cycle_snap_t;

    // [struct _PROC_PERF_CHECK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_check_t                                                        
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                          
        _m00 uint64_t                                 last_active;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LastActive
        _m01 uint64_t                                 last_time;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastTime
        _m02 uint64_t                                 last_stall;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastStall
        _m03 sdk::array<uint8_t, 2>                   tagged_thread_percent;          //{ +0x00b8    +0x0148    +0x00e8    +0x0148    } | .TaggedThreadPercent
        _m04 uint8_t                                  class0_floor_perf_selection;    //{ +0x00ba    +0x014b    +0x00ee    +0x014b    } | .Class0FloorPerfSelection
        _m05 uint8_t                                  class1_minimum_perf_selection;  //{ +0x00bb    +0x014c    +0x00ef    +0x014c    } | .Class1MinimumPerfSelection
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                          
        _m06 uint32_t                                 last_responsiveness_events;     //{ +0x0018    +0x0018    +0x0018    } | .LastResponsivenessEvents
        _m07 struct nt::proc_perf_check_snap_t        last_perf_check_snap;           //{ +0x0020    +0x0020    +0x0020    } | .LastPerfCheckSnap
        _m08 struct nt::proc_perf_check_snap_t        current_snap;                   //{ +0x0080    +0x0060    +0x0080    } | .CurrentSnap
        _m09 struct nt::proc_perf_check_snap_t        last_delivered_snap;            //{ +0x00e0    +0x00a0    +0x00e0    } | .LastDeliveredSnap
        _m10 uint32_t                                 last_delivered_performance;     //{ +0x0140    +0x00e0    +0x0140    } | .LastDeliveredPerformance
        _m11 uint32_t                                 last_delivered_frequency;       //{ +0x0144    +0x00e4    +0x0144    } | .LastDeliveredFrequency
        _m12 uint32_t                                 current_responsiveness_events;  //{ +0x0150    +0x00f0    +0x0150    } | .CurrentResponsivenessEvents
                                                                                    
        // Windows 11                                                               
        //                                                                          
        _m13 struct nt::proc_perf_check_cycle_snap_t* last_perf_check_cycle_snap;     //{ +0x0058    } | .LastPerfCheckCycleSnap
        _m14 struct nt::proc_perf_check_cycle_snap_t* current_cycle_snap;             //{ +0x0098    } | .CurrentCycleSnap
        _m15 struct nt::proc_perf_check_cycle_snap_t* last_delivered_cycle_snap;      //{ +0x00d8    } | .LastDeliveredCycleSnap
        _m16 uint8_t                                  important_percent;              //{ +0x00ec    } | .ImportantPercent
        _m17 uint8_t                                  ideal_percent;                  //{ +0x00ed    } | .IdealPercent
        _m18 sdk::array<sdk::array<uint64_t, 48>, 3>  cycles_by_freq_band;            //{ +0x00f8    } | .CyclesByFreqBand
                                                                                    
        // Windows 10 v1607                                                         
        //                                                                          
        _m19 struct nt::proc_perf_check_snap_t        snap;                           //{ +0x0018    } | .Snap
        _m20 struct nt::proc_perf_check_snap_t        temp_snap;                      //{ +0x0068    } | .TempSnap
                                                                                    
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_CHECK.$", 0x158, true, 0x3841d529a57b0baf );                              
        SDK_DYNAMIC_SIZE( proc_perf_check_t );                                      
    };                                                                              
};
#include "magic/proc_perf_check_t.end.hpp"
