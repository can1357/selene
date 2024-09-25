#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct activation_context_t; }

#include "magic/activation_context_stack_frame_t.start.hpp"
namespace rtl
{
    struct activation_context_stack_frame_t;

    // [struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_stack_frame_t                                   
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                    
        _m00 struct rtl::activation_context_stack_frame_t* previous;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Previous
        _m01 struct nt::activation_context_t*              activation_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActivationContext
        _m02 uint32_t                                      flags;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                                              
        SDK_MAGIC_PROPERTIES( "_RTL_ACTIVATION_CONTEXT_STACK_FRAME.$", 0x18, true, 0xb285a9792dd1509b );                   
        SDK_DYNAMIC_SIZE( activation_context_stack_frame_t );                   
    };                                                                        
};
#include "magic/activation_context_stack_frame_t.end.hpp"
