#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_performance_data_t.start.hpp"
namespace nt
{
    // [struct _LOADER_PERFORMANCE_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_performance_data_t                
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint64_t start_time;                     //{ +0x0000    +0x0000    +0x0000    } | .StartTime
        _m01 uint64_t end_time;                       //{ +0x0008    +0x0008    +0x0008    } | .EndTime
        _m02 uint64_t preload_end_time;               //{ +0x0010    +0x0010    +0x0010    } | .PreloadEndTime
        _m03 uint64_t tcb_loader_start_time;          //{ +0x0018    +0x0018    +0x0018    } | .TcbLoaderStartTime
        _m04 uint64_t load_hypervisor_time;           //{ +0x0020    +0x0020    +0x0020    } | .LoadHypervisorTime
        _m05 uint64_t launch_hypervisor_time;         //{ +0x0028    +0x0028    +0x0028    } | .LaunchHypervisorTime
        _m06 uint64_t load_vsm_time;                  //{ +0x0030    +0x0030    +0x0030    } | .LoadVsmTime
        _m07 uint64_t launch_vsm_time;                //{ +0x0038    +0x0038    +0x0038    } | .LaunchVsmTime
        _m08 uint64_t execute_transition_start_time;  //{ +0x0040    +0x0040    +0x0040    } | .ExecuteTransitionStartTime
        _m09 uint64_t execute_transition_end_time;    //{ +0x0048    +0x0048    +0x0048    } | .ExecuteTransitionEndTime
        _m10 uint64_t load_drivers_time;              //{ +0x0050    +0x0050    +0x0050    } | .LoadDriversTime
        _m11 uint64_t cleanup_vsm_time;               //{ +0x0058    +0x0058    +0x0058    } | .CleanupVsmTime
                                                    
        SDK_MAGIC_PROPERTIES( "_LOADER_PERFORMANCE_DATA.$", 0x60, true, 0xff8773b49dd7c645 );                              
        SDK_FIXED_SIZE( loader_performance_data_t, 0x60 );                              
    };                                              
};
#include "magic/loader_performance_data_t.end.hpp"
SDK_VERIFY( struct nt::loader_performance_data_t, 0x60 );
