#pragma once
#include <sdkgen/support_library.hpp>
#include "veto_accounting_t.hpp"
#include "../nt/kaffinity_ex_t.hpp"
#include "coordinated_synchronization_t.hpp"

#include "magic/platform_state_t.start.hpp"
namespace ppm
{
    struct selection_dependency_t;

    // [struct _PPM_PLATFORM_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct platform_state_t                                            
    {                                                                  
        using synchronization_t = volatile union ppm::coordinated_synchronization_t;                      
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                             
        _m00 uint32_t                            latency;                //{ +0x0000    +0x0008    +0x0008    +0x0008    } | .Latency
        _m01 uint32_t                            break_even_duration;    //{ +0x0004    +0x000c    +0x000c    +0x000c    } | .BreakEvenDuration
        _m02 struct ppm::veto_accounting_t       veto_accounting;        //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .VetoAccounting
        _m03 uint8_t                             transition_debugger;    //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .TransitionDebugger
        _m04 uint8_t                             platform;               //{ +0x0031    +0x0039    +0x0039    +0x0039    } | .Platform
        _m05 uint32_t                            dependency_list_count;  //{ +0x0034    +0x003c    +0x003c    +0x003c    } | .DependencyListCount
        _m06 struct nt::kaffinity_ex_t           processors;             //{ +0x0038    +0x0040    +0x0040    +0x0040    } | .Processors
        _m07 nt::unicode_view                    name;                   //{ +0x00e0    +0x00e8    +0x0148    +0x00e8    } | .Name
        _m08 struct ppm::selection_dependency_t* dependency_lists;       //{ +0x00f0    +0x00f8    +0x0158    +0x00f8    } | .DependencyLists
        _m09 synchronization_t                   synchronization;        //{ +0x00f8    +0x0100    +0x0160    +0x0100    } | .Synchronization
        _m10 volatile uint64_t                   enter_time;             //{ +0x0100    +0x0108    +0x0168    +0x0108    } | .EnterTime
        _m11 volatile int32_t                    ref_count;              //{ +0x0140    +0x0140    +0x0180    +0x0140    } | .RefCount
        _m12 sdk::array<uint8_t, 64>             cache_align0;           //{ +0x0140    +0x0140    +0x0180    +0x0140    } | .CacheAlign0
                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                             
        _m13 uint64_t                            level_id;               //{ +0x0000    +0x0000    +0x0000    } | .LevelId
                                                                       
        SDK_MAGIC_PROPERTIES( "_PPM_PLATFORM_STATE.$", 0x180, true, 0xc29773fc065f76b9 );                      
        SDK_DYNAMIC_SIZE( platform_state_t );                          
    };                                                                 
};
#include "magic/platform_state_t.end.hpp"
