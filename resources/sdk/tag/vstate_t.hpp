#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser { struct hsemaphore_t; }

#include "magic/vstate_t.start.hpp"
namespace tag
{
    // [struct tagVSTATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vstate_t                                           
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 uint32_t                    fl;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fl
        _m01 int32_t                     b_system_stable;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bSystemStable
        _m02 uint32_t                    ul_random_seed;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulRandomSeed
        _m03 uint32_t                    ul_failure_mask;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ulFailureMask
        _m04 uint32_t                    ul_debug_level;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulDebugLevel
        _m05 struct kuser::hsemaphore_t* hsem_pool_tracker;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hsemPoolTracker
        _m06 nt::list_entry_t            le_pool_tracker_head;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lePoolTrackerHead
                                                              
        SDK_MAGIC_PROPERTIES( "tagVSTATE.$", 0x30, true, 0xd7f9e65234100410 );                     
        SDK_FIXED_SIZE( vstate_t, 0x30 );                     
    };                                                        
};
#include "magic/vstate_t.end.hpp"
SDK_VERIFY( struct tag::vstate_t, 0x30 );
