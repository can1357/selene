#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_free_fiber_shadow_stack_allocation_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_FREE_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_free_fiber_shadow_stack_allocation_information_t
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //             
        _m00 void* ssp;                                              //{ +0x0000    +0x0000    +0x0000    } | .Ssp
                                                                   
        SDK_MAGIC_PROPERTIES( "_PROCESS_FREE_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION.$", 0x8, true, 0xc6c68df722a9c1a7 );    
        SDK_FIXED_SIZE( process_free_fiber_shadow_stack_allocation_information_t, 0x8 );    
    };                                                             
};
#include "magic/process_free_fiber_shadow_stack_allocation_information_t.end.hpp"
SDK_VERIFY( struct win::process_free_fiber_shadow_stack_allocation_information_t, 0x8 );
