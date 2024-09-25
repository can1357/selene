#pragma once
#include <sdkgen/support_library.hpp>
#include "activation_context_stack_frame_t.hpp"

#include "magic/caller_allocated_activation_context_stack_frame_basic_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_BASIC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caller_allocated_activation_context_stack_frame_basic_t
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                       
        _m00 uint64_t                                     size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                                     format;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Format
        _m02 struct rtl::activation_context_stack_frame_t frame;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Frame
                                                                  
        SDK_MAGIC_PROPERTIES( "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_BASIC.$", 0x28, true, 0xe1fa32ac4519e61b );       
        SDK_FIXED_SIZE( caller_allocated_activation_context_stack_frame_basic_t, 0x28 );       
    };                                                            
};
#include "magic/caller_allocated_activation_context_stack_frame_basic_t.end.hpp"
SDK_VERIFY( struct rtl::caller_allocated_activation_context_stack_frame_basic_t, 0x28 );
