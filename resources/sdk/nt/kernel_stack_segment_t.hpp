#pragma once
#include <sdkgen/support_library.hpp>
#include "kernel_shadow_stack_limit_t.hpp"

#include "magic/kernel_stack_segment_t.start.hpp"
namespace nt
{
    // [struct _KERNEL_STACK_SEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kernel_stack_segment_t                                              
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                     
        _m00 uint64_t                              stack_base;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StackBase
        _m01 uint64_t                              stack_limit;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackLimit
        _m02 uint64_t                              kernel_stack;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KernelStack
        _m03 uint64_t                              initial_stack;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InitialStack
                                                                               
        // Windows 11                                                          
        //                                                                     
        _m04 uint64_t                              kernel_shadow_stack_base;     //{ +0x0020    } | .KernelShadowStackBase
        _m05 union nt::kernel_shadow_stack_limit_t kernel_shadow_stack_limit;    //{ +0x0028    } | .KernelShadowStackLimit
        _m06 uint64_t                              kernel_shadow_stack;          //{ +0x0030    } | .KernelShadowStack
        _m07 uint64_t                              kernel_shadow_stack_initial;  //{ +0x0038    } | .KernelShadowStackInitial
                                                                               
        SDK_MAGIC_PROPERTIES( "_KERNEL_STACK_SEGMENT.$", 0x20, true, 0xa46941a13a0d634 );                            
        SDK_DYNAMIC_SIZE( kernel_stack_segment_t );                            
    };                                                                         
};
#include "magic/kernel_stack_segment_t.end.hpp"
