#pragma once
#include <sdkgen/support_library.hpp>
#include "kernel_stack_segment_t.hpp"

#include "magic/kstack_control_t.start.hpp"
namespace nt
{
    // [struct _KSTACK_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kstack_control_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 uint64_t                          stack_base;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StackBase
        _m01 uint64_t                          actual_limit;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActualLimit
        _m02 uint1_t                           stack_expansion;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .StackExpansion
        _m03 struct nt::kernel_stack_segment_t previous;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Previous
                                                               
        SDK_MAGIC_PROPERTIES( "_KSTACK_CONTROL.$", 0x30, true, 0x9928752737800763 );                
        SDK_DYNAMIC_SIZE( kstack_control_t );                  
    };                                                         
};
#include "magic/kstack_control_t.end.hpp"
