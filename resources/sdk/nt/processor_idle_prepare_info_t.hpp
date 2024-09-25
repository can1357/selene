#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_idle_constraints_t.hpp"

#include "magic/processor_idle_prepare_info_t.start.hpp"
namespace nt
{
    struct processor_idle_dependency_t;

    // [struct _PROCESSOR_IDLE_PREPARE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idle_prepare_info_t                                        
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                      
        _m00 void*                                   context;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context
        _m01 struct nt::processor_idle_constraints_t constraints;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Constraints
        _m02 uint32_t                                dependency_count;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DependencyCount
        _m03 uint32_t                                dependency_used;             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .DependencyUsed
        _m04 struct nt::processor_idle_dependency_t* dependency_array;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DependencyArray
        _m05 uint32_t                                platform_idle_state_index;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PlatformIdleStateIndex
        _m06 uint32_t                                processor_idle_state_index;  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ProcessorIdleStateIndex
        _m07 uint32_t                                idle_select_failure_mask;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .IdleSelectFailureMask
                                                                                
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_IDLE_PREPARE_INFO.$", 0x58, true, 0x59e81875ec49682d );                           
        SDK_FIXED_SIZE( processor_idle_prepare_info_t, 0x58 );                           
    };                                                                          
};
#include "magic/processor_idle_prepare_info_t.end.hpp"
SDK_VERIFY( struct nt::processor_idle_prepare_info_t, 0x58 );
