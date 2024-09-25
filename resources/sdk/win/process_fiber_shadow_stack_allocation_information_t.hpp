#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_fiber_shadow_stack_allocation_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_fiber_shadow_stack_allocation_information_t
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t reserve_size;                             //{ +0x0000    +0x0000    +0x0000    } | .ReserveSize
        _m01 uint64_t commit_size;                              //{ +0x0008    +0x0008    +0x0008    } | .CommitSize
        _m02 uint32_t preferred_node;                           //{ +0x0010    +0x0010    +0x0010    } | .PreferredNode
        _m03 void*    ssp;                                      //{ +0x0018    +0x0018    +0x0018    } | .Ssp
                                                              
        SDK_MAGIC_PROPERTIES( "_PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION.$", 0x20, true, 0x5f66073315d441a9 );               
        SDK_FIXED_SIZE( process_fiber_shadow_stack_allocation_information_t, 0x20 );               
    };                                                        
};
#include "magic/process_fiber_shadow_stack_allocation_information_t.end.hpp"
SDK_VERIFY( struct win::process_fiber_shadow_stack_allocation_information_t, 0x20 );
